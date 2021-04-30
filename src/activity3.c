/**
 * @file activity3.c
 * @author Shirisha
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<avr/io.h>
#include"activity3.h"

/**
 * @brief A function which receives 10 bit of ADC input from temperature sensor and outputs as a fast PWM waveform.
 * 
 * @param val
 * @return char
 */
char PWM(uint16_t val){

    char temperature;

    if((val>=0) && (val<=209)){
        //20% duty cycle
        OCR1A = 205;
        temperature = 20;
        _delay_ms(20);
    }
    else if((val>=210) && (val<=509)){
        //40% duty cycle
        OCR1A = 410;
        temperature = 25;
        _delay_ms(20);
    }
    else if((val>=510) && (val<=709)){
        //70% duty cycle
        OCR1A = 717;
        temperature = 29;
        _delay_ms(20);
    }
    else if((val>=710) && (val<=1024)){
        //95% duty cycle
        OCR1A = 973;
        temperature = 33;
        _delay_ms(20);
    }
    else{
        //0% output
        OCR1A = 0;
        temperature = 0;
    }
    return temperature;

}