static int lpc32xx_clkevt_next_event(unsigned long delta,
struct clock_event_device *dev)
static void lpc32xx_clkevt_mode(enum clock_event_mode mode,
struct clock_event_device *dev)
static struct clock_event_device lpc32xx_clkevt = ;
static irqreturn_t lpc32xx_timer_interrupt(int irq, void *dev_id)
static struct irqaction lpc32xx_timer_irq = ;
static void __init lpc32xx_timer_init(void)
struct sys_timer lpc32xx_timer = ;
