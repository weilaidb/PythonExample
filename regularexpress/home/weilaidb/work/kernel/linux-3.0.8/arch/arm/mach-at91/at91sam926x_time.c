#define PIT_CPIV(x)	((x) & AT91_PIT_CPIV)
#define PIT_PICNT(x)	(((x) & AT91_PIT_PICNT) >> 20)
static u32 pit_cycle;
static u32 pit_cnt;
static cycle_t read_pit_clk(struct clocksource *cs)
static struct clocksource pit_clk = ;
static void
pit_clkevt_mode(enum clock_event_mode mode, struct clock_event_device *dev)
static struct clock_event_device pit_clkevt = ;
static irqreturn_t at91sam926x_pit_interrupt(int irq, void *dev_id)
static struct irqaction at91sam926x_pit_irq = ;
static void at91sam926x_pit_reset(void)
static void __init at91sam926x_pit_init(void)
static void at91sam926x_pit_suspend(void)
struct sys_timer at91sam926x_timer = ;
