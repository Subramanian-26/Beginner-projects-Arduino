# Blinking LED

## Description

This project demonstrates how to blink the built-in LED on the Arduino Uno board using Arduino programming. The LED turns ON and OFF repeatedly with a fixed delay, creating a blinking effect. It is one of the most basic and beginner-friendly Arduino projects.

## Working Principle

The Arduino Uno has a built-in LED connected to digital pin 13.

The program sends:
- **HIGH signal** → LED turns ON
- **LOW signal** → LED turns OFF

A delay is added between ON and OFF states to make the blinking visible. The process repeats continuously in a loop.

## Components Required

- Arduino Uno
- USB Cable
- Arduino IDE

## Pin Connection

| Component | Arduino Pin |
|-----------|------------|
| Built-in LED | Pin 13 (on-board) |

## Circuit Diagram

![Circuit Diagram](circuit.png)

## Schematic

![Schematic](schematic.png)

### Pin 13 Built-in LED Circuit

```
┌──────────────────────────┐
│      Arduino Pin 13      │──→ ●(LED) ──GND
│    (HIGH = LED ON)       │
│    (LOW = LED OFF)       │
└──────────────────────────┘
```

**Note:** The circuit diagram image (circuit.png) should be placed in the same folder as this README.

## Features

- Simple beginner-friendly Arduino project
- Uses the built-in LED (no external components required)
- Demonstrates digital output control
- Helps understand Arduino programming basics
- Easy to modify with different blinking patterns

## Applications

- Learning Arduino basics
- Understanding digital output control
- Beginner embedded systems practice
- Testing Arduino board functionality
- Foundation for LED-based projects

## Code Summary

```cpp
void setup() {
  pinMode(13, OUTPUT);  // Set pin 13 as output
}

void loop() {
  digitalWrite(13, HIGH);  // LED ON
  delay(1000);             // Wait 1 second
  digitalWrite(13, LOW);   // LED OFF
  delay(1000);             // Wait 1 second
}
```

## Expected Output

The built-in LED on the Arduino board will blink on and off every 1 second.

## Troubleshooting

| Problem | Solution |
|---------|----------|
| LED doesn't blink | Check USB connection and board selection in Arduino IDE |
| LED always on | Verify the delay values are correct |
| LED always off | Check if correct board type is selected in Tools menu |

---

**Author**: Beginner Arduino Projects  
**Difficulty Level**: Beginner ⭐
