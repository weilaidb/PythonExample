#define CREATE_TRACE_POINTS
u64 jiffies_64 __cacheline_aligned_in_smp = INITIAL_JIFFIES;
EXPORT_SYMBOL(jiffies_64);
#define TVN_BITS (CONFIG_BASE_SMALL ? 4 : 6)
#define TVR_BITS (CONFIG_BASE_SMALL ? 6 : 8)
#define TVN_SIZE (1 << TVN_BITS)
#define TVR_SIZE (1 << TVR_BITS)
#define TVN_MASK (TVN_SIZE - 1)
#define TVR_MASK (TVR_SIZE - 1)
struct tvec ;
struct tvec_root ;
struct tvec_base  ____cacheline_aligned;
struct tvec_base boot_tvec_bases;
EXPORT_SYMBOL(boot_tvec_bases);
static DEFINE_PER_CPU(struct tvec_base *, tvec_bases) = &boot_tvec_bases;
static inline unsigned int tbase_get_deferrable(struct tvec_base *base)
static inline struct tvec_base *tbase_get_base(struct tvec_base *base)
static inline void timer_set_deferrable(struct timer_list *timer)
static inline void
timer_set_base(struct timer_list *timer, struct tvec_base *new_base)
static unsigned long round_jiffies_common(unsigned long j, int cpu,
bool force_up)
unsigned long __round_jiffies(unsigned long j, int cpu)
EXPORT_SYMBOL_GPL(__round_jiffies);
unsigned long __round_jiffies_relative(unsigned long j, int cpu)
EXPORT_SYMBOL_GPL(__round_jiffies_relative);
unsigned long round_jiffies(unsigned long j)
EXPORT_SYMBOL_GPL(round_jiffies);
unsigned long round_jiffies_relative(unsigned long j)
EXPORT_SYMBOL_GPL(round_jiffies_relative);
unsigned long __round_jiffies_up(unsigned long j, int cpu)
EXPORT_SYMBOL_GPL(__round_jiffies_up);
unsigned long __round_jiffies_up_relative(unsigned long j, int cpu)
EXPORT_SYMBOL_GPL(__round_jiffies_up_relative);
unsigned long round_jiffies_up(unsigned long j)
EXPORT_SYMBOL_GPL(round_jiffies_up);
unsigned long round_jiffies_up_relative(unsigned long j)
EXPORT_SYMBOL_GPL(round_jiffies_up_relative);
void set_timer_slack(struct timer_list *timer, int slack_hz)
EXPORT_SYMBOL_GPL(set_timer_slack);
static void internal_add_timer(struct tvec_base *base, struct timer_list *timer)
void __timer_stats_timer_set_start_info(struct timer_list *timer, void *addr)
static void timer_stats_account_timer(struct timer_list *timer)
static void timer_stats_account_timer(struct timer_list *timer)
static struct debug_obj_descr timer_debug_descr;
static void *timer_debug_hint(void *addr)
static int timer_fixup_init(void *addr, enum debug_obj_state state)
static int timer_fixup_activate(void *addr, enum debug_obj_state state)
static int timer_fixup_free(void *addr, enum debug_obj_state state)
static struct debug_obj_descr timer_debug_descr = ;
static inline void debug_timer_init(struct timer_list *timer)
static inline void debug_timer_activate(struct timer_list *timer)
static inline void debug_timer_deactivate(struct timer_list *timer)
static inline void debug_timer_free(struct timer_list *timer)
static void __init_timer(struct timer_list *timer,
const char *name,
struct lock_class_key *key);
void init_timer_on_stack_key(struct timer_list *timer,
const char *name,
struct lock_class_key *key)
EXPORT_SYMBOL_GPL(init_timer_on_stack_key);
void destroy_timer_on_stack(struct timer_list *timer)
EXPORT_SYMBOL_GPL(destroy_timer_on_stack);
static inline void debug_timer_init(struct timer_list *timer)
static inline void debug_timer_activate(struct timer_list *timer)
static inline void debug_timer_deactivate(struct timer_list *timer)
static inline void debug_init(struct timer_list *timer)
static inline void
debug_activate(struct timer_list *timer, unsigned long expires)
static inline void debug_deactivate(struct timer_list *timer)
static void __init_timer(struct timer_list *timer,
const char *name,
struct lock_class_key *key)
void setup_deferrable_timer_on_stack_key(struct timer_list *timer,
const char *name,
struct lock_class_key *key,
void (*function)(unsigned long),
unsigned long data)
EXPORT_SYMBOL_GPL(setup_deferrable_timer_on_stack_key);
void init_timer_key(struct timer_list *timer,
const char *name,
struct lock_class_key *key)
EXPORT_SYMBOL(init_timer_key);
void init_timer_deferrable_key(struct timer_list *timer,
const char *name,
struct lock_class_key *key)
EXPORT_SYMBOL(init_timer_deferrable_key);
static inline void detach_timer(struct timer_list *timer,
int clear_pending)
static struct tvec_base *lock_timer_base(struct timer_list *timer,
unsigned long *flags)
__acquires(timer->base->lock)
static inline int
__mod_timer(struct timer_list *timer, unsigned long expires,
bool pending_only, int pinned)
int mod_timer_pending(struct timer_list *timer, unsigned long expires)
EXPORT_SYMBOL(mod_timer_pending);
static inline
unsigned long apply_slack(struct timer_list *timer, unsigned long expires)
int mod_timer(struct timer_list *timer, unsigned long expires)
EXPORT_SYMBOL(mod_timer);
int mod_timer_pinned(struct timer_list *timer, unsigned long expires)
EXPORT_SYMBOL(mod_timer_pinned);
void add_timer(struct timer_list *timer)
EXPORT_SYMBOL(add_timer);
void add_timer_on(struct timer_list *timer, int cpu)
EXPORT_SYMBOL_GPL(add_timer_on);
int del_timer(struct timer_list *timer)
EXPORT_SYMBOL(del_timer);
int try_to_del_timer_sync(struct timer_list *timer)
EXPORT_SYMBOL(try_to_del_timer_sync);
int del_timer_sync(struct timer_list *timer)
EXPORT_SYMBOL(del_timer_sync);
static int cascade(struct tvec_base *base, struct tvec *tv, int index)
static void call_timer_fn(struct timer_list *timer, void (*fn)(unsigned long),
unsigned long data)
#define INDEX(N) ((base->timer_jiffies >> (TVR_BITS + (N) * TVN_BITS)) & TVN_MASK)
static inline void __run_timers(struct tvec_base *base)
static unsigned long __next_timer_interrupt(struct tvec_base *base)
static unsigned long cmp_next_hrtimer_event(unsigned long now,
unsigned long expires)
unsigned long get_next_timer_interrupt(unsigned long now)
void update_process_times(int user_tick)
static void run_timer_softirq(struct softirq_action *h)
void run_local_timers(void)
SYSCALL_DEFINE1(alarm, unsigned int, seconds)
SYSCALL_DEFINE0(getpid)
SYSCALL_DEFINE0(getppid)
SYSCALL_DEFINE0(getuid)
SYSCALL_DEFINE0(geteuid)
SYSCALL_DEFINE0(getgid)
SYSCALL_DEFINE0(getegid)
static void process_timeout(unsigned long __data)
signed long __sched schedule_timeout(signed long timeout)
EXPORT_SYMBOL(schedule_timeout);
signed long __sched schedule_timeout_interruptible(signed long timeout)
EXPORT_SYMBOL(schedule_timeout_interruptible);
signed long __sched schedule_timeout_killable(signed long timeout)
EXPORT_SYMBOL(schedule_timeout_killable);
signed long __sched schedule_timeout_uninterruptible(signed long timeout)
EXPORT_SYMBOL(schedule_timeout_uninterruptible);
SYSCALL_DEFINE0(gettid)
int do_sysinfo(struct sysinfo *info)
SYSCALL_DEFINE1(sysinfo, struct sysinfo __user *, info)
static int __cpuinit init_timers_cpu(int cpu)
static void migrate_timer_list(struct tvec_base *new_base, struct list_head *head)
static void __cpuinit migrate_timers(int cpu)
static int __cpuinit timer_cpu_notify(struct notifier_block *self,
unsigned long action, void *hcpu)
static struct notifier_block __cpuinitdata timers_nb = ;
void __init init_timers(void)
void msleep(unsigned int msecs)
EXPORT_SYMBOL(msleep);
unsigned long msleep_interruptible(unsigned int msecs)
EXPORT_SYMBOL(msleep_interruptible);
static int __sched do_usleep_range(unsigned long min, unsigned long max)
void usleep_range(unsigned long min, unsigned long max)
EXPORT_SYMBOL(usleep_range);
