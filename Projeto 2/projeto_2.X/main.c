
#include <stdint.h>
#include <stdio.h>
#include <xc.h>
#include <sys/attribs.h>

#include "../../Sources/config_bits.h"
#include "../../Sources/timer2.h"
#include "../../Sources/timer3.h"
#include "../../Sources/adc.h"
#include "../../Sources/uart.h"
#include "../../Sources/delay.h"
#include "../../Sources/interrupts.h"
#include "../../Sources/stack.h"


/*
 * Definições
 */
#define SYSCLK			80000000
#define PBCLK			SYSCLK/2
#define PWM_STEPS		256


/*
 * Variáveis globais
 */
volatile uint8_t prev_encoder_A = 0;
volatile uint8_t prev_encoder_B = 0;
volatile uint8_t curr_encoder_A = 0;
volatile uint8_t curr_encoder_B = 0;
volatile int8_t direcao = 1;
volatile int16_t encoder_counter = 0;
volatile int16_t encoder_counter_first = 0;
volatile int16_t encoder_counter_last = 0;
volatile int8_t velocidade = 0;		// RPM
volatile uint8_t timer_flag = 0;
volatile uint16_t graus = 0;            // angulo
volatile int setpoint = 0;              // setpoint
volatile char fullstack = 0;


/*
 * Protótipos das funções
 */
void system_init();
void control_motor(int16_t step_rpm);         // function to send pwm signal to half H-bridge input -> step_rpm [-127,127]
void print_UI(uint8_t velocidade_rpm,uint16_t grau_resolution);
void __ISR(_CHANGE_NOTICE_VECTOR) CNISR(void);
void __ISR(_TIMER_2_VECTOR) T2ISR(void);
void __ISR(_UART_1_VECTOR) UART1ISR(void);


/*
 * Main
 */
int main(int argc, char** argv) {
	
	uint8_t vel_str[4];
	
	system_init();
    
    initStack();
	
	control_motor(0);
	
	
	while(1) {

		
		if(timer_flag == 1) {		// Ocorre a uma frequência fixa imposta pelo timer 2
			timer_flag = 0;
			
		}
		
		int16_t i;
		for(i=-128; i<128; i++) {
			control_motor(i);
			delay_ms(10);
		}
		for(i=127; i>-129; i--) {
			control_motor(i);
			delay_ms(10);
		}
		
		
		//sprintf(vel_str, "%d\n", velocidade);
		//uart1_puts(vel_str);
        
        print_UI(velocidade,graus);
        

	}
	
	
	return (EXIT_SUCCESS);
}


/*
 * Função para inicializar o sistema
 */
void system_init() {
	DisableInterrupts();				// Desativar as interrupções globais
	TRISDbits.TRISD12 = 0;				// Pino RD12 configurado como saída. Este pino é usado como enable da ponte H e é o pino 8 da placa chipKit MAX32 
    TRISDbits.TRISD1 = 0;				// Pino RD1 configurado como saída. Este pino corresponde ao OC2 e ao pino 5 da placa chipKit MAX32
    TRISDbits.TRISD2 = 0;				// Pino RD2 configurado como saída. Este pino corresponde ao OC3 e ao pino 6 da placa chipKit MAX32
	AD1PCFGbits.PCFG0 = 1;				// Pino A0 como digital
	AD1PCFGbits.PCFG1 = 1;				// Pino A1 como digital
	TRISBbits.TRISB0 = 1;				// Pino RC14 configurado como entrada. Este pino corresponde ao CN2 e ao pino A0 da placa chipKit MAX32
	TRISBbits.TRISB1 = 1;				// Pino RC13 configurado como entrada. Este pino corresponde ao CN3 e ao pino A1 da placa chipKit MAX32
    uart1_config(9600, 8, 0, 1);		// Configuração da UART1 com baudrate 9600, 8 data bits, sem paridade e 1 stop bit
	uart1_puts("Init\n\n");
    timer3_config_pwm(20000, 0, 2);		// Configuração do Timer3 para gerar um sinal PWM com freq = 20kHz no pino OC2
	timer2_config_int(10);				// Configuração do Timer2 para gerar uma interrupção com freq = 10Hz
	
	// Configuração manual do timer3
	T3CONbits.TCKPS = 0;
	PR3 = 1999;
	TMR3 = 0;
	OC2CONbits.OCM = 6;
	OC2CONbits.OCTSEL = 1;
	T3CONbits.ON = 1;
    
    // configurar interrupções para a UART1
    IEC0bits.U1TXIE = 1;
    IEC0bits.U1RXIE = 1;
    IPC6bits.U1IP = 0x2;
    IEC0bits.U1EIE = 1;
    
	
	CNCONbits.ON = 1;					// Ativar o módulo Change Notification
	CNENbits.CNEN2 = 1;					// Ativar o módulo change notification no pino CN2
	//CNENbits.CNEN3 = 1;				// Ativar o módulo change notification no pino CN3
	uint16_t trash = PORTB;				// Leitura do PORTB para garantir que as mudanças nos pinos CN2 e CN3 serão notadas
	IPC6bits.CNIP = 3;					// Prioridade das interrupções do módulo change notification
	IFS1bits.CNIF = 0;					// Limpar a flag de interrupção do módulo change notification
	IEC1bits.CNIE = 1;					// Ativar o módulo change notification
	EnableInterrupts();					// Ativar as interrupções globais
	EnableMultivector();				// Ativar as interrupções multivector
	
}


/*
 * 
 * Função para gerar sinais pwm
 */
void control_motor(int16_t step_rpm){
		timer3_set_pwm(128+step_rpm, 2);
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
			direcao = 1;
			encoder_counter++;
		}
		else if(curr_encoder_B == 1) {						// direção -1
			direcao = -1;
			encoder_counter--;
		}
	}
	else if(curr_encoder_A == 0 && prev_encoder_A == 1) {	// transição descendente de A
		if(curr_encoder_B == 1) {							// direção 1
			direcao = 1;
			encoder_counter++;
		}
		else if(curr_encoder_B == 0) {						// direção -1
			direcao = -1;
			encoder_counter--;
		}
	}
	prev_encoder_A = curr_encoder_A;
	prev_encoder_B = curr_encoder_B;
}


/*
 * Rotina de serviço à interrupção do timer 2
 * A velocidade é calculada com uma frequência de 10Hz.
 */
void __ISR(_TIMER_2_VECTOR) T2ISR(void) {
	IFS0bits.T2IF = 0;
	encoder_counter_last = encoder_counter;			// Armazenar o valor atual do contador
	int16_t pulsos = encoder_counter_last - encoder_counter_first;		// Número de pulsos detetados em 100ms
	velocidade = pulsos * 60 / 84;					// Cálculo da velocidade em RPM's
	encoder_counter_first = encoder_counter;		// Armazenar o valor atual do contador para mais tarde utilizar
	timer_flag = 1;
}


/*
 * Função para imprimir a interface gráfica no terminal
 */
void print_UI(uint8_t velocidade_rpm,uint16_t grau_resolution){
    char vel_str[4];
    char grau_str[4];
    int dig1;
    int dig2;
    int dig3;
    int result;
    
    uart1_putc('\n');
    
    // Imprimir velocidade angular em rpm
    uart1_puts("Velocidade em rpm: ");
    if(velocidade_rpm >= 10 && velocidade_rpm <= 50){
        sprintf(vel_str, "%u\n", velocidade_rpm);
        uart1_puts(vel_str);
    }else{
        uart1_putc('E');
    }
    
    // Imprimir posição angular em graus
    uart1_puts("Posição angular em graus: ");
    sprintf(grau_str, "%u\n", grau_resolution);
    uart1_puts(grau_str);
    
    // dar pop da stack
    if(isStackEmpty() == NotEmpty){
        dig1 = popFromStack();
        
        if(dig1==0x0D)
            dig1 = popFromStack();                // ignorar enter
        
        // se o seguinte for numero
        if(dig1>=0x30 && dig1<=0x39){
            if(isStackEmpty() == Empty && dig1==0x30){             // apenas o zero
                result = dig1 - 0x30;
            }else if(isStackEmpty() == NotEmpty){    // numero negativo, ou dois numeros
                dig2 = popFromStack();
                if(dig2>=0x30 && dig2<=0x39){
                    if(isStackEmpty() == Empty){
                        result = (dig2 - 0x30)*10 + (dig1 - 0x30);    
                    }else if(isStackEmpty() == NotEmpty){
                        dig3 = popFromStack();
                        if(dig3==0x2D){
                            result = -((dig2 - 0x30)*10 + (dig1 - 0x30));//numero negativo com dois digitos
                        }else
                            uart1_puts("Setpoint invalido");
                    }     
                }else{
                    uart1_puts("Setpoint invalido");
                }
            }  
        }else
            uart1_puts("Setpoint invalido");
    }
    
    if(result==0){
        setpoint = 0;
    }else if(result>=10 && result<=50){
        setpoint = result;
    }else if(result<=-10 && result>=-50){
        setpoint = result;
    }else{
        uart1_puts("Setpoint invalido");
    }
    
}

/*
 * Rotina de serviço à interrupção para a UART1
 */
void __ISR(_UART_1_VECTOR) UART1ISR(void) {
    if(IFS0bits.U1RXIF==1 && fullstack==0){
        int rcvchar = U1RXREG;
        pushOntoStack(rcvchar);                 // push do carater lido para a stack
        if(isStackEmpty() == Full || rcvchar == 0x0D){
            fullstack = 1;
        }
        IFS0bits.U1RXIF = 0;                    // reset UART1 RX interrupt flag
    }
}

