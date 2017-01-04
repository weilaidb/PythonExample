static unsigned long clocktick __read_mostly;
irqreturn_t __irq_entry timer_interrupt(int irq, void *dev_id)
unsigned long profile_pc(struct pt_regs *regs)
EXPORT_SYMBOL(profile_pc);
static cycle_t read_cr16(struct clocksource *cs)
static struct clocksource clocksource_cr16 = ;
int update_cr16_clocksource(void)
int update_cr16_clocksource(void)
void __init start_cpu_itimer(void)
static struct platform_device rtc_generic_dev = ;
static int __init rtc_init(void)
module_init(rtc_init);
void read_persistent_clock(struct timespec *ts)
void __init time_init(void)
