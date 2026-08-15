# Active Buzzer

## Description

This project controls an active buzzer using a potentiometer and Arduino. The buzzer turns ON or OFF depending on the potentiometer position. When the potentiometer value crosses a set threshold, the buzzer activates. If the value falls below the threshold, the buzzer turns OFF.

## Working Principle

The Arduino reads analog values from the potentiometer connected to an analog pin.

- The potentiometer provides values ranging from **0 → 1023**
- The Arduino continuously checks the potentiometer value
- **If value > 500** → Active buzzer turns **ON**
- **If value ≤ 500** → Buzzer turns **OFF**
- The potentiometer value is also displayed in the Serial Monitor for monitoring purposes

## Components Required

- Arduino Uno
- Active Buzzer
- Potentiometer (10kΩ)
- Jumper Wires

## Pin Connections

| Component | Arduino Pin |
|-----------|------------|
| Potentiometer (middle) | A2 |
| Potentiometer (side 1) | 5V |
| Potentiometer (side 2) | GND |
| Buzzer (+) | Pin 13 |
| Buzzer (-) | GND |

## Circuit Diagram

![Circuit Diagram](circuit.png)

## Schematic

![Schematic](schematic.png)

### ASCII Buzzer and Potentiometer Layout

```
Potentiometer Connection:
├─ 5V
├─ A2 (to Arduino)
└─ GND

Active Buzzer Connection:
                    Arduino Uno
                    ┌─────────────┐
        A2      ────┤ A2          │
        (Pot)       │             │
                    │             │
        Pin 13  ────┤ 13          │
        (Buzzer)    │             │
                    │       GND ──┤────────┐
                    │             │        │
                    └─────────────┘        │
                                          │
    Breadboard:                           │
    ┌────────────────────────────────┐   │
    │  Buzzer(+) ●                  │   │
    │       │                        │   │
    │       └──────────────────────┬─┼───┤ GND
```

**Note:** The circuit diagram image (circuit.png) should be placed in the same folder as this README.

## Features

- Controls an active buzzer using a potentiometer
- Reads analog input using `analogRead()`
- Uses conditional statements for buzzer control
- Displays potentiometer values in Serial Monitor
- Beginner-friendly Arduino project
- Demonstrates analog input and digital output concepts

## Applications

- Alarm systems
- Threshold-based warning systems
- Sensor-based alert systems
- Beginner embedded systems practice
- Learning analog and digital interfacing

## Code Summary

```cpp
const int potPin = A2;   // Potentiometer input
const int buzzerPin = 13; // Buzzer output

void setup() {
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(potPin);
  
  Serial.print("Potentiometer Value: ");
  Serial.println(potValue);
  
  if (potValue > 500) {
    digitalWrite(buzzerPin, HIGH);  // Buzzer ON
  } else {
    digitalWrite(buzzerPin, LOW);   // Buzzer OFF
  }
  
  delay(100);
}
```

## Expected Output

- Serial Monitor displays potentiometer values (0-1023)
- Buzzer sounds when potentiometer value exceeds 500
- Buzzer stops when potentiometer value drops below 500

---

**Author**: Beginner Arduino Projects  
**Difficulty Level**: Beginner ⭐
