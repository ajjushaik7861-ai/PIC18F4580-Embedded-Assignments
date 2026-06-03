

#include<xc.h>
#include "assign7.h"

void __interrupt() isr(void)
{
    static unsigned int count0=0,count1=0,count2=0; 
    
    if(TMR0IF)
    {
        TMR0IF=0;
        TMR0=TMR0+8;
        if(count0++==10000)
        {
            count0 = 0;
            RB0=!RB0;
        }
    }
    if(TMR1IF)
    {
        TMR1IF=0;
        TMR1=TMR1+3038;
        if(count1++==40)
        {
            count1 = 0;
            RB1=!RB1;
        }
    }
    
    if(TMR2IF)
    {
        TMR2IF=0;
        TMR2=TMR2+8;
        if(count2++==10000)
        {
            count2 = 0;
            RB2=!RB2;
        }
    }
}