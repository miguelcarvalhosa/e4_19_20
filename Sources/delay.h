/**
 * \file delay.h
 *
 * \brief Module to generate a delay.
 *
 * 
 *
 * \author Miguel Carvalhosa (miguelcarvalhosa@ua.pt)
 * \author Hugo Leal (micaelleal1@ua.pt) 
 */


#ifndef _DELAY_H
#define _DELAY_H


#include <stdint.h>


/**
 * \brief A function to generate a delay in milliseconds.
 * 
 * \param ms        Time in milliseconds to generate delay
 *
 */
void delay_ms(uint32_t ms);


/**
 * \brief A function to generate a delay in microseconds.
 * 
 * \param us        Time in microseconds to generate delay
 *
 */
void delay_us(uint32_t us);


#endif