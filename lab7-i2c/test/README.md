# Lab 7: Mikuláš Fyman

### Arduino Uno pinout

1. In the picture of the Arduino Uno board, mark the pins that can be used for the following functions/operations:
   * PWM generators from Timer0, Timer1, Timer2
   * analog channels for ADC
   * UART pins
   * I2C pins
   * SPI pins
   * external interrupt pins INT0, INT1

   <img width="1166" alt="image" src="https://user-images.githubusercontent.com/99393884/201994263-972ba306-a359-4b26-be08-f5699378d556.png">

### I2C communication

2. Draw a timing diagram of I2C signals when calling function `rtc_read_years()`. Let this function reads one byte-value from RTC DS3231 address `06h` (see RTC datasheet) in the range `00` to `99`. Specify when the SDA line is controlled by the Master device and when by the Slave device. Draw the whole request/receive process, from Start to Stop condition. The image can be drawn on a computer (by [WaveDrom](https://wavedrom.com/) for example) or by hand. Name all parts of timing diagram.

  <img width="989" alt="image" src="https://user-images.githubusercontent.com/99393884/201991238-719bc876-bbe3-4bcc-85b8-38fe8baeccad.png">

### Meteo station

Consider an application for temperature and humidity measurements. Use sensor DHT12, real time clock DS3231, LCD, and one LED. Every minute, the temperature, humidity, and time is requested from Slave devices and values are displayed on LCD screen. When the temperature is above the threshold, turn on the LED.

3. Draw a flowchart of `TIMER1_OVF_vect` (which overflows every 1&nbsp;sec) for such Meteo station. The image can be drawn on a computer or by hand. Use clear description of individual algorithm steps.

  <img width="364" alt="image" src="https://user-images.githubusercontent.com/99393884/201991319-4ce25a67-bd13-4d66-b713-7a1aa75ec1be.png">
