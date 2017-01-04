DEFINE_SPINLOCK(mfgpt_lock);
EXPORT_SYMBOL(mfgpt_lock);
static u32 mfgpt_base;
void disable_mfgpt0_counter(void)
EXPORT_SYMBOL(disable_mfgpt0_counter);
void enable_mfgpt0_counter(void)
EXPORT_SYMBOL(enable_mfgpt0_counter);
static void init_mfgpt_timer(enum clock_event_mode mode,
struct clock_event_device *evt)
static struct clock_event_device mfgpt_clockevent = ;
static irqreturn_t timer_interrupt(int irq, void *dev_id)
static struct irqaction irq5 = ;
void __init setup_mfgpt0_timer(void)
static cycle_t mfgpt_read(struct clocksource *cs)
static struct clocksource clocksource_mfgpt = ;
int __init init_mfgpt_clocksource(void)
arch_initcall(init_mfgpt_clocksource);
