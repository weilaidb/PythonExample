#define IOP_MIN_RANGE 4
static cycle_t notrace iop_clocksource_read(struct clocksource *unused)
static struct clocksource iop_clocksource = ;
static DEFINE_CLOCK_DATA(cd);
unsigned long long notrace sched_clock(void)
static void notrace iop_update_sched_clock(void)
static int iop_set_next_event(unsigned long delta,
struct clock_event_device *unused)
static unsigned long ticks_per_jiffy;
static void iop_set_mode(enum clock_event_mode mode,
struct clock_event_device *unused)
static struct clock_event_device iop_clockevent = ;
static irqreturn_t
iop_timer_interrupt(int irq, void *dev_id)
static struct irqaction iop_timer_irq = ;
static unsigned long iop_tick_rate;
unsigned long get_iop_tick_rate(void)
EXPORT_SYMBOL(get_iop_tick_rate);
void __init iop_init_time(unsigned long tick_rate)
