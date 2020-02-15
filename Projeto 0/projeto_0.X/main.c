#include <stdio.h>
#include <stdlib.h>
#include <xc.h>

#include "config_bits.h"
#include "uart.h"


/*
 * Definições
 */
#define SYSCLK 80000000
#define PBCLK  40000000


/*
 * Protótipos das funções
 */
void timer2_config(unsigned short freq);
void adc_config(void);
void adc_start(void);


/*
 * Main
 */
int main(int argc, char** argv) {
	
	TRISAbits.TRISA3 = 0;
	timer2_config(100);
	uart1_config(115200, 8, 1, 2);
	adc_config();
			
	while(1) {
		if(IFS0bits.T2IF == 1) {
			LATAbits.LATA3 = !LATAbits.LATA3;
			adc_start();
			while(IFS1bits.AD1IF == 0);
			int val = (AD1BUF0+AD1BUF1)/2;
			IFS0bits.T2IF = 0;
		}
	}
	
	
	return (EXIT_SUCCESS);
}


/*
 * Função para configurar o timer 2
 * Recebe como parâmetro de entrada a frequência desejada, entre 100Hz e 500Hz
 */
void timer2_config(unsigned short freq) {
	if(freq >= 100 && freq <= 500) {
		T2CONbits.TCKPS = 3;		// K_presc = 8
		PR2 = (PBCLK/8)/freq - 1;	// Constante de contagem
		TMR2 = 0;					// Reset ao registo de contagem
		T2CONbits.TON = 1;			// Timer 2 ON
	}
	else return;
}


/*
 * Função para configurar a ADC
 */
void adc_config(void) {
	TRISBbits.TRISB0 = 1;		// RB0 como entrada
	AD1PCFGbits.PCFG0 = 0;		// entrada analógica
	AD1CHSbits.CH0SA = 0;		// seleciona entrada 0 (RB0) da ADC
	AD1CON2bits.SMPI = 2-1;		// 2 samples
	AD1CON1bits.SSRC = 7;		// auto-convert
	AD1CON1bits.CLRASAM = 1;
	AD1CON3bits.SAMC = 16;		// sample time 1.6 us
	AD1CON1bits.ON = 1;			// enable ADC
}


/*
 * Função para iniciar a conversão da ADC
 */
void adc_start(void) {
	AD1CON1bits.ASAM = 1;
}