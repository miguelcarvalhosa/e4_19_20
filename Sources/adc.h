/**
 * \file adc.h
 *
 * \brief Module to control ADC of the PIC32MX.
 *
 * 
 *
 * \author Miguel Carvalhosa (miguelcarvalhosa@ua.pt)
 * \author Hugo Leal (micaelleal1@ua.pt)
 */


#ifndef _ADC_H
#define _ADC_H

#include <stdint.h>


/**
 * \brief A function to configure the ADC.
 * 
 * \param channel       Input channel to be converted
 * \param samples       Number of samples in each conversion
 * 
 * \return A result code
 *  \retval 0           Successfull configuration
 *  \retval -1          Invalid channel
 *
 */
int8_t adc_config(uint8_t channel, uint8_t samples);


/**
 * \brief A function to start the conversion.
 *
 */
void adc_start(void);


/**
 * \brief A function to get the result of the conversion.
 *
 *  \return Result of the conversion
 *
 */
uint16_t adc_read(void);

#endif