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
void timer3_config(void);
void pwm(unsigned char duty_cycle);
void adc_config(void);
void adc_start(void);
unsigned int adc_read(void);


/*
 * Main
 */
int main(int argc, char** argv) {
	
	TRISAbits.TRISA3 = 0;
	TRISCbits.TRISC1 = 0;
	TRISDbits.TRISD2 = 0;
	timer2_config(500);
	timer3_config();
	uart1_config(9600, 8, 1, 2);
	adc_config();
	
	uart1_puts("Init\n");
	
	pwm(20);
			
	while(1) {
		if(IFS0bits.T2IF == 1) {
			LATAbits.LATA3 = !LATAbits.LATA3;
			adc_start();
			unsigned int val = adc_read();
			
			// Cálculos para mostrar o valor no terminal
			val = val*33/1023;
			char val1 = val/10;
			char val0 = val%10;
			uart1_putc(0x30 + val1);
			uart1_putc('.');
			uart1_putc(0x30 + val0);
			uart1_putc('\n');
			
			
			IFS0bits.T2IF = 0;
		}
		if(IFS0bits.T3IF == 1) {
			LATCbits.LATC1 = !LATCbits.LATC1;
			IFS0bits.T3IF = 0;
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
 * Função para configurar o timer 3
 * Contar a uma frequencia de 2kHz
 */
void timer3_config(void){
    T2CONbits.TCKPS = 0;            // K_presc = 1
    PR3 = (PBCLK/2000) - 1;         // Constante de contagem
    TMR3 = 0;                       // Reset ao registo de contagem
    T3CONbits.TON = 1;              // Timer 3 ON
}


/*
 * Função para gerar um sinal PWM
 * Recebe como argumento o duty-cycle que queremos gerar
 * OC3 -> RD2 pin (6)
 */
void pwm(unsigned char duty_cycle){
    OC3CONbits.OCM = 6;
    OC3CONbits.OCTSEL = 1;
    OC3RS = (PBCLK*duty_cycle)/(2000*100);
    OC3CONbits.ON = 1;
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


/*
 * Função para ler a ADC
 * Devolve o valor lido (média de duas leituras)
 */
unsigned int adc_read(void) {
	while(IFS1bits.AD1IF == 0);
	int val = (ADC1BUF0+ADC1BUF1)/2;
	return val;
}