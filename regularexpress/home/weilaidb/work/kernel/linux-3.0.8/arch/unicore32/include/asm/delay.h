#define __UNICORE_DELAY_H__
extern void __delay(int loops);
extern void __bad_udelay(void);
extern void __udelay(unsigned long usecs);
extern void __const_udelay(unsigned long);
#define MAX_UDELAY_MS 2
#define udelay(n)							\
(__builtin_constant_p(n) ?					\
((n) > (MAX_UDELAY_MS * 1000) ? __bad_udelay() :		\
__const_udelay((n) * ((2199023U*HZ)>>11))) :	\
__udelay(n))
