#define TIMERS_VIRT_BASE	TIMERS1_VIRT_BASE
#define MAX_DELTA		(0xfffffffe)
#define MIN_DELTA		(16)
static DEFINE_CLOCK_DATA(cd);
static inline uint32_t timer_read(void)
unsigned long long notrace sched_clock(void)
static void notrace mmp_update_sched_clock(void)
static irqreturn_t timer_interrupt(int irq, void *dev_id)
static int timer_set_next_event(unsigned long delta,
struct clock_event_device *dev)
static void timer_set_mode(enum clock_event_mode mode,
struct clock_event_device *dev)
static struct clock_event_device ckevt = ;
static cycle_t clksrc_read(struct clocksource *cs)
static struct clocksource cksrc = ;
static void __init timer_config(void)
static struct irqaction timer_irq = ;
void __init timer_init(int irq)
