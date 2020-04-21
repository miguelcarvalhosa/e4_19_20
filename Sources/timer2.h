/**
 * \file timer2.h
 *
 * \brief Module to control timer T2 of the PIC32MX.
 *
 * 
 * 
 * \author Miguel Carvalhosa (miguelcarvalhosa@ua.pt)
 * \author Hugo Leal (micaelleal1@ua.pt)
 */


#ifndef _TIMER2_H
#define _TIMER2_H


#include <stdint.h>


#ifndef SYSCLK
    #define SYSCLK      80000000
#endif

#ifndef PBCLK
    #define PBCLK       SYSCLK/2
#endif

#ifndef PWM_STEPS
    #define PWM_STEPS   256
#endif


/**
 * \brief A function to calculate the prescaler value corresponding to a given frequency.
 * 
 * \param fout      Frequency
 *
 *  \return A result code
 *  \retval -1          Impossible frequency value
 *  \retval others      Calculated prescaler value
 *
 */
int8_t choose_prescaler(uint32_t fout);


/**
 * \brief A function to configure timer T2 to count at a given frequency.
 * 
 * \param freq      Frequency
 *
 *  \return A result code
 *  \retval 0       Configuration was successfull
 *  \retval -1      Impossible frequency value
 *
 */
int8_t timer2_config(uint32_t freq);


/**
 * \brief A function to configure timer T2 to count at a given frequency with interrupts.
 * 
 * \param freq      Frequency
 *
 *  \return A result code
 *  \retval 0       Configuration was successfull
 *  \retval -1      Impossible frequency value
 *
 */
int8_t timer2_config_int(uint32_t freq);


/**
 * \brief A function to configure timer T2 to generate a PWM signal.
 * 
 * \param freq          Frequency
 * \param dutyCycle     Duty cycle in range [0 - (PWM_STEPS-1)]
 * \param pin           Output compare pin from OC1 to OC5
 *
 *  \return A result code
 *  \retval 0       Configuration was successfull
 *  \retval -1      Impossible frequency value
 *  \retval -2      Invalid duty cycle value
 *  \retval -3      Invalid output compare pin
 *
 */
int8_t timer2_config_pwm(uint32_t freq, uint8_t dutyCycle, uint8_t pin);


/**
 * \brief A function to set the duty cycle of the PWM signal generated by timer T2.
 * 
 * \param dutyCycle     Duty cycle in range [0 - (PWM_STEPS-1)]
 * \param pin           Output compare pin from OC1 to OC5
 *
 *  \return A result code
 *  \retval 0       Configuration was successfull
 *  \retval -1      Invalid duty cycle value
 *  \retval -2      Invalid output compare pin
 *
 */
int8_t timer2_set_pwm(uint8_t dutyCycle, uint8_t pin);


/**
 * \brief A function to start timer T2.
 *
 */
void timer2_start(void);


/**
 * \brief A function to stop timer T2.
 *
 */
void timer2_stop(void);


#endif