#include <LiquidCrystal.h>

int rs = 7;
int en = 8;
int db4 = 9;
int db5 = 10;
int db6 = 11;
int db7 = 12;

LiquidCrystal lcd(rs, en, db4, db5, db6, db7);

int sensorPin = A0;

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop() {

  int sensorValue = analogRead(sensorPin);

  // Convert analog value to voltage
  float voltage = sensorValue * (5.0 / 1023.0);

  // Convert voltage to temperature in Celsius
  float temperatureC = (voltage - 0.5) * 100;

  // Serial Monitor output
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" C");

  // LCD output
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp in C:");

  lcd.setCursor(0, 1);
  lcd.print(temperatureC);
  lcd.print(" C");

  delay(1000);
}