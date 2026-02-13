#include <Arduino.h>
#include <U8g2lib.h>
#include <Wire.h>

// Software I2C: SCL = 9, SDA = 8
U8G2_SSD1306_128X64_NONAME_F_SW_I2C u8g2(
    U8G2_R0,
    /* clock=*/9,
    /* data=*/8,
    /* reset=*/U8X8_PIN_NONE
);

void setup() {
    u8g2.begin();

    u8g2.clearBuffer();
    u8g2.setFont(u8g2_font_ncenB08_tr);
    u8g2.drawStr(10, 30, "Flipper-Lite");
    u8g2.drawStr(10, 50, "OLED OK");
    u8g2.sendBuffer();
}

void loop() {
}
