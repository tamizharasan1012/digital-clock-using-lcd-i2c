# ⏰ Digital Clock Using LCD I2C

A simple and efficient **Arduino-based Digital Clock** that displays real-time **hours, minutes, and seconds** on a **16x2 I2C LCD**.  
This project uses minimal wiring and is ideal for **beginners in Embedded Systems and Arduino**.

---

## 📌 Features
- Real-time clock display (HH:MM:SS)
- Uses **I2C LCD** (reduces pin usage)
- Accurate timekeeping with RTC module
- Simple and beginner-friendly code
- Low power consumption

---

## 🛠️ Components Required
| Component | Quantity |
|---------|----------|
| Arduino UNO / Nano | 1 |
| 16x2 LCD with I2C Module | 1 |
| RTC Module (DS1307 / DS3231) | 1 |
| Jumper Wires | As required |
| Breadboard | 1 |

---

## 🔌 Circuit Connections

### LCD I2C
| LCD I2C Pin | Arduino Pin |
|------------|------------|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

### RTC Module
| RTC Pin | Arduino Pin |
|--------|------------|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

📌 *Note: Both LCD and RTC share the same I2C bus.*

---

## 💻 Software Requirements
- Arduino IDE
- Libraries:
  - `LiquidCrystal_I2C`
  - `RTClib` (by Adafruit)

---

## 📜 Working Principle
1. RTC module keeps track of real-time independently.
2. Arduino reads time data via I2C protocol.
3. The LCD displays:
   - Hours
   - Minutes
   - Seconds
4. Time updates every second.

---

## ▶️ How to Run
1. Install required libraries in Arduino IDE
2. Connect components as per circuit
3. Upload the code to Arduino
4. Power the board
5. Watch real-time clock on LCD ⏱️

---


---

## 🧠 Applications
- Digital wall clock
- Home automation systems
- Embedded systems learning
- IoT time-based projects
- Classroom demonstrations

---

## 🏷️ GitHub Topics

arduino
embedded-systems
digital-clock
lcd
i2c
rtc
electronics
iot
microcontroller


---

## 🚀 Future Enhancements
- Add alarm functionality
- 12/24 hour mode selection
- Date & day display
- Temperature display (using DS3231)
- ESP32 + IoT time sync

---

## 👨‍💻 Author
**Tamizharasan P**  
BE ECE | Embedded Systems | IoT | Image Processing

---

## 📄 License
This project is open-source and available under the **MIT License**.

---

⭐ If you like this project, don't forget to **star the repository**!



