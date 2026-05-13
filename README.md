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

## Author

Subramanian R
