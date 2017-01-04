static unsigned long cpj;
static cycle_t hpt_read(struct clocksource *cs)
static struct clocksource pnx_clocksource = ;
static irqreturn_t pnx8xxx_timer_interrupt(int irq, void *dev_id)
static struct irqaction pnx8xxx_timer_irq = ;
static irqreturn_t monotonic_interrupt(int irq, void *dev_id)
static struct irqaction monotonic_irqaction = ;
static int pnx8xxx_set_next_event(unsigned long delta,
struct clock_event_device *evt)
static struct clock_event_device pnx8xxx_clockevent = ;
static inline void timer_ack(void)
__init void plat_time_init(void)
