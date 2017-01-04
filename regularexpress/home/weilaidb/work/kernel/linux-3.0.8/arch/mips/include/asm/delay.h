#define _ASM_DELAY_H
extern void __delay(unsigned int loops);
extern void __ndelay(unsigned int ns);
extern void __udelay(unsigned int us);
#define ndelay(ns) __ndelay(ns)
#define udelay(us) __udelay(us)
#if HZ >= 1000
#define MAX_UDELAY_MS	1
#elif HZ <= 200
#define MAX_UDELAY_MS	5
#define MAX_UDELAY_MS	(1000 / HZ)
