static inline int set_rtc_mmss(unsigned long nowtime)
static irqreturn_t timer_interrupt(int irq, void *dummy)
void read_persistent_clock(struct timespec *ts)
void __init time_init(void)
u32 arch_gettimeoffset(void)
static int __init rtc_init(void)
module_init(rtc_init);
