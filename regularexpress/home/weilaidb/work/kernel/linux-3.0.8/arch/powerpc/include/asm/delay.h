#define _ASM_POWERPC_DELAY_H
extern void __delay(unsigned long loops);
extern void udelay(unsigned long usecs);
#define mdelay(n)	udelay((n) * 1000)
#define spin_event_timeout(condition, timeout, delay)                          \
()
