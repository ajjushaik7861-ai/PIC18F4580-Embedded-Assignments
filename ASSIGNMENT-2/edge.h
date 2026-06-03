/* 
 * File:   edge.h
 * Author: ajjus
 *
 * Created on 11 March, 2026, 1:19 PM
 */

 #ifndef EDGE_H
#define	EDGE_H

    void init_digital_keypad(void);
unsigned char read_digital_keypad(unsigned char trigger);

#define SW1 0x0E
#define SW2 0x0D
#define SW3 0x0B
#define SW4 0x07

#define ALL_RELEASED 0x0F

#define LEVEL 1
#define EDGE 0



#ifdef	__cplusplus

#endif

#endif	/* EDGE_H */

