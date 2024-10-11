# Smart_water-Quality-Measurement
## Project Overview
The **Smart Water Quality Measurement** system monitors water quality using an Arduino Uno, a turbidity sensor, and an LCD display. The turbidity sensor measures the water's impurity levels, and based on the readings, it categorizes the water as **clean**, **normal**, or **dirty**.
## Components Used
- **Arduino Uno**: Microcontroller used for reading sensor data.
- **Turbidity Sensor**: Detects the water's turbidity levels.
- **LCD Display (2x4)**: Displays real-time water quality readings.
- **Cables and Connectors**: Used for wiring and connections.
## Installation
1. Download and install the [Arduino IDE](https://www.arduino.cc/en/software).
2. Install the following libraries for the LCD:
   - LiquidCrystal_I2C
   - Wire
3. Connect the Arduino Uno to your computer via USB.
4. Upload the code to the Arduino using the Arduino IDE.
## Usage
Once the Arduino is connected and the sensor is installed, the LCD will start displaying the turbidity values. Based on the water's quality, it will indicate:
- "Water is clean drinkable" if the turbidity is high (low impurities).
- "Water is dirty not usable" if the turbidity is low (high impurities).
## Code
- Refer code.ino file
## Wiring
- **Turbidity Sensor**: Connect the signal pin to analog pin A0 on the Arduino.
- **LCD Display**: Connect the SDA and SCL pins of the LCD to A4 and A5 on the Arduino for I2C communication.
## Conclusion
This project demonstrates how to measure water quality using a turbidity sensor and Arduino. It provides real-time feedback on the water’s usability, which can be useful for water quality monitoring in various applications.
