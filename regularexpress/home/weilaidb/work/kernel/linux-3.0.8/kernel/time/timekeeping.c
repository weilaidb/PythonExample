struct timekeeper ;
static struct timekeeper timekeeper;
static void timekeeper_setup_internals(struct clocksource *clock)
static inline s64 timekeeping_get_ns(void)
static inline s64 timekeeping_get_ns_raw(void)
__cacheline_aligned_in_smp DEFINE_SEQLOCK(xtime_lock);
static struct timespec xtime __attribute__ ((aligned (16)));
static struct timespec wall_to_monotonic __attribute__ ((aligned (16)));
static struct timespec total_sleep_time;
static struct timespec raw_time;
int __read_mostly timekeeping_suspended;
void timekeeping_leap_insert(int leapsecond)
static void timekeeping_forward_now(void)
void getnstimeofday(struct timespec *ts)
EXPORT_SYMBOL(getnstimeofday);
ktime_t ktime_get(void)
EXPORT_SYMBOL_GPL(ktime_get);
void ktime_get_ts(struct timespec *ts)
EXPORT_SYMBOL_GPL(ktime_get_ts);
void getnstime_raw_and_real(struct timespec *ts_raw, struct timespec *ts_real)
EXPORT_SYMBOL(getnstime_raw_and_real);
void do_gettimeofday(struct timeval *tv)
EXPORT_SYMBOL(do_gettimeofday);
int do_settimeofday(const struct timespec *tv)
EXPORT_SYMBOL(do_settimeofday);
int timekeeping_inject_offset(struct timespec *ts)
EXPORT_SYMBOL(timekeeping_inject_offset);
static int change_clocksource(void *data)
void timekeeping_notify(struct clocksource *clock)
ktime_t ktime_get_real(void)
EXPORT_SYMBOL_GPL(ktime_get_real);
void getrawmonotonic(struct timespec *ts)
EXPORT_SYMBOL(getrawmonotonic);
int timekeeping_valid_for_hres(void)
u64 timekeeping_max_deferment(void)
void __attribute__((weak)) read_persistent_clock(struct timespec *ts)
void __attribute__((weak)) read_boot_clock(struct timespec *ts)
void __init timekeeping_init(void)
static struct timespec timekeeping_suspend_time;
static void __timekeeping_inject_sleeptime(struct timespec *delta)
void timekeeping_inject_sleeptime(struct timespec *delta)
static void timekeeping_resume(void)
static int timekeeping_suspend(void)
static struct syscore_ops timekeeping_syscore_ops = ;
static int __init timekeeping_init_ops(void)
device_initcall(timekeeping_init_ops);
static __always_inline int timekeeping_bigadjust(s64 error, s64 *interval,
s64 *offset)
static void timekeeping_adjust(s64 offset)
static cycle_t logarithmic_accumulation(cycle_t offset, int shift)
static void update_wall_time(void)
void getboottime(struct timespec *ts)
EXPORT_SYMBOL_GPL(getboottime);
void get_monotonic_boottime(struct timespec *ts)
EXPORT_SYMBOL_GPL(get_monotonic_boottime);
ktime_t ktime_get_boottime(void)
EXPORT_SYMBOL_GPL(ktime_get_boottime);
void monotonic_to_bootbased(struct timespec *ts)
EXPORT_SYMBOL_GPL(monotonic_to_bootbased);
unsigned long get_seconds(void)
EXPORT_SYMBOL(get_seconds);
struct timespec __current_kernel_time(void)
struct timespec current_kernel_time(void)
EXPORT_SYMBOL(current_kernel_time);
struct timespec get_monotonic_coarse(void)
void do_timer(unsigned long ticks)
void get_xtime_and_monotonic_and_sleep_offset(struct timespec *xtim,
struct timespec *wtom, struct timespec *sleep)
ktime_t ktime_get_monotonic_offset(void)
void xtime_update(unsigned long ticks)
