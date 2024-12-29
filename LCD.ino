#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Initialize the LCD with the I2C address (adjust 0x27 if needed)
LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup() {
  // Initialize the LCD
  lcd.init();
  lcd.backlight(); // Turn on the backlight

  // Display messages on the LCD
  lcd.setCursor(0, 0); // Set cursor to column 0, row 0
  lcd.print("Hello, Sir");

  lcd.setCursor(0, 1); // Set cursor to column 0, row 1
  lcd.print("Limon, Sayeed");

  lcd.setCursor(0, 2); // Set cursor to column 0, row 2
  lcd.print("Titas, Tiyan");

  lcd.setCursor(0, 3); // Set cursor to column 0, row 3
  lcd.print("Ripon");
}

void loop() {
  // No code needed in the loop for this example
}
