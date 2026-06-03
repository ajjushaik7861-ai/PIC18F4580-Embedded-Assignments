

#include<xc.h>
#include"keypad.h"

void init_keypad(void)
{
    TRISC=TRISC|0X0F;
}

unsigned char read_digital_keypad(unsigned char trigger)
{
    static char once =1;
    
    if(trigger==LEVEL)
    {
        PORTC=PORTC & 0X0F;
    }
    else if(trigger == EDGE)
    {
        if((PORTC & 0X0F !=ALL_RELEASED)&& once==1)
        {
            once=0;
            return PORTC & 0X0F;
        }
        else if((PORTC & 0X0F)==ALL_RELEASED)
        {
            once=1;
        }
    }
    return ALL_RELEASED;
}
