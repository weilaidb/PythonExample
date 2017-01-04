#define	FREQ	((MCF_CLK / 2) / 64)
#define	TA(a)	(MCFPIT_BASE1 + (a))
#define PIT_CYCLES_PER_JIFFY (FREQ / HZ)
static u32 pit_cnt;
static void init_cf_pit_timer(enum clock_event_mode mode,
struct clock_event_device *evt)
static int cf_pit_next_event(unsigned long delta,
struct clock_event_device *evt)
struct clock_event_device cf_pit_clockevent = ;
static irqreturn_t pit_tick(int irq, void *dummy)
static struct irqaction pit_irq = ;
static cycle_t pit_read_clk(struct clocksource *cs)
static struct clocksource pit_clk = ;
void hw_timer_init(void)
