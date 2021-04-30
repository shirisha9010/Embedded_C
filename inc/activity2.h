/**
 * @file activity2.h
 * @author Shirisha 
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef ACTIVITY2_H_INCLUDED
#define ACTIVITY2_H_INCLUDED

#include<avr/io.h>

/**
 * @brief to read the adc values
 * 
 */
uint16_t ReadADC(uint8_t ch);

/**
 * @brief initialise the analog to digital converter
 * 
 */
void InitADC();

#endif // ACTIVITY2_H_INCLUDED