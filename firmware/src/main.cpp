#include <Arduino.h>

void setup() {
    Serial.begin(115200);
    delay(5000);   // give time to open serial monitor
    Serial.println("Flipper-Lite: Boot OK");
}

void loop() {
    Serial.println("Running...");
    delay(2000);
}
