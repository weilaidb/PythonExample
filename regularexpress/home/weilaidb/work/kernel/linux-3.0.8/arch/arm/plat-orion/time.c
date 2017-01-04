#define BRIDGE_CAUSE_OFF	0x0110
#define BRIDGE_MASK_OFF		0x0114
#define  BRIDGE_INT_TIMER0	 0x0002
#define  BRIDGE_INT_TIMER1	 0x0004
#define TIMER_CTRL_OFF		0x0000
#define  TIMER0_EN		 0x0001
#define  TIMER0_RELOAD_EN	 0x0002
#define  TIMER1_EN		 0x0004
#define  TIMER1_RELOAD_EN	 0x0008
#define TIMER0_RELOAD_OFF	0x0010
#define TIMER0_VAL_OFF		0x0014
#define TIMER1_RELOAD_OFF	0x0018
#define TIMER1_VAL_OFF		0x001c
static void __iomem *bridge_base;
static u32 bridge_timer1_clr_mask;
static void __iomem *timer_base;
static u32 ticks_per_jiffy;
static DEFINE_CLOCK_DATA(cd);
unsigned long long notrace sched_clock(void)
static void notrace orion_update_sched_clock(void)
static void __init setup_sched_clock(unsigned long tclk)
static int
orion_clkevt_next_event(unsigned long delta, struct clock_event_device *dev)
static void
orion_clkevt_mode(enum clock_event_mode mode, struct clock_event_device *dev)
static struct clock_event_device orion_clkevt = ;
static irqreturn_t orion_timer_interrupt(int irq, void *dev_id)
static struct irqaction orion_timer_irq = ;
void __init
orion_time_set_base(u32 _timer_base)
void __init
orion_time_init(u32 _bridge_base, u32 _bridge_timer1_clr_mask,
unsigned int irq, unsigned int tclk)
