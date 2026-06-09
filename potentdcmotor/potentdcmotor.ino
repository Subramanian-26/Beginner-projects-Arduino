int en = 9;
int in1 = 7;
int in2 = 8;

int speedPot = A1;
int directionPot = A2;
int pushButton = 2;

bool motorState = false; // Motor initially OFF
bool lastButtonState = HIGH;

void setup() {

  pinMode(en, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

  pinMode(pushButton, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop() {

  bool buttonState = digitalRead(pushButton);

  // Toggle motor ON/OFF
  if (buttonState == LOW && lastButtonState == HIGH) {
    motorState = !motorState;
    delay(200); // debounce
  }

  lastButtonState = buttonState;

  // Motor ON
  if (motorState) {

    // Read speed potentiometer
    int speedValue = analogRead(speedPot);

    // Convert 0–1023 to 0–255 without map()
    int motorSpeed = speedValue / 4;

    analogWrite(en, motorSpeed);

    // Read direction potentiometer
    int directionValue = analogRead(directionPot);

    // Forward direction
    if (directionValue < 512) {

      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);

      Serial.print("Motor: ON | ");
      Serial.print("Direction: Forward | ");
      Serial.print("Speed: ");
      Serial.println(motorSpeed);
    }

    // Reverse direction
    else {

      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);

      Serial.print("Motor: ON | ");
      Serial.print("Direction: Reverse | ");
      Serial.print("Speed: ");
      Serial.println(motorSpeed);
    }
  }

  // Motor OFF
  else {

    analogWrite(en, 0);
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);

    Serial.println("Motor: OFF");
  }

  delay(300);
}
