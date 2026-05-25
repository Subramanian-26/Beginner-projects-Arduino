# Arduino Projects

A collection of my Arduino projects built while learning electronics and embedded systems.

---

# 1. Binary LED Counter (0–15)

## Description
This project is a 4-bit binary counter using Arduino and LEDs.  
The LEDs display binary numbers from 0 to 15 continuously with a delay between each count.

---

## Working Principle
The Arduino sends HIGH and LOW signals to 4 LEDs connected to digital output pins.

- Each LED represents one binary bit.
- The LEDs glow in combinations to represent numbers in binary form.
- The count increases from:
  - `0000` → Decimal 0
  - to
  - `1111` → Decimal 15

After reaching 15, the counter resets back to 0 and repeats.

---

## Features
- Displays binary counting from 0 to 15
- Simple beginner-friendly Arduino project
- Demonstrates binary number representation
- Uses basic electronic components
- Easy to modify for higher-bit counters

---

## Components Used
- Arduino Uno
- 4 LEDs
- 4 × 220Ω Resistors
- Breadboard
- Jumper Wires

---

## Applications
- Learning binary number systems
- Understanding digital electronics basics
- Beginner embedded systems practice
- Educational demonstration project
- Foundation for digital counter systems

---

## Future Improvements
- Add push buttons for manual counting
- Use 7-segment display
- Add up/down counter feature
- Expand to 8-bit binary counter

---
# 2. Blinking LED 
Arduino Built-in LED Blinking
Description

This project demonstrates how to blink the built-in LED on the Arduino Uno board using Arduino programming.

The LED turns ON and OFF repeatedly with a fixed delay, creating a blinking effect.
It is one of the most basic and beginner-friendly Arduino projects.

Working Principle

The Arduino Uno has a built-in LED connected to digital pin 13.

The program sends:

HIGH signal → LED turns ON
LOW signal → LED turns OFF

A delay is added between ON and OFF states to make the blinking visible.

The process repeats continuously in a loop.

Features
Simple beginner-friendly Arduino project
Uses the built-in LED (no external components required)
Demonstrates digital output control
Helps understand Arduino programming basics
Easy to modify with different blinking patterns

Components Used
Arduino Uno
USB Cable
Arduino IDE

Applications
Learning Arduino basics
Understanding digital output control
Beginner embedded systems practice
Testing Arduino board functionality
Foundation for LED-based projects

Future Improvements
Add external LEDs
Control blinking speed using potentiometer
Create multiple blinking patterns
Add push button control
Convert into Morse code blinker

# 3.Traffic Light LED System
Description

This project is a simple traffic light simulation using Arduino and LEDs.

The LEDs glow one after another in the sequence of a real traffic signal:
Red → Yellow → Green

Each LED stays ON for a fixed delay before switching to the next signal.

Working Principle

The Arduino sends HIGH and LOW signals to 3 LEDs connected to digital output pins.
Each LED represents a traffic signal:
Red LED → Stop
Yellow LED → Wait
Green LED → Go

The Arduino turns ON one LED at a time with a delay between each signal.

The sequence runs as:
Red → Yellow → Green

After completing the sequence, the cycle repeats continuously.

Features

Simulates a basic traffic light system
Simple beginner-friendly Arduino project
Demonstrates digital output control
Uses basic electronic components
Easy to expand into advanced traffic systems
Components Used
Arduino Uno
3 LEDs (Red, Yellow, Green)
3 × 100Ω Resistors
Breadboard
Jumper Wires

Applications
Learning Arduino programming basics
Understanding traffic signal logic
Beginner embedded systems practice
Educational demonstration project
Foundation for smart traffic systems

Future Improvements
Add pedestrian crossing button
Use countdown timer display
Add buzzer for signal indication
Create automatic road junction control
Expand into a smart traffic management syst
# Arduino Projects

A collection of my Arduino projects built while learning electronics and embedded systems.

---

# 4. Potentiometer Controlled LED Brightness

## Description
This project controls the brightness of an LED using a potentiometer and Arduino.  
The potentiometer acts as an input device, allowing smooth adjustment of LED brightness through PWM (Pulse Width Modulation).

---

## Working Principle
The Arduino reads the analog value from the potentiometer connected to an analog pin.

- The potentiometer value ranges from `0` to `1023`.
- The Arduino maps this value to a PWM range of `0` to `255`.
- The PWM signal controls the LED brightness.
- Rotating the potentiometer:
  - decreases brightness at lower values
  - increases brightness at higher values

The LED brightness changes smoothly based on the potentiometer position.

---

## Features
- Controls LED brightness using a potentiometer
- Demonstrates analog input reading
- Uses PWM for smooth brightness control
- Beginner-friendly Arduino project
- Real-time brightness adjustment

---

## Components Used
- Arduino Uno
- 1 LED
- 1 × 150Ω Resistor
- Potentiometer
- Breadboard
- Jumper Wires

---

## Applications
- Learning analog input in Arduino
- Understanding PWM (Pulse Width Modulation)
- LED dimming systems
- Beginner embedded systems practice
- Foundation for sensor-based control projects

---

## Future Improvements
- Add multiple LEDs with independent brightness control
- Display potentiometer values on Serial Monitor
- Control RGB LED brightness
- Add LCD display for brightness percentage
## Author
Subramanian R
