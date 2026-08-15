# IR Remote Control

## Description

This project demonstrates how to receive infrared (IR) signals from a remote control using an Arduino Uno and an IR Receiver module. When a button on the remote is pressed, the Arduino decodes the received signal and displays its corresponding hexadecimal code on the Serial Monitor.

## Working Principle

The IR remote transmits infrared signals when a button is pressed. The IR receiver detects the transmitted signal. The IRremote library decodes the received signal. The decoded hexadecimal button code is displayed on the Serial Monitor. The receiver is reset after each successful read to detect the next button press.

## Components Required

- Arduino Uno
- IR Receiver Module
- IR Remote Control
- Jumper Wires
- Optional: 100Ω and 10kΩ resistors

## Pin Connections

| Component | Arduino Pin |
|-----------|------------|
| IR Receiver VCC | 5V |
| IR Receiver GND | GND |
| IR Receiver OUT (Signal) | Pin 9 |

## Circuit Diagram

![Circuit Diagram](circuit.png)

## Schematic

![Schematic](schematic.png)

### ASCII IR Receiver Layout

```
IR Receiver Module:
┌───────────────────────┐
│   VCC  OUT  GND       │
│   │    │    │         │
│   ●    ●    ●         │
└───┼────┼────┼─────────┘
    │    │    │
    │    │    └─────────────── GND
    │    │
    │    └─ Pin 9 (Arduino)
    │
    └──────────────────────── 5V

                    Arduino Uno
                    ┌─────────────┐
        5V      ────┤ 5V          │
                    │             │
        Pin 9   ────┤ 9 (Data)    │
                    │             │
                    │       GND ──┤────────
                    │             │
                    └─────────────┘
                    
IR Receiver on Breadboard:
┌────────────────────────────────┐
│  VCC   OUT   GND               │
│   │     │     │                │
│   ●─────●─────●                │
│   │     │     │                │
│   5V    P9    GND              │
└────────────────────────────────┘
```

**Note:** The circuit diagram image (circuit.png) should be placed in the same folder as this README.

## Features

- Receives and decodes IR signals
- Displays hexadecimal button codes
- Built-in LED feedback when signal detected
- Beginner-friendly IR communication project
- Easy to expand for IR-controlled devices

## Applications

- Home Automation
- Robot Control
- Wireless Device Control
- Smart Home Systems
- Remote-Controlled Electronics
- Security Systems

## Code Summary

```cpp
#include <IRremote.hpp>

const int receiverPin = 9;

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(receiverPin, ENABLE_LED_FEEDBACK);
  Serial.println("IR Receiver Ready!");
}

void loop() {
  if (IrReceiver.decode()) {
    Serial.print("Button Code: 0x");
    Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX);
    IrReceiver.resume();
  }
}
```

## Expected Output

When you press a button on the remote, the Serial Monitor displays:
```
Button Code: 0xBA45FF00
Button Code: 0xB946FF00
Button Code: 0xB847FF00
```

## Required Libraries

- IRremote library (Install via Arduino IDE: Sketch → Include Library → Manage Libraries)

## Troubleshooting

| Problem | Solution |
|---------|----------|
| No signal detected | Check IR receiver connections and power supply |
| Inconsistent readings | Ensure proper distance between remote and receiver (30cm max) |
| Library not found | Install IRremote library from Library Manager |

## Concepts Learned

- Infrared (IR) Communication
- IR Signal Decoding
- Using External Libraries
- Reading Sensor Data
- Hexadecimal Representation
- Object-Oriented Programming (Library Objects)

---

**Author**: Beginner Arduino Projects  
**Difficulty Level**: Intermediate ⭐⭐
