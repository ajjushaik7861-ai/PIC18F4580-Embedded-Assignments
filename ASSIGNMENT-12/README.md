# A12 - LED Dimmer Application using PWM (Timer ISR Based)

## Problem Statement

Develop an Embedded C program to implement an LED Dimmer Application using PWM generated through a Timer Interrupt Service Routine (ISR).

The brightness of the LED should vary according to the position of a potentiometer connected to the ADC input of the PIC18F4580 microcontroller.

## Objective

Control LED brightness dynamically by adjusting the PWM duty cycle based on potentiometer input.

## Input Requirements

| Input                | Function                |
| -------------------- | ----------------------- |
| Potentiometer (POT1) | Brightness Control Knob |
| Timer                | PWM Generation          |

## Output Requirements

1. Read the potentiometer value after power-up.
2. Generate PWM based on the potentiometer value.
3. Adjust LED brightness according to the PWM duty cycle.
4. Continuously monitor the potentiometer.
5. Update the duty cycle only when the potentiometer value changes.
6. Continue the process indefinitely.

## Functional Description

### Potentiometer Reading

The ADC continuously reads the potentiometer position.

Example:

```text
Potentiometer Position → ADC Value
```

### PWM Duty Cycle Generation

ADC value is mapped to PWM duty cycle.

Example:

| ADC Value | Duty Cycle | Brightness |
| --------- | ---------- | ---------- |
| 0         | 0%         | OFF        |
| 256       | 25%        | Low        |
| 512       | 50%        | Medium     |
| 768       | 75%        | High       |
| 1023      | 100%       | Maximum    |

### Brightness Control

As the potentiometer is rotated:

```text
Potentiometer ↑
      ↓
ADC Value ↑
      ↓
Duty Cycle ↑
      ↓
LED Brightness ↑
```

### Continuous Monitoring

System operation:

```text
Read Potentiometer
        │
        ▼
Compare with Previous Value
        │
 ┌──────┴──────┐
 │             │
Same        Different
 │             │
Do Nothing  Update PWM
 │             │
 └──────┬──────┘
        ▼
Repeat
```

## PWM Illustration

### Low Brightness

```text
|█---------| 10%
```

### Medium Brightness

```text
|█████-----| 50%
```

### High Brightness

```text
|████████--| 80%
```

### Maximum Brightness

```text
|██████████| 100%
```

## Hardware Used

* PIC18F4580 Microcontroller
* LED
* Potentiometer
* Development Board

## Peripherals Used

* ADC (Analog-to-Digital Converter)
* Timer Interrupt
* GPIO
* Software PWM

## Concepts Used

* ADC Conversion
* PWM Generation
* Timer Interrupt Service Routine
* Analog Signal Processing
* Brightness Control
* Embedded C Programming

## Files

* main.c
* adc.c
* adc.h
* timer.c
* timer.h

## Expected Learning Outcomes

* ADC Interfacing
* PWM Generation
* Analog Input Processing
* Timer Configuration
* LED Brightness Control
* Real-Time Embedded Systems

## Controller

PIC18F4580

## Language

Embedded C

## Author

MD Abdul Azeez

