
#include <stdint.h>
#include <stdio.h>
#include <xc.h>
#include <sys/attribs.h>

#include "../../Sources/config_bits.h"
#include "../../Sources/timer2.h"
#include "../../Sources/timer3.h"
#include "../../Sources/uart.h"
#include "../../Sources/delay.h"
#include "../../Sources/interrupts.h"
#include "../../Sources/stack.h"


/*
 * Definições
 */
#define SYSCLK			80000000		// Frequência do System Clock em Hz
#define PBCLK			SYSCLK/2		// Frequência do Peripheral Bus Clock em Hz
#define PWM_STEPS		256				// Resolução do sinal PWM em steps
#define Fa				10				// Frequência de amostragem em Hz
#define h				1/Fa			// Período de amostragem em segundos
#define K				3				// Constante de proporcionalidade do controlador PI
#define Ti				1				// Constante do integral do controlador PI
										// Para Fa=10, 1<Ti<3		Para Fa=20, 0.16<Ti<0.5
/*
 * Parâmetros experimentados:
 *		Fa=10, K=3, Ti=1: a resposta é um pouco lenta, oscila ligeiramente até estabilizar e tem overshoot
 *		Fa=20, K=3, Ti=1: a resposta é mais lenta e não tem overshoot
 */


/*
 * Variáveis globais
 */
volatile uint8_t prev_encoder_A = 0;			// Estado anterior do canal A do encoder
volatile uint8_t prev_encoder_B = 0;			// Estado anterior do canal B do encoder
volatile uint8_t curr_encoder_A = 0;			// Estado atual do canal A do encoder
volatile uint8_t curr_encoder_B = 0;			// Estado atual do canal B do encoder
volatile int8_t sentido = 1;					// Sentido de rotação do veio motor
volatile int16_t encoder_counter = 0;			// Contador do encoder
volatile int16_t encoder_counter_first = 0;		// Valor inicial do contador do encoder para medir a velocidade
volatile int16_t encoder_counter_last = 0;		// Valor final do contador do encoder para medir a velocidade
volatile int16_t velocidade = 0;				// Velocidade de rotação do veio do motor em RPM
volatile uint8_t timer_flag = 0;				// Flag para indicar quando ocorre uma leitura da velocidade
volatile int32_t graus = 0;						// Posição do veio do motor em 10^-2 graus
volatile int8_t setpoint = 0;					// Setpoint para controlar a velocidade de rotação do veio do motor em RPM
volatile uint8_t full_stack = 0;				// Flag para indicar quando a stack de receção da UART está pronta a ser analisada


/*
 * Protótipos das funções
 */
void system_init();
void control_motor(int16_t velocidade_rpm);
void print_UI(void);
void __ISR(_CHANGE_NOTICE_VECTOR) CNISR(void);
void __ISR(_TIMER_2_VECTOR) T2ISR(void);
void __ISR(_UART_1_VECTOR) UART1ISR(void);


/*
 * Main
 */
int main(int argc, char** argv) {
	
	int8_t y = 0;					// Sinal de saída
	int8_t r = 0;					// Sinal de referência
	int16_t e = 0;					// Sinal de erro
	int16_t e_prev = 0;				// Sinal de erro no instante de amostragem anterior
	float u = 0;					// Sinal de controlo
	float u_prev = 0;				// Sinal de controlo no instante de amostragem anterior
	float s0 = K + 10*K*h/Ti *0.1;	// Constante s0
	float s1 = -K;					// Constante s1
	
	uint8_t display_str[45];
	
	system_init();
    
	control_motor(0);
	
	
	while(1) {

		
		if(timer_flag == 1) {		// Ocorre a uma frequência fixa Fa imposta pelo timer 2
			timer_flag = 0;
			
			y = velocidade;
			r = setpoint;
			e = r - y;							// Cálculo do sinal de erro
			u = u_prev + s0*e + s1*e_prev;		// Cálculo do sinal de controlo
			e_prev = e;
			u_prev = u;
			
			// Saturação do sinal de controlo
			if(u > 127) {
				u = 127;
			}
			else if(u < -127) {
				u = -127;
			}
			
			control_motor(u);
			
			//sprintf(display_str, "\nRPM:%d  Set:%d  E:%d  U:%6.2f", y, r, e, u);
			sprintf(display_str, "\nSetpoint:%3d   Vel:%3d RPM   Pos:%3u%c", r, y, abs(graus)/100, 0xB0);
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
	TRISDbits.TRISD12 = 0;				// Pino RD12 configurado como saída. Este pino é usado como enable da ponte H e é o pino 8 da placa chipKit MAX32
	LATDbits.LATD12 = 1;				// Ativar a ponte H
    TRISDbits.TRISD1 = 0;				// Pino RD1 configurado como saída. Este pino corresponde ao OC2 e ao pino 5 da placa chipKit MAX32
    TRISDbits.TRISD2 = 0;				// Pino RD2 configurado como saída. Este pino corresponde ao OC3 e ao pino 6 da placa chipKit MAX32
	AD1PCFGbits.PCFG0 = 1;				// Pino A0 como digital
	AD1PCFGbits.PCFG1 = 1;				// Pino A1 como digital
	TRISBbits.TRISB0 = 1;				// Pino RC14 configurado como entrada. Este pino corresponde ao CN2 e ao pino A0 da placa chipKit MAX32
	TRISBbits.TRISB1 = 1;				// Pino RC13 configurado como entrada. Este pino corresponde ao CN3 e ao pino A1 da placa chipKit MAX32
    uart1_config(9600, 8, 0, 1);		// Configuração da UART1 com baudrate 9600, 8 data bits, sem paridade e 1 stop bit
	uart1_puts("Init\n\n");
    timer3_config_pwm(20000, 0, 2);		// Configuração do Timer3 para gerar um sinal PWM com freq = 20kHz no pino OC2
	timer2_config_int(Fa);				// Configuração do Timer2 para gerar uma interrupção com freq = Fa
	
	// Configuração manual do timer3
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
	
	CNCONbits.ON = 1;					// Ativar o módulo Change Notification
	CNENbits.CNEN2 = 1;					// Ativar o módulo change notification no pino CN2
	//CNENbits.CNEN3 = 1;				// Ativar o módulo change notification no pino CN3
	uint16_t trash = PORTB;				// Leitura do PORTB para garantir que as mudanças nos pinos CN2 e CN3 serão notadas
	IPC6bits.CNIP = 3;					// Prioridade das interrupções do módulo change notification
	IFS1bits.CNIF = 0;					// Limpar a flag de interrupção do módulo change notification
	IEC1bits.CNIE = 1;					// Ativar o módulo change notification
	
	initStack();						// Inicializar a stack para armazenar os caracteres recebidos na UART
	
	EnableInterrupts();					// Ativar as interrupções globais
	EnableMultivector();				// Ativar as interrupções multivector
}


/*
 * 
 * Função para gerar sinais pwm
 */
void control_motor(int16_t step_rpm){
		timer3_set_pwm((PWM_STEPS/2)+step_rpm, 2);
}


/*
 * Rotina de serviço à interrupção do módulo Change Notification
 */
void __ISR(_CHANGE_NOTICE_VECTOR) CNISR(void) {
	IFS1bits.CNIF = 0;
	curr_encoder_A = PORTBbits.RB0;
	curr_encoder_B = PORTBbits.RB1;
	if(curr_encoder_A == 1 && prev_encoder_A == 0) {		// transição ascendente de A
		if(curr_encoder_B == 0) {							// direção 1
			sentido = 1;
			encoder_counter++;
			graus += 43;
		}
		else if(curr_encoder_B == 1) {						// direção -1
			sentido = -1;
			encoder_counter--;
			graus -= 43;
		}
	}
	else if(curr_encoder_A == 0 && prev_encoder_A == 1) {	// transição descendente de A
		if(curr_encoder_B == 1) {							// direção 1
			sentido = 1;
			encoder_counter++;
			graus += 43;
		}
		else if(curr_encoder_B == 0) {						// direção -1
			sentido = -1;
			encoder_counter--;
			graus -= 43;
		}
	}
	if(abs(graus) > 36000) {
		graus = 0;
	}
	prev_encoder_A = curr_encoder_A;
	prev_encoder_B = curr_encoder_B;
}


/*
 * Rotina de serviço à interrupção do timer 2
 * A velocidade é calculada com frequência igual a Fa.
 */
void __ISR(_TIMER_2_VECTOR) T2ISR(void) {
	IFS0bits.T2IF = 0;
	encoder_counter_last = encoder_counter;			// Armazenar o valor atual do contador
	int16_t pulsos = encoder_counter_last - encoder_counter_first;		// Número de pulsos detetados em 100ms
	velocidade = (pulsos*60*Fa) / (840);					// Cálculo da velocidade em RPM's
	encoder_counter_first = encoder_counter;		// Armazenar o valor atual do contador para mais tarde utilizar
	timer_flag = 1;
}


/*
 * Função para imprimir a interface gráfica no terminal e para calcular o setpoint introduzido pelo utilizador
 */
void print_UI(void){
    uint8_t dig1 = 0;		// Primeiro dígito retirado da stack
    uint8_t dig2 = 0;		// Segundo dígito retirado da stack
    uint8_t dig3 = 0;		// Terceiro dígito retirado da stack
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
                    if(isStackEmpty() == Empty){
                        result = (dig2 - 0x30)*10 + (dig1 - 0x30);    
                    }
					else if(isStackEmpty() == NotEmpty){	// Se tiver mais caracteres disponíveis
                        dig3 = popFromStack();
                        if(dig3==0x2D){				// Se for um hífen, o número é negativo
                            result = -((dig2 - 0x30)*10 + (dig1 - 0x30));
                        }
						else {
                            error = 1;
						}
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
	else if(result>=10 && result<=50){
        setpoint = result;
    }
	else if(result<=-10 && result>=-50){
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
		if((rcvchar>=0x30 && rcvchar<=0x39) || rcvchar == 0x2D) {		// Se foi recebido um algarismo ou um hífen
			pushOntoStack(rcvchar);                 // Colocar o caracter na stack
		}
        if(isStackEmpty() == Full || rcvchar == 0x0D) {		// Se a stack estiver cheia ou se receber o caracter 'Enter'
            full_stack = 1;						// A stack está pronta a ser processada
        }
        IFS0bits.U1RXIF = 0;                    // reset UART1 RX interrupt flag
    }
}

