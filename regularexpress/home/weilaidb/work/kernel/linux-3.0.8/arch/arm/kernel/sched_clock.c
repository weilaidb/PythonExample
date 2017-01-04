static void sched_clock_poll(unsigned long wrap_ticks);
static DEFINE_TIMER(sched_clock_timer, sched_clock_poll, 0, 0);
static void (*sched_clock_update_fn)(void);
static void sched_clock_poll(unsigned long wrap_ticks)
void __init init_sched_clock(struct clock_data *cd, void (*update)(void),
unsigned int clock_bits, unsigned long rate)
void __init sched_clock_postinit(void)
