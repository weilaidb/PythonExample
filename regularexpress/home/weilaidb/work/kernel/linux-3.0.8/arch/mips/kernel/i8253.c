DEFINE_RAW_SPINLOCK(i8253_lock);
EXPORT_SYMBOL(i8253_lock);
static void init_pit_timer(enum clock_event_mode mode,
struct clock_event_device *evt)
static int pit_next_event(unsigned long delta, struct clock_event_device *evt)
static struct clock_event_device pit_clockevent = ;
static irqreturn_t timer_interrupt(int irq, void *dev_id)
static struct irqaction irq0  = ;
void __init setup_pit_timer(void)
static int __init init_pit_clocksource(void)
arch_initcall(init_pit_clocksource);
