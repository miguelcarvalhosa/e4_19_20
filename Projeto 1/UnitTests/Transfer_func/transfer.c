#include "transfer.h"

uint16_t transfer_func(uint16_t dist) {
	uint32_t retval = ((dist-100)*(PWM_STEPS-1)/500);
	return retval;
}