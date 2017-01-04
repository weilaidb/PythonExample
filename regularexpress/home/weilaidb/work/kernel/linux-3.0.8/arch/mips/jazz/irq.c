static DEFINE_RAW_SPINLOCK(r4030_lock);
static void enable_r4030_irq(struct irq_data *d)
void disable_r4030_irq(struct irq_data *d)
static struct irq_chip r4030_irq_type = ;
void __init init_r4030_ints(void)
void __init arch_init_irq(void)
asmlinkage void plat_irq_dispatch(void)
static void r4030_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
struct clock_event_device r4030_clockevent = ;
static irqreturn_t r4030_timer_interrupt(int irq, void *dev_id)
static struct irqaction r4030_timer_irqaction = ;
void __init plat_time_init(void)
