#define MIN_OSCR_DELTA 2
static irqreturn_t puv3_ost0_interrupt(int irq, void *dev_id)
static int
puv3_osmr0_set_next_event(unsigned long delta, struct clock_event_device *c)
static void
puv3_osmr0_set_mode(enum clock_event_mode mode, struct clock_event_device *c)
static struct clock_event_device ckevt_puv3_osmr0 = ;
static cycle_t puv3_read_oscr(struct clocksource *cs)
static struct clocksource cksrc_puv3_oscr = ;
static struct irqaction puv3_timer_irq = ;
void __init time_init(void)
unsigned long osmr[4], oier;
void puv3_timer_suspend(void)
void puv3_timer_resume(void)
void puv3_timer_suspend(void) ;
void puv3_timer_resume(void) ;
