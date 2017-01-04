void timer_handler(int sig, struct uml_pt_regs *regs)
static void itimer_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static int itimer_next_event(unsigned long delta,
struct clock_event_device *evt)
static struct clock_event_device itimer_clockevent = ;
static irqreturn_t um_timer(int irq, void *dev)
static cycle_t itimer_read(struct clocksource *cs)
static struct clocksource itimer_clocksource = ;
static void __init setup_itimer(void)
void read_persistent_clock(struct timespec *ts)
void __init time_init(void)
