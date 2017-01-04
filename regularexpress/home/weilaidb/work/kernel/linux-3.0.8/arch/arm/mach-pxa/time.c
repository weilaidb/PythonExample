static DEFINE_CLOCK_DATA(cd);
unsigned long long notrace sched_clock(void)
static void notrace pxa_update_sched_clock(void)
#define MIN_OSCR_DELTA 16
static irqreturn_t
pxa_ost0_interrupt(int irq, void *dev_id)
static int
pxa_osmr0_set_next_event(unsigned long delta, struct clock_event_device *dev)
static void
pxa_osmr0_set_mode(enum clock_event_mode mode, struct clock_event_device *dev)
static struct clock_event_device ckevt_pxa_osmr0 = ;
static struct irqaction pxa_ost0_irq = ;
static void __init pxa_timer_init(void)
static unsigned long osmr[4], oier, oscr;
static void pxa_timer_suspend(void)
static void pxa_timer_resume(void)
#define pxa_timer_suspend NULL
#define pxa_timer_resume NULL
struct sys_timer pxa_timer = ;
