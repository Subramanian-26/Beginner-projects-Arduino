int redPin = 11;
int bluePin = 10;
int greenPin = 9;

String color;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  Serial.begin(9600);
  Serial.println("Enter a color:");
}

void loop() {

  if (Serial.available() > 0) {

    color = Serial.readString();
    color.trim();

    if (color == "red") {
      analogWrite(redPin, 255);
      analogWrite(greenPin, 0);
      analogWrite(bluePin, 0);
    }

    else if (color == "green") {
      analogWrite(redPin, 0);
      analogWrite(greenPin, 255);
      analogWrite(bluePin, 0);
    }

    else if (color == "blue") {
      analogWrite(redPin, 0);
      analogWrite(greenPin, 0);
      analogWrite(bluePin, 255);
    }

    else if (color == "yellow") {
      analogWrite(redPin, 255);
      analogWrite(greenPin, 255);
      analogWrite(bluePin, 0);
    }

    else if (color == "purple") {
      analogWrite(redPin, 255);
      analogWrite(greenPin, 0);
      analogWrite(bluePin, 255);
    }

    else if (color == "cyan") {
      analogWrite(redPin, 0);
      analogWrite(greenPin, 255);
      analogWrite(bluePin, 255);
    }

    else if (color == "white") {
      analogWrite(redPin, 255);
      analogWrite(greenPin, 255);
      analogWrite(bluePin, 255);
    }

    else {
      Serial.println("Invalid color");
    }
  }
}