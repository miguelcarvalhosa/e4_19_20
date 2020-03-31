#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include <stdint.h>

#include "../../Sources/config_bits.h"
#include "../../Sources/uart.h"
#include "../../Sources/delay.h"
#include "../../Sources/timer2.h"
#include "../../Sources/timer3.h"
#include "../../Sources/adc.h"


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
uint16_t transfer_func(uint16_t val);


/*
 * Main
 */
int main(int argc, char** argv) {
	
	uint16_t adc_val = 0;			// Valor lido pela ADC
	uint16_t val33 = 0;				// Valor lido pela ADC na gama [0 - 33]
	uint8_t ms_dig = 0;				// Dígito mais significativo a imprimir no terminal
	uint8_t ls_dig = 0;				// Dígito menos significativo a imprimir no terminal
	uint16_t output_val = 0;		// Valor na saída da função de transferência
	
	
	// O pino RD2 corresponde ao OC3 e está ligado ao pino 6 da placa MAX32
	TRISDbits.TRISD2 = 0;			// Configuração do pino RD2 como saída
	
	timer2_config(500);				// Configuração do Timer2 com freq = 500Hz
	
	timer3_config_pwm(2000, 0, 3);	// Configuração do Timer3 para gerar um sinal PWM com freq = 2kHz no pino OC3
	
	uart1_config(9600, 8, 1, 2);	// COnfiguração da UART1 com baudrate=9600, 8 databits, paridade ímpar e 2 stopbits
	
	// O canal 0 da ADC corresponde ao pino RB0 e está ligado ao pino A0 da placa MAX32
	adc_config(0, ADC_SAMPLES);		// Configuração da ADC para ler o canal 0
	
    
	// Teste do PWM
	//int i=0;
	//for(i; i<255; i++) {
	//	timer3_set_pwm(i, 3);
	//	delay_ms(10);
	//}
	
	while(1) {
		if(IFS0bits.T2IF == 1) {
			adc_start();			// Início da conversão da ADC
			adc_val = adc_read(ADC_SAMPLES);	// Leitura da ADC
			
			// Cálculos para mostrar no terminal o valor lido da ADC na gama [0 - 3.3]
			val33 = adc_val*33/1023;		// Conversão do valor lido pela ADC da gama [0 - 1023] para a gama [0 - 33]
			ms_dig = val33/10;				// Dígito mais significativo
			ls_dig = val33%10;				// Dígito menos significativo
			
			// Impressão dos dígitos no terminal. Deve-se somar 0x30 para converter em ASCII
			uart1_putc(0x30 + ms_dig);
			uart1_putc('.');
			uart1_putc(0x30 + ls_dig);
			uart1_putc('\n');
            
			output_val = transfer_func(adc_val); 
			
			timer3_set_pwm(output_val, 3);	// Gerar um sinal PWM com dutycycle output_val no pino OC3

			IFS0bits.T2IF = 0;
		}
	}
	return (EXIT_SUCCESS);
}



/*
 * Função de transferência
 * Converte o valor lido pela ADC da gama [0 - 1023] para a gama [0 - (PWM_STEPS-1)]
 */
uint16_t transfer_func(uint16_t val){
    return (val*(PWM_STEPS-1)/1023);
}
