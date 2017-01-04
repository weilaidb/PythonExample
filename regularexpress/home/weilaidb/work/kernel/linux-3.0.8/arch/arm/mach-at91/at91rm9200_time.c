static unsigned long last_crtr;
static u32 irqmask;
static struct clock_event_device clkevt;
static inline unsigned long read_CRTR(void)
static irqreturn_t at91rm9200_timer_interrupt(int irq, void *dev_id)
static struct irqaction at91rm9200_timer_irq = ;
static cycle_t read_clk32k(struct clocksource *cs)
static struct clocksource clk32k = ;
static void
clkevt32k_mode(enum clock_event_mode mode, struct clock_event_device *dev)
static int
clkevt32k_next_event(unsigned long delta, struct clock_event_device *dev)
static struct clock_event_device clkevt = ;
void __init at91rm9200_timer_init(void)
struct sys_timer at91rm9200_timer = ;
