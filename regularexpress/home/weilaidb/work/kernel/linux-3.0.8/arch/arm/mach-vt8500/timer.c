#define VT8500_TIMER_OFFSET	0x0100
#define TIMER_MATCH_VAL		0x0000
#define TIMER_COUNT_VAL		0x0010
#define TIMER_STATUS_VAL	0x0014
#define TIMER_IER_VAL		0x001c
#define TIMER_CTRL_VAL		0x0020
#define TIMER_AS_VAL		0x0024
#define TIMER_COUNT_R_ACTIVE	(1 << 5)
#define TIMER_COUNT_W_ACTIVE	(1 << 4)
#define TIMER_MATCH_W_ACTIVE	(1 << 0)
#define VT8500_TIMER_HZ		3000000
#define msecs_to_loops(t) (loops_per_jiffy / 1000 * HZ * t)
static void __iomem *regbase;
static cycle_t vt8500_timer_read(struct clocksource *cs)
struct clocksource clocksource = ;
static int vt8500_timer_set_next_event(unsigned long cycles,
struct clock_event_device *evt)
static void vt8500_timer_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
struct clock_event_device clockevent = ;
static irqreturn_t vt8500_timer_interrupt(int irq, void *dev_id)
struct irqaction irq = ;
static void __init vt8500_timer_init(void)
struct sys_timer vt8500_timer = ;
