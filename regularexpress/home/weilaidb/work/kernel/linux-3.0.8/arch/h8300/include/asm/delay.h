#define _H8300_DELAY_H
static inline void __delay(unsigned long loops)
extern unsigned long loops_per_jiffy;
static inline void udelay(unsigned long usecs)
