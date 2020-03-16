#include "timer2.h"
#include <xc.h>
#include <stdint.h>

/*
 * Prescaler array
 */
const uint16_t prescaler[8] = {1,2,4,8,16,32,64,256};


/*
 * Function to choose the prescaler based on the frequency value
 */
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


/*
 * Function to configure timer T2
 */
int8_t timer2_config(uint32_t freq) {
	int8_t retval = -1;
	int8_t K = choose_prescaler(freq);
	if(K != -1) {
		T2CONbits.TCKPS = K;
		PR2 = ((PBCLK/prescaler[K])/freq)-1;
		TMR2 = 0;							// Reset timer T2
		T2CONbits.TON = 1;					// Enable timer T2
		retval = 0;
	}
	return retval;
}


/*
 * Function to configure timer T2 with interrupts
 */
int8_t timer2_config_int(uint32_t freq) {
	int8_t retval = -1;
	int8_t K = choose_prescaler(freq);
	if(K != -1) {
		T2CONbits.TCKPS = K;
		PR2 = ((PBCLK/prescaler[K])/freq)-1;
		TMR2 = 0;							// Reset timer T2
		IPC2bits.T2IP = 1;	 // Timer interrupt priority
		IEC0bits.T2IE = 1;	 // Interrupt enable
		IFS0bits.T2IF = 0;	 // Reset interrupt flag
		T2CONbits.TON = 1;					// Enable timer T2
		retval = 0;
	}
	return retval;
}



/*
 * Function to start timer T2
 */
void timer2_start(void) {
	TMR2 = 0;
	T2CONbits.TON = 1;   // Enable timer T2
}


/*
 * Function to stop timer T2
 */
void timer2_stop(void) {
	T2CONbits.TON = 0;   // Enable timer T2
}


int8_t timer2_config_pwm(uint32_t freq, uint8_t dutyCycle, uint8_t pin) {
	int8_t retval = -1;
	int8_t K = choose_prescaler(freq);
	if(dutyCycle < 0 || dutyCycle > (PWM_STEPS-1)) {
		retval = -2;
	}
	else if(K != -1) {
		T2CONbits.TCKPS = K;
		PR2 = ((PBCLK/prescaler[K])/freq)-1;
		TMR2 = 0;							// Reset timer T2
		switch(pin) {
			case 1:
				OC1CONbits.OCM = 6;
				OC1CONbits.OCTSEL = 0;
				OC1RS = ((PR2+1)*dutyCycle)/(PWM_STEPS-1);
				OC1CONbits.ON = 1;
				break;
			case 2:
				OC2CONbits.OCM = 6;
				OC2CONbits.OCTSEL = 0;
				OC2RS = ((PR2+1)*dutyCycle)/(PWM_STEPS-1);
				OC2CONbits.ON = 1;
				break;
			case 3:
				OC3CONbits.OCM = 6;
				OC3CONbits.OCTSEL = 0;
				OC3RS = ((PR2+1)*dutyCycle)/(PWM_STEPS-1);
				OC3CONbits.ON = 1;
				break;
			case 4:
				OC4CONbits.OCM = 6;
				OC4CONbits.OCTSEL = 0;
				OC4RS = ((PR2+1)*dutyCycle)/(PWM_STEPS-1);
				OC4CONbits.ON = 1;
				break;
			case 5:
				OC5CONbits.OCM = 6;
				OC5CONbits.OCTSEL = 0;
				OC5RS = ((PR2+1)*dutyCycle)/(PWM_STEPS-1);
				OC5CONbits.ON = 1;
				break;
			default:
				retval = -3;
				break;
		}
		T2CONbits.TON = 1;					// Enable timer T2
		retval = 0;
	}
	return retval;
}


int8_t timer2_set_pwm(uint8_t dutyCycle, uint8_t pin) {
	int8_t retval = -1;
	if(dutyCycle < 0 || dutyCycle > (PWM_STEPS-1)) {
		retval = -1;
	}
	else {
		switch(pin) {
			case 1:
				OC1RS = ((PR2+1)*dutyCycle)/(PWM_STEPS-1);
				break;
			case 2:
				OC2RS = ((PR2+1)*dutyCycle)/(PWM_STEPS-1);
				break;
			case 3:
				OC3RS = ((PR2+1)*dutyCycle)/(PWM_STEPS-1);
				break;
			case 4:
				OC4RS = ((PR2+1)*dutyCycle)/(PWM_STEPS-1);
				break;
			case 5:
				OC5RS = ((PR2+1)*dutyCycle)/(PWM_STEPS-1);
				break;
			default:
				retval = -2;
				break;
		}
	}
}