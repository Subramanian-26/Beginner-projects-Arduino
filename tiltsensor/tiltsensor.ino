int tiltPin = 2;
int redPin = 13;
int greenpin=12;

int tiltValue;

void setup() {
  pinMode(tiltPin, INPUT_PULLUP);
  pinMode(redPin, OUTPUT);
  pinMode(greenpin,OUTPUT);
  Serial.begin(9600);
}

void loop() {

  tiltValue = digitalRead(tiltPin);
  Serial.println(tiltValue);

  if (tiltValue == LOW) {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenpin, LOW);
  }

  else {
    digitalWrite(redPin, LOW);
     digitalWrite(greenpin, HIGH);
  }

  delay(100);
}