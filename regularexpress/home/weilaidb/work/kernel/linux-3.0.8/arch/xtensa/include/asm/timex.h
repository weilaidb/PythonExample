#define _XTENSA_TIMEX_H
#define _INTLEVEL(x)	XCHAL_INT ## x ## _LEVEL
#define INTLEVEL(x)	_INTLEVEL(x)
#if INTLEVEL(XCHAL_TIMER0_INTERRUPT) == 1
# define LINUX_TIMER     0
# define LINUX_TIMER_INT XCHAL_TIMER0_INTERRUPT
#elif INTLEVEL(XCHAL_TIMER1_INTERRUPT) == 1
# define LINUX_TIMER     1
# define LINUX_TIMER_INT XCHAL_TIMER1_INTERRUPT
#elif INTLEVEL(XCHAL_TIMER2_INTERRUPT) == 1
# define LINUX_TIMER     2
# define LINUX_TIMER_INT XCHAL_TIMER2_INTERRUPT
# error "Bad timer number for Linux configurations!"
#define LINUX_TIMER_MASK        (1L << LINUX_TIMER_INT)
#define CLOCK_TICK_RATE 	1193180
#define CLOCK_TICK_FACTOR       20
extern unsigned long ccount_per_jiffy;
extern unsigned long nsec_per_ccount;
#define CCOUNT_PER_JIFFY ccount_per_jiffy
#define NSEC_PER_CCOUNT  nsec_per_ccount
#define CCOUNT_PER_JIFFY (CONFIG_XTENSA_CPU_CLOCK*(1000000UL/HZ))
#define NSEC_PER_CCOUNT (1000UL / CONFIG_XTENSA_CPU_CLOCK)
typedef unsigned long long cycles_t;
extern cycles_t cacheflush_time;
#define get_cycles()	(0)
#define WSR_CCOUNT(r)	  asm volatile ("wsr %0,"__stringify(CCOUNT) :: "a" (r))
#define RSR_CCOUNT(r)	  asm volatile ("rsr %0,"__stringify(CCOUNT) : "=a" (r))
#define WSR_CCOMPARE(x,r) asm volatile ("wsr %0,"__stringify(CCOMPARE)"+"__stringify(x) :: "a"(r))
#define RSR_CCOMPARE(x,r) asm volatile ("rsr %0,"__stringify(CCOMPARE)"+"__stringify(x) : "=a"(r))
static inline unsigned long get_ccount (void)
static inline void set_ccount (unsigned long ccount)
static inline unsigned long get_linux_timer (void)
static inline void set_linux_timer (unsigned long ccompare)
