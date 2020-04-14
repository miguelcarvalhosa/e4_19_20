/**
 * \file sharp.h
 *
 * \brief Module to control the infrared distance sensor GP2Y0A21YK0F
 *
 * 
 *
 * \author Miguel Carvalhosa (miguelcarvalhosa@ua.pt)
 * \author Hugo Leal (micaelleal1@ua.pt)
 */


#ifndef _SHARP_H
#define _SHARP_H

#include <stdint.h>
#include "mem_map.h"


#define SHARP_B1	127048		// linear regression slope
#define SHARP_B0	0-181		// linear regression y-axis crossing


/**
 * \brief A function to initialize the sensor.
 *          The valid range input signal is by default on pin RE8 (pin 2 on chipkit max32 board)
 * 
 * \param adc_pin       Pin to read the distance value with the ADC
 * \param nsamples      Number of samples in each measurement
 * 
 * \return A result code
 *  \retval 0           Successfull configuration
 *  \retval -1          Invalid adc_pin
 *
 */
int8_t sharp_init(uint8_t adc_pin, uint8_t nsamples);


/**
 * \brief A function to measure the distance
 * 
 * \return Result of the measurement in millimeters in range [100, 600]
 *  \retval 0           Object is not in valid range
 *  \retval others      Distance to object
 *
 */
uint16_t sharp_read(void);


/**
 * \brief A function to measure the output voltage of the sensor
 * 
 * \return Output voltage of the sensor in range [0 - 1023]
 *
 */
uint16_t sharp_get_voltage(void);


#endif