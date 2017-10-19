/* 
 *  Arduino sketch of writing display data to 7-segment jewelry
 *  Author: oks486
 */

// Macro of single segment control (Do not change)
#define BLANK   0b00000000  // blank

#define SEG_A   0b01000000
#define SEG_B   0b10000000
#define SEG_C   0b00100000
#define SEG_D   0b00010000
#define SEG_E   0b00001000
#define SEG_F   0b00000100
#define SEG_G   0b00000010
#define SEG_DOT 0b00000001

// Macro of numerial digit control (Do not change)
#define NUM_0   0b11111100
#define NUM_1   0b10100000
#define NUM_2   0b11011010
#define NUM_3   0b11110010
#define NUM_4   0b10100110
#define NUM_5   0b01110110
#define NUM_6   0b01111110
#define NUM_7   0b11100000
#define NUM_8   0b11111110
#define NUM_9   0b11110110
#define NUM_A   0b11101110
#define NUM_B   0b00111110
#define NUM_C   0b01011100
#define NUM_D   0b10111010
#define NUM_E   0b01011110
#define NUM_F   0b01001110

// Data of entering writing mode (Do not change)
unsigned char commandData[] = {'+','+','+'};

// Data of display to write (Edit here)
unsigned char dispData[] = {
      50,   
      // Wait
      // The number of wait is the waiting time until one data is displayed and
      // the next data is displayed. This value increases by 1, it becomes about
      // 10 ms longer. You can set up to 255.

      1,    
      // Mode (Do not change)

      11,   
      // Data length
      // The length of display data. Maximum length is 250.
      // If you set a number smaller than the actual number of display data,
      // the written data will not be displayed to the end. Conversely large
      // values will display unintended data. 
      //If the last data is finished displaying, it will be returned to the first data. 

      // Display data
      // Write using the macro above. Please refer to the example below.
      NUM_0,  // 0
      NUM_1,  // 1
      NUM_2,  // 2
      NUM_3,  // 3
      NUM_4,  // 4
      NUM_5,  // 5
      NUM_6,  // 6
      NUM_7,  // 7
      NUM_8,  // 8
      NUM_9,  // 9
      BLANK,  // (blank)

      // Ohter example
      // SEG_A | SEG_D | SEG_G,   // Segment a,d,g are lit.
      // NUM_0 | SEG_DOT,         // Numerical digit 0 and dot are lit
      };

// Do not change after this
void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < sizeof(commandData); i++) {
    Serial.write(commandData[i]);
    delay(10);
  }
  for (int i = 0; i < sizeof(dispData); i++) {
    Serial.write(dispData[i]);
    delay(10);
  }
  
  while(1);
}

