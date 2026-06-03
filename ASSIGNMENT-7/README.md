# A07 - Time Separator Generation using Timer0, Timer1 and Timer2

## Problem Statement

Develop an Embedded C program to generate the time separator signal of a digital clock using Timer0, Timer1, and Timer2 of the PIC18F4580 microcontroller.

Each timer should independently generate a 0.5 Hz blinking signal and drive a dedicated LED.

## Objective

Demonstrate timer configuration and synchronization by generating identical timing signals using three different hardware timers.

## Input Requirements

* Timer0
* Timer1
* Timer2

## Output Requirements

1. Three LEDs are assigned to Timer0, Timer1, and Timer2 respectively.
2. Each LED should toggle every 500 ms.
3. All LEDs should blink at a frequency of 0.5 Hz.
4. Long-term operation should maintain synchronization between all LEDs.
5. No noticeable timing drift should occur between the timers.

## Functional Description

### Timer Assignments

| Timer  | Indicator |
| ------ | --------- |
| Timer0 | LED1      |
| Timer1 | LED2      |
| Timer2 | LED3      |

### Operation

After power-up:

* Timer0 starts generating a 500 ms time base.
* Timer1 starts generating a 500 ms time base.
* Timer2 starts generating a 500 ms time base.

Each timer toggles its dedicated LED independently.

Example:

```text id="6shgkk"
Time (ms)    LED1    LED2    LED3

0             OFF     OFF     OFF
500           ON      ON      ON
1000          OFF     OFF     OFF
1500          ON      ON      ON
2000          OFF     OFF     OFF
```

### Synchronization Requirement

The LEDs should remain synchronized even after extended operation.

Expected behavior:

```text id="3lf3qg"
LED1 (Timer0)  ──■■──■■──■■──
LED2 (Timer1)  ──■■──■■──■■──
LED3 (Timer2)  ──■■──■■──■■──
```

No visible phase difference should appear between the LEDs.

## Hardware Used

* PIC18F4580 Microcontroller
* 3 LEDs
* Development Board

## Peripherals Used

* Timer0
* Timer1
* Timer2
* GPIO

## Concepts Used

* Timer Configuration
* Timer Interrupts
* Periodic Signal Generation
* Time Base Generation
* Synchronization Techniques
* Embedded C Programming

## Files

* main.c
* timer0.c
* timer0.h
* timer1.c
* timer1.h
* timer2.c
* timer2.h

## Expected Learning Outcomes

* Understanding Timer0, Timer1, and Timer2
* Timer Interrupt Handling
* Accurate Time Generation
* Synchronization of Multiple Timers
* Real-Time Embedded Programming

## Controller

PIC18F4580

## Language

Embedded C

## Author

MD Abdul Azeez

