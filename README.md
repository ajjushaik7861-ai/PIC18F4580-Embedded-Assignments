# PIC18F4580 Embedded C Assignments

## Overview

This repository contains Embedded C assignments implemented using the PIC18F4580 Microcontroller, MPLAB X IDE, and XC8 Compiler.

The assignments cover various embedded systems concepts including GPIO, Digital Keypad Interface, SSD and CLCD Interfacing, Timers, Interrupts, EEPROM, ADC, UART, PWM, and Real-Time Applications.

## Development Environment

* Microcontroller : PIC18F4580
* IDE : MPLAB X IDE
* Compiler : XC8
* Language : Embedded C

## Assignment List

| Assignment | Description                                       |
| ---------- | ------------------------------------------------- |
| A01        | LED Train Pattern on LEDs                         |
| A02        | Multiple LED Patterns using Switches              |
| A03        | Left Scrolling Number Marquee                     |
| A04        | 4-Digit Key Press Counter                         |
| A05        | 4-Digit Key Press Counter with EEPROM Persistence |
| A06        | Sleep and Wake-Up using Interrupt-on-Change       |
| A07        | Time Separator using Timer0, Timer1 and Timer2    |
| A08        | Dynamic Clock on SSD using Internal Timer         |
| A09        | Right Scrolling Message Marquee on CLCD           |
| A10        | 8-Field Password Access System                    |
| A11        | Point Brightness Control using PWM                |
| A12        | LED Dimmer using PWM and ADC                      |

---

## A01 - LED Train Pattern

* Train entry and exit LED pattern.
* Bidirectional LED movement.
* GPIO and delay-based control.

### Concepts

* GPIO Programming
* Bit Manipulation
* Pattern Generation

---

## A02 - Multiple LED Patterns

* Four LED patterns controlled using Digital Keypad.
* Dynamic pattern selection.

### Concepts

* GPIO
* Digital Keypad Interface
* State Machine Design

---

## A03 - Left Scrolling Number Marquee

* SSD-based scrolling number display.
* Continuous left scrolling effect.

### Concepts

* SSD Multiplexing
* Display Animation

---

## A04 - Key Press Counter

* 4-digit SSD counter.
* Short press increments count.
* Long press resets count.

### Concepts

* SSD Interface
* Keypad Interface
* Event Detection

---

## A05 - Key Press Counter with EEPROM Persistence

* Counter value stored in Internal EEPROM.
* Restores previous count after reset.

### Concepts

* EEPROM Read/Write
* Non-Volatile Storage

---

## A06 - Sleep and Wake-Up using Interrupt

* Low power Sleep Mode implementation.
* Wake-up using INT0 interrupt.

### Concepts

* Interrupts
* Power Management
* Sleep Mode

---

## A07 - Time Separator using Timers

* Timer0, Timer1 and Timer2 generate identical 0.5 Hz outputs.
* Long-term synchronization.

### Concepts

* Timer Configuration
* Timer Interrupts
* Time Base Generation

---

## A08 - Dynamic Clock on SSD

* 24-Hour Digital Clock.
* Editable hours and minutes.
* Run and Configuration Modes.

### Concepts

* Timers
* SSD Interface
* State Machine Design

---

## A09 - Right Scrolling Message Marquee

* CLCD message scrolling.
* Continuous marquee display.

### Concepts

* CLCD Interface
* String Manipulation

---

## A10 - Password Access System

* 8-field password entry system.
* Password validation and access control.

### Concepts

* Security Logic
* CLCD Interface
* Keypad Interface

---

## A11 - Point Brightness Control

* PWM-based brightness control.
* Interrupt-driven brightness boost.
* Automatic timeout.

### Concepts

* PWM
* Timer ISR
* Interrupt Handling

---

## A12 - LED Dimmer Application

* Potentiometer-controlled LED brightness.
* ADC-based PWM duty cycle control.

### Concepts

* ADC
* PWM
* Timer ISR
* Real-Time Control

---

## Peripherals Covered

* GPIO
* Digital Keypad
* SSD (Seven Segment Display)
* CLCD (Character LCD)
* Timer0
* Timer1
* Timer2
* Interrupts
* EEPROM
* UART
* ADC
* PWM

## Learning Outcomes

* Embedded C Programming
* PIC18F4580 Peripheral Configuration
* Real-Time Embedded Systems
* Driver Development
* Interrupt Programming
* Timer Applications
* Display Interfacing
* Power Management
* Communication Protocols

## Author

MD Abdul Azeez

Embedded Systems Developer

