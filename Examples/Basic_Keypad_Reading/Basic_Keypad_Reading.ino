#include <Wire.h>
#include "Keypad_I2C.h"

#define I2CADDR 0x27

const byte ROWS = 4; //four rows
const byte COLS = 4; //three columns
char keys[ROWS][COLS] = {
  {'1','2','3','*'},
  {'4','5','6','/'},
  {'7','8','9','-'},
  {'.','0','=','+'}
};
// Pin connections on MCP23017 for keys
 byte rowPins[] = {3,2,1,0}; //connections of the row pinouts of the keypad
 byte colPins[] = {4,5,6,7}; //connections of the column pinouts of the keypad
 
Keypad_I2C keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS,I2CADDR);

void setup() {
  Serial.begin(9600);
  keypad.begin( );
  Serial.print("Compact Nano Board v1.0 Key Reading Test...");
}


void loop() {
   char key = keypad.getKey();
  
  if (key){
    Serial.println(key);
  }
}
