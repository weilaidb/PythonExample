static DEFINE_RAW_SPINLOCK(gt641xx_timer_lock);
static unsigned int gt641xx_base_clock;
void gt641xx_set_base_clock(unsigned int clock)
int gt641xx_timer0_state(void)
static int gt641xx_timer0_set_next_event(unsigned long delta,
struct clock_event_device *evt)
static void gt641xx_timer0_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static void gt641xx_timer0_event_handler(struct clock_event_device *dev)
static struct clock_event_device gt641xx_timer0_clockevent = ;
static irqreturn_t gt641xx_timer0_interrupt(int irq, void *dev_id)
static struct irqaction gt641xx_timer0_irqaction = ;
static int __init gt641xx_timer0_clockevent_init(void)
arch_initcall(gt641xx_timer0_clockevent_init);
