
#include <stdint.h>
#include <xc.h>

#include "../../Sources/config_bits.h"
#include "../../Sources/timer2.h"
#include "../../Sources/timer3.h"
#include "../../Sources/adc.h"
#include "../../Sources/uart.h"
#include "../../Sources/delay.h"
#include "sharp.h"


/*
 * Definições
 */
#define SYSCLK			80000000
#define PBCLK			SYSCLK/2
#define ADC_SAMPLES		2
#define PWM_STEPS		256			// Se alterado, deve-se alterar também no ficheiro "timer3.h"


/*
 * Protótipos das funções
 */
void print_UI(uint16_t dist);
uint16_t transfer_func(uint16_t dist);


/*
 * Main
 */
int main(int argc, char** argv) {
	
	TRISAbits.TRISA3 = 0;				// Pino RA3 configurado como saída. Este pino está ligado ao LED4 e ao pino 13 da placa chipKit MAX32
	
	TRISDbits.TRISD2 = 0;				// Pino RD2 configurado como saída. Este pino corresponde ao OC3 e ao pino 6 da placa chipKit MAX32
	
	uart1_config(9600, 8, 0, 1);		// Configuração da UART1 com baudrate 9600, 8 data bits, sem paridade e 1 stop bit
	uart1_puts("Init\n\n");
	
	timer2_config(20);					// Configuração do timer T2 com freq = 20 Hz
	
	timer3_config_pwm(2000, 0, 3);		// Configuração do Timer3 para gerar um sinal PWM com freq = 2kHz no pino OC3
	
	sharp_init(0, ADC_SAMPLES);			// Configuração do sensor no pino RB0 e leitura com ADC_SAMPLES amostras
	
	while(1) {
		if(IFS0bits.T2IF == 1) {
			uint16_t distance = sharp_read();		// Leitura da distância
			print_UI(distance);						// Envio da distância para o terminal
			if(distance != 0) {
				uint16_t duty = transfer_func(distance);		// Cálculo do duty cycle do pwm
				timer3_set_pwm(duty, 3);			// Gerar um sinal pwm no pino OC3 com o duty cycle calculado
				LATAbits.LATA3 = 1;		// Ligar led
			}
			else {
				LATAbits.LATA3 = 0;		// Desligar led
			}
			IFS0bits.T2IF = 0;
		}
	}
	
	
	return (EXIT_SUCCESS);
}


/*
 * Função para imprimir a interface do utilizador no terminal
 * Recebe como parâmetro de entrada um valor inteiro
 * Se receber um valor entre 100 e 600 imprime-o. Caso contrário imprime 'E'
 */
void print_UI(uint16_t dist) {
	uart1_putc('\n');
	if(dist > 100 && dist < 600) {
		uint8_t dig2 = dist/100;		// Dígito das centenas
		uint8_t rem = dist%100;
		uint8_t dig1 = rem/10;			// Dígito das dezenas
		uint8_t dig0 = rem%10;			// Dígito das unidades
		uart1_putc(dig2 + 48);
		uart1_putc(dig1 + 48);
		uart1_putc(dig0 + 48);
	}
	else {
		uart1_putc('E');
	}
}


/*
 * Função de transferência
 * Converte o valor de distância recebido no valor a enviar para o gerador de PWM na gama [0 - (PWM_STEPS-1)]
 */
uint16_t transfer_func(uint16_t dist) {
	uint32_t retval = ((dist-100)*(PWM_STEPS-1)/500);
	return retval;
}
