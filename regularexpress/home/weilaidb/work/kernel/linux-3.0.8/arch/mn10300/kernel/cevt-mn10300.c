#if (CONFIG_NR_CPUS > 2) && !defined(CONFIG_GEENERIC_CLOCKEVENTS_BROADCAST)
#error "This doesn't scale well! Need per-core local timers."
#define stop_jiffies_counter1()
#define reload_jiffies_counter1(x)
#define TMJC1IRQ TMJCIRQ
static int next_event(unsigned long delta,
struct clock_event_device *evt)
static void set_clock_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static DEFINE_PER_CPU(struct clock_event_device, mn10300_clockevent_device);
static DEFINE_PER_CPU(struct irqaction, timer_irq);
static irqreturn_t timer_interrupt(int irq, void *dev_id)
static void event_handler(struct clock_event_device *dev)
int __init init_clockevents(void)
