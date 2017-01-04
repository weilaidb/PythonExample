#define _ASM_DELAY_H
extern void __udelay(unsigned long usecs);
extern void __delay(unsigned long loops);
#define udelay(n) __udelay(n)
