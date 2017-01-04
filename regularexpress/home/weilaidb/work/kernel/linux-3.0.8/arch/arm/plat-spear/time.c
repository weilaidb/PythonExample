#define CLKEVT	0
#define CLKSRC	1
#define CR(x)		((x) * 0x80 + 0x80)
#define IR(x)		((x) * 0x80 + 0x84)
#define LOAD(x)		((x) * 0x80 + 0x88)
#define COUNT(x)	((x) * 0x80 + 0x8C)
#define CTRL_INT_ENABLE		0x0100
#define CTRL_ENABLE		0x0020
#define CTRL_ONE_SHOT		0x0010
#define CTRL_PRESCALER1		0x0
#define CTRL_PRESCALER2		0x1
#define CTRL_PRESCALER4		0x2
#define CTRL_PRESCALER8		0x3
#define CTRL_PRESCALER16	0x4
#define CTRL_PRESCALER32	0x5
#define CTRL_PRESCALER64	0x6
#define CTRL_PRESCALER128	0x7
#define CTRL_PRESCALER256	0x8
#define INT_STATUS		0x1
#define SPEAR_MIN_RANGE 4
static __iomem void *gpt_base;
static struct clk *gpt_clk;
static void clockevent_set_mode(enum clock_event_mode mode,
struct clock_event_device *clk_event_dev);
static int clockevent_next_event(unsigned long evt,
struct clock_event_device *clk_event_dev);
static void spear_clocksource_init(void)
static struct clock_event_device clkevt = ;
static void clockevent_set_mode(enum clock_event_mode mode,
struct clock_event_device *clk_event_dev)
static int clockevent_next_event(unsigned long cycles,
struct clock_event_device *clk_event_dev)
static irqreturn_t spear_timer_interrupt(int irq, void *dev_id)
static struct irqaction spear_timer_irq = ;
static void __init spear_clockevent_init(void)
void __init spear_setup_timer(void)
