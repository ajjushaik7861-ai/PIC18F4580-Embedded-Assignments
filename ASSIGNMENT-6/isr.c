

#include<xc.h>

void __interrupt() isr(void) 
{
    if (INT0IF == 1)
    { 
        // Wake up system
        
        INT0IF = 0; 
    }
}


