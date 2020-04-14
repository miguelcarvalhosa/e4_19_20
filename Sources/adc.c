#include "adc.h"
#include <xc.h>
#include <stdint.h>


uint8_t nsamples;


int8_t adc_config(uint8_t channel, uint8_t samples) {
	nsamples = samples;
	int8_t retval = 0;
	switch(channel) {
		case 0:
			TRISBbits.TRISB0 = 1;		// RB0 como entrada
			AD1PCFGbits.PCFG0 = 0;		// entrada analógica
			AD1CHSbits.CH0SA = 0;		// seleciona entrada 0 (RB0) da ADC
			break;
		case 1:
			TRISBbits.TRISB1 = 1;
			AD1PCFGbits.PCFG1 = 0;
			AD1CHSbits.CH0SA = 1;
			break;
		case 2:
			TRISBbits.TRISB2 = 1;
			AD1PCFGbits.PCFG2 = 0;
			AD1CHSbits.CH0SA = 2;
			break;
		case 3:
			TRISBbits.TRISB3 = 1;
			AD1PCFGbits.PCFG3 = 0;
			AD1CHSbits.CH0SA = 3;
			break;
		case 4:
			TRISBbits.TRISB4 = 1;
			AD1PCFGbits.PCFG4 = 0;
			AD1CHSbits.CH0SA = 4;
			break;
		case 5:
			TRISBbits.TRISB5 = 1;
			AD1PCFGbits.PCFG5 = 0;
			AD1CHSbits.CH0SA = 5;
			break;
		case 6:
			TRISBbits.TRISB6 = 1;
			AD1PCFGbits.PCFG6 = 0;
			AD1CHSbits.CH0SA = 6;
			break;
		case 7:
			TRISBbits.TRISB7 = 1;
			AD1PCFGbits.PCFG7 = 0;
			AD1CHSbits.CH0SA = 7;
			break;
		case 8:
			TRISBbits.TRISB8 = 1;
			AD1PCFGbits.PCFG8 = 0;
			AD1CHSbits.CH0SA = 8;
			break;
		case 9:
			TRISBbits.TRISB9 = 1;
			AD1PCFGbits.PCFG9 = 0;
			AD1CHSbits.CH0SA = 9;
			break;
		case 10:
			TRISBbits.TRISB10 = 1;
			AD1PCFGbits.PCFG10 = 0;
			AD1CHSbits.CH0SA = 10;
			break;
		case 11:
			TRISBbits.TRISB11 = 1;
			AD1PCFGbits.PCFG11 = 0;
			AD1CHSbits.CH0SA = 11;
			break;
		case 12:
			TRISBbits.TRISB12 = 1;
			AD1PCFGbits.PCFG12 = 0;
			AD1CHSbits.CH0SA = 12;
			break;
		case 13:
			TRISBbits.TRISB13 = 1;
			AD1PCFGbits.PCFG13 = 0;
			AD1CHSbits.CH0SA = 13;
			break;
		case 14:
			TRISBbits.TRISB14 = 1;
			AD1PCFGbits.PCFG14 = 0;
			AD1CHSbits.CH0SA = 14;
			break;
		case 15:
			TRISBbits.TRISB15 = 1;
			AD1PCFGbits.PCFG15 = 0;
			AD1CHSbits.CH0SA = 15;
			break;
		default:
			retval = -1;
			break;
	}
	AD1CON2bits.SMPI = nsamples-1;		// n samples
	AD1CON1bits.SSRC = 7;		// auto-convert
	AD1CON1bits.CLRASAM = 1;
	AD1CON3bits.SAMC = 16;		// sample time 1.6 us
	AD1CON1bits.ON = 1;			// enable ADC
	return retval;
}


void adc_start(void) {
    IFS1bits.AD1IF = 0;
	AD1CON1bits.ASAM = 1;
}


uint16_t adc_read(void) {
	while(IFS1bits.AD1IF == 0);
	int i=0;
	uint32_t soma = 0;
	uint32_t buf[16] = {ADC1BUF0, ADC1BUF1, ADC1BUF2, ADC1BUF3, ADC1BUF4, ADC1BUF5, ADC1BUF6, ADC1BUF7, 
						ADC1BUF8, ADC1BUF9, ADC1BUFA, ADC1BUFB, ADC1BUFC, ADC1BUFD, ADC1BUFE, ADC1BUFF};
	for(i; i<nsamples; i++) {
		soma += buf[i];
	}
	uint32_t val = soma/nsamples;
	return val;
}