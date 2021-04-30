/**
 * @file activity4.h
 * @author Shirisha
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _ACTIVITY4_H
#define _ACTIVITY4_H

#include <avr/io.h>
#include <util/delay.h>

/**
 * @brief A program to initialize the UART serial communication
 * 
 * @param ubrr_value 
 */
void UARTinit(uint16_t ubrr_value);

/**
 * @brief A function to read characters coming from other UART port
 * 
 * @return char 
 */
char UARTreadchar();

/**
 * @brief A function to write characters to send it to other UART port
 * 
 * @param data 
 */
void UARTwritecharacter(char data);

#endif 