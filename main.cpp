#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h> // LCD I2C added
LiquidCrystal_I2C lcd(0x27, 16, 2); // Child of LCD
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2); // Lcd started
  lcd.backlight(); // LCD back light on
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0, 0);
  lcd.print("Seconds");
  lcd.setCursor(1, 1);
  lcd.print("Hello");
  lcd.print(millis() / 1000);
}
