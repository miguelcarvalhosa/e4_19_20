
#include "sharp.h"


int8_t sharp_init(uint8_t adc_pin, uint8_t nsamples) {
	int8_t retval = -1;
	retval = adc_config(adc_pin, nsamples);		// Configure ADC to channel 'adc_pin' with 'nsamples' samples
	TRISEbits.TRISE8 = 1;						// Set pin RE8 as input. This input will indicate if the signal is in valid range
												// RE8 == 1 --> signal is in valid range
												// RE8 == 0 --> signal is not in valid range
	return retval;
}


uint16_t sharp_read(void) {
	uint32_t distance = 0;
	// If in valid range
	if(PORTEbits.RE8 == 1) {
		// Read the ADC
		adc_start();
		uint16_t adc_val = adc_read();
		// Calculate the distance
		distance = (SHARP_B1)/(adc_val-(SHARP_B0));
	}
	return distance;
}


uint16_t sharp_get_voltage(void) {
	adc_start();
	uint16_t adc_val = adc_read();
	return adc_val;
}