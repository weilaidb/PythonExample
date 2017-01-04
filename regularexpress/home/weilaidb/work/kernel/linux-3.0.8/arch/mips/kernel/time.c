DEFINE_SPINLOCK(rtc_lock);
EXPORT_SYMBOL(rtc_lock);
int __weak rtc_mips_set_time(unsigned long sec)
int __weak rtc_mips_set_mmss(unsigned long nowtime)
int update_persistent_clock(struct timespec now)
static int null_perf_irq(void)
int (*perf_irq)(void) = null_perf_irq;
EXPORT_SYMBOL(perf_irq);
unsigned int mips_hpt_frequency;
void __init plat_timer_setup(void)
static __init int cpu_has_mfc0_count_bug(void)
void __init time_init(void)
