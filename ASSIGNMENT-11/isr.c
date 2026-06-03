

#include<xc.h>
#include"assign-11.h"

extern int sec_count;
extern int count;
extern int program_cycle;

void __interrupt() isr() //this will call the isr function whenever it needs
{
    if(TMR2IF==1)
    {
        program_cycle++;
        if(count++==20000)
        {
            count=0;
            sec_count++;
        }
        TMR2IF=0;
    }
}

