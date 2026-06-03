# A11 - Point Brightness Control using PWM

## Problem Statement

Develop an Embedded C program to implement point brightness control of an LED using PWM generated through a Timer Interrupt Service Routine (ISR).

The LED should normally operate at a low brightness level and temporarily switch to full brightness when an interrupt is detected.

## Objective

Demonstrate PWM generation using timer interrupts and implement dynamic brightness control of an LED.

## Input Requirements

| Input | Function                          |
| ----- | --------------------------------- |
| DKS1  | Interrupt Input                   |
| Timer | PWM Generation and Timing Control |

## Output Requirements

1. On power-up or reset, the LED should glow at approximately 10% duty cycle.
2. When DKS1 interrupt occurs, the LED brightness should increase to 100%.
3. The LED should remain at full brightness for 5 seconds.
4. After 5 seconds, the LED should automatically return to 10% duty cycle.

## Functional Description

### Initial State

After power-up:

* PWM is generated using Timer ISR.
* LED operates at low brightness.

Example:

```text
Duty Cycle = 10%
Brightness = Dim
```

### Interrupt Event

When DKS1 is pressed:

```text
Interrupt Detected
```

The LED immediately switches to:

```text
Duty Cycle = 100%
Brightness = Maximum
```

### Timeout Operation

The LED remains at full brightness for:

```text
5 Seconds
```

### Return to Normal Mode

After the timeout:

```text
Duty Cycle = 10%
Brightness = Dim
```

The system returns to its initial state and waits for the next interrupt.

## State Diagram

```text
Power ON
    │
    ▼
10% Brightness
    │
DKS1 Interrupt
    ▼
100% Brightness
    │
5 Seconds Timeout
    ▼
10% Brightness
```

## PWM Duty Cycle Illustration

### Normal Mode

```text
|█---------| 10%
```

### Full Brightness Mode

```text
|██████████| 100%
```

## Hardware Used

* PIC18F4580 Microcontroller
* LED
* Digital Keypad
* Development Board

## Peripherals Used

* Timer Interrupt
* GPIO
* PWM Generation (Software PWM)

## Concepts Used

* PWM Generation
* Timer Interrupt Service Routine
* Brightness Control
* Interrupt Handling
* Time-Based Events
* Embedded C Programming

## Files

* main.c
* timer.c
* timer.h
* interrupt.c
* interrupt.h

## Expected Learning Outcomes

* PWM Fundamentals
* Software-Based PWM Generation
* Timer Configuration
* Interrupt Programming
* Brightness Control Techniques
* Real-Time Embedded Systems

## Controller

PIC18F4580

## Language

Embedded C

## Author

MD Abdul Azeez

