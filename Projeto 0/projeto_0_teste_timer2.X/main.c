/*
 * Programa de teste da configuração do Timer2.
 * 
 * Deverá ver-se uma onda quadrada no pino 13 da placa MAX32 com um duty cycle de 50% e uma frequência de 250Hz.
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include <stdint.h>

#include "../../Sources/config_bits.h"
#include "../../Sources/timer2.h"


/*
 * Definições
 */
#define SYSCLK			80000000
#define PBCLK			SYSCLK/2


/*
 * Main
 */
int main(int argc, char** argv) {
	
	// O pino RA3 está ligado ao LED4 e ao pino 13 da placa MAX32
	TRISAbits.TRISA3 = 0;		// Configuração do pino RA3 como saída
	
	timer2_config(500);			// Configuração do Timer2 com freq = 500Hz
	
	while(1) {
		if(IFS0bits.T2IF == 1) {
			PORTAINV = 0x08;		// Inversão do bit 3 do registo PORTA
			IFS0bits.T2IF = 0;
		}
	}
	
	return (EXIT_SUCCESS);
}
