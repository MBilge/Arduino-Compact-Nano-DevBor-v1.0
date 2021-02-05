// in this version all the lcd functions are wroking properly. keypad function is not included.

#include <Wire.h>
#include "LCD_I2C.h"

#define I2CADDR 0x27

LCD_I2C lcd(I2CADDR);

void setup() {

  lcd.begin(16, 2);
  lcd.display();
  lcd.clear();
  lcd.setCursor(0, 0);lcd.print("Compact Nano BRD");
  lcd.setCursor(0, 1);lcd.print("Counting: ");

}

void loop() {
  
  lcd.setCursor(10, 1);
//   print the number of seconds since reset:
  lcd.print(millis()/1000);
  
}
