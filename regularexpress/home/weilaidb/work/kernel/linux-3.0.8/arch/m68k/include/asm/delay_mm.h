#define _M68K_DELAY_H
static inline void __delay(unsigned long loops)
extern void __bad_udelay(void);
static inline void __const_udelay(unsigned long xloops)
static inline void __udelay(unsigned long usecs)
#define udelay(n) (__builtin_constant_p(n) ? \
((n) > 20000 ? __bad_udelay() : __const_udelay((n) * 4295)) : \
__udelay(n))
static inline unsigned long muldiv(unsigned long a, unsigned long b,
unsigned long c)
