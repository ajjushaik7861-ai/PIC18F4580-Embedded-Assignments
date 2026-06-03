
#include<xc.h>
#include"adc_header.h"

void init_adc(void)
{
    ADON = 1; //turn on adc
    
    PCFG0 = 0;      //to assign all channels as analog -> all PCFG as 0
    PCFG1 = 0;
    PCFG2 = 0;
    PCFG3 = 0;
    
    VCFG0 = 0;
    VCFG1 = 0;      //to select default reference voltage 
            
    ADCS0 = 0;
    ADCS1 = 1;
    ADCS2 = 0;      // to select the clock FOSC/ 32 (0.625 Mhz) -> TAD = 1.6 ms
    
    ACQT0 = 0;
    ACQT1 = 1;
    ACQT2 = 0;      //to select 4 TAD(6,4 us) as acquisition
    
    ADFM = 1;       //to select the right justification
}

unsigned int read_adc(unsigned char channel)
{
    ADCON0 = (ADCON0 & 0xC3) | (channel << 2);
    
    GO = 1;
    
    while(GO);  //waiting till conversion completes
    
    return (ADRESH << 8) | ADRESL;
     
}