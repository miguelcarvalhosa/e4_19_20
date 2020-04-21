
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



/*
 * Main
 */
int main(int argc, char** argv) {
	
    uart1_config(9600, 8, 0, 1);		// Configuração da UART1 com baudrate 9600, 8 data bits, sem paridade e 1 stop bit
	uart1_puts("Init\n\n");
	
    timer3_config_pwm(20000, 0, 2);		// Configuração do Timer3 para gerar um sinal PWM com freq = 20kHz no pino OC2
    timer3_config_pwm(20000, 0, 3);		// Configuração do Timer3 para gerar um sinal PWM com freq = 20kHz no pino OC3
    
	while(1) {
		
	}
	
	
	return (EXIT_SUCCESS);
}

