#include "delay.h"
#include <xc.h>
#include <stdint.h>
#include <cp0defs.h>
#include <sys/attribs.h>


/*
 * Delay in milliseconds
 */
void delay_ms(uint32_t ms) {
	for(; ms > 0; ms--) {
        delay_us(1000);
    }
}


/*
 * Delay in microseconds
 */
void delay_us(uint32_t us) {
	for(; us > 0; us--) {
        _CP0_SET_COUNT(0);
        while(_CP0_GET_COUNT() < 40);
    }
}