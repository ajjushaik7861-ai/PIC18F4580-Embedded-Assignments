
#include<xc.h>
#include"timer_header.h"

extern int timer_cycle;

void __interrupt() isr() 
{
    if(TMR2IF == 1)
    {
        timer_cycle++;
        if(timer_cycle == PERIOD)
            timer_cycle = 0;
        
        TMR2IF = 0;
    }
}

