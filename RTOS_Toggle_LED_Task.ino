#include <Arduino.h>

#define Led1 0

void setup() {
  Serial.begin(115200);
  // Create Task 1
  xTaskCreate(
    Led1Task,           // Task function
    "Led1 Task",             // Task name
    10000,               // Stack size
    NULL,                // Task parameters
    1,                   // Priority
    NULL              // Task handle
);              
}

void loop() {
  // The loop function does nothing as FreeRTOS manages tasks

}
void Led1Task(void *pvParameters){
  pinMode(Led1, OUTPUT);
 
  while(1){
    digitalWrite(Led1, HIGH);
    vTaskDelay(1000 / portTICK_PERIOD_MS);
    digitalWrite(Led1, LOW);
    vTaskDelay(2000 / portTICK_PERIOD_MS);
  }
}
