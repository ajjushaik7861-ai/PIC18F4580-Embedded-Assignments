#include <xc.h>
#include"edge.h"

void init_digital_keypad(void)
{
    TRISC = TRISC | 0x0F;
}

unsigned char read_digital_keypad(unsigned char trigger)
{
    static int once = 1;
    
    if(trigger == LEVEL)
    {
        return PORTC & 0x0F;
    }
    else if(trigger == EDGE)
    {
        if((( PORTC & 0x0F ) != ALL_RELEASED) && (once == 1))
        {
            once = 0;
            return PORTC & 0x0F;
        }
        else if((PORTC & 0x0F) == ALL_RELEASED )
        {
            once = 1;
        }
        return ALL_RELEASED;
    }
}