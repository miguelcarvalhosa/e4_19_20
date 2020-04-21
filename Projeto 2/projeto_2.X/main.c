
#include <stdint.h>
#include <xc.h>

#include "../../Sources/config_bits.h"
#include "../../Sources/timer2.h"
#include "../../Sources/timer3.h"
#include "../../Sources/adc.h"
#include "../../Sources/uart.h"
#include "../../Sources/delay.h"


/*
 * Definições
 */
#define SYSCLK			80000000
#define PBCLK			SYSCLK/2
#define PWM_STEPS		256


/*
 * Protótipos das funções
 */
void control_motor(int step_rpm);         // function to send pwm signal to half H-bridge input -> step_rpm [-127,127]


/*
 * Main
 */
int main(int argc, char** argv) {
   
    TRISDbits.TRISD12 = 0;				// Pino RD12 configurado como saída. Este pino é usado como enable da ponte H e é o pino 8 da placa chipKit MAX32 
    
    TRISDbits.TRISD1 = 0;				// Pino RD1 configurado como saída. Este pino corresponde ao OC2 e ao pino 5 da placa chipKit MAX32
    
    TRISDbits.TRISD2 = 0;				// Pino RD2 configurado como saída. Este pino corresponde ao OC3 e ao pino 6 da placa chipKit MAX32
	
    uart1_config(9600, 8, 0, 1);		// Configuração da UART1 com baudrate 9600, 8 data bits, sem paridade e 1 stop bit
	uart1_puts("Init\n\n");
	
    timer3_config_pwm(20000, 0, 2);		// Configuração do Timer3 para gerar um sinal PWM com freq = 20kHz no pino OC2
    timer3_config_pwm(20000, 0, 3);		// Configuração do Timer3 para gerar um sinal PWM com freq = 20kHz no pino OC3
    
    // Teste
	//int i=-127;
	//for(i; i<127; i++) {
	//	control_motor(i);
	//	delay_ms(20);
	//}
    
	while(1) {
		control_motor(0);
	}
	
	return (EXIT_SUCCESS);
}

/*
 * 
 */
void control_motor(int step_rpm){
    
    if(step_rpm>0){
        int duty = (step_rpm*(PWM_STEPS-1)/127);            //convert rpm to steps and rotate right
        timer3_set_pwm(128+duty,2);
        timer3_set_pwm(128-duty,3);
    }else if(step_rpm<0){
        int duty = -(step_rpm*(PWM_STEPS-1)/127);           //convert rpm to steps and rotate left
        timer3_set_pwm(128-duty,2);
        timer3_set_pwm(128+duty,3); 
    }else{
        int duty = (step_rpm*(PWM_STEPS-1)/127);            //convert rpm to steps and stop
        timer3_set_pwm(128+duty,2);
        timer3_set_pwm(128-duty,3);
    }
}