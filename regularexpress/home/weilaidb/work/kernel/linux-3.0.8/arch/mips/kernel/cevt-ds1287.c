int ds1287_timer_state(void)
int ds1287_set_base_clock(unsigned int hz)
static int ds1287_set_next_event(unsigned long delta,
struct clock_event_device *evt)
static void ds1287_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static void ds1287_event_handler(struct clock_event_device *dev)
static struct clock_event_device ds1287_clockevent = ;
static irqreturn_t ds1287_interrupt(int irq, void *dev_id)
static struct irqaction ds1287_irqaction = ;
int __init ds1287_clockevent_init(int irq)
