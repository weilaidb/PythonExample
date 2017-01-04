#define _ASM_TILE_DELAY_H
extern void __bad_udelay(void);
extern void __bad_ndelay(void);
extern void __udelay(unsigned long usecs);
extern void __ndelay(unsigned long nsecs);
extern void __delay(unsigned long loops);
#define udelay(n) (__builtin_constant_p(n) ? \
((n) > 20000 ? __bad_udelay() : __ndelay((n) * 1000)) : \
__udelay(n))
#define ndelay(n) (__builtin_constant_p(n) ? \
((n) > 20000 ? __bad_ndelay() : __ndelay(n)) : \
__ndelay(n))
