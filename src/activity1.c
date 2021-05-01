/**
 * @file activity1.c
 * @author SHIRISHA
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include <util/delay.h>
#include "activity1.h"

/**
 * @brief A function to operate the button and heater sensor
 * 
 */
void Buttons_LED_Init()
{
     /*Configure LED and Switch pins*/
DDRB|=(1<<PB0);
DDRD&=~(1<<PD0); //clear bit 6 of DDR B
PORTD|=(1<<PD0); //Set bit 6 of Port B
DDRD&=~(1<<PD1); //clear bit 7 of DDR B
PORTD|=(1<<PD1);
}
}
