#define TICK_SIZE (tick_nsec / 1000)
static void enable_rt_irq(struct irq_data *d)
static void disable_rt_irq(struct irq_data *d)
static struct irq_chip rt_irq_type = ;
static int rt_next_event(unsigned long delta, struct clock_event_device *evt)
static void rt_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
int rt_timer_irq;
static DEFINE_PER_CPU(struct clock_event_device, hub_rt_clockevent);
static DEFINE_PER_CPU(char [11], hub_rt_name);
static irqreturn_t hub_rt_counter_handler(int irq, void *dev_id)
struct irqaction hub_rt_irqaction = ;
#define NSEC_PER_CYCLE		800
#define CYCLES_PER_SEC		(NSEC_PER_SEC / NSEC_PER_CYCLE)
void __cpuinit hub_rt_clock_event_init(void)
static void __init hub_rt_clock_event_global_init(void)
static cycle_t hub_rt_read(struct clocksource *cs)
struct clocksource hub_rt_clocksource = ;
static void __init hub_rt_clocksource_init(void)
void __init plat_time_init(void)
void __cpuinit cpu_time_init(void)
void __cpuinit hub_rtc_init(cnodeid_t cnode)
static int __init sgi_ip27_rtc_devinit(void)
late_initcall(sgi_ip27_rtc_devinit);
