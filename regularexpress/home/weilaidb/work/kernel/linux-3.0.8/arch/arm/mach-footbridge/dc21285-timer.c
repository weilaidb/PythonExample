static cycle_t cksrc_dc21285_read(struct clocksource *cs)
static int cksrc_dc21285_enable(struct clocksource *cs)
static void cksrc_dc21285_disable(struct clocksource *cs)
static struct clocksource cksrc_dc21285 = ;
static void ckevt_dc21285_set_mode(enum clock_event_mode mode,
struct clock_event_device *c)
static struct clock_event_device ckevt_dc21285 = ;
static irqreturn_t timer1_interrupt(int irq, void *dev_id)
static struct irqaction footbridge_timer_irq = ;
static void __init footbridge_timer_init(void)
struct sys_timer footbridge_timer = ;
