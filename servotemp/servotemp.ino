#include <Servo.h>

Servo myServo;

int ldrPin = A4;
int ldrValue = 0;
int servoAngle = 0;

void setup() {
  Serial.begin(9600);

  myServo.attach(9);
}

void loop() {

  // Read light value
  ldrValue = analogRead(ldrPin);

  // Print light value
  Serial.println(ldrValue);

  // Check light level and move servo
  if (ldrValue > 800) {
    servoAngle = 0;
  }
  else if (ldrValue > 600) {
    servoAngle = 45;
  }
  else if (ldrValue > 400) {
    servoAngle = 90;
  }
  else if (ldrValue > 200) {
    servoAngle = 135;
  }
  else {
    servoAngle = 180;
  }

  // Move servo
  myServo.write(servoAngle);

  delay(100);
}