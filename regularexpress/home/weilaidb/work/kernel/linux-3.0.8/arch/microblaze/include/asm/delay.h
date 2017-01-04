#define _ASM_MICROBLAZE_DELAY_H
extern inline void __delay(unsigned long loops)
#define __MAX_UDELAY	(226050910UL/HZ)
#define __MAX_NDELAY	(4294967295UL/HZ)
extern unsigned long loops_per_jiffy;
extern inline void __udelay(unsigned int x)
extern void __bad_udelay(void);
extern void __bad_ndelay(void);
#define udelay(n) (__builtin_constant_p(n) ? \
((n) > __MAX_UDELAY ? __bad_udelay() : __udelay((n) * (19 * HZ))) : \
__udelay((n) * (19 * HZ)))
#define ndelay(n) (__builtin_constant_p(n) ? \
((n) > __MAX_NDELAY ? __bad_ndelay() : __udelay((n) * HZ)) : \
__udelay((n) * HZ))
#define muldiv(a, b, c)		(((a)*(b))/(c))
