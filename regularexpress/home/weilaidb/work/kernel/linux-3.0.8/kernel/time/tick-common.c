DEFINE_PER_CPU(struct tick_device, tick_cpu_device);
ktime_t tick_next_period;
ktime_t tick_period;
int tick_do_timer_cpu __read_mostly = TICK_DO_TIMER_BOOT;
static DEFINE_RAW_SPINLOCK(tick_device_lock);
struct tick_device *tick_get_device(int cpu)
int tick_is_oneshot_available(void)
static void tick_periodic(int cpu)
void tick_handle_periodic(struct clock_event_device *dev)
void tick_setup_periodic(struct clock_event_device *dev, int broadcast)
static void tick_setup_device(struct tick_device *td,
struct clock_event_device *newdev, int cpu,
const struct cpumask *cpumask)
static int tick_check_new_device(struct clock_event_device *newdev)
static void tick_handover_do_timer(int *cpup)
static void tick_shutdown(unsigned int *cpup)
static void tick_suspend(void)
static void tick_resume(void)
static int tick_notify(struct notifier_block *nb, unsigned long reason,
void *dev)
static struct notifier_block tick_notifier = ;
void __init tick_init(void)
