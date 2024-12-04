# Ultrasonic Distance Measurement with LCD Display

This project demonstrates how to measure the distance to an object using an ultrasonic sensor and display the results on a 16x2 LCD screen. The distance is calculated using the time-of-flight principle of sound waves, providing accurate measurements in real time.


## Features
- **Ultrasonic Distance Sensor**: Measures the distance to an object using sound waves.
- **LCD Display**: Outputs the distance measurement in real time.
- **Serial Monitoring**: Displays the distance readings on the serial monitor for debugging.


## Hardware Requirements
- **Arduino Board** (e.g., Arduino Uno)
- **Ultrasonic Sensor** (e.g., HC-SR04)
- **16x2 LCD with I2C Interface**
- **Jumper Wires and Breadboard**


## Wiring Configuration
| Arduino Pin | Component Pin           |
|-------------|--------------------------|
| Pin 7       | Trigger Pin (Ultrasonic)|
| Pin 8       | Echo Pin (Ultrasonic)   |
| SDA         | SDA (LCD, A4 on Uno)    |
| SCL         | SCL (LCD, A5 on Uno)    |

## Libraries Used
- **LiquidCrystal_I2C**: For controlling the LCD with an I2C interface.

## Setup Instructions
1. **Install Library**: Ensure the `LiquidCrystal_I2C` library is installed in your Arduino IDE.
2. **Connect Hardware**:
   - Wire the ultrasonic sensor's Trigger and Echo pins to the specified Arduino pins.
   - Connect the LCD's SDA and SCL pins to the Arduino's I2C pins.
3. **Upload Code**: Upload the provided code to your Arduino board using the Arduino IDE.
4. **Monitor Output**:
   - View the distance measurement on the LCD.
   - Check the serial monitor for debugging or additional information.

## Code Explanation
1. **Sensor Triggering**:
   - The Trigger pin sends a 10 µs pulse to activate the sensor.
   - The Echo pin receives the reflected pulse, and `pulseIn()` measures its duration.
2. **Distance Calculation**:
   - The time duration is converted to seconds and used to calculate the distance:
     - Speed of sound = 340 m/s
     - Distance = `(speed × time) / 2`
3. **LCD Output**:
   - The calculated distance is displayed on the 16x2 LCD in real-time.

