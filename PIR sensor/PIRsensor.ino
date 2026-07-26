int pirPin = 11;
int buzzerPin = 3;

void setup()
{
  pinMode(pirPin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  int motion = digitalRead(pirPin);

  if (motion == HIGH)
  {
    Serial.println("Motion Detected!");
    tone(buzzerPin, 1000);   // Play a 1000 Hz tone
  }
  else
  {
    Serial.println("No Motion");
    noTone(buzzerPin);       // Stop the buzzer
  }

  delay(100);
}
