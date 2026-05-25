int potpin=A2;
int gpin=6;
int potvalue;
float LEDval;

void setup() {
  pinMode(potpin, INPUT);
  pinMode(gpin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  potvalue=analogRead(potpin);
  LEDval=(255./1023.)*potvalue;
  analogWrite(gpin,LEDval);
 

}
