/**
 * \file interrupt.h
 *
 * \brief Module to control interruptions of the PIC32MX.
 *
 * 
 * 
 * \author Miguel Carvalhosa (miguelcarvalhosa@ua.pt)
 * \author Hugo Leal (micaelleal1@ua.pt)
 */


#ifndef _INTERRUPTS_H
#define _INTERRUPTS_H


#define EnableInterrupts() asm volatile("ei")


#define DisableInterrupts() asm volatile("di")


#define EnableMultivector() INTCONbits.MVEC = 1;


#define EnableSinglevector() INTCONbits.MVEC = 0;


#endif