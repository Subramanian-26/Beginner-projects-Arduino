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
##Description

This project demonstrates how to blink the built-in LED on the Arduino Uno board using Arduino programming.

The LED turns ON and OFF repeatedly with a fixed delay, creating a blinking effect.
It is one of the most basic and beginner-friendly Arduino projects.

##Working Principle

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
##Description

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

- # 5. Serial Monitor Controlled RGB LEDs

## Description

This project allows the user to control LEDs through the Arduino Serial Monitor.
The user can type a color name (`red`, `green`, or `blue`) in the Serial Monitor, and the corresponding LED glows based on the input.

---

## Working Principle

The Arduino continuously waits for user input through the Serial Monitor.

* The user enters a color name (`red`, `green`, or `blue`).
* Arduino reads the input using `Serial.readString()`.
* The entered text is checked using `if-else` conditions.
* The selected LED turns ON while the others remain OFF.
* The process repeats continuously, allowing multiple user inputs.

---

## Features

* User-controlled LEDs through Serial Monitor
* Supports multiple inputs continuously
* Demonstrates serial communication in Arduino
* Beginner-friendly project for learning input handling
* Uses conditional statements (`if-else`) and string comparison

---

## Components Used

* Arduino Uno
* 3 LEDs (Red, Green, Blue)
* 3 × 330Ω Resistors
* Jumper Wires

---

## Applications

* Learning Serial Monitor communication
* Understanding user input handling in Arduino
* Beginner embedded systems practice
* Basic LED control systems
* Foundation for command-based automation projects

---

## Future Improvements

* Add support for turning LEDs OFF individually
* Add multiple color combinations
* Use an RGB LED instead of separate LEDs
* Add brightness control using PWM
* Expand to voice or Bluetooth control

# 6. RGB LED Color Control using Arduino

## Description

This project controls an RGB LED using Arduino and Serial Monitor input.
The RGB LED changes to different colors based on the color name entered through the Serial Monitor.

---

## Working Principle

The Arduino receives color names from the Serial Monitor using serial communication.

The RGB LED contains three internal LEDs:

* Red
* Green
* Blue

By controlling the brightness of these colors using PWM (`analogWrite()`), different colors are produced.

The user enters a color name such as:

`red` → Displays Red Color
`green` → Displays Green Color
`blue` → Displays Blue Color
`yellow` → Mixes Red + Green
`purple` → Mixes Red + Blue
`cyan` → Mixes Green + Blue
`white` → Mixes Red + Green + Blue

If an invalid color is entered, the Arduino displays:

`Invalid color`

---

## Features

* Controls RGB LED using Serial Monitor input
* Supports multiple color selections
* Uses PWM (`analogWrite()`) for color mixing
* Beginner-friendly Arduino project
* Demonstrates serial communication and RGB color mixing
* Easy to modify by adding more custom colors

---

## Components Used

* Arduino Uno
* RGB LED (Common Cathode)
* 3 × 330Ω Resistors
* Jumper Wires

---

## Pin Connections

* Red Pin → Digital Pin 11
* Blue Pin → Digital Pin 10
* Green Pin → Digital Pin 9
* Common Pin → GND

---

## Applications

* Learning RGB color mixing
* Understanding PWM in Arduino
* Beginner serial communication practice
* LED lighting projects
* Educational electronics demonstrations
* Foundation for smart lighting systems

---

## Future Improvements

* Add more custom colors
* Control brightness levels
* Add button-based color switching
* Create smooth fading effects between colors
* Add Bluetooth or mobile app control

# 7.  Active Buzzer Control using Potentiometer

## Description

This project controls an active buzzer using a potentiometer and Arduino.
The buzzer turns ON or OFF depending on the potentiometer position.

When the potentiometer value crosses a set threshold, the buzzer activates. If the value falls below the threshold, the buzzer turns OFF.

---

## Working Principle

The Arduino reads analog values from the potentiometer connected to an analog pin.

The potentiometer provides values ranging from:

`0 → 1023`

The Arduino continuously checks the potentiometer value.

* If the value is **greater than 500**, the active buzzer turns **ON**.
* If the value is **less than or equal to 500**, the buzzer turns **OFF**.

The potentiometer value is also displayed in the **Serial Monitor** for monitoring purposes.

---

## Features

* Controls an active buzzer using a potentiometer
* Reads analog input using `analogRead()`
* Uses conditional statements for buzzer control
* Displays potentiometer values in Serial Monitor
* Beginner-friendly Arduino project
* Demonstrates analog input and digital output concepts

---

## Components Used

* Arduino Uno
* Active Buzzer
* Potentiometer
* Jumper Wires

---

## Pin Connections

* Active Buzzer (+) → Digital Pin 13
* Active Buzzer (-) → GND
* Potentiometer Middle Pin → A2
* Potentiometer Side Pin → 5V
* Potentiometer Other Side Pin → GND

---

## Applications

* Alarm systems
* Threshold-based warning systems
* Sensor-based alert systems
* Beginner embedded systems practice
* Learning analog and digital interfacing

---

## Future Improvements

* Add variable buzzer sound levels
* Replace potentiometer with sensors
* Add LED indication when buzzer is active
* Create adjustable threshold values
* Add LCD display for potentiometer readings

# 8. Light-Based LED Indicator using Photoresistor

## Description

This project is a light-sensitive LED indicator using Arduino and a photoresistor (LDR).
The Arduino reads light intensity through the photoresistor and turns ON different LEDs based on the detected light level.

When the sensor value is greater than a set threshold, the red LED turns ON. Otherwise, the green LED turns ON.

---

## Working Principle

The Arduino reads analog values from a photoresistor connected to an analog input pin.

* The photoresistor changes resistance based on light intensity.
* The Arduino continuously monitors the sensor value.
* If the sensor reading is **greater than 600**, the **red LED turns ON**.
* If the sensor reading is **600 or below**, the **green LED turns ON**.

This creates a simple light-level indicator system.

---

## Features

* Detects ambient light using a photoresistor
* Switches between red and green LEDs automatically
* Beginner-friendly Arduino sensor project
* Demonstrates analog input reading
* Uses conditional statements (`if-else`) in Arduino

---

## Components Used

* Arduino Uno
* Photoresistor (LDR) / Ambient Light Sensor
* Red LED
* Green LED
* 2 × 330Ω Resistors (for LEDs)
* 1 × Resistor for LDR circuit
* Jumper Wires

---

## Applications

* Automatic light detection systems
* Day and night indicators
* Smart lighting basics
* Beginner sensor-based Arduino projects
* Learning analog sensor interfacing

---

## Future Improvements

* Add a buzzer for low/high light alerts
* Display sensor values on an LCD
* Add adjustable threshold using a potentiometer
* Control room lights automatically using a relay
* Use RGB LEDs for multiple light levels

# 9. Push Button LED Control

## Description

This project demonstrates how to use a push button with Arduino to control an LED using `digitalRead()`.
The LED turns **ON** when the button input becomes `0` (LOW) and turns **OFF** when the input is `1` (HIGH).

---

## Working Principle

The Arduino reads the state of a push button connected to a digital input pin using `digitalRead()`.

* When the button input is **LOW (0)**, the Arduino turns the LED **ON**.
* When the button input is **HIGH (1)**, the Arduino turns the LED **OFF**.
* The button state is also displayed in the **Serial Monitor** for debugging and monitoring.

The system continuously checks the button state in the `loop()` function.

---

## Features

* Reads push button input using `digitalRead()`
* Controls LED based on button state
* Displays button values in Serial Monitor
* Beginner-friendly Arduino project
* Demonstrates basic digital input and output concepts

---

## Components Used

* Arduino Uno
* Push Button
* LED
* 220Ω Resistor
* Jumper Wires

---

## Applications

* Learning digital input/output in Arduino
* Understanding push button interfacing
* Beginner embedded systems practice
* Foundation for switch-based automation systems
* Educational electronics project

---

## Future Improvements

* Add multiple LEDs with different button controls
* Implement button debouncing
* Add buzzer feedback when button is pressed
* Control appliances using a relay module
* Convert into a toggle switch system

# 10. Push Button Toggle LED Switch

## Description

This project demonstrates how to use a push button as a **toggle switch** using Arduino.
The LED changes its state every time the push button is pressed.

* First press → LED turns **ON**
* Second press → LED turns **OFF**
* Third press → LED turns **ON** again

The project uses `digitalRead()` to detect button presses and stores previous button states to prevent repeated toggling while holding the button.

---

## Working Principle

The Arduino reads the push button state using `digitalRead()`.

* `buttonNew` stores the **current button state**.
* `buttonOld` stores the **previous button state**.
* The Arduino checks if the button changes from **LOW to HIGH**, indicating a new button press.
* When a press is detected, the LED state toggles between **ON** and **OFF**.
* The button value is also displayed in the **Serial Monitor** for monitoring and debugging.

The process continuously repeats inside the `loop()` function.

---

## Features

* Uses push button as a toggle switch
* LED turns ON/OFF with each button press
* Prevents repeated toggling while holding the button
* Displays button state in Serial Monitor
* Beginner-friendly Arduino project
* Demonstrates digital input and output concepts

---

## Components Used

* Arduino Uno
* Push Button
* LED
* 220Ω Resistor
* Jumper Wires

---

## Applications

* Learning push button interfacing
* Understanding digital input/output basics
* Beginner embedded systems practice
* Foundation for switch-based automation systems
* Educational electronics demonstration project

---

## Future Improvements

* Add multiple LEDs with separate toggle buttons
* Implement advanced button debouncing
* Add buzzer feedback for button press
* Use relay modules to control external devices
* Expand into a smart home control system

# 11. Sunlight-Based Servo Motor Control

## Description

This project uses a **photoresistor (LDR)** and a **servo motor** to control movement based on sunlight intensity.
As sunlight decreases, the servo motor gradually moves toward **180 degrees**. During bright light, the servo remains near **0 degrees**.

The project reads light intensity using an **LDR sensor** and adjusts the servo angle using simple conditional statements.

---

## Working Principle

The Arduino reads the light level from the **photoresistor (LDR)** connected to an analog pin.

* In **bright sunlight**, the servo stays at **0°**.
* As sunlight decreases, the servo gradually moves to **45°**, **90°**, and **135°**.
* In **darkness or night**, the servo reaches **180°**.

The light value is also displayed in the **Serial Monitor** for monitoring and debugging.

The process continuously repeats inside the `loop()` function.

---

## Features

* Controls servo motor using sunlight intensity
* Servo gradually moves as light decreases
* Reaches **180° during darkness/night**
* Displays light values in Serial Monitor
* Beginner-friendly Arduino project
* Uses simple `if-else` conditions instead of `map()`

---

## Components Used

* Arduino Uno
* Servo Motor
* Photoresistor (LDR)
* Resistor (for LDR circuit)
* Jumper Wires

---

## Applications

* Automatic solar tracking systems
* Smart light-sensitive automation
* Beginner sensor interfacing practice
* Educational embedded systems project
* Foundation for automatic curtain or panel systems

---

## Future Improvements

* Add smoother servo movement
* Display light intensity on an LCD screen
* Add temperature monitoring
* Use multiple LDRs for better light tracking
* Expand into a fully automated solar tracking system

## Author
Subramanian R
