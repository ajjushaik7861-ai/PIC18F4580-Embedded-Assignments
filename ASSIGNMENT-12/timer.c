
#include"timer_header.h"
#include <xc.h>

void init_timer2(void)
{
    GIE = 1;
    PEIE = 1;
    PR2 = 100;
    TMR2IE = 1;
    TMR2IF = 0;
    TMR2ON = 1;
}
