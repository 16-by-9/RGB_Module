# RGB LED Module Controller 🌈💡

This Arduino project lets you control an **RGB LED module** using **PWM signals**. By adjusting the red, green, and blue channels, you can create custom colors and lighting effects.  

## 🛠 Features
- 🎨 **Full RGB color control** – Mix red, green, and blue to create any color.  
- 🔄 **Customizable Brightness** – Modify PWM values for different intensities.  
- 🎛️ **Easy to Integrate** – Works with any common-anode or common-cathode RGB LED.  

## 🔧 Hardware Requirements
- 🌈 **RGB LED module** (or separate Red, Green, and Blue LEDs)  
- ⚡ **Resistors** (if using individual LEDs, typically 220Ω)  
- 💻 **Arduino board** (Uno, Mega, etc.)  
- 🔌 **Jumper wires**  

## 🚀 Wiring Guide
| RGB Pin | Arduino Pin |
|---------|------------|
| **Red**   | 9  |
| **Green** | 10 |
| **Blue**  | 11 |
| **GND**   | GND |

## 📜 Code Overview:

int redPin = 9;   // Pin for Red LED
int greenPin = 10;// Pin for Green LED
int bluePin = 11; // Pin for Blue LED

void setup() {
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
    
    // Start with LEDs off
    analogWrite(redPin, 0);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 0);
}

void loop() {
    analogWrite(redPin, 255);  // Full red
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 0);
    delay(1000); // Hold for 1 sec

    analogWrite(redPin, 0);
    analogWrite(greenPin, 255); // Full green
    delay(1000);

    analogWrite(greenPin, 0);
    analogWrite(bluePin, 255); // Full blue
    delay(1000);
}