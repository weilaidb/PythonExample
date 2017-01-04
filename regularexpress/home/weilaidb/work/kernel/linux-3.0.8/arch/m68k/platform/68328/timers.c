#if defined(CONFIG_DRAGEN2)
#define CLOCK_SOURCE	TCTL_CLKSOURCE_SYSCLK
#define CLOCK_PRE	7
#define TICKS_PER_JIFFY	41450
#elif defined(CONFIG_XCOPILOT_BUGS)
#define CLOCK_SOURCE	TCTL_CLKSOURCE_SYSCLK
#define CLOCK_PRE	2
#define TICKS_PER_JIFFY	0xd7e4
#define CLOCK_SOURCE	TCTL_CLKSOURCE_32KHZ
#define CLOCK_PRE	31
#define TICKS_PER_JIFFY	10
static u32 m68328_tick_cnt;
static irqreturn_t hw_tick(int irq, void *dummy)
static struct irqaction m68328_timer_irq = ;
static cycle_t m68328_read_clk(struct clocksource *cs)
static struct clocksource m68328_clk = ;
void hw_timer_init(void)
void m68328_timer_gettod(int *year, int *mon, int *day, int *hour, int *min, int *sec)
