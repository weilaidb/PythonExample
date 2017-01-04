DEFINE_PER_CPU(struct hrtimer_cpu_base, hrtimer_bases) =
;
static const int hrtimer_clock_to_base_table[MAX_CLOCKS] = ;
static inline int hrtimer_clockid_to_base(clockid_t clock_id)
static void hrtimer_get_softirq_time(struct hrtimer_cpu_base *base)
static
struct hrtimer_clock_base *lock_hrtimer_base(const struct hrtimer *timer,
unsigned long *flags)
static int hrtimer_get_target(int this_cpu, int pinned)
static int
hrtimer_check_target(struct hrtimer *timer, struct hrtimer_clock_base *new_base)
static inline struct hrtimer_clock_base *
switch_hrtimer_base(struct hrtimer *timer, struct hrtimer_clock_base *base,
int pinned)
static inline struct hrtimer_clock_base *
lock_hrtimer_base(const struct hrtimer *timer, unsigned long *flags)
# define switch_hrtimer_base(t, b, p)	(b)
#if BITS_PER_LONG < 64
# ifndef CONFIG_KTIME_SCALAR
ktime_t ktime_add_ns(const ktime_t kt, u64 nsec)
EXPORT_SYMBOL_GPL(ktime_add_ns);
ktime_t ktime_sub_ns(const ktime_t kt, u64 nsec)
EXPORT_SYMBOL_GPL(ktime_sub_ns);
# endif
u64 ktime_divns(const ktime_t kt, s64 div)
ktime_t ktime_add_safe(const ktime_t lhs, const ktime_t rhs)
EXPORT_SYMBOL_GPL(ktime_add_safe);
static struct debug_obj_descr hrtimer_debug_descr;
static void *hrtimer_debug_hint(void *addr)
static int hrtimer_fixup_init(void *addr, enum debug_obj_state state)
static int hrtimer_fixup_activate(void *addr, enum debug_obj_state state)
static int hrtimer_fixup_free(void *addr, enum debug_obj_state state)
static struct debug_obj_descr hrtimer_debug_descr = ;
static inline void debug_hrtimer_init(struct hrtimer *timer)
static inline void debug_hrtimer_activate(struct hrtimer *timer)
static inline void debug_hrtimer_deactivate(struct hrtimer *timer)
static inline void debug_hrtimer_free(struct hrtimer *timer)
static void __hrtimer_init(struct hrtimer *timer, clockid_t clock_id,
enum hrtimer_mode mode);
void hrtimer_init_on_stack(struct hrtimer *timer, clockid_t clock_id,
enum hrtimer_mode mode)
EXPORT_SYMBOL_GPL(hrtimer_init_on_stack);
void destroy_hrtimer_on_stack(struct hrtimer *timer)
static inline void debug_hrtimer_init(struct hrtimer *timer)
static inline void debug_hrtimer_activate(struct hrtimer *timer)
static inline void debug_hrtimer_deactivate(struct hrtimer *timer)
static inline void
debug_init(struct hrtimer *timer, clockid_t clockid,
enum hrtimer_mode mode)
static inline void debug_activate(struct hrtimer *timer)
static inline void debug_deactivate(struct hrtimer *timer)
static int hrtimer_hres_enabled __read_mostly  = 1;
static int __init setup_hrtimer_hres(char *str)
__setup("highres=", setup_hrtimer_hres);
static inline int hrtimer_is_hres_enabled(void)
static inline int hrtimer_hres_active(void)
static void
hrtimer_force_reprogram(struct hrtimer_cpu_base *cpu_base, int skip_equal)
static int hrtimer_reprogram(struct hrtimer *timer,
struct hrtimer_clock_base *base)
static inline void hrtimer_init_hres(struct hrtimer_cpu_base *base)
static inline int hrtimer_enqueue_reprogram(struct hrtimer *timer,
struct hrtimer_clock_base *base,
int wakeup)
static void retrigger_next_event(void *arg)
static int hrtimer_switch_to_hres(void)
static inline int hrtimer_hres_active(void)
static inline int hrtimer_is_hres_enabled(void)
static inline int hrtimer_switch_to_hres(void)
static inline void
hrtimer_force_reprogram(struct hrtimer_cpu_base *base, int skip_equal)
static inline int hrtimer_enqueue_reprogram(struct hrtimer *timer,
struct hrtimer_clock_base *base,
int wakeup)
static inline void hrtimer_init_hres(struct hrtimer_cpu_base *base)
static inline void retrigger_next_event(void *arg)
void clock_was_set(void)
void hrtimers_resume(void)
static inline void timer_stats_hrtimer_set_start_info(struct hrtimer *timer)
static inline void timer_stats_hrtimer_clear_start_info(struct hrtimer *timer)
static inline void timer_stats_account_hrtimer(struct hrtimer *timer)
static inline
void unlock_hrtimer_base(const struct hrtimer *timer, unsigned long *flags)
u64 hrtimer_forward(struct hrtimer *timer, ktime_t now, ktime_t interval)
EXPORT_SYMBOL_GPL(hrtimer_forward);
static int enqueue_hrtimer(struct hrtimer *timer,
struct hrtimer_clock_base *base)
static void __remove_hrtimer(struct hrtimer *timer,
struct hrtimer_clock_base *base,
unsigned long newstate, int reprogram)
static inline int
remove_hrtimer(struct hrtimer *timer, struct hrtimer_clock_base *base)
int __hrtimer_start_range_ns(struct hrtimer *timer, ktime_t tim,
unsigned long delta_ns, const enum hrtimer_mode mode,
int wakeup)
int hrtimer_start_range_ns(struct hrtimer *timer, ktime_t tim,
unsigned long delta_ns, const enum hrtimer_mode mode)
EXPORT_SYMBOL_GPL(hrtimer_start_range_ns);
int
hrtimer_start(struct hrtimer *timer, ktime_t tim, const enum hrtimer_mode mode)
EXPORT_SYMBOL_GPL(hrtimer_start);
int hrtimer_try_to_cancel(struct hrtimer *timer)
EXPORT_SYMBOL_GPL(hrtimer_try_to_cancel);
int hrtimer_cancel(struct hrtimer *timer)
EXPORT_SYMBOL_GPL(hrtimer_cancel);
ktime_t hrtimer_get_remaining(const struct hrtimer *timer)
EXPORT_SYMBOL_GPL(hrtimer_get_remaining);
ktime_t hrtimer_get_next_event(void)
static void __hrtimer_init(struct hrtimer *timer, clockid_t clock_id,
enum hrtimer_mode mode)
void hrtimer_init(struct hrtimer *timer, clockid_t clock_id,
enum hrtimer_mode mode)
EXPORT_SYMBOL_GPL(hrtimer_init);
int hrtimer_get_res(const clockid_t which_clock, struct timespec *tp)
EXPORT_SYMBOL_GPL(hrtimer_get_res);
static void __run_hrtimer(struct hrtimer *timer, ktime_t *now)
void hrtimer_interrupt(struct clock_event_device *dev)
static void __hrtimer_peek_ahead_timers(void)
void hrtimer_peek_ahead_timers(void)
static void run_hrtimer_softirq(struct softirq_action *h)
static inline void __hrtimer_peek_ahead_timers(void)
void hrtimer_run_pending(void)
void hrtimer_run_queues(void)
static enum hrtimer_restart hrtimer_wakeup(struct hrtimer *timer)
void hrtimer_init_sleeper(struct hrtimer_sleeper *sl, struct task_struct *task)
EXPORT_SYMBOL_GPL(hrtimer_init_sleeper);
static int __sched do_nanosleep(struct hrtimer_sleeper *t, enum hrtimer_mode mode)
static int update_rmtp(struct hrtimer *timer, struct timespec __user *rmtp)
long __sched hrtimer_nanosleep_restart(struct restart_block *restart)
long hrtimer_nanosleep(struct timespec *rqtp, struct timespec __user *rmtp,
const enum hrtimer_mode mode, const clockid_t clockid)
SYSCALL_DEFINE2(nanosleep, struct timespec __user *, rqtp,
struct timespec __user *, rmtp)
static void __cpuinit init_hrtimers_cpu(int cpu)
static void migrate_hrtimer_list(struct hrtimer_clock_base *old_base,
struct hrtimer_clock_base *new_base)
static void migrate_hrtimers(int scpu)
static int __cpuinit hrtimer_cpu_notify(struct notifier_block *self,
unsigned long action, void *hcpu)
static struct notifier_block __cpuinitdata hrtimers_nb = ;
void __init hrtimers_init(void)
int __sched
schedule_hrtimeout_range_clock(ktime_t *expires, unsigned long delta,
const enum hrtimer_mode mode, int clock)
int __sched schedule_hrtimeout_range(ktime_t *expires, unsigned long delta,
const enum hrtimer_mode mode)
EXPORT_SYMBOL_GPL(schedule_hrtimeout_range);
int __sched schedule_hrtimeout(ktime_t *expires,
const enum hrtimer_mode mode)
EXPORT_SYMBOL_GPL(schedule_hrtimeout);
