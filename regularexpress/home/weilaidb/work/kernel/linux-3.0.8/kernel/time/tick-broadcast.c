static struct tick_device tick_broadcast_device;
static DECLARE_BITMAP(tick_broadcast_mask, NR_CPUS);
static DECLARE_BITMAP(tmpmask, NR_CPUS);
static DEFINE_RAW_SPINLOCK(tick_broadcast_lock);
static int tick_broadcast_force;
static void tick_broadcast_clear_oneshot(int cpu);
static inline void tick_broadcast_clear_oneshot(int cpu)
struct tick_device *tick_get_broadcast_device(void)
struct cpumask *tick_get_broadcast_mask(void)
static void tick_broadcast_start_periodic(struct clock_event_device *bc)
int tick_check_broadcast_device(struct clock_event_device *dev)
int tick_is_broadcast_device(struct clock_event_device *dev)
int tick_device_uses_broadcast(struct clock_event_device *dev, int cpu)
static void tick_do_broadcast(struct cpumask *mask)
static void tick_do_periodic_broadcast(void)
static void tick_handle_periodic_broadcast(struct clock_event_device *dev)
static void tick_do_broadcast_on_off(unsigned long *reason)
void tick_broadcast_on_off(unsigned long reason, int *oncpu)
void tick_set_periodic_handler(struct clock_event_device *dev, int broadcast)
void tick_shutdown_broadcast(unsigned int *cpup)
void tick_suspend_broadcast(void)
int tick_resume_broadcast(void)
static DECLARE_BITMAP(tick_broadcast_oneshot_mask, NR_CPUS);
struct cpumask *tick_get_broadcast_oneshot_mask(void)
static int tick_broadcast_set_event(ktime_t expires, int force)
int tick_resume_broadcast_oneshot(struct clock_event_device *bc)
void tick_check_oneshot_broadcast(int cpu)
static void tick_handle_oneshot_broadcast(struct clock_event_device *dev)
void tick_broadcast_oneshot_control(unsigned long reason)
static void tick_broadcast_clear_oneshot(int cpu)
static void tick_broadcast_init_next_event(struct cpumask *mask,
ktime_t expires)
void tick_broadcast_setup_oneshot(struct clock_event_device *bc)
void tick_broadcast_switch_to_oneshot(void)
void tick_shutdown_broadcast_oneshot(unsigned int *cpup)
int tick_broadcast_oneshot_active(void)
bool tick_broadcast_oneshot_available(void)
