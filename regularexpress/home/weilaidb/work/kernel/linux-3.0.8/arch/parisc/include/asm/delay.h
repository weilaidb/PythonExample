#define _PARISC_DELAY_H
static __inline__ void __delay(unsigned long loops)
static __inline__ void __cr16_delay(unsigned long clocks)
static __inline__ void __udelay(unsigned long usecs)
#define udelay(n) __udelay(n)
