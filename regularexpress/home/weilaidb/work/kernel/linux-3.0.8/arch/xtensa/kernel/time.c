unsigned long ccount_per_jiffy;
unsigned long nsec_per_ccount;
static cycle_t ccount_read(void)
static struct clocksource ccount_clocksource = ;
static irqreturn_t timer_interrupt(int irq, void *dev_id);
static struct irqaction timer_irqaction = ;
void __init time_init(void)
irqreturn_t timer_interrupt (int irq, void *dev_id)
void __cpuinit calibrate_delay(void)
