
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
#define PWM_STEPS		256			// Se alterado, deve-se alterar também no ficheiro "timer3.h"


/*
 * Protótipos das funções
 */
void control_motor(int rpm);         // function to control motor speed -> rpm entre 0 e 80

/*
 * Main
 */
int main(int argc, char** argv) {
   
    TRISDbits.TRISD12 = 1;				// Pino RD12 configurado como entrada. Este pino corresponde é usado como enable da ponte H e é o pino 8 da placa chipKit MAX32 
    
    TRISDbits.TRISD2 = 1;				// Pino RD1 configurado como entrada. Este pino corresponde ao OC2 e ao pino 5 da placa chipKit MAX32
    
    TRISDbits.TRISD2 = 1;				// Pino RD2 configurado como entrada. Este pino corresponde ao OC3 e ao pino 6 da placa chipKit MAX32
	
    uart1_config(9600, 8, 0, 1);		// Configuração da UART1 com baudrate 9600, 8 data bits, sem paridade e 1 stop bit
	uart1_puts("Init\n\n");
	
    timer3_config_pwm(20000, 0, 2);		// Configuração do Timer3 para gerar um sinal PWM com freq = 20kHz no pino OC2
    timer3_config_pwm(20000, 0, 3);		// Configuração do Timer3 para gerar um sinal PWM com freq = 20kHz no pino OC3
    
    // Teste
	//int i=0;
	//for(i; i<255; i++) {
	//	control_motor(i);
	//	delay_ms(20);
	//}
    
	while(1) {
		control_motor(40);
	}
	
	return (EXIT_SUCCESS);
}

void control_motor(int rpm){
    
    uint16_t duty = (rpm*(PWM_STEPS-1)/80);       //convert rpm to steps
    
    if(duty>=0 && duty<128){                    // ir para um lado
        timer3_set_pwm(duty,2);                 
        timer3_set_pwm(255-duty,3);
    }
    else if(duty>128 && duty<=225){             // ir para outro lado
        timer3_set_pwm(duty,2);     
        timer3_set_pwm(255-duty,3);
    }
    else{
        timer3_set_pwm(duty,2);                 // parado
        timer3_set_pwm(duty,3);
    }
}