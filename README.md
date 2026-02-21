# BlackPebble

**Multi-Protocol. One Device.**

BlackPebble is a modular, ESP32-S3–based multi-protocol security research tool designed for ethical hacking, protocol analysis, and embedded systems experimentation.

It consolidates wireless, physical-layer, and USB interaction capabilities into a portable, menu-driven handheld platform.

This project is built for:

* Security research
* Protocol education
* Red-team lab simulations
* Hardware + firmware co-design learning

It is not designed for illegal or unauthorized use.

---

## 🔧 Hardware Platform

* **MCU:** ESP32-S3 (N16R8)
* **Display:** 1.3" SH1106 OLED (I2C)
* **Input:** 3 tactile buttons (UP / DOWN / SELECT)
* **NFC:** PN532 (I2C)
* **IR:** IR receiver (capture mode)
* **USB:** Native USB HID (keyboard emulation)
* **Wireless:** Integrated Wi-Fi + BLE
* **Upcoming:** CC1101 Sub-GHz radio module
* **Optional:** LoRa, RC522, external RF modules

---

## Current Capabilities

### Wi-Fi Module

* Network scanning
* RSSI-based enumeration
* Scrollable on-device UI

### BLE Module

* BLE device discovery
* Name / MAC-based listing
* Passive reconnaissance

### NFC Module (PN532)

* ISO14443A tag detection
* UID capture
* Real-time display

### USB HID Module

* Keyboard emulation
* Scripted payload execution
* Notepad / CMD / PowerShell demo payloads

### IR Module

* IR signal capture
* Raw code display
* Protocol observation

---

## Firmware Architecture

BlackPebble uses a modular firmware design:

```
core/
    display/
    buttons/
    menu/

modules/
    wifi/
    ble/
    nfc/
    hid/
    ir/
```

Each module follows a consistent structure:

```
Module
  Primary Action
  Back
```

This architecture allows clean expansion for:

* Sub-GHz RF
* Storage systems
* Script engines
* Remote control modules

---

##  Boot Identity

Boot screen:

```
BL4CKP3BBL3
v0.1
Booting...
```

The stylized version is used only in firmware branding.
The formal name for research and publication is:

**BlackPebble**

---

##  Design Philosophy

BlackPebble is not a clone of existing tools.

It is designed to demonstrate:

* How multi-protocol attack surfaces coexist
* How embedded systems can consolidate RF, NFC, IR, and USB layers
* How firmware architecture determines scalability
* How hardware constraints shape offensive capability

The goal is not “instant hacking.”

The goal is **understanding protocols at the electrical and firmware level.**

---

##  Roadmap

Planned expansions:

* Sub-GHz (CC1101) integration
* Fixed-code RF replay
* Storage via SPI SD
* Scriptable USB payload engine
* LoRa-based persistence experiments
* 125 kHz RFID integration
* System diagnostics panel
* Battery management & enclosure

---

##  Legal & Ethical Notice

BlackPebble is intended strictly for:

* Educational environments
* Authorized lab testing
* Defensive security research

Users are responsible for complying with all applicable laws and regulations.

---

## Research Direction

BlackPebble serves as a foundation for:

* Multi-layer embedded attack research
* Cross-protocol signal analysis
* Portable security instrumentation design
* Academic exploration of RF + physical-layer attack surfaces

---
