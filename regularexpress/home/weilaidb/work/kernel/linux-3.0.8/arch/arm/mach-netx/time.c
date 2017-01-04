#define TIMER_CLOCKEVENT 0
#define TIMER_CLOCKSOURCE 1
static void netx_set_mode(enum clock_event_mode mode,
struct clock_event_device *clk)
static int netx_set_next_event(unsigned long evt,
struct clock_event_device *clk)
static struct clock_event_device netx_clockevent = ;
static irqreturn_t
netx_timer_interrupt(int irq, void *dev_id)
static struct irqaction netx_timer_irq = ;
static void __init netx_timer_init(void)
struct sys_timer netx_timer = ;
