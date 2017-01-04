#define	FREQ	(MCF_BUSCLK / 16)
#define	TA(a)	(MCFTIMER_BASE1 + (a))
void coldfire_profile_init(void);
#if defined(CONFIG_M532x)
#define	__raw_readtrr	__raw_readl
#define	__raw_writetrr	__raw_writel
#define	__raw_readtrr	__raw_readw
#define	__raw_writetrr	__raw_writew
static u32 mcftmr_cycles_per_jiffy;
static u32 mcftmr_cnt;
static irqreturn_t mcftmr_tick(int irq, void *dummy)
static struct irqaction mcftmr_timer_irq = ;
static cycle_t mcftmr_read_clk(struct clocksource *cs)
static struct clocksource mcftmr_clk = ;
void hw_timer_init(void)
#define	PA(a)	(MCFTIMER_BASE2 + (a))
#define	PROFILEHZ	1013
irqreturn_t coldfire_profile_tick(int irq, void *dummy)
static struct irqaction coldfire_profile_irq = ;
void coldfire_profile_init(void)
