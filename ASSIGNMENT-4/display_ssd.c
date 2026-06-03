#include "ssd_head.h"
#include <xc.h>
void init_ssd_display(void)
{
    TRISD=0x00;
    PORTD=0x00;
    
    TRISD=TRISD & 0xF0;
    PORTA=PORTA & 0x00;
    return;
}

void display_ssd(unsigned char *ssd)
{
    for(int i=0;i<4;i++)
    {
        PORTD =ssd[i];
        PORTD = (PORTA & 0xF0);
        for(int wait=1000;wait--;);
    }
}

    
