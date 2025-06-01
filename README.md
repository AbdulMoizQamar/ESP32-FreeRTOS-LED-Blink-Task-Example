# ESP32-FreeRTOS-LED-Blink-Task-Example
This project showcases a basic FreeRTOS task on the ESP32 to blink an LED using the Arduino framework.
📝 Description:
This project showcases a basic FreeRTOS task on the ESP32 to blink an LED using the Arduino framework. The task is created with xTaskCreate() and runs independently from the main loop().
The LED connected to GPIO 0 is toggled with a 1-second ON and 2-second OFF delay using FreeRTOS's vTaskDelay().
This is an ideal starting point for learning FreeRTOS task scheduling on ESP32.

✅ Features:
Single FreeRTOS task for blinking an LED
Non-blocking delays using vTaskDelay()
Uses xTaskCreate() for task creation
Built with Arduino framework for ESP32

📦 Requirements:
ESP32 development board
Arduino IDE or PlatformIO
FreeRTOS (comes with ESP32 Arduino core)
LED (optional, if using built-in LED on GPIO 0)
