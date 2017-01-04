#define	PA(a)	(MCF_MBAR + MCFSLT_TIMER1 + (a))
#define	PROFILEHZ	1013
irqreturn_t mcfslt_profile_tick(int irq, void *dummy)
static struct irqaction mcfslt_profile_irq = ;
void mcfslt_profile_init(void)
#define	TA(a)	(MCF_MBAR + MCFSLT_TIMER0 + (a))
static u32 mcfslt_cycles_per_jiffy;
static u32 mcfslt_cnt;
static irqreturn_t mcfslt_tick(int irq, void *dummy)
static struct irqaction mcfslt_timer_irq = ;
static cycle_t mcfslt_read_clk(struct clocksource *cs)
static struct clocksource mcfslt_clk = ;
void hw_timer_init(void)
