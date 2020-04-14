/**
 * \file uart.h
 *
 * \brief Module to control UART1 of the PIC32MX.
 *
 * 
 *
 * \author Miguel Carvalhosa (miguelcarvalhosa@ua.pt)
 * \author Hugo Leal (micaelleal1@ua.pt)
 */


#ifndef _UART_H
#define _UART_H


#include <stdint.h>


#ifndef SYSCLK
    #define SYSCLK      80000000
#endif

#ifndef PBCLK
    #define PBCLK       SYSCLK/2
#endif


/**
 * \brief A function to configure the UART1.
 * 
 * \param baudrate      Configure the baudrate: default values from 2400 to 921600 (default 9600)
 * \param databits      Configure databits: 8 or 9 bits (default 8 bits)
 * \param parity        Configure paritybits: 0 - no parity, 1 - odd, 2 - even (default odd parity)
 * \param stopbits      Configure stopbits: 1 or 2 bits (default 2 bits)
 *
 */
void uart1_config(uint32_t baudrate, uint8_t databits, uint8_t parity, uint8_t stopbits);


/**
 * \brief A function to print a character on the terminal by UART1.
 * 
 * \param byte2send      Character to print.
 *
 *
 */
void uart1_putc(uint8_t byte2send);


/**
 * \brief A function to print a string on the terminal by UART1.
 * 
 * \param s             Pointer to the string to print.
 * 
 */
void uart1_puts(uint8_t *s);


/**
 * \brief A function to print an integer with 4 digits
 * 
 * \param val           Integer in range [0 - 9999]
 * 
 */
void uart1_int_4dig(uint16_t val);


#endif
