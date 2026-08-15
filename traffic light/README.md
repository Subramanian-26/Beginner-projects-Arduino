# Traffic Light

## Description

This project is a simple traffic light simulation using Arduino and LEDs. The LEDs glow one after another in the sequence of a real traffic signal: Red → Yellow → Green. Each LED stays ON for a fixed delay before switching to the next signal.

## Working Principle

The Arduino sends HIGH and LOW signals to 3 LEDs connected to digital output pins.

- **Red LED** → Stop (ON for 5 seconds)
- **Yellow LED** → Wait (ON for 2 seconds)
- **Green LED** → Go (ON for 5 seconds)

The Arduino turns ON one LED at a time with a delay between each signal. After completing the sequence, the cycle repeats continuously.

## Components Required

- Arduino Uno
- 3 LEDs (Red, Yellow, Green)
- 3 × 220Ω Resistors
- Breadboard
- Jumper Wires

## Pin Connections

| LED | Arduino Pin | Resistor |
|-----|------------|----------|
| Red LED | Pin 10 | 220Ω to GND |
| Yellow LED | Pin 11 | 220Ω to GND |
| Green LED | Pin 12 | 220Ω to GND |

## Circuit Diagram

![Circuit Diagram](circuit.png)

## Schematic

![Schematic](schematic.png)

## Traffic Signal Sequence

```
Time    Red     Yellow   Green    State
─────────────────────────────────────────
0-5s    ON      OFF      OFF      STOP
5-7s    OFF     ON       OFF      WAIT
7-12s   OFF     OFF      ON       GO
12s     (Repeat cycle)
```

## Features

- Simulates a basic traffic light system
- Simple beginner-friendly Arduino project
- Demonstrates digital output control
- Uses basic electronic components
- Easy to expand into advanced traffic systems

## Applications

- Learning Arduino programming basics
- Understanding traffic signal logic
- Beginner embedded systems practice
- Educational demonstration project
- Foundation for smart traffic systems

## Code Summary

```cpp
void setup() {
  pinMode(10, OUTPUT);  // Red
  pinMode(11, OUTPUT);  // Yellow
  pinMode(12, OUTPUT);  // Green
}

void loop() {
  // Red light
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  delay(5000);  // 5 seconds

  // Yellow light
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  delay(2000);  // 2 seconds

  // Green light
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(5000);  // 5 seconds
}
```

## Expected Output

The LEDs will cycle through red (5 sec) → yellow (2 sec) → green (5 sec) continuously.

## Troubleshooting

| Problem | Solution |
|---------|----------|
| LEDs don't light up | Check connections and resistor placement |
| Wrong timing | Verify delay values in code |
| LEDs always on | Check GPIO pin configuration |

---

**Author**: Beginner Arduino Projects  
**Difficulty Level**: Beginner ⭐
