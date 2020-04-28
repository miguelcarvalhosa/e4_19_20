#include "delay.h"
#include <xc.h>
#include <stdint.h>
#include <cp0defs.h>
#include <sys/attribs.h>


/*
 * Delay in milliseconds
 */
void delay_ms(uint32_t ms) {
    /*
	for(; ms > 0; ms--) {
        delay_us(1000);
    }
	*/
	uint8_t i;
	for(; ms > 0; ms--) {
		for(i = 0; i < 80000; i++) {		// 1 millisecond delay
			asm("nop");
		}
	}
}


/*
 * Delay in microseconds
 */
void delay_us(uint32_t us) {
    /*
	for(; us > 0; us--) {
        _CP0_SET_COUNT(0);
        while(_CP0_GET_COUNT() < 40);
    }
	*/
	uint8_t i;
	for(; us > 0; us--) {
		for(i = 0; i < 80; i++) {		// 1 microsecond delay
			asm("nop");
		}
	}
}