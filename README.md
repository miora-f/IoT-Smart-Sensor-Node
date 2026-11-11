# IoT Smart Sensor Node

## Project Overview

The IoT Smart Sensor Node is an embedded systems project developed using an ESP32 microcontroller, a DHT22 temperature and humidity sensor, and an OLED display.

The system collects environmental data, processes sensor measurements, and displays real-time temperature and humidity readings on an OLED screen.

This project was developed and tested using the Wokwi online simulator.

## Features

- Real-time temperature measurement.
- Real-time relative humidity measurement.
- OLED display for visualizing sensor readings.
- Serial Monitor output for debugging and monitoring.
- Automatic sensor reading every 2 seconds.
- Error handling for invalid sensor readings.

## Hardware Components

| Component | Description |
|---|---|
| ESP32 DevKit V1 | Main microcontroller |
| DHT22 | Temperature and humidity sensor |
| SSD1306 OLED | 128 × 64 I2C display |
| Jumper wires | Component connections |

## Wiring Configuration

| Component | ESP32 Pin |
|---|---|
| DHT22 DATA | GPIO 15 |
| OLED SDA | GPIO 21 |
| OLED SCL | GPIO 22 |
| OLED VCC | 3.3V |
| OLED GND | GND |
| DHT22 VCC | 3.3V |
| DHT22 GND | GND |

## Software and Technologies

- C++ (Arduino framework)
- ESP32
- Arduino IDE / Wokwi Simulator
- I2C communication protocol
- Serial communication (UART)

### Libraries

The project uses the following Arduino libraries:

- Wire.h – I2C communication.
- DHT.h – DHT22 sensor interface.
- Adafruit_GFX.h – Graphics library.
- Adafruit_SSD1306.h – OLED display driver.

## System Operation

1. The ESP32 initializes the DHT22 sensor and OLED display.
2. The DHT22 measures ambient temperature and relative humidity.
3. The ESP32 reads the sensor measurements.
4. The measurements are displayed on the OLED screen.
5. The same data is transmitted to the Serial Monitor.
6. The process repeats every 2 seconds.

## Project Structure

IoT-Smart-Sensor-Node/
│
├── sketch.ino
├── diagram.json
├── libraries.txt
└── README.md


## Simulation

The project was implemented and tested using Wokwi.

Wokwi Simulation: 

https://wokwi.com/projects/480421342139675649 

## Learning Outcomes

Through this project, I practiced:

- ESP32 microcontroller programming.
- Interfacing digital sensors with microcontrollers.
- I2C communication between an ESP32 and an OLED display.
- Reading and processing environmental sensor data.
- Using Arduino libraries.
- Debugging embedded applications through the Serial Monitor.

## Future Improvements

- Connect the ESP32 to Wi-Fi.
- Send sensor measurements to an MQTT broker.
- Develop a web-based monitoring dashboard.
- Store historical sensor data.
- Implement threshold-based temperature and humidity alerts.

---

Author: Miora Fanantenana RAHARIMALALA

Domain: Embedded Systems | IoT | Microcontroller Programming

Status: Completed – Wokwi Simulation
