DEFINE_SPINLOCK(rtc_lock);
#define TICK_PRIV_BIT	(1UL << 63)
#define TICKCMP_IRQ_BIT	(1UL << 63)
unsigned long profile_pc(struct pt_regs *regs)
EXPORT_SYMBOL(profile_pc);
static void tick_disable_protection(void)
static void tick_disable_irq(void)
static void tick_init_tick(void)
static unsigned long long tick_get_tick(void)
static int tick_add_compare(unsigned long adj)
static unsigned long tick_add_tick(unsigned long adj)
static struct sparc64_tick_ops tick_operations __read_mostly = ;
struct sparc64_tick_ops *tick_ops __read_mostly = &tick_operations;
EXPORT_SYMBOL(tick_ops);
static void stick_disable_irq(void)
static void stick_init_tick(void)
static unsigned long long stick_get_tick(void)
static unsigned long stick_add_tick(unsigned long adj)
static int stick_add_compare(unsigned long adj)
static struct sparc64_tick_ops stick_operations __read_mostly = ;
#define HBIRD_STICKCMP_ADDR	0x1fe0000f060UL
#define HBIRD_STICK_ADDR	0x1fe0000f070UL
static unsigned long __hbird_read_stick(void)
static void __hbird_write_stick(unsigned long val)
static void __hbird_write_compare(unsigned long val)
static void hbtick_disable_irq(void)
static void hbtick_init_tick(void)
static unsigned long long hbtick_get_tick(void)
static unsigned long hbtick_add_tick(unsigned long adj)
static int hbtick_add_compare(unsigned long adj)
static struct sparc64_tick_ops hbtick_operations __read_mostly = ;
static unsigned long timer_ticks_per_nsec_quotient __read_mostly;
int update_persistent_clock(struct timespec now)
unsigned long cmos_regs;
EXPORT_SYMBOL(cmos_regs);
static struct resource rtc_cmos_resource;
static struct platform_device rtc_cmos_device = ;
static int __devinit rtc_probe(struct platform_device *op)
static const struct of_device_id rtc_match[] = ;
static struct platform_driver rtc_driver = ;
static struct platform_device rtc_bq4802_device = ;
static int __devinit bq4802_probe(struct platform_device *op)
static const struct of_device_id bq4802_match[] = ;
static struct platform_driver bq4802_driver = ;
static unsigned char mostek_read_byte(struct device *dev, u32 ofs)
static void mostek_write_byte(struct device *dev, u32 ofs, u8 val)
static struct m48t59_plat_data m48t59_data = ;
static struct platform_device m48t59_rtc = ;
static int __devinit mostek_probe(struct platform_device *op)
static const struct of_device_id mostek_match[] = ;
static struct platform_driver mostek_driver = ;
static struct platform_device rtc_sun4v_device = ;
static struct platform_device rtc_starfire_device = ;
static int __init clock_init(void)
fs_initcall(clock_init);
static unsigned long sparc64_init_timers(void)
struct freq_table ;
static DEFINE_PER_CPU(struct freq_table, sparc64_freq_table) = ;
unsigned long sparc64_get_clock_tick(unsigned int cpu)
EXPORT_SYMBOL(sparc64_get_clock_tick);
static int sparc64_cpufreq_notifier(struct notifier_block *nb, unsigned long val,
void *data)
static struct notifier_block sparc64_cpufreq_notifier_block = ;
static int __init register_sparc64_cpufreq_notifier(void)
core_initcall(register_sparc64_cpufreq_notifier);
static int sparc64_next_event(unsigned long delta,
struct clock_event_device *evt)
static void sparc64_timer_setup(enum clock_event_mode mode,
struct clock_event_device *evt)
static struct clock_event_device sparc64_clockevent = ;
static DEFINE_PER_CPU(struct clock_event_device, sparc64_events);
void __irq_entry timer_interrupt(int irq, struct pt_regs *regs)
void __devinit setup_sparc64_timer(void)
#define SPARC64_NSEC_PER_CYC_SHIFT	10UL
static struct clocksource clocksource_tick = ;
static unsigned long tb_ticks_per_usec __read_mostly;
void __delay(unsigned long loops)
EXPORT_SYMBOL(__delay);
void udelay(unsigned long usecs)
EXPORT_SYMBOL(udelay);
static cycle_t clocksource_tick_read(struct clocksource *cs)
void __init time_init(void)
unsigned long long sched_clock(void)
int __devinit read_current_timer(unsigned long *timer_val)
