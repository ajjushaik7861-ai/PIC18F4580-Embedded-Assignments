
#include<xc.h>
#include"ASSIGN-8.h"

void init_config(void)
{
    //SSD
    TRISD=0x00;
    PORTD=0x00;
    
    TRISA=TRISA & 0xF0;
    PORTA=PORTA & 0x0F;
    
    //switches
    TRISC=TRISC | 0X0F;
    PORTC=PORTC |0x0F;
    
    //Timer0
    init_timer0();
    
}

void init_timer0(void)
{
    //configure timer0;
    TMR0ON = 1; // Turn on timer
    T08BIT = 1; // 8-bit timer
    T0CS = 0; // Internal clock

    PSA = 0; // Assign prescaler to Timer0 
    T0PS2 = 1;
    T0PS1 = 1;
    T0PS0 = 1; // 1:256 prescaler 

    // Interrupt config (you can keep it even if not using ISR)
    GIE = 1;
    PEIE = 1;
    TMR0IE = 1;
    TMR0IF = 0;

    TMR0 = 6; // Preload value (gives ~12.8 ms delay)
}

void display_ssd(unsigned char *SSD) 
{
    for (int i = 0; i < 4; i++) 
    {
        PORTD = SSD[i];
        PORTA = (PORTA & 0xF0) | (1 << i);
        for (unsigned int wait = 1000; wait--;);
    }
}


void run_mode_logic(void) 
{
    key = read_digital_keypad(EDGE);
    if (key == SELECT_MODE) {
        mode_flag = EDIT_MODE;
        field_flag = MINUTE_FIELD;
    }
}

void edit_mode_logic(void) {
    unsigned char key;

    // EDGE trigger (mode + field select)
    key = read_digital_keypad(EDGE);

    if (key == SELECT_MODE) {
        mode_flag = RUN_MODE;
    } else if (key == SELECT_FIELD) {
        if (field_flag == HOUR_FIELD)
            field_flag = MINUTE_FIELD;
        else
            field_flag = HOUR_FIELD;
    }

    // LEVEL trigger (increment/decrement)
    key = read_digital_keypad(LEVEL);

    if (key == INCREMENT) {
        if (field_flag == HOUR_FIELD) {
            hour++;
            if (hour > 23)
                hour = 0;
        } else {
            min++;
            if (min > 59)
                min = 0;
        }
    } else if (key == DECREMENT) {
        if (field_flag == HOUR_FIELD) {
            if (hour == 0)
                hour = 23;
            else
                hour--;
        } else {
            if (min == 0)
                min = 59;
            else
                min--;
        }
    }
}

unsigned char read_digital_keypad(unsigned char trigger) {

    static int once = 1; // For edge detection

    if (trigger == LEVEL) {
        return PORTC & 0x0F; // Return key while pressed
    } else if (trigger == EDGE) {
        if (((PORTC & 0x0F) != ALL_RELEASED) && (once == 1)) {
            once = 0; // Detect once
            return PORTC & 0x0F;
        } else if ((PORTC & 0x0F) == ALL_RELEASED) {
            once = 1; // Reset on release
        }
        return ALL_RELEASED; // No key
    }
    return ALL_RELEASED;
}