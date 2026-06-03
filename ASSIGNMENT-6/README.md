# A06 - System Sleep and Wake-Up using Interrupt-on-Change

## Problem Statement

Develop an Embedded C program to implement system sleep and wake-up functionality using the INT0 external interrupt on the PIC18F4580 microcontroller.

## Objective

Demonstrate low-power operation by placing the microcontroller into Sleep Mode during inactivity and waking it up using an external interrupt.

## Input Requirements

| Input | Function          |
| ----- | ----------------- |
| INT0  | Wake-Up Interrupt |

## Output Requirements

1. Display "1234" on the SSD immediately after power-up or reset.
2. Toggle an LED every second during normal operation.
3. Enter Sleep Mode when no activity is detected.
4. Wake up from Sleep Mode when INT0 interrupt occurs.

## Functional Description

### System Startup

After power-up:

```text
SSD Display = 1234
```

The system enters normal operating mode.

### LED Operation

During active mode:

* LED toggles every second.
* SSD continuously displays the startup message.

Example:

```text
LED ON
1 second delay
LED OFF
1 second delay
```

### Sleep Mode

If no activity is detected for a predefined period:

* SSD stops updating.
* LED stops toggling.
* PIC18F4580 enters Sleep Mode.
* Power consumption is reduced.

### Wake-Up Operation

When INT0 interrupt is triggered:

* Microcontroller exits Sleep Mode.
* Program execution resumes.
* LED toggling restarts.
* SSD display becomes active again.

## State Diagram

```text
Power ON
    │
    ▼
Display 1234
    │
    ▼
Normal Operation
(LED Toggle Every Second)
    │
No Activity
    ▼
Sleep Mode
    │
INT0 Interrupt
    ▼
Wake-Up
    │
    ▼
Normal Operation
```

## Hardware Used

* PIC18F4580 Microcontroller
* 4-Digit Seven Segment Display (SSD)
* LED
* Push Button connected to INT0

## Peripherals Used

* INT0 External Interrupt
* GPIO
* SSD Multiplexing
* Sleep Mode Control

## Concepts Used

* Sleep Mode
* Interrupt Handling
* Interrupt-on-Change
* Low Power Design
* Event-Driven Programming
* Embedded C Programming

## Files

* main.c
* ssd.c
* ssd.h
* interrupt.c
* interrupt.h

## Expected Learning Outcomes

* Power Management Techniques
* Sleep and Wake-Up Mechanisms
* External Interrupt Configuration
* SSD Interfacing
* Embedded Event Handling
* PIC18F4580 Interrupt System

## Controller

PIC18F4580

## Language

Embedded C

## Author

MD Abdul Azeez

