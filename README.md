# Task 1: Smart Light Control

## Components
- Arduino Uno
- LED
- 220Ω resistor
- HC-05 Bluetooth module
- Breadboard & jumper wires
- Android smartphone with Bluetooth

## Implementation Steps
1. **Circuit Setup**  
   - Connect the LED (with 220Ω resistor) to digital pin 13 and GND on Arduino.  
   - Wire HC-05: TX→RX, RX→TX, VCC→5V, GND→GND.
2. **Upload Code**  
   - Load `SmartLightControl.ino` to Arduino via Arduino IDE.
3. **Mobile App**  
   - Pair your phone with HC-05.  
   - In MIT App Inventor, create two buttons sending '1' (ON) and '0' (OFF).
4. **Test**  
   - Press buttons to verify LED toggles on/off.
