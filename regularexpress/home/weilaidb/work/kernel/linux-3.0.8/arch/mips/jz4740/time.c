#define TIMER_CLOCKEVENT 0
#define TIMER_CLOCKSOURCE 1
static uint16_t jz4740_jiffies_per_tick;
static cycle_t jz4740_clocksource_read(struct clocksource *cs)
static struct clocksource jz4740_clocksource = ;
static irqreturn_t jz4740_clockevent_irq(int irq, void *devid)
static void jz4740_clockevent_set_mode(enum clock_event_mode mode,
struct clock_event_device *cd)
static int jz4740_clockevent_set_next(unsigned long evt,
struct clock_event_device *cd)
static struct clock_event_device jz4740_clockevent = ;
static struct irqaction timer_irqaction = ;
void __init plat_time_init(void)
