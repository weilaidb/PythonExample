void __iomem *mtu_base;
static DEFINE_CLOCK_DATA(cd);
unsigned long long notrace sched_clock(void)
static void notrace nomadik_update_sched_clock(void)
static void nmdk_clkevt_mode(enum clock_event_mode mode,
struct clock_event_device *dev)
static int nmdk_clkevt_next(unsigned long evt, struct clock_event_device *ev)
static struct clock_event_device nmdk_clkevt = ;
static irqreturn_t nmdk_timer_interrupt(int irq, void *dev_id)
static struct irqaction nmdk_timer_irq = ;
void __init nmdk_timer_init(void)
