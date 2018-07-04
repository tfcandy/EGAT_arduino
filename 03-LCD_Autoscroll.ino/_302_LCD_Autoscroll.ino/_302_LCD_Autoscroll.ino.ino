/*****************************************************
 * Liquidcrystal LCD + I2C
 * Library: fdebrabander / https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library
 * Example: https://thaieasyelec.com/article-wiki/review-product-article/%E0%B8%81%E0%B8%B2%E0%B8%A3%E0%B9%83%E0%B8%8A%E0%B9%89%E0%B8%87%E0%B8%B2%E0%B8%99-character-lcd-display-%E0%B8%81%E0%B8%B1%E0%B8%9A-arduino-%E0%B8%95%E0%B8%AD%E0%B8%99%E0%B8%97%E0%B8%B5%E0%B9%882-%E0%B8%A3%E0%B8%B9%E0%B8%9B%E0%B9%81%E0%B8%9A%E0%B8%9A%E0%B8%81%E0%B8%B2%E0%B8%A3%E0%B9%80%E0%B8%8A%E0%B8%B7%E0%B9%88%E0%B8%AD%E0%B8%A1%E0%B8%95%E0%B9%88%E0%B8%AD%E0%B9%81%E0%B8%9A%E0%B8%9A-i2c.html
 * Connection
 * A4 - SDA
 * A5 - SCL
 * 
 */
 
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
char outlcd[40];


void setup() {
 // set up the LCD's number of columns and rows: 
 lcd.begin();
 strcpy(outlcd,"  Intel Galileo Gen 2");
 lcd.setCursor(0, 0); lcd.print(outlcd);
 lcd.setCursor(0, 1); lcd.print("  Siemens SIMATIC IOT2020");
}
void loop() {
 
 lcd.scrollDisplayLeft(); delay(800);
 
  
}

