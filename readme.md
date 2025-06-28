# 🔊 ESP32 Bluetooth A2DP Speaker

This project turns your ESP32 board into a Bluetooth speaker using the A2DP Sink profile. Audio is streamed from a phone or PC via Bluetooth and played through an I2S DAC like the MAX98357A.

---

## 📦 Features

- Acts as a Bluetooth speaker (A2DP Sink)
- Streams audio over Bluetooth
- Volume control via Serial Monitor (0–100%)
- Uses I2S DAC (e.g. MAX98357A)
- Developed using [PlatformIO](https://platformio.org/)

---

## 🧰 Hardware Required

| Component           | Description                                          |
|---------------------|------------------------------------------------------|
| ESP32 Dev Board     | e.g., ESP32 DevKit V1 or NodeMCU-ESP32               |
| MAX98357A I2S DAC   | Converts digital I2S signal to analog audio output   |
| Speaker             | 3W or similar, compatible with MAX98357A output      |
| Power Supply        | USB 5V or external 5V supply                         |
| Optional Breadboard | For prototyping and stability                        |

---

## 🛠️ Wiring Instructions (ESP32 + MAX98357A)

| MAX98357A Pin | Connect to ESP32 |
|---------------|------------------|
| VIN           | 5V               |
| GND           | GND              |
| LRC           | IO25             |
| BCLK          | IO26             |
| DIN           | IO22             |

> ⚠️ Note: Adjust pin numbers in code if you use different GPIOs.

---

## 💻 PlatformIO Setup

This project uses [PlatformIO](https://platformio.org/) for building and uploading the firmware.

### 📁 `platformio.ini`

```ini
[env:esp32dev]
platform = espressif32
board = esp32dev
framework = arduino
monitor_speed = 115200
lib_deps =
  pschatzmann/ESP32-A2DP@^2.1.2
