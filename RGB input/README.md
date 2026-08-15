# RGB Input Control

## Description

This project allows the user to control an RGB LED through the Arduino Serial Monitor. The user can type a color name in the Serial Monitor, and the corresponding RGB LED glows based on the input. This combines serial communication, string processing, and PWM control to create an interactive color selection system.

## Working Principle

The Arduino continuously waits for user input through the Serial Monitor.

- The user enters a color name via Serial Monitor
- Arduino reads the input using `Serial.readStringUntil('\n')`
- The entered text is checked using `if-else` conditions or `switch` statements
- The corresponding RGB LED colors activate using PWM
- The process repeats continuously, allowing multiple user inputs

## Components Required

- Arduino Uno
- RGB LED (Common Cathode)
- 3 × 220Ω Resistors
- Breadboard
- Jumper Wires

## Pin Connections

| Color | Arduino Pin | Resistor |
|-------|------------|----------|
| Red | Pin 11 | 220Ω to GND |
| Green | Pin 9 | 220Ω to GND |
| Blue | Pin 10 | 220Ω to GND |
| Common (Cathode) | GND | - |

## Circuit Diagram

![Circuit Diagram](circuit.png)

## Schematic

![Schematic](schematic.png)

## Supported Colors

```
Basic Colors: red, green, blue
Mixed Colors: yellow, purple, cyan, white
Special: off, black (turns LED off)
```

## Color Mixing Chart

| Color | Red | Green | Blue | Result |
|-------|-----|-------|------|--------|
| Red | 255 | 0 | 0 | Red |
| Green | 0 | 255 | 0 | Green |
| Blue | 0 | 0 | 255 | Blue |
| Yellow | 255 | 255 | 0 | Yellow |
| Purple | 255 | 0 | 255 | Purple |
| Cyan | 0 | 255 | 255 | Cyan |
| White | 255 | 255 | 255 | White |
| Black | 0 | 0 | 0 | Off |

## Features

- User-controlled RGB LED through Serial Monitor
- Supports multiple color inputs
- Uses PWM for brightness control
- Beginner-friendly project for learning serial communication
- Demonstrates string handling and conditional logic
- Interactive and educational

## Applications

- Learning Serial Monitor communication
- Understanding user input handling in Arduino
- RGB LED control systems
- Beginner embedded systems practice
- Foundation for smart home automation projects

## Code Summary

```cpp
const int redPin = 11;
const int greenPin = 9;
const int bluePin = 10;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(9600);
  Serial.println("RGB LED Control");
  Serial.println("Enter color: red, green, blue, yellow, purple, cyan, white, off");
}

void loop() {
  if (Serial.available() > 0) {
    String color = Serial.readStringUntil('\n');
    color.toLowerCase();
    color.trim();
    
    if (color == "red") {
      setColor(255, 0, 0);
      Serial.println("RED");
    } else if (color == "green") {
      setColor(0, 255, 0);
      Serial.println("GREEN");
    } else if (color == "blue") {
      setColor(0, 0, 255);
      Serial.println("BLUE");
    } else if (color == "yellow") {
      setColor(255, 255, 0);
      Serial.println("YELLOW");
    } else if (color == "purple") {
      setColor(255, 0, 255);
      Serial.println("PURPLE");
    } else if (color == "cyan") {
      setColor(0, 255, 255);
      Serial.println("CYAN");
    } else if (color == "white") {
      setColor(255, 255, 255);
      Serial.println("WHITE");
    } else if (color == "off" || color == "black") {
      setColor(0, 0, 0);
      Serial.println("OFF");
    } else {
      Serial.println("Invalid color!");
    }
  }
}

void setColor(int r, int g, int b) {
  analogWrite(redPin, r);
  analogWrite(greenPin, g);
  analogWrite(bluePin, b);
}
```

## Expected Output

```
Serial Monitor Input: red
Output: RED (LED turns red)

Serial Monitor Input: yellow
Output: YELLOW (LED turns yellow)

Serial Monitor Input: invalid
Output: Invalid color!
```

## Tips

- Use Serial Monitor to send color commands
- Experiment with custom colors by modifying PWM values
- Each color channel ranges from 0-255

---

**Author**: Beginner Arduino Projects  
**Difficulty Level**: Beginner ⭐
