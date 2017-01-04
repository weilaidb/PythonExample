static void __iomem *timer_base;
static int tcc_set_next_event(unsigned long evt,
struct clock_event_device *unused)
static void tcc_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static irqreturn_t tcc8k_timer_interrupt(int irq, void *dev_id)
static struct clock_event_device clockevent_tcc = ;
static struct irqaction tcc8k_timer_irq = ;
static int __init tcc_clockevent_init(struct clk *clock)
void __init tcc8k_timer_init(struct clk *clock, void __iomem *base, int irq)
