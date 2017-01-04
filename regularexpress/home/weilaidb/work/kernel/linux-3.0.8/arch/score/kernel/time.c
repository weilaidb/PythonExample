static irqreturn_t timer_interrupt(int irq, void *dev_id)
static struct irqaction timer_irq = ;
static int score_timer_set_next_event(unsigned long delta,
struct clock_event_device *evdev)
static void score_timer_set_mode(enum clock_event_mode mode,
struct clock_event_device *evdev)
static struct clock_event_device score_clockevent = ;
void __init time_init(void)
