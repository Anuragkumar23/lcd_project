#include <Wire.h> 

#include <LiquidCrystal_I2C.h>
// Set the LCD address to 0x27 for a 16 chars and 2 line display
// SDA - A4
// SCL - A5

LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup()
{
  lcd.begin();
  lcd.backlight();
}

void loop()
{
   lcd.setCursor(0,0);
   lcd.print(" panchal raj ");
   lcd.setCursor(0,1);
   lcd.print("M 9313734407");
  // Do nothing here...
}
