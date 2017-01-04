#define _ASM_SCORE_DELAY_H
static inline void __delay(unsigned long loops)
static inline void __udelay(unsigned long usecs)
#define udelay(usecs) __udelay(usecs)
