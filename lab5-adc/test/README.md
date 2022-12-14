# Lab 5: Mikuláš Fyman

### Analog-to-Digital Conversion

1. Complete table with voltage divider, calculated, and measured ADC values for all five push buttons.

   | **Push button** | **PC0[A0] voltage** | **ADC value (calculated)** | **ADC value (measured)** | **ADC value (measured, hex)** |
   | :-: | :-: | :-: | :-: | :-: |
   | Right  | 0&nbsp;V | 0   | 0 | 0 |
   | Up     | 0.495&nbsp;V | 101 | 99 | 0x63 |
   | Down   | 1.203&nbsp;V | 246 | 256 | 0x100 |
   | Left   | 1.969&nbsp;V | 403 | 409 |0x199 |
   | Select | 3.181&nbsp;V | 651 | 639 | 0x27f |
   | none   | 5&nbsp;V | 1023 | 1023 | 0x3ff |



### Temperature meter

Consider an application for temperature measurement. Use analog temperature sensor [TC1046](http://ww1.microchip.com/downloads/en/DeviceDoc/21496C.pdf), LCD, and a LED. Every 30 seconds, the temperature is measured and the value is displayed on LCD screen. When the temperature is too high, the LED will turn on.

2. Draw a schematic of temperature meter. The image can be drawn on a computer or by hand. Always name all components and their values.

  <img width="681" alt="image" src="https://user-images.githubusercontent.com/99393884/199298008-89b7ca85-8b67-422d-b405-b898a50f5ef0.png">

3. Draw two flowcharts for interrupt handler `TIMER1_OVF_vect` (which overflows every 1&nbsp;sec) and `ADC_vect`. The image can be drawn on a computer or by hand. Use clear descriptions of the individual steps of the algorithms.

  <img width="741" alt="image" src="https://user-images.githubusercontent.com/99393884/199297964-8e7944a5-a000-4a08-ae68-accfffc72210.png">
