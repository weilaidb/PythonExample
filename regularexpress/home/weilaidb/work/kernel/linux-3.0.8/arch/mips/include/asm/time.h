#define _ASM_TIME_H
extern spinlock_t rtc_lock;
extern int rtc_mips_set_time(unsigned long);
extern int rtc_mips_set_mmss(unsigned long);
extern void plat_time_init(void);
extern unsigned int mips_hpt_frequency;
extern int (*perf_irq)(void);
extern unsigned int __weak get_c0_compare_int(void);
extern int r4k_clockevent_init(void);
static inline int mips_clockevent_init(void)
extern int init_r4k_clocksource(void);
static inline int init_mips_clocksource(void)
static inline void clockevent_set_clock(struct clock_event_device *cd,
unsigned int clock)
