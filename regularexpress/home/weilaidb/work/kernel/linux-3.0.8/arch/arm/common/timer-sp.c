static long __init sp804_get_clock_rate(const char *name)
void __init sp804_clocksource_init(void __iomem *base, const char *name)
static void __iomem *clkevt_base;
static unsigned long clkevt_reload;
static irqreturn_t sp804_timer_interrupt(int irq, void *dev_id)
static void sp804_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static int sp804_set_next_event(unsigned long next,
struct clock_event_device *evt)
static struct clock_event_device sp804_clockevent = ;
static struct irqaction sp804_timer_irq = ;
void __init sp804_clockevents_init(void __iomem *base, unsigned int irq,
const char *name)
