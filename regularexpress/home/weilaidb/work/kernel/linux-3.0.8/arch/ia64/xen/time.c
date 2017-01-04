static DEFINE_PER_CPU(struct vcpu_runstate_info, xen_runstate);
static DEFINE_PER_CPU(unsigned long, xen_stolen_time);
static DEFINE_PER_CPU(unsigned long, xen_blocked_time);
static void xen_init_missing_ticks_accounting(int cpu)
static void get_runstate_snapshot(struct vcpu_runstate_info *res)
#define NS_PER_TICK (1000000000LL/HZ)
static unsigned long
consider_steal_time(unsigned long new_itm)
static int xen_do_steal_accounting(unsigned long *new_itm)
static void xen_itc_jitter_data_reset(void)
static unsigned long long xen_sched_clock(void)
struct pv_time_ops xen_time_ops __initdata = ;
static void xen_local_tick_resume(void)
void
xen_timer_resume(void)
static void ia64_cpu_local_tick_fn(void *unused)
void
xen_timer_resume_on_aps(void)
