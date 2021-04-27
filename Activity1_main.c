/**
 * @file Activity1_main.c
 * @author shirisha ()
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
DDRC|=(1<<PC0);
DDRB&=~(1<<PB0); // CLEAR PB0
PORTB|=(1<<PB0); // SET PBO=1
DDRD&=~(1<<PD0); // CLEAR BIT
PORTD|=(1<<PD0); //SET BIT PD0=1

    while(1)
    {
        if(!(PIND&(1<<PD0))) //when a person seats
        { if(!(PINB&(1<<PB0))) //A person ON the button
             PORTC|=(1<<PC0); // LED ON
          else
            PORTC&=~(1<<PC0); // LED OFF

        }
        else{
           PINC&=~(1<<PC0); //LED OFF

        }
    }

  return 0;
}
