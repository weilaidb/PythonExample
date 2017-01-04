#define __UM_DELAY_H
#define MILLION 1000000
extern void __bad_udelay(void);
extern void __udelay(unsigned long usecs);
extern void __delay(unsigned long loops);
#define udelay(n) ((__builtin_constant_p(n) && (n) > 20000) ? \
__bad_udelay() : __udelay(n))
extern void __unimplemented_ndelay(void);
#define ndelay(n) __unimplemented_ndelay()
