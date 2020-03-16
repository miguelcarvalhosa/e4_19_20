#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include <stdint.h>

#include "config_bits.h"
#include "uart.h"
#include "delay.h"
#include "timer2.h"
#include "timer3.h"
#include "adc.h"


/*
 * Definições
 */
#define SYSCLK			80000000
#define PBCLK			SYSCLK/2
#define ADC_SAMPLES		2


/*
 * Protótipos das funções
 */
void transfer_func(unsigned int val);


/*
 * Main
 */
int main(int argc, char** argv) {
	
	
	TRISAbits.TRISA3 = 0;
	TRISCbits.TRISC2 = 0;
	TRISDbits.TRISD2 = 0;
	timer2_config(500);
	timer3_config_pwm(2000, 0, 3);
	uart1_config(9600, 8, 1, 2);
	adc_config(0, ADC_SAMPLES);
	
	uart1_puts("Init\n");
    
	// Teste do PWM
	int i=0;
	for(i; i<255; i++) {
		timer3_set_pwm(i, 3);
		delay_ms(10);
	}
	
	while(1) {
		if(IFS0bits.T2IF == 1) {
			//LATAbits.LATA3 = !LATAbits.LATA3;		// Pin 13
			PORTAINV = 0x08;
			adc_start();
			uint32_t val = adc_read(ADC_SAMPLES);
			
			// Cálculos para mostrar o valor no terminal
			uint32_t val33 = val*33/1023;
			uint8_t val1 = val33/10;
			uint8_t val0 = val33%10;
			uart1_putc(0x30 + val1);
			uart1_putc('.');
			uart1_putc(0x30 + val0);
			uart1_putc('\n');
            
			transfer_func(val); 

			IFS0bits.T2IF = 0;
		}
		if(IFS0bits.T3IF == 1) {
			LATCbits.LATC2 = !LATCbits.LATC2;		// Pin 22
			IFS0bits.T3IF = 0;
		}
	}
	
	
	
	
	return (EXIT_SUCCESS);
}



/*
 * Função de transferência
 */
void transfer_func(unsigned int val){
    val = val*255/1023;
    timer3_set_pwm(val, 3);
}
