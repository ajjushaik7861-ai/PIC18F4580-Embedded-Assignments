

#include<xc.h>
#include "assign7.h"

void init_timer0(void)
{
    
    T08BIT=1;//8 bit timer
    T0CS=0;//internal clk
    PSA=1;//pre-scaler disable
    TMR0=6;//initial timer value
    TMR0IE=1;//enable timer interrupt
    TMR0IF=0;//must set to zero
    TMR0ON=1;//timer on
}

void init_timer1(void)
{
    TMR1ON=1;//timer on
    TMR1CS=0;//use internal clk
    TMR1IE=1;//enable timer interrupt
    TMR1IF=0;//must set to zero
}

void init_timer2(void)
{
    TMR2ON=1;//timer on
    PR2=250;//set pre-scaler 
    TMR2IE=1;//enable timer interrupt
    TMR2IF=0;//must set to zero
}

void init_config(void)
{
    GIE=1;//enable global interrupt
    PEIE=1;//enable peripheral interrupt
    //initialize timers
    init_timer0();
    init_timer1();
    init_timer2();
    //set RB1 RB2 RB3 AS OUTPUT
    TRISB0=0;
    TRISB1=0;
    TRISB2=0;
    //TRISB4=0;
    //LEDS  are off
    RB0=0;
    RB1=0;
    RB2=0;
    //RB4 = 1;
    
    
}