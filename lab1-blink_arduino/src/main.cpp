/***********************************************************************
 * 
 * Blink a LED in Arduino-style and use function from the delay library.
 * ATmega328P (Arduino Uno), 16 MHz, PlatformIO
 *
 * Copyright (c) 2022 Tomas Fryza
 * Dept. of Radio Electronics, Brno University of Technology, Czechia
 * This work is licensed under the terms of the MIT license.
 * 
 **********************************************************************/


/* Defines -----------------------------------------------------------*/
#define LED_GREEN PB5   // PB5 is AVR pin where green on-board LED
#define LED_BLUE PB0   
                        // is connected
#define SHORT_DELAY 250 // Delay in milliseconds
#define LED_DELAY 500
#define LED2_DELAY 500
#define SPACE_DELAY 1000

#ifndef F_CPU
# define F_CPU 16000000 // CPU frequency in Hz required for delay funcs
#endif

/* Includes ----------------------------------------------------------*/
#include <avr/io.h>     // AVR device-specific IO definitions
#include <util/delay.h> // Functions for busy-wait delay loops


// -----
// This part is needed to use Arduino functions but also physical pin
// names. We are using Arduino-style just to simplify the first lab.
#include "Arduino.h"
#define PB5 13          // In Arduino world, PB5 is called "13"
#define PB0 8 
// -----


/* Function definitions ----------------------------------------------*/
/**********************************************************************
 * Function: Main function where the program execution begins
 * Purpose:  Toggle one LED and use delay library.
 * Returns:  none
 **********************************************************************/
int main(void)
{
  uint8_t led_value = LOW; 

    // Set pin where on-board LED is connected as output
  pinMode(LED_BLUE, OUTPUT);

    // Infinite loop
  while (1)
    {
      // Generate a lettre `A` Morse code
        led_value = HIGH; 
        digitalWrite(LED_BLUE, led_value);
         _delay_ms(250);
        led_value = LOW;
        digitalWrite(LED_BLUE, led_value);
         _delay_ms(500);
        led_value = HIGH;
        digitalWrite(LED_BLUE, led_value);
         _delay_ms(250);
        led_value = LOW; 
        digitalWrite(LED_BLUE, led_value);
         _delay_ms(1000);
  

        

    }

    // Will never reach this
    return 0;
}
