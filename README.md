# Arduino sketch of 7-segment jewelry for changing display data

This repository describes the Arduino sketch of 7-segment jewelry for changing display data and how to change it.

## What is 7-segment jewelry

7-segment jewelry is a jewelry material using 7-segment LED.
It light with a coin cell battery and has a microcontroller to control the display.
It can be used for about 4 hours with CR1025 battery.

Video: https://youtu.be/uekWH8jEsWw

## How to change display pattern

The change of the display pattern needs knowledge of elementary electronics.
In this work, the firmware of the microcontroller does not change and only the display pattern in EEPROM being changed.
Therefore, even if the work fails, you can repeat until it succeeds. 

### Tools

- ArduinoUNO
- Bread board
- IC clips (2pcs)
- 3kΩ resistor
- 2kΩ resistor
- New CR1025 battery

### Connection

Please connect as shown below. 
Before start changing, connect only GND (black clip) to the 7-segment jewelry. Do not insert batteries yet.

![Wiring diagram](https://github.com/oks486/7segmentJewelry/blob/image/7seg_connect.png)

### Display data change procedure

1. Download Arduino sketch in this repository and open it with ArduinoIDE. 
2. Change the display data according to the explanation in the sketch.
3. Write the sketch to Arduino once in the state of the above wiring diagram (Arduino and 7-segment jewelry are connected only to GND).
4. Set the battery, connect the other IC clip (blue clip) and press the Arduino reset button while the dot segment is lit (about 10 seconds). 
5. Then process begins. During pattern changing while the dot is lit. When process is completed, the dot blinks three times, and display with new pattern will start. 

I think 10 seconds are enough room, so let's calm down without panic!
Unfortunately, if it did not change as intended, please check the wiring and make sure that the metal part of the 7-segment jewelry is not touching another one and repeat the procedure of 3. 

