#define RESETINT	0x1f
#define PERIOD		(0x01 << 27)
#define ONESHOT		(0x00 << 27)
#define COUNTEN		(0x01 << 30)
#define INTEN		(0x01 << 29)
#define TICKS_PER_SEC	100
#define PRESCALE	0x63
#define	TDR_SHIFT	24
static unsigned int timer0_load;
static void nuc900_clockevent_setmode(enum clock_event_mode mode,
struct clock_event_device *clk)
static int nuc900_clockevent_setnextevent(unsigned long evt,
struct clock_event_device *clk)
static struct clock_event_device nuc900_clockevent_device = ;
static irqreturn_t nuc900_timer0_interrupt(int irq, void *dev_id)
static struct irqaction nuc900_timer0_irq = ;
static void __init nuc900_clockevents_init(void)
static void __init nuc900_clocksource_init(void)
static void __init nuc900_timer_init(void)
struct sys_timer nuc900_timer = ;
