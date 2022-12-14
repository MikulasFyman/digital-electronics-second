# Lab 2: Mikuláš Fyman

### GPIO control registers

1. Complete the table for DDRB and PORTB control register values.

   | **DDRB** | **PORTB** | **Direction** | **Internal pull-up resistor** | **Description** |
   | :-: | :-: | :-: | :-: | :-- |
   | 0 | 0 | input | no | Tri-state, high-impedance |
   | 0 | 1 |input | yes | |
   | 1 | 0 | output| no | |
   | 1 | 1 | output| yes| |

### GPIO library

2. Complete the table with code sizes from three versions of the blink application.

   | **Version** | **Size [B]** |
   | :-- | :-: |
   | Arduino-style     | 480 |
   | Registers         | 172 |
   | Library functions | 178 |

### Traffic light

3. Scheme of traffic light application with one red/yellow/green light for cars, one red/green light for pedestrians, and one push button. Connect AVR device, LEDs, resistors, push button (for pedestrians), and supply voltage. The image can be drawn on a computer or by hand. Always name all components and their values!

   <img width="620" alt="image" src="https://user-images.githubusercontent.com/99393884/195159696-6b239d93-0c2a-4dc9-b060-9357a74b94dd.png">
