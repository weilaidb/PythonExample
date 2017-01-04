static DEFINE_CLOCK_DATA(cd);
#define SC_MULT		2275555556u
#define SC_SHIFT	23
unsigned long long notrace sched_clock(void)
static void notrace sa1100_update_sched_clock(void)
#define MIN_OSCR_DELTA 2
static irqreturn_t sa1100_ost0_interrupt(int irq, void *dev_id)
static int
sa1100_osmr0_set_next_event(unsigned long delta, struct clock_event_device *c)
static void
sa1100_osmr0_set_mode(enum clock_event_mode mode, struct clock_event_device *c)
static struct clock_event_device ckevt_sa1100_osmr0 = ;
static struct irqaction sa1100_timer_irq = ;
static void __init sa1100_timer_init(void)
unsigned long osmr[4], oier;
static void sa1100_timer_suspend(void)
static void sa1100_timer_resume(void)
#define sa1100_timer_suspend NULL
#define sa1100_timer_resume NULL
struct sys_timer sa1100_timer = ;
