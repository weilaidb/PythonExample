#define _ASM_TIMEX_H
#define TICK_SIZE (tick_nsec / 1000)
#define CLOCK_TICK_RATE MN10300_JCCLK
extern cycles_t cacheflush_time;
static inline cycles_t get_cycles(void)
extern int init_clockevents(void);
extern int init_clocksource(void);
static inline void setup_jiffies_interrupt(int irq,
struct irqaction *action)
