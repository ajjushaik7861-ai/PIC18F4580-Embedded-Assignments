
#include<xc.h>
#include"ASSIGN-8.h"


static unsigned char dp_count = 0;

void __interrupt() isr(void) {
    if (TMR0IF) {
        TMR0IF = 0;

        count++; // always increment

        if (count == 39) {
            count = 0;

            blink_state = !blink_state; // 500 ms toggle

            if (mode_flag == RUN_MODE) {
                dp_count++;

                if (dp_count == 118) {
                    dp_count = 0;

                    min++;

                    if (min == 60) {
                        min = 0;
                        hour++;
                    }

                    if (hour == 24) {
                        hour = 0;
                    }
                }
            }
        }
    }
}