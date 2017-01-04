DEFINE_RAW_SPINLOCK(i8253_lock);
static void pit_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static int pit_set_next_event(unsigned long delta,
struct clock_event_device *evt)
static struct clock_event_device pit_ce = ;
static irqreturn_t pit_timer_interrupt(int irq, void *dev_id)
static struct irqaction pit_timer_irq = ;
static void __init isa_timer_init(void)
struct sys_timer isa_timer = ;
