


#include <xc.h>
#include"external_interrupt.h"

void init_ssd(void)
{
    // SSD
    TRISD = 0x00;
    TRISA = TRISA & 0xF0;
    
    PORTD = 0x00;
    PORTD = PORTD & 0xF0;
    
}

void display_ssd(unsigned char *ssd)
{
    for (int i = 0; i < 4; i++) 
    {
        PORTD = ssd[i];
        PORTA = (PORTA & 0xF0) | (1 << i);
        for (int wait = 1000; wait--;);
    }
}

void init_external_interrupt(void) {
    GIE = 1; // Enable global interrupts (main switch ON)
    PEIE = 1; // Enable peripheral interrupts (extra, not mandatory for INT0)
    INT0IE = 1; // Enable external interrupt INT0 (RB0)
    INT0IF = 0; // Clear interrupt flag (remove old signal)
    INTEDG0 = 1; // Interrupt on rising edge (button press)
}


