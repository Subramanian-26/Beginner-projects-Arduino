int buttonPin = 12;
int ledPin = 7;

int buttonNew;
int buttonOld = 0;
int ledState = 0;

void setup() {
  Serial.begin(9600);
  
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  buttonNew = digitalRead(buttonPin);

  // Print button value
  Serial.println(buttonNew);

  // Check if button is pressed
  if (buttonNew == HIGH && buttonOld == LOW) {

    // Toggle LED
    if (ledState == 0) {
      ledState = 1;
    } 
    else {
      ledState = 0;
    }

    digitalWrite(ledPin, ledState);

    delay(200); // Small delay to avoid multiple presses
  }

  buttonOld = buttonNew;
}