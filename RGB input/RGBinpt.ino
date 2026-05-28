String color;

void setup() {
  Serial.begin(9600);

  pinMode(13, OUTPUT);   // Red LED
  pinMode(12, OUTPUT);   // Green LED
  pinMode(8, OUTPUT);  // Blue LED

  Serial.println("Type red, green or blue:");
}

void loop() {

  if (Serial.available() > 0) {

    color = Serial.readString();
    color.trim(); // removes extra spaces/newline

    // Turn OFF all LEDs first
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);

    if (color == "red") {
      digitalWrite(13, HIGH);
      delay(5000);
      digitalWrite(13, LOW);
      Serial.println("Red LED ON");
    }

    else if (color == "green") {
      digitalWrite(12, HIGH);
      delay(5000);
      digitalWrite(12, LOW);
      Serial.println("Green LED ON");
    }

    else if (color == "blue") {
      digitalWrite(8, HIGH);
      delay(5000);
      digitalWrite(8, LOW);
      Serial.println("Blue LED ON");
    }

    else {
      Serial.println("Invalid input! Type red, green or blue");
    }
  }
}