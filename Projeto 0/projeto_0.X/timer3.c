#include "timer3.h"
#include <xc.h>
#include <stdint.h>


const uint16_t prescaler[8] = {1,2,4,8,16,32,64,256};


int8_t choose_prescaler(uint32_t fout) {
	uint8_t i;
	int8_t retval = -1;
	for (i = 0; i < 8; i++) {
		if(((PBCLK/prescaler[i])/fout - 1) <= 65535) {
			retval = i;
		}
	}
	return retval;
}


int8_t timer3_config(uint32_t freq) {
	int8_t retval = -1;
	int8_t K = choose_prescaler(freq);
	if(K != -1) {
		T3CONbits.TCKPS = K;
		PR3 = ((PBCLK/prescaler[K])/freq)-1;
		TMR3 = 0;							// Reset timer T3
		T3CONbits.TON = 1;					// Enable timer T3
		retval = 0;
	}
	return retval;
}


int8_t timer3_config_int(uint32_t freq) {
	int8_t retval = -1;
	int8_t K = choose_prescaler(freq);
	if(K != -1) {
		T3CONbits.TCKPS = K;
		PR3 = ((PBCLK/prescaler[K])/freq)-1;
		TMR3 = 0;							// Reset timer T3
		IPC3bits.T3IP = 1;					// Timer interrupt priority
		IEC0bits.T3IE = 1;					// Interrupt enable
		IFS0bits.T3IF = 0;					// Reset interrupt flag
		T3CONbits.TON = 1;					// Enable timer T3
		retval = 0;
	}
	return retval;
}



/*
 * Function to start timer T3
 */
void timer3_start(void) {
	TMR3 = 0;
	T3CONbits.TON = 1;   // Enable timer T3
}


/*
 * Function to stop timer T3
 */
void timer3_stop(void) {
	T3CONbits.TON = 0;   // Enable timer T3
}


int8_t timer3_config_pwm(uint32_t freq, uint8_t dutyCycle, uint8_t pin) {
	int8_t retval = -1;
	int8_t K = choose_prescaler(freq);
	if(dutyCycle < 0 || dutyCycle > (PWM_STEPS-1)) {
		retval = -2;
	}
	else if(K != -1) {
		T3CONbits.TCKPS = K;
		PR3 = ((PBCLK/prescaler[K])/freq)-1;
		TMR3 = 0;							// Reset timer T3
		switch(pin) {
			case 1:
				OC1CONbits.OCM = 6;
				OC1CONbits.OCTSEL = 1;
				OC1RS = ((PR3+1)*dutyCycle)/(PWM_STEPS-1);
				OC1CONbits.ON = 1;
				break;
			case 2:
				OC2CONbits.OCM = 6;
				OC2CONbits.OCTSEL = 1;
				OC2RS = ((PR3+1)*dutyCycle)/(PWM_STEPS-1);
				OC2CONbits.ON = 1;
				break;
			case 3:
				OC3CONbits.OCM = 6;
				OC3CONbits.OCTSEL = 1;
				OC3RS = ((PR3+1)*dutyCycle)/(PWM_STEPS-1);
				OC3CONbits.ON = 1;
				break;
			case 4:
				OC4CONbits.OCM = 6;
				OC4CONbits.OCTSEL = 1;
				OC4RS = ((PR3+1)*dutyCycle)/(PWM_STEPS-1);
				OC4CONbits.ON = 1;
				break;
			case 5:
				OC5CONbits.OCM = 6;
				OC5CONbits.OCTSEL = 1;
				OC5RS = ((PR3+1)*dutyCycle)/(PWM_STEPS-1);
				OC5CONbits.ON = 1;
				break;
			default:
				retval = -3;
				break;
		}
		T3CONbits.TON = 1;					// Enable timer T3
		retval = 0;
	}
	return retval;
}


int8_t timer3_set_pwm(uint8_t dutyCycle, uint8_t pin) {
	int8_t retval = -1;
	if(dutyCycle < 0 || dutyCycle > (PWM_STEPS-1)) {
		retval = -1;
	}
	else {
		switch(pin) {
			case 1:
				OC1RS = ((PR3+1)*dutyCycle)/(PWM_STEPS-1);
				break;
			case 2:
				OC2RS = ((PR3+1)*dutyCycle)/(PWM_STEPS-1);
				break;
			case 3:
				OC3RS = ((PR3+1)*dutyCycle)/(PWM_STEPS-1);
				break;
			case 4:
				OC4RS = ((PR3+1)*dutyCycle)/(PWM_STEPS-1);
				break;
			case 5:
				OC5RS = ((PR3+1)*dutyCycle)/(PWM_STEPS-1);
				break;
			default:
				retval = -2;
				break;
		}
	}
}