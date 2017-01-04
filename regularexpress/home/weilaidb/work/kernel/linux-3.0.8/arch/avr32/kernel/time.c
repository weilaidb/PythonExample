static cycle_t read_cycle_count(struct clocksource *cs)
static struct clocksource counter = ;
static irqreturn_t timer_interrupt(int irq, void *dev_id)
static struct irqaction timer_irqaction = ;
static int comparator_next_event(unsigned long delta,
struct clock_event_device *evdev)
static void comparator_mode(enum clock_event_mode mode,
struct clock_event_device *evdev)
static struct clock_event_device comparator = ;
void read_persistent_clock(struct timespec *ts)
void __init time_init(void)
