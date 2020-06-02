
#include <stdint.h>
#include <stdio.h>
#include <xc.h>
#include <sys/attribs.h>

#include "../../Sources/config_bits.h"
#include "../../Sources/adc.h"
#include "../../Sources/timer2.h"
#include "../../Sources/timer3.h"
#include "../../Sources/uart.h"
#include "../../Sources/interrupts.h"
#include "../../Sources/stack.h"


/*
 * Definições
 */
#define SYSCLK					80000000				// Frequência do System Clock em Hz
#define PBCLK					SYSCLK/2				// Frequência do Peripheral Bus Clock em Hz
#define PWM_STEPS				256						// Resolução do sinal PWM em steps
#define INTERFACE_PERIOD_MS		100						// Período da interface gráfica
#define CONTROL_PERIOD_MS		1000					// Período de controlo em ms
#define TIMER_FREQ_HZ			10						// Frequência do timer em Hz
#define h						CONTROL_PERIOD_MS/1000	// Período de amostragem em segundos
#define K						3						// Constante de proporcionalidade do controlador PI
#define Ti						1						// Constante do integral do controlador PI



/*
 * Variáveis globais
 */
//volatile uint8_t timer_flag = 0;				// Flag para indicar quando ocorre uma leitura da velocidade
volatile uint8_t setpoint = 0;					// Setpoint para controlar a temperatura
volatile uint8_t full_stack = 0;				// Flag para indicar quando a stack de receção da UART está pronta a ser analisada
volatile uint32_t counter_ui = 0;
volatile uint32_t counter_control = 0;


/*
 * Protótipos das funções
 */
void system_init();
void print_UI(void);
uint16_t pt100_resistance(uint16_t adc_val);
uint8_t pt100_temperature(uint16_t adc_val);
void __ISR(_TIMER_2_VECTOR) T2ISR(void);
void __ISR(_UART_1_VECTOR) UART1ISR(void);


/*
 * Main
 */
int main(int argc, char** argv) {
	
	uint8_t temperature = 0;		// Temperatura atual
	uint8_t peak_temperature = 0;	// Temperatura máxima
	
	int8_t y = 0;					// Sinal de saída
	int8_t r = 0;					// Sinal de referência
	int16_t e = 0;					// Sinal de erro
	int16_t e_prev = 0;				// Sinal de erro no instante de amostragem anterior
	float u = 0;					// Sinal de controlo
	float u_prev = 0;				// Sinal de controlo no instante de amostragem anterior
	float s0 = K + 10*K*h/Ti *0.1;	// Constante s0
	float s1 = -K;					// Constante s1
	
	uint8_t display_str[45];		// String para apresentar os dados no terminal
	
	system_init();

	
	
	while(1) {

		
		if(counter_control == (TIMER_FREQ_HZ*CONTROL_PERIOD_MS)/1000) {		// Ocorre a uma frequência fixa imposta por CONTROL_PERIOD_MS
			counter_control = 0;
			
			// Amostragem
			adc_start();
			uint16_t adc_val = adc_read();
			adc_val = 1024 - adc_val;
			temperature = pt100_temperature(adc_val);
			if(temperature > peak_temperature) {
				peak_temperature = temperature;
			}
			
			// Controlo
			y = temperature;
			r = setpoint;
			e = r - y;							// Cálculo do sinal de erro
			u = u_prev + s0*e + s1*e_prev;		// Cálculo do sinal de controlo
			e_prev = e;
			u_prev = u;
			
			// Saturação do sinal de controlo
			if(u > (PWM_STEPS-1)) {
				u = (PWM_STEPS-1);
			}
			else if(u < 0) {
				u = 0;
			}
			
			// Atuação
			timer3_set_pwm(u, 2);
			
		}
		
		if(counter_ui == (TIMER_FREQ_HZ*INTERFACE_PERIOD_MS)/1000) {		// Ocorre a uma frequência fixa imposta por INTERFACE_PERIOD_MS
			counter_ui = 0;
			
			//sprintf(display_str, "\nY:%d  R:%d  E:%d  U:%6.2f", y, r, e, u);
			sprintf(display_str, "\nSetpoint:%2u   Temp:%2u%cC   Max:%2u%cC", r, y, 0xB0, peak_temperature, 0xB0);
			uart1_puts(display_str);
		}
		
		if(full_stack == 1) {
			print_UI();
		}

	}
	
	
	return (EXIT_SUCCESS);
}


/*
 * Função para inicializar o sistema
 */
void system_init() {
	DisableInterrupts();				// Desativar as interrupções globais
    TRISDbits.TRISD1 = 0;				// Pino RD1 configurado como saída. Este pino corresponde ao OC2 e ao pino 5 da placa chipKit MAX32
	adc_config(0, 4);					// Configuração da ADC para amostrar no pino A0 com 4 amostras
    uart1_config(9600, 8, 0, 1);		// Configuração da UART1 com baudrate 9600, 8 data bits, sem paridade e 1 stop bit
	uart1_puts("Init\n\n");
    timer3_config_pwm(20000, 0, 2);		// Configuração do Timer3 para gerar um sinal PWM com freq = 20kHz no pino OC2
	timer2_config_int(TIMER_FREQ_HZ);	// Configuração do Timer2 para gerar uma interrupção com freq = Fa
	
	// Configuração manual da frequência do timer3, há um bug na função timer3_config_pwm
	T3CONbits.TCKPS = 0;
	PR3 = 1999;
	TMR3 = 0;
	OC2CONbits.OCM = 6;
	OC2CONbits.OCTSEL = 1;
	T3CONbits.ON = 1;
    
    // Configuração das interrupções da UART1
	U1STAbits.URXISEL = 0;				// Gerar interrupção quando o FIFO de receção tem pelo menos um novo carater para ser lido
    IEC0bits.U1RXIE = 1;				// Enable das interrupções de receção
    IPC6bits.U1IP = 1;					// Prioridade das interrupções
	
	initStack();						// Inicializar a stack para armazenar os caracteres recebidos na UART
	
	EnableInterrupts();					// Ativar as interrupções globais
	EnableMultivector();				// Ativar as interrupções multivector
}


/*
 * Função para calcular a resistência da PT100.
 * Recebe como parâmetro de entrada o valor lido pela ADC.
 * Devolve a resistência da PT100 multiplicada por 100.
 */
uint16_t pt100_resistance(uint16_t adc_val) {
	int32_t res = -(124*adc_val)/100 + 12769;
	return res;
}


/*
 * Função para calcular a temperatura.
 * Recebe como parâmetro de entrada o valor lido pela ADC.
 */
uint8_t pt100_temperature(uint16_t adc_val) {
	uint16_t R100 = pt100_resistance(adc_val);
	int32_t temp = (26*R100)/1000 - 260;
	return temp;
}


/*
 * Rotina de serviço à interrupção do timer 2
 * A velocidade é calculada com frequência igual a Fa.
 */
void __ISR(_TIMER_2_VECTOR) T2ISR(void) {
	IFS0bits.T2IF = 0;
	counter_ui++;
	counter_control++;
}


/*
 * Função para imprimir a interface gráfica no terminal e para calcular o setpoint introduzido pelo utilizador
 */
void print_UI(void){
    uint8_t dig1 = 0;		// Primeiro dígito retirado da stack
    uint8_t dig2 = 0;		// Segundo dígito retirado da stack
    int8_t result = -1;		// Setpoint calculado
	uint8_t error = 0;		// Flag para indicar se ocorreu um erro
	
	if(isStackEmpty() == NotEmpty) {		// Se a stack tiver algum caracter disponível
		dig1 = popFromStack();
		if(dig1>=0x30 && dig1<=0x39){	// Se o primeiro caracter for um algarismo
			if(isStackEmpty() == Empty && dig1==0x30) {		// Apenas foi inserido '0'
				result = dig1 - 0x30;
            }
			else if(isStackEmpty() == NotEmpty){    // Se tiver mais caracteres disponíveis
                dig2 = popFromStack();
                if(dig2>=0x30 && dig2<=0x39){		// Se o segundo caracter for um algarismo
                    if(isStackEmpty() == Empty){	// Se não tiver mais nenhum caracter disponível
                        result = (dig2 - 0x30)*10 + (dig1 - 0x30);    
                    }
					else {
						error = 1;
					}
                }
				else{
                    error = 1;
                }
            }
        }
		else {
            error = 1;
		}
    }
	else {
		error = 1;
	}
    
    if(result == 0){
        setpoint = 0;
    }
	else if(result>=40 && result<=70){
        setpoint = result;
    }
	else{
        error = 1;
    }
	
	if(error == 1) {
		uart1_puts("\nError");
	}
	
	// Esvaziar a stack
	while(isStackEmpty() != Empty) {
		uint8_t dummy = popFromStack();
	}
	
	full_stack = 0;
}


/*
 * Rotina de serviço à interrupção da UART1
 */
void __ISR(_UART_1_VECTOR) UART1ISR(void) {
    if(IFS0bits.U1RXIF==1 && full_stack==0) {	// Quando é recebido um novo caracter, se a stack ainda não estiver pronta a processar, acrescentar o caracter à stack
        uint8_t rcvchar = U1RXREG;				// Caracter recebido
		if(rcvchar>=0x30 && rcvchar<=0x39) {		// Se foi recebido um algarismo
			pushOntoStack(rcvchar);                 // Colocar o caracter na stack
		}
        if(isStackEmpty() == Full || rcvchar == 0x0D) {		// Se a stack estiver cheia ou se receber o caracter 'Enter'
            full_stack = 1;						// A stack está pronta a ser processada
        }
        IFS0bits.U1RXIF = 0;                    // reset UART1 RX interrupt flag
    }
}

