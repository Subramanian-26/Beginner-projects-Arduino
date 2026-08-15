# Push Button Toggle LED

## Description

This project demonstrates how to use a push button as a toggle switch using Arduino. The LED changes its state every time the push button is pressed. The project uses `digitalRead()` to detect button presses and stores previous button states to prevent repeated toggling while holding the button.

## Working Principle

The Arduino reads the push button state using `digitalRead()`.

- `buttonNew` stores the **current button state**
- `buttonOld` stores the **previous button state**
- The Arduino checks if the button changes from **LOW to HIGH**, indicating a new button press
- When a press is detected, the LED state toggles between **ON** and **OFF**
- The button value is also displayed in the Serial Monitor for monitoring and debugging
- The process continuously repeats inside the `loop()` function

## Components Required

- Arduino Uno
- Push Button
- LED (any color)
- 220Ω Resistor (for LED)
- 10kΩ Resistor (pull-up, or use INPUT_PULLUP)
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

### ASCII Toggle Button Layout

```
Push Button Connection:
┌────────────────────┐
│  Button            │
│   │────────┐       │
│   │        │       │
│   GND      Pin 2   │
│            (INPUT_PULLUP)
└────────────────────┘

Toggle LED Circuit:
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

## Toggle Logic

```
Button Press Sequence:
1st Press  → LED turns ON
2nd Press  → LED turns OFF
3rd Press  → LED turns ON
4th Press  → LED turns OFF
... (continues)
```

## Features

- Uses push button as a toggle switch
- LED turns ON/OFF with each button press
- Prevents repeated toggling while holding the button
- Displays button state in Serial Monitor
- Beginner-friendly Arduino project
- Demonstrates digital input and output concepts
- Implements state-based logic

## Applications

- Learning button debouncing techniques
- Understanding state-based control
- Beginner embedded systems practice
- Foundation for switch-based automation systems
- Educational electronics demonstration project

## Code Summary

```cpp
const int buttonPin = 2;
const int ledPin = 13;

int ledState = LOW;
int buttonNew = HIGH;
int buttonOld = HIGH;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  buttonNew = digitalRead(buttonPin);
  
  // Detect button press (transition from HIGH to LOW)
  if (buttonNew == LOW && buttonOld == HIGH) {
    ledState = !ledState;  // Toggle LED
    digitalWrite(ledPin, ledState);
    Serial.println(ledState ? "LED ON" : "LED OFF");
    delay(100);  // Debounce
  }
  
  buttonOld = buttonNew;
  delay(50);
}
```

## Expected Output

- Serial Monitor displays "LED ON" or "LED OFF" with each button press
- LED toggles state with each button press
- No repeated toggling while button is held

## Troubleshooting

| Problem | Solution |
|---------|----------|
| LED doesn't toggle | Check button and LED connections |
| Multiple toggles per press | Increase debounce delay |
| Logic inverted | Adjust if/else conditions |

## Variations

- Add multiple buttons for different control functions
- Use different pins for multiple LEDs
- Implement long-press vs short-press detection
- Add buzzer for feedback

---

**Author**: Beginner Arduino Projects  
**Difficulty Level**: Beginner to Intermediate ⭐⭐
