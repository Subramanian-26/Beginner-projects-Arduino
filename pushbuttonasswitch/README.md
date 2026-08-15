# Push Button as Switch

## Description

This project demonstrates how to use a push button with Arduino to control an LED using `digitalRead()`. The LED turns ON when the button input becomes LOW and turns OFF when the input is HIGH. This is a fundamental project for understanding digital input and output.

## Working Principle

The Arduino reads the state of a push button connected to a digital input pin using `digitalRead()`.

- **When button input is LOW (0)** → Arduino turns the LED **ON**
- **When button input is HIGH (1)** → Arduino turns the LED **OFF**
- The button state is also displayed in the Serial Monitor for debugging and monitoring
- The system continuously checks the button state in the `loop()` function

## Components Required

- Arduino Uno
- Push Button
- LED (any color)
- 220Ω Resistor (for LED)
- 10kΩ Resistor (pull-up for button, or use INPUT_PULLUP)
- Breadboard
- Jumper Wires

## Pin Connections

| Component | Arduino Pin |
|-----------|------------|
| Push Button | Pin 2 |
| LED (positive through 220Ω) | Pin 13 |
| LED (negative) | GND |

## Circuit Diagram

![Circuit Diagram](circuit.png)

## Schematic

![Schematic](schematic.png)

### ASCII Button and LED Layout

```
Push Button Connection:
┌────────────────────┐
│  Button            │
│   │────────┐       │
│   │        │       │
│   GND      Pin 2   │
│            (INPUT_PULLUP)
└────────────────────┘

LED Control:
                    Arduino Uno
                    ┌─────────────┐
        Pin 2   ────┤ 2 (Button)  │
                    │             │
        Pin 13  ────┤ 13 (LED)    │
                    │             │
                    │       GND ──┤────────┐
                    │             │        │
                    └─────────────┘        │
                                          │
    Breadboard:                           │
    ┌────────────────────────────────┐   │
    │  Button    LED                 │   │
    │   ●        ●(+)                │   │
    │   │        │                   │   │
    │   │        ├──220Ω─────────────┼───┤ GND
    │   │        │                   │   │
    │   └────────┴───────────────────┘   │
    │                                    │
    └────────────────────────────────────┘
```

**Note:** The circuit diagram image (circuit.png) should be placed in the same folder as this README.

## Features

- Reads push button input using `digitalRead()`
- Controls LED based on button state
- Displays button values in Serial Monitor
- Beginner-friendly Arduino project
- Demonstrates basic digital input and output concepts
- No external pull-up resistor needed with INPUT_PULLUP

## Applications

- Learning digital input/output in Arduino
- Understanding push button interfacing
- Beginner embedded systems practice
- Foundation for switch-based automation systems
- Educational electronics project

## Code Summary

```cpp
const int buttonPin = 2;
const int ledPin = 13;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);  // Use internal pull-up
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  
  Serial.print("Button: ");
  Serial.println(buttonState);
  
  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH);  // LED ON
  } else {
    digitalWrite(ledPin, LOW);   // LED OFF
  }
  
  delay(100);
}
```

## Expected Output

- Serial Monitor displays button state (0 or 1)
- LED turns ON when button is pressed (LOW)
- LED turns OFF when button is released (HIGH)

## Troubleshooting

| Problem | Solution |
|---------|----------|
| LED doesn't respond | Check button connections and pull-up resistor |
| Logic inverted | Use INPUT_PULLUP for normal operation |
| Button bouncing | Add debounce delay in code |

---

**Author**: Beginner Arduino Projects  
**Difficulty Level**: Beginner ⭐
