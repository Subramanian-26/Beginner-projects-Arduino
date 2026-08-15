# Binary Counter

## Description

This project is a 4-bit binary counter using Arduino and LEDs. The LEDs display binary numbers from 0 to 15 continuously with a delay between each count. Each LED represents one binary bit, demonstrating the fundamentals of binary number systems.

## Working Principle

The Arduino sends HIGH and LOW signals to 4 LEDs connected to digital output pins.

- Each LED represents one binary bit
- The LEDs glow in combinations to represent numbers in binary form
- The count increases from:
  - `0000` → Decimal 0
  - to `1111` → Decimal 15
- After reaching 15, the counter resets back to 0 and repeats

## Components Required

- Arduino Uno
- 4 LEDs (any color)
- 4 × 220Ω Resistors
- Breadboard
- Jumper Wires

## Pin Connections

| LED | Arduino Pin | Resistor |
|-----|------------|----------|
| LED 1 (LSB) | Pin 10 | 220Ω to GND |
| LED 2 | Pin 11 | 220Ω to GND |
| LED 3 | Pin 12 | 220Ω to GND |
| LED 4 (MSB) | Pin 13 | 220Ω to GND |

## Circuit Diagram

![Circuit Diagram](circuit.png)

## Schematic

![Schematic](schematic.png)

### ASCII Circuit Layout

```
                    Arduino Uno
                    ┌─────────────┐
        Pin 10  ────┤ 10          │
                    │             │
        Pin 11  ────┤ 11          │
                    │             │
        Pin 12  ────┤ 12          │
                    │             │
        Pin 13  ────┤ 13    GND ──┤────────┐
                    │             │        │
                    └─────────────┘        │
                                          │
    Breadboard: (LED 1-4 with 220Ω)       │
    ┌────────────────────────────────┐   │
    │  LED1  LED2  LED3  LED4        │   │
    │   │     │     │     │          │   │
    │   R     R     R     R  (220Ω)  │   │
    │   │     │     │     │          │   │
    │   ├─────┴─────┴─────┼──────────┼───┤ GND
```

**Note:** The circuit diagram image (circuit.png) should be placed in the same folder as this README.

## Binary Number System

| Decimal | Binary | LED 4 | LED 3 | LED 2 | LED 1 |
|---------|--------|-------|-------|-------|-------|
| 0 | 0000 | OFF | OFF | OFF | OFF |
| 1 | 0001 | OFF | OFF | OFF | ON |
| 2 | 0010 | OFF | OFF | ON | OFF |
| 3 | 0011 | OFF | OFF | ON | ON |
| 4 | 0100 | OFF | ON | OFF | OFF |
| 5 | 0101 | OFF | ON | OFF | ON |
| 6 | 0110 | OFF | ON | ON | OFF |
| 7 | 0111 | OFF | ON | ON | ON |
| 8 | 1000 | ON | OFF | OFF | OFF |
| 15 | 1111 | ON | ON | ON | ON |

## Features

- Displays binary counting from 0 to 15
- Simple beginner-friendly Arduino project
- Demonstrates binary number representation
- Uses basic electronic components
- Easy to modify for higher-bit counters

## Applications

- Learning binary number systems
- Understanding digital electronics basics
- Beginner embedded systems practice
- Educational demonstration project
- Foundation for digital counter systems

## Code Summary

```cpp
void setup() {
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  for(int i = 0; i < 16; i++) {
    digitalWrite(10, (i & 1) ? HIGH : LOW);
    digitalWrite(11, (i & 2) ? HIGH : LOW);
    digitalWrite(12, (i & 4) ? HIGH : LOW);
    digitalWrite(13, (i & 8) ? HIGH : LOW);
    delay(1000);
  }
}
```

## Expected Output

LEDs will light up in sequence from 0000 to 1111, then repeat. Each number displays for 1 second.

---

**Author**: Beginner Arduino Projects  
**Difficulty Level**: Beginner to Intermediate ⭐⭐
