#define _ASM_DELAY_H
extern unsigned long __delay_loops_MHz;
static inline void __delay(unsigned long loops)
extern unsigned long loops_per_jiffy;
static inline void udelay(unsigned long usecs)
#define ndelay(n)	udelay((n) * 5)
