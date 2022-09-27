# Lab 1: Mikulas Fyman

### Morse code

1. Listing of C code which repeats one "dot" and one "comma" (BTW, in Morse code it is letter `A`) on a LED. Always use syntax highlighting, meaningful comments, and follow C guidelines:

```c
#define PB0 8
#define LED_BLUE PB0
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
```

2. Scheme of Morse code application, i.e. connection of AVR device, LED, resistor, and supply voltage. The image can be drawn on a computer or by hand. Always name all components and their values!

  <img width="227" alt="image" src="https://user-images.githubusercontent.com/99393884/192468955-0c2b22c3-1307-4821-98a8-e7f77d33b44d.png">
