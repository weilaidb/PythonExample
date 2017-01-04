#define _ASM_IA64_TIMEX_H
typedef unsigned long cycles_t;
extern void (*ia64_udelay)(unsigned long usecs);
#define CLOCK_TICK_RATE		(HZ * 100000UL)
static inline cycles_t
get_cycles (void)
extern void ia64_cpu_local_tick (void);
extern unsigned long long ia64_native_sched_clock (void);
