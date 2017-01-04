static int mips_next_event(unsigned long delta,
struct clock_event_device *evt)
void mips_set_clock_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
DEFINE_PER_CPU(struct clock_event_device, mips_clockevent_device);
int cp0_timer_irq_installed;
irqreturn_t c0_compare_interrupt(int irq, void *dev_id)
struct irqaction c0_compare_irqaction = ;
void mips_event_handler(struct clock_event_device *dev)
static int c0_compare_int_pending(void)
#define compare_change_hazard() \
do  while (0)
int c0_compare_int_usable(void)
int __cpuinit r4k_clockevent_init(void)
