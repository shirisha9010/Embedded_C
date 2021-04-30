/**
 * @file activity3.h
 * @author Shirisha 
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _ACTIVITY3_H
#define _ACTIVITY3_H

#include<avr/io.h>
#include <util/delay.h>

/**
 * @brief A function which receives 10 bit of ADC input from temperature sensor and outputs as a fast PWM waveform.
 * 
 * @param ADC_val 
 */
char PWM(uint16_t ADC_val);

#endif 