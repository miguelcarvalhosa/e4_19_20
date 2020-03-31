/*
 * Programa de teste da configuração do Timer3 e do Output Compare 3.
 * 
 * Deverá ver-se um sinal PWM no pino OC3 a variar o duty cycle entre 0 e 100%.
 * 
 * O pino OC3 corresponde ao pino RD2 e está ligado ao pino 6 da placa MAX32.
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include <stdint.h>

#include "../../Sources/config_bits.h"
#include "../../Sources/timer3.h"
#include "../../Sources/delay.h"


/*
 * Definições
 */
#define SYSCLK			80000000
#define PBCLK			SYSCLK/2


/*
 * Main
 */
int main(int argc, char** argv) {
	
	// O pino RD2 corresponde ao OC3 e está ligado ao pino 6 da placa MAX32
	TRISDbits.TRISD2 = 0;			// Configuração do pino RD2 como saída
	
	timer3_config_pwm(2000, 0, 3);	// Configuração do Timer3 para gerar um sinal PWM com freq = 2kHz no pino OC3
	
	int i;
	
	while(1) {
		for(i=0; i<255; i++) {
			timer3_set_pwm(i, 3);
			delay_ms(10);
		}
	}
	
	return (EXIT_SUCCESS);
}
