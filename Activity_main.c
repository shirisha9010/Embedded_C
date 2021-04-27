/**
 * @file main.c
 * @author HanumaKumar G ()
 * @brief 
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include <avr/io.h>
#include<util/delay.h>
/**
 * @brief By using the button sensor turn on the heater sensor that turn on heater sensor shows by LED
 * 
 * @return int 
 */
int main(void)
{

  /**
   * @brief Main Code
   * 
   */

 DDRB|=(1<<PB0); //Set B0=1 for led
 DDRD &=~(1<<PD0); // clear bit 0 of DDR D
 PORTD |=(1<<PD0); //set bit 0 of PORT D
 DDRD &=~(1<<PD1); // clear bit 1 of DDR D
 PORTD |=(1<<PD1); //set bit 1 of PORT D
 while(1)
    {
      if(!(PIND&(1<<PD0))) // Checking if the input bit to 0th bit of pinD is made 0 from 1 by pressing led

       if((!PIND&(1<<PD1))) // Checking if the input bit to 1th bit of pinD is made 0 from 1 by pressing led
      {
        PORTB|=(1<<PB0);//make 0th bit of port B as 1, makes led glow
        _delay_ms(1000); // delay 
      }
        else
      {
          PORTB&=~(1<<PB0); // make led off
         _delay_ms(1000);
      }

      else
      {
        PORTB&=~(1<<PB0); // Make led off
        _delay_ms(1000);

      }

    }
    return 0;
  }

