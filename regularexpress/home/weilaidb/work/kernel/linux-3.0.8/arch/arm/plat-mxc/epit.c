#define EPITCR		0x00
#define EPITSR		0x04
#define EPITLR		0x08
#define EPITCMPR	0x0c
#define EPITCNR		0x10
#define EPITCR_EN			(1 << 0)
#define EPITCR_ENMOD			(1 << 1)
#define EPITCR_OCIEN			(1 << 2)
#define EPITCR_RLD			(1 << 3)
#define EPITCR_PRESC(x)			(((x) & 0xfff) << 4)
#define EPITCR_SWR			(1 << 16)
#define EPITCR_IOVW			(1 << 17)
#define EPITCR_DBGEN			(1 << 18)
#define EPITCR_WAITEN			(1 << 19)
#define EPITCR_RES			(1 << 20)
#define EPITCR_STOPEN			(1 << 21)
#define EPITCR_OM_DISCON		(0 << 22)
#define EPITCR_OM_TOGGLE		(1 << 22)
#define EPITCR_OM_CLEAR			(2 << 22)
#define EPITCR_OM_SET			(3 << 22)
#define EPITCR_CLKSRC_OFF		(0 << 24)
#define EPITCR_CLKSRC_PERIPHERAL	(1 << 24)
#define EPITCR_CLKSRC_REF_HIGH		(1 << 24)
#define EPITCR_CLKSRC_REF_LOW		(3 << 24)
#define EPITSR_OCIF			(1 << 0)
static struct clock_event_device clockevent_epit;
static enum clock_event_mode clockevent_mode = CLOCK_EVT_MODE_UNUSED;
static void __iomem *timer_base;
static inline void epit_irq_disable(void)
static inline void epit_irq_enable(void)
static void epit_irq_acknowledge(void)
static int __init epit_clocksource_init(struct clk *timer_clk)
static int epit_set_next_event(unsigned long evt,
struct clock_event_device *unused)
static void epit_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static irqreturn_t epit_timer_interrupt(int irq, void *dev_id)
static struct irqaction epit_timer_irq = ;
static struct clock_event_device clockevent_epit = ;
static int __init epit_clockevent_init(struct clk *timer_clk)
void __init epit_timer_init(struct clk *timer_clk, void __iomem *base, int irq)
