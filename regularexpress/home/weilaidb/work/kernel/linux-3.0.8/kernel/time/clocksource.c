void timecounter_init(struct timecounter *tc,
const struct cyclecounter *cc,
u64 start_tstamp)
EXPORT_SYMBOL_GPL(timecounter_init);
static u64 timecounter_read_delta(struct timecounter *tc)
u64 timecounter_read(struct timecounter *tc)
EXPORT_SYMBOL_GPL(timecounter_read);
u64 timecounter_cyc2time(struct timecounter *tc,
cycle_t cycle_tstamp)
EXPORT_SYMBOL_GPL(timecounter_cyc2time);
void
clocks_calc_mult_shift(u32 *mult, u32 *shift, u32 from, u32 to, u32 maxsec)
static struct clocksource *curr_clocksource;
static LIST_HEAD(clocksource_list);
static DEFINE_MUTEX(clocksource_mutex);
static char override_name[32];
static int finished_booting;
static void clocksource_watchdog_work(struct work_struct *work);
static LIST_HEAD(watchdog_list);
static struct clocksource *watchdog;
static struct timer_list watchdog_timer;
static DECLARE_WORK(watchdog_work, clocksource_watchdog_work);
static DEFINE_SPINLOCK(watchdog_lock);
static int watchdog_running;
static int clocksource_watchdog_kthread(void *data);
static void __clocksource_change_rating(struct clocksource *cs, int rating);
#define WATCHDOG_INTERVAL (HZ >> 1)
#define WATCHDOG_THRESHOLD (NSEC_PER_SEC >> 4)
static void clocksource_watchdog_work(struct work_struct *work)
static void __clocksource_unstable(struct clocksource *cs)
static void clocksource_unstable(struct clocksource *cs, int64_t delta)
void clocksource_mark_unstable(struct clocksource *cs)
static void clocksource_watchdog(unsigned long data)
static inline void clocksource_start_watchdog(void)
static inline void clocksource_stop_watchdog(void)
static inline void clocksource_reset_watchdog(void)
static void clocksource_resume_watchdog(void)
static void clocksource_enqueue_watchdog(struct clocksource *cs)
static void clocksource_dequeue_watchdog(struct clocksource *cs)
static int clocksource_watchdog_kthread(void *data)
static void clocksource_enqueue_watchdog(struct clocksource *cs)
static inline void clocksource_dequeue_watchdog(struct clocksource *cs)
static inline void clocksource_resume_watchdog(void)
static inline int clocksource_watchdog_kthread(void *data)
void clocksource_suspend(void)
void clocksource_resume(void)
void clocksource_touch_watchdog(void)
static u64 clocksource_max_deferment(struct clocksource *cs)
static void clocksource_select(void)
static inline void clocksource_select(void)
static int __init clocksource_done_booting(void)
fs_initcall(clocksource_done_booting);
static void clocksource_enqueue(struct clocksource *cs)
void __clocksource_updatefreq_scale(struct clocksource *cs, u32 scale, u32 freq)
EXPORT_SYMBOL_GPL(__clocksource_updatefreq_scale);
int __clocksource_register_scale(struct clocksource *cs, u32 scale, u32 freq)
EXPORT_SYMBOL_GPL(__clocksource_register_scale);
int clocksource_register(struct clocksource *cs)
EXPORT_SYMBOL(clocksource_register);
static void __clocksource_change_rating(struct clocksource *cs, int rating)
void clocksource_change_rating(struct clocksource *cs, int rating)
EXPORT_SYMBOL(clocksource_change_rating);
void clocksource_unregister(struct clocksource *cs)
EXPORT_SYMBOL(clocksource_unregister);
static ssize_t
sysfs_show_current_clocksources(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static ssize_t sysfs_override_clocksource(struct sys_device *dev,
struct sysdev_attribute *attr,
const char *buf, size_t count)
static ssize_t
sysfs_show_available_clocksources(struct sys_device *dev,
struct sysdev_attribute *attr,
char *buf)
static SYSDEV_ATTR(current_clocksource, 0644, sysfs_show_current_clocksources,
sysfs_override_clocksource);
static SYSDEV_ATTR(available_clocksource, 0444,
sysfs_show_available_clocksources, NULL);
static struct sysdev_class clocksource_sysclass = ;
static struct sys_device device_clocksource = ;
static int __init init_clocksource_sysfs(void)
device_initcall(init_clocksource_sysfs);
static int __init boot_override_clocksource(char* str)
__setup("clocksource=", boot_override_clocksource);
static int __init boot_override_clock(char* str)
__setup("clock=", boot_override_clock);
