#define TIMER_SLOP	100000
#define NS_PER_TICK	(1000000000LL / HZ)
static DEFINE_PER_CPU(struct vcpu_runstate_info, xen_runstate);
static DEFINE_PER_CPU(struct vcpu_runstate_info, xen_runstate_snapshot);
static DEFINE_PER_CPU(u64, xen_residual_stolen);
static DEFINE_PER_CPU(u64, xen_residual_blocked);
static u64 get64(const u64 *p)
static void get_runstate_snapshot(struct vcpu_runstate_info *res)
bool xen_vcpu_stolen(int vcpu)
void xen_setup_runstate_info(int cpu)
static void do_stolen_accounting(void)
static unsigned long xen_tsc_khz(void)
cycle_t xen_clocksource_read(void)
static cycle_t xen_clocksource_get_cycles(struct clocksource *cs)
static void xen_read_wallclock(struct timespec *ts)
static unsigned long xen_get_wallclock(void)
static int xen_set_wallclock(unsigned long now)
static struct clocksource xen_clocksource __read_mostly = ;
static s64 get_abs_timeout(unsigned long delta)
static void xen_timerop_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static int xen_timerop_set_next_event(unsigned long delta,
struct clock_event_device *evt)
static const struct clock_event_device xen_timerop_clockevent = ;
static void xen_vcpuop_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static int xen_vcpuop_set_next_event(unsigned long delta,
struct clock_event_device *evt)
static const struct clock_event_device xen_vcpuop_clockevent = ;
static const struct clock_event_device *xen_clockevent =
&xen_timerop_clockevent;
static DEFINE_PER_CPU(struct clock_event_device, xen_clock_events);
static irqreturn_t xen_timer_interrupt(int irq, void *dev_id)
void xen_setup_timer(int cpu)
void xen_teardown_timer(int cpu)
void xen_setup_cpu_clockevents(void)
void xen_timer_resume(void)
static const struct pv_time_ops xen_time_ops __initconst = ;
static void __init xen_time_init(void)
void __init xen_init_time_ops(void)
static void xen_hvm_setup_cpu_clockevents(void)
void __init xen_hvm_init_time_ops(void)
