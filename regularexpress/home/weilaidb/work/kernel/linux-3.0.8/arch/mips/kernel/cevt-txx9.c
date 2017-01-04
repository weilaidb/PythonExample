#define TCR_BASE (TXx9_TMTCR_CCDE | TXx9_TMTCR_CRE | TXx9_TMTCR_TMODE_ITVL)
#define TIMER_CCD	0
#define TIMER_CLK(imclk)	((imclk) / (2 << TIMER_CCD))
struct txx9_clocksource ;
static cycle_t txx9_cs_read(struct clocksource *cs)
#define TXX9_CLOCKSOURCE_BITS (TXX9_TIMER_BITS - 1)
static struct txx9_clocksource txx9_clocksource = ;
void __init txx9_clocksource_init(unsigned long baseaddr,
unsigned int imbusclk)
struct txx9_clock_event_device ;
static void txx9tmr_stop_and_clear(struct txx9_tmr_reg __iomem *tmrptr)
static void txx9tmr_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static int txx9tmr_set_next_event(unsigned long delta,
struct clock_event_device *evt)
static struct txx9_clock_event_device txx9_clock_event_device = ;
static irqreturn_t txx9tmr_interrupt(int irq, void *dev_id)
static struct irqaction txx9tmr_irq = ;
void __init txx9_clockevent_init(unsigned long baseaddr, int irq,
unsigned int imbusclk)
void __init txx9_tmr_init(unsigned long baseaddr)
