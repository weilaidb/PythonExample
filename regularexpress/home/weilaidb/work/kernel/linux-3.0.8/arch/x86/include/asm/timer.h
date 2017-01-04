#define _ASM_X86_TIMER_H
#define TICK_SIZE (tick_nsec / 1000)
unsigned long long native_sched_clock(void);
extern int recalibrate_cpu_khz(void);
extern int no_timer_check;
DECLARE_PER_CPU(unsigned long, cyc2ns);
DECLARE_PER_CPU(unsigned long long, cyc2ns_offset);
#define CYC2NS_SCALE_FACTOR 10
static inline unsigned long long __cycles_2_ns(unsigned long long cyc)
static inline unsigned long long cycles_2_ns(unsigned long long cyc)
