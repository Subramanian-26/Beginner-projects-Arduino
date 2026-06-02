int buzzer = 13;
int potPin = A2;
int potValue = 0;

void setup() {
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  potValue = analogRead(potPin);

  Serial.println(potValue);

  if (potValue > 500) {
    digitalWrite(buzzer, HIGH);
  }
  else {
    digitalWrite(buzzer, LOW);
  }

  delay(1000);
}