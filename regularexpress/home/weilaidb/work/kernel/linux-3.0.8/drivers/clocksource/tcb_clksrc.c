static void __iomem *tcaddr;
static cycle_t tc_get_cycles(struct clocksource *cs)
static struct clocksource clksrc = ;
struct tc_clkevt_device ;
static struct tc_clkevt_device *to_tc_clkevt(struct clock_event_device *clkevt)
static u32 timer_clock;
static void tc_mode(enum clock_event_mode m, struct clock_event_device *d)
static int tc_next_event(unsigned long delta, struct clock_event_device *d)
static struct tc_clkevt_device clkevt = ;
static irqreturn_t ch2_irq(int irq, void *handle)
static struct irqaction tc_irqaction = ;
static void __init setup_clkevents(struct atmel_tc *tc, int clk32k_divisor_idx)
static void __init setup_clkevents(struct atmel_tc *tc, int clk32k_divisor_idx)
static int __init tcb_clksrc_init(void)
arch_initcall(tcb_clksrc_init);
