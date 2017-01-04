#define CREATE_TRACE_POINTS
#define NICE_TO_PRIO(nice)	(MAX_RT_PRIO + (nice) + 20)
#define PRIO_TO_NICE(prio)	((prio) - MAX_RT_PRIO - 20)
#define TASK_NICE(p)		PRIO_TO_NICE((p)->static_prio)
#define USER_PRIO(p)		((p)-MAX_RT_PRIO)
#define TASK_USER_PRIO(p)	USER_PRIO((p)->static_prio)
#define MAX_USER_PRIO		(USER_PRIO(MAX_PRIO))
#define NS_TO_JIFFIES(TIME)	((unsigned long)(TIME) / (NSEC_PER_SEC / HZ))
#define NICE_0_LOAD		SCHED_LOAD_SCALE
#define NICE_0_SHIFT		SCHED_LOAD_SHIFT
#define DEF_TIMESLICE		(100 * HZ / 1000)
#define RUNTIME_INF	((u64)~0ULL)
static inline int rt_policy(int policy)
static inline int task_has_rt_policy(struct task_struct *p)
struct rt_prio_array ;
struct rt_bandwidth ;
static struct rt_bandwidth def_rt_bandwidth;
static int do_sched_rt_period_timer(struct rt_bandwidth *rt_b, int overrun);
static enum hrtimer_restart sched_rt_period_timer(struct hrtimer *timer)
static
void init_rt_bandwidth(struct rt_bandwidth *rt_b, u64 period, u64 runtime)
static inline int rt_bandwidth_enabled(void)
static void start_rt_bandwidth(struct rt_bandwidth *rt_b)
static void destroy_rt_bandwidth(struct rt_bandwidth *rt_b)
static DEFINE_MUTEX(sched_domains_mutex);
struct cfs_rq;
static LIST_HEAD(task_groups);
struct task_group ;
static DEFINE_SPINLOCK(task_group_lock);
# define ROOT_TASK_GROUP_LOAD	NICE_0_LOAD
#define MIN_SHARES	(1UL <<  1)
#define MAX_SHARES	(1UL << 18)
static int root_task_group_load = ROOT_TASK_GROUP_LOAD;
struct task_group root_task_group;
struct cfs_rq ;
struct rt_rq ;
struct root_domain ;
static struct root_domain def_root_domain;
struct rq ;
static DEFINE_PER_CPU_SHARED_ALIGNED(struct rq, runqueues);
static void check_preempt_curr(struct rq *rq, struct task_struct *p, int flags);
static inline int cpu_of(struct rq *rq)
#define rcu_dereference_check_sched_domain(p) \
rcu_dereference_check((p), \
rcu_read_lock_held() || \
lockdep_is_held(&sched_domains_mutex))
#define for_each_domain(cpu, __sd) \
for (__sd = rcu_dereference_check_sched_domain(cpu_rq(cpu)->sd); __sd; __sd = __sd->parent)
#define cpu_rq(cpu)		(&per_cpu(runqueues, (cpu)))
#define this_rq()		(&__get_cpu_var(runqueues))
#define task_rq(p)		cpu_rq(task_cpu(p))
#define cpu_curr(cpu)		(cpu_rq(cpu)->curr)
#define raw_rq()		(&__raw_get_cpu_var(runqueues))
static inline struct task_group *task_group(struct task_struct *p)
static inline void set_task_rq(struct task_struct *p, unsigned int cpu)
static inline void set_task_rq(struct task_struct *p, unsigned int cpu)
static inline struct task_group *task_group(struct task_struct *p)
static void update_rq_clock_task(struct rq *rq, s64 delta);
static void update_rq_clock(struct rq *rq)
# define const_debug __read_mostly
# define const_debug static const
int runqueue_is_locked(int cpu)
#define SCHED_FEAT(name, enabled)	\
__SCHED_FEAT_##name ,
enum ;
#undef SCHED_FEAT
#define SCHED_FEAT(name, enabled)	\
(1UL << __SCHED_FEAT_##name) * enabled |
const_debug unsigned int sysctl_sched_features =
0;
#undef SCHED_FEAT
#define SCHED_FEAT(name, enabled)	\
#name ,
static __read_mostly char *sched_feat_names[] = ;
#undef SCHED_FEAT
static int sched_feat_show(struct seq_file *m, void *v)
static ssize_t
sched_feat_write(struct file *filp, const char __user *ubuf,
size_t cnt, loff_t *ppos)
static int sched_feat_open(struct inode *inode, struct file *filp)
static const struct file_operations sched_feat_fops = ;
static __init int sched_init_debug(void)
late_initcall(sched_init_debug);
#define sched_feat(x) (sysctl_sched_features & (1UL << __SCHED_FEAT_##x))
const_debug unsigned int sysctl_sched_nr_migrate = 32;
const_debug unsigned int sysctl_sched_time_avg = MSEC_PER_SEC;
unsigned int sysctl_sched_rt_period = 1000000;
static __read_mostly int scheduler_running;
int sysctl_sched_rt_runtime = 950000;
static inline u64 global_rt_period(void)
static inline u64 global_rt_runtime(void)
# define prepare_arch_switch(next)	do  while (0)
# define finish_arch_switch(prev)	do  while (0)
static inline int task_current(struct rq *rq, struct task_struct *p)
static inline int task_running(struct rq *rq, struct task_struct *p)
static inline void prepare_lock_switch(struct rq *rq, struct task_struct *next)
static inline void finish_lock_switch(struct rq *rq, struct task_struct *prev)
static inline void prepare_lock_switch(struct rq *rq, struct task_struct *next)
static inline void finish_lock_switch(struct rq *rq, struct task_struct *prev)
static inline struct rq *__task_rq_lock(struct task_struct *p)
__acquires(rq->lock)
static struct rq *task_rq_lock(struct task_struct *p, unsigned long *flags)
__acquires(p->pi_lock)
__acquires(rq->lock)
static void __task_rq_unlock(struct rq *rq)
__releases(rq->lock)
static inline void
task_rq_unlock(struct rq *rq, struct task_struct *p, unsigned long *flags)
__releases(rq->lock)
__releases(p->pi_lock)
static struct rq *this_rq_lock(void)
__acquires(rq->lock)
static inline int hrtick_enabled(struct rq *rq)
static void hrtick_clear(struct rq *rq)
static enum hrtimer_restart hrtick(struct hrtimer *timer)
static void __hrtick_start(void *arg)
static void hrtick_start(struct rq *rq, u64 delay)
static int
hotplug_hrtick(struct notifier_block *nfb, unsigned long action, void *hcpu)
static __init void init_hrtick(void)
static void hrtick_start(struct rq *rq, u64 delay)
static inline void init_hrtick(void)
static void init_rq_hrtick(struct rq *rq)
static inline void hrtick_clear(struct rq *rq)
static inline void init_rq_hrtick(struct rq *rq)
static inline void init_hrtick(void)
#define tsk_is_polling(t) test_tsk_thread_flag(t, TIF_POLLING_NRFLAG)
static void resched_task(struct task_struct *p)
static void resched_cpu(int cpu)
int get_nohz_timer_target(void)
void wake_up_idle_cpu(int cpu)
static u64 sched_avg_period(void)
static void sched_avg_update(struct rq *rq)
static void sched_rt_avg_update(struct rq *rq, u64 rt_delta)
static void resched_task(struct task_struct *p)
static void sched_rt_avg_update(struct rq *rq, u64 rt_delta)
static void sched_avg_update(struct rq *rq)
#if BITS_PER_LONG == 32
# define WMULT_CONST	(~0UL)
# define WMULT_CONST	(1UL << 32)
#define WMULT_SHIFT	32
#define SRR(x, y) (((x) + (1UL << ((y) - 1))) >> (y))
static unsigned long
calc_delta_mine(unsigned long delta_exec, unsigned long weight,
struct load_weight *lw)
static inline void update_load_add(struct load_weight *lw, unsigned long inc)
static inline void update_load_sub(struct load_weight *lw, unsigned long dec)
static inline void update_load_set(struct load_weight *lw, unsigned long w)
#define WEIGHT_IDLEPRIO                3
#define WMULT_IDLEPRIO         1431655765
static const int prio_to_weight[40] = ;
static const u32 prio_to_wmult[40] = ;
enum cpuacct_stat_index ;
static void cpuacct_charge(struct task_struct *tsk, u64 cputime);
static void cpuacct_update_stats(struct task_struct *tsk,
enum cpuacct_stat_index idx, cputime_t val);
static inline void cpuacct_charge(struct task_struct *tsk, u64 cputime)
static inline void cpuacct_update_stats(struct task_struct *tsk,
enum cpuacct_stat_index idx, cputime_t val)
static inline void inc_cpu_load(struct rq *rq, unsigned long load)
static inline void dec_cpu_load(struct rq *rq, unsigned long load)
#if (defined(CONFIG_SMP) && defined(CONFIG_FAIR_GROUP_SCHED)) || defined(CONFIG_RT_GROUP_SCHED)
typedef int (*tg_visitor)(struct task_group *, void *);
static int walk_tg_tree(tg_visitor down, tg_visitor up, void *data)
static int tg_nop(struct task_group *tg, void *data)
static unsigned long weighted_cpuload(const int cpu)
static unsigned long source_load(int cpu, int type)
static unsigned long target_load(int cpu, int type)
static unsigned long power_of(int cpu)
static int task_hot(struct task_struct *p, u64 now, struct sched_domain *sd);
static unsigned long cpu_avg_load_per_task(int cpu)
static int tg_load_down(struct task_group *tg, void *data)
static void update_h_load(long cpu)
static void double_rq_lock(struct rq *rq1, struct rq *rq2);
static inline int _double_lock_balance(struct rq *this_rq, struct rq *busiest)
__releases(this_rq->lock)
__acquires(busiest->lock)
__acquires(this_rq->lock)
static int _double_lock_balance(struct rq *this_rq, struct rq *busiest)
__releases(this_rq->lock)
__acquires(busiest->lock)
__acquires(this_rq->lock)
static int double_lock_balance(struct rq *this_rq, struct rq *busiest)
static inline void double_unlock_balance(struct rq *this_rq, struct rq *busiest)
__releases(busiest->lock)
static void double_rq_lock(struct rq *rq1, struct rq *rq2)
__acquires(rq1->lock)
__acquires(rq2->lock)
static void double_rq_unlock(struct rq *rq1, struct rq *rq2)
__releases(rq1->lock)
__releases(rq2->lock)
static void double_rq_lock(struct rq *rq1, struct rq *rq2)
__acquires(rq1->lock)
__acquires(rq2->lock)
static void double_rq_unlock(struct rq *rq1, struct rq *rq2)
__releases(rq1->lock)
__releases(rq2->lock)
static void calc_load_account_idle(struct rq *this_rq);
static void update_sysctl(void);
static int get_update_sysctl_factor(void);
static void update_cpu_load(struct rq *this_rq);
static inline void __set_task_cpu(struct task_struct *p, unsigned int cpu)
static const struct sched_class rt_sched_class;
#define sched_class_highest (&stop_sched_class)
#define for_each_class(class) \
for (class = sched_class_highest; class; class = class->next)
static void inc_nr_running(struct rq *rq)
static void dec_nr_running(struct rq *rq)
static void set_load_weight(struct task_struct *p)
static void enqueue_task(struct rq *rq, struct task_struct *p, int flags)
static void dequeue_task(struct rq *rq, struct task_struct *p, int flags)
static void activate_task(struct rq *rq, struct task_struct *p, int flags)
static void deactivate_task(struct rq *rq, struct task_struct *p, int flags)
static DEFINE_PER_CPU(u64, cpu_hardirq_time);
static DEFINE_PER_CPU(u64, cpu_softirq_time);
static DEFINE_PER_CPU(u64, irq_start_time);
static int sched_clock_irqtime;
void enable_sched_clock_irqtime(void)
void disable_sched_clock_irqtime(void)
static DEFINE_PER_CPU(seqcount_t, irq_time_seq);
static inline void irq_time_write_begin(void)
static inline void irq_time_write_end(void)
static inline u64 irq_time_read(int cpu)
static inline void irq_time_write_begin(void)
static inline void irq_time_write_end(void)
static inline u64 irq_time_read(int cpu)
void account_system_vtime(struct task_struct *curr)
EXPORT_SYMBOL_GPL(account_system_vtime);
static void update_rq_clock_task(struct rq *rq, s64 delta)
static int irqtime_account_hi_update(void)
static int irqtime_account_si_update(void)
#define sched_clock_irqtime	(0)
static void update_rq_clock_task(struct rq *rq, s64 delta)
# include "sched_debug.c"
void sched_set_stop_task(int cpu, struct task_struct *stop)
static inline int __normal_prio(struct task_struct *p)
static inline int normal_prio(struct task_struct *p)
static int effective_prio(struct task_struct *p)
inline int task_curr(const struct task_struct *p)
static inline void check_class_changed(struct rq *rq, struct task_struct *p,
const struct sched_class *prev_class,
int oldprio)
static void check_preempt_curr(struct rq *rq, struct task_struct *p, int flags)
static int
task_hot(struct task_struct *p, u64 now, struct sched_domain *sd)
void set_task_cpu(struct task_struct *p, unsigned int new_cpu)
struct migration_arg ;
static int migration_cpu_stop(void *data);
unsigned long wait_task_inactive(struct task_struct *p, long match_state)
void kick_process(struct task_struct *p)
EXPORT_SYMBOL_GPL(kick_process);
static int select_fallback_rq(int cpu, struct task_struct *p)
static inline
int select_task_rq(struct task_struct *p, int sd_flags, int wake_flags)
static void update_avg(u64 *avg, u64 sample)
static void
ttwu_stat(struct task_struct *p, int cpu, int wake_flags)
static void ttwu_activate(struct rq *rq, struct task_struct *p, int en_flags)
static void
ttwu_do_wakeup(struct rq *rq, struct task_struct *p, int wake_flags)
static void
ttwu_do_activate(struct rq *rq, struct task_struct *p, int wake_flags)
static int ttwu_remote(struct task_struct *p, int wake_flags)
static void sched_ttwu_do_pending(struct task_struct *list)
static void sched_ttwu_pending(void)
void scheduler_ipi(void)
static void ttwu_queue_remote(struct task_struct *p, int cpu)
static int ttwu_activate_remote(struct task_struct *p, int wake_flags)
static void ttwu_queue(struct task_struct *p, int cpu)
static int
try_to_wake_up(struct task_struct *p, unsigned int state, int wake_flags)
static void try_to_wake_up_local(struct task_struct *p)
int wake_up_process(struct task_struct *p)
EXPORT_SYMBOL(wake_up_process);
int wake_up_state(struct task_struct *p, unsigned int state)
static void __sched_fork(struct task_struct *p)
void sched_fork(struct task_struct *p)
void wake_up_new_task(struct task_struct *p)
void preempt_notifier_register(struct preempt_notifier *notifier)
EXPORT_SYMBOL_GPL(preempt_notifier_register);
void preempt_notifier_unregister(struct preempt_notifier *notifier)
EXPORT_SYMBOL_GPL(preempt_notifier_unregister);
static void fire_sched_in_preempt_notifiers(struct task_struct *curr)
static void
fire_sched_out_preempt_notifiers(struct task_struct *curr,
struct task_struct *next)
static void fire_sched_in_preempt_notifiers(struct task_struct *curr)
static void
fire_sched_out_preempt_notifiers(struct task_struct *curr,
struct task_struct *next)
static inline void
prepare_task_switch(struct rq *rq, struct task_struct *prev,
struct task_struct *next)
static void finish_task_switch(struct rq *rq, struct task_struct *prev)
__releases(rq->lock)
static inline void pre_schedule(struct rq *rq, struct task_struct *prev)
static inline void post_schedule(struct rq *rq)
static inline void pre_schedule(struct rq *rq, struct task_struct *p)
static inline void post_schedule(struct rq *rq)
asmlinkage void schedule_tail(struct task_struct *prev)
__releases(rq->lock)
static inline void
context_switch(struct rq *rq, struct task_struct *prev,
struct task_struct *next)
unsigned long nr_running(void)
unsigned long nr_uninterruptible(void)
unsigned long long nr_context_switches(void)
unsigned long nr_iowait(void)
unsigned long nr_iowait_cpu(int cpu)
unsigned long this_cpu_load(void)
static atomic_long_t calc_load_tasks;
static unsigned long calc_load_update;
unsigned long avenrun[3];
EXPORT_SYMBOL(avenrun);
static long calc_load_fold_active(struct rq *this_rq)
static unsigned long
calc_load(unsigned long load, unsigned long exp, unsigned long active)
static atomic_long_t calc_load_tasks_idle;
static void calc_load_account_idle(struct rq *this_rq)
static long calc_load_fold_idle(void)
static unsigned long
fixed_power_int(unsigned long x, unsigned int frac_bits, unsigned int n)
static unsigned long
calc_load_n(unsigned long load, unsigned long exp,
unsigned long active, unsigned int n)
static void calc_global_nohz(unsigned long ticks)
static void calc_load_account_idle(struct rq *this_rq)
static inline long calc_load_fold_idle(void)
static void calc_global_nohz(unsigned long ticks)
void get_avenrun(unsigned long *loads, unsigned long offset, int shift)
void calc_global_load(unsigned long ticks)
static void calc_load_account_active(struct rq *this_rq)
#define DEGRADE_SHIFT		7
static const unsigned char
degrade_zero_ticks[CPU_LOAD_IDX_MAX] = ;
static const unsigned char
degrade_factor[CPU_LOAD_IDX_MAX][DEGRADE_SHIFT + 1] = ;
static unsigned long
decay_load_missed(unsigned long load, unsigned long missed_updates, int idx)
static void update_cpu_load(struct rq *this_rq)
static void update_cpu_load_active(struct rq *this_rq)
void sched_exec(void)
DEFINE_PER_CPU(struct kernel_stat, kstat);
EXPORT_PER_CPU_SYMBOL(kstat);
static u64 do_task_delta_exec(struct task_struct *p, struct rq *rq)
unsigned long long task_delta_exec(struct task_struct *p)
unsigned long long task_sched_runtime(struct task_struct *p)
void account_user_time(struct task_struct *p, cputime_t cputime,
cputime_t cputime_scaled)
static void account_guest_time(struct task_struct *p, cputime_t cputime,
cputime_t cputime_scaled)
static inline
void __account_system_time(struct task_struct *p, cputime_t cputime,
cputime_t cputime_scaled, cputime64_t *target_cputime64)
void account_system_time(struct task_struct *p, int hardirq_offset,
cputime_t cputime, cputime_t cputime_scaled)
void account_steal_time(cputime_t cputime)
void account_idle_time(cputime_t cputime)
static void irqtime_account_process_tick(struct task_struct *p, int user_tick,
struct rq *rq)
static void irqtime_account_idle_ticks(int ticks)
static void irqtime_account_idle_ticks(int ticks)
static void irqtime_account_process_tick(struct task_struct *p, int user_tick,
struct rq *rq)
void account_process_tick(struct task_struct *p, int user_tick)
void account_steal_ticks(unsigned long ticks)
void account_idle_ticks(unsigned long ticks)
void task_times(struct task_struct *p, cputime_t *ut, cputime_t *st)
void thread_group_times(struct task_struct *p, cputime_t *ut, cputime_t *st)
# define nsecs_to_cputime(__nsecs)	nsecs_to_jiffies(__nsecs)
void task_times(struct task_struct *p, cputime_t *ut, cputime_t *st)
void thread_group_times(struct task_struct *p, cputime_t *ut, cputime_t *st)
void scheduler_tick(void)
notrace unsigned long get_parent_ip(unsigned long addr)
#if defined(CONFIG_PREEMPT) && (defined(CONFIG_DEBUG_PREEMPT) || \
defined(CONFIG_PREEMPT_TRACER))
void __kprobes add_preempt_count(int val)
EXPORT_SYMBOL(add_preempt_count);
void __kprobes sub_preempt_count(int val)
EXPORT_SYMBOL(sub_preempt_count);
static noinline void __schedule_bug(struct task_struct *prev)
static inline void schedule_debug(struct task_struct *prev)
static void put_prev_task(struct rq *rq, struct task_struct *prev)
static inline struct task_struct *
pick_next_task(struct rq *rq)
static void __sched __schedule(void)
static inline void sched_submit_work(struct task_struct *tsk)
asmlinkage void __sched schedule(void)
EXPORT_SYMBOL(schedule);
static inline bool owner_running(struct mutex *lock, struct task_struct *owner)
int mutex_spin_on_owner(struct mutex *lock, struct task_struct *owner)
asmlinkage void __sched notrace preempt_schedule(void)
EXPORT_SYMBOL(preempt_schedule);
asmlinkage void __sched preempt_schedule_irq(void)
int default_wake_function(wait_queue_t *curr, unsigned mode, int wake_flags,
void *key)
EXPORT_SYMBOL(default_wake_function);
static void __wake_up_common(wait_queue_head_t *q, unsigned int mode,
int nr_exclusive, int wake_flags, void *key)
void __wake_up(wait_queue_head_t *q, unsigned int mode,
int nr_exclusive, void *key)
EXPORT_SYMBOL(__wake_up);
void __wake_up_locked(wait_queue_head_t *q, unsigned int mode)
EXPORT_SYMBOL_GPL(__wake_up_locked);
void __wake_up_locked_key(wait_queue_head_t *q, unsigned int mode, void *key)
EXPORT_SYMBOL_GPL(__wake_up_locked_key);
void __wake_up_sync_key(wait_queue_head_t *q, unsigned int mode,
int nr_exclusive, void *key)
EXPORT_SYMBOL_GPL(__wake_up_sync_key);
void __wake_up_sync(wait_queue_head_t *q, unsigned int mode, int nr_exclusive)
EXPORT_SYMBOL_GPL(__wake_up_sync);
void complete(struct completion *x)
EXPORT_SYMBOL(complete);
void complete_all(struct completion *x)
EXPORT_SYMBOL(complete_all);
static inline long __sched
do_wait_for_common(struct completion *x, long timeout, int state)
static long __sched
wait_for_common(struct completion *x, long timeout, int state)
void __sched wait_for_completion(struct completion *x)
EXPORT_SYMBOL(wait_for_completion);
unsigned long __sched
wait_for_completion_timeout(struct completion *x, unsigned long timeout)
EXPORT_SYMBOL(wait_for_completion_timeout);
int __sched wait_for_completion_interruptible(struct completion *x)
EXPORT_SYMBOL(wait_for_completion_interruptible);
long __sched
wait_for_completion_interruptible_timeout(struct completion *x,
unsigned long timeout)
EXPORT_SYMBOL(wait_for_completion_interruptible_timeout);
int __sched wait_for_completion_killable(struct completion *x)
EXPORT_SYMBOL(wait_for_completion_killable);
long __sched
wait_for_completion_killable_timeout(struct completion *x,
unsigned long timeout)
EXPORT_SYMBOL(wait_for_completion_killable_timeout);
bool try_wait_for_completion(struct completion *x)
EXPORT_SYMBOL(try_wait_for_completion);
bool completion_done(struct completion *x)
EXPORT_SYMBOL(completion_done);
static long __sched
sleep_on_common(wait_queue_head_t *q, int state, long timeout)
void __sched interruptible_sleep_on(wait_queue_head_t *q)
EXPORT_SYMBOL(interruptible_sleep_on);
long __sched
interruptible_sleep_on_timeout(wait_queue_head_t *q, long timeout)
EXPORT_SYMBOL(interruptible_sleep_on_timeout);
void __sched sleep_on(wait_queue_head_t *q)
EXPORT_SYMBOL(sleep_on);
long __sched sleep_on_timeout(wait_queue_head_t *q, long timeout)
EXPORT_SYMBOL(sleep_on_timeout);
void rt_mutex_setprio(struct task_struct *p, int prio)
void set_user_nice(struct task_struct *p, long nice)
EXPORT_SYMBOL(set_user_nice);
int can_nice(const struct task_struct *p, const int nice)
SYSCALL_DEFINE1(nice, int, increment)
int task_prio(const struct task_struct *p)
int task_nice(const struct task_struct *p)
EXPORT_SYMBOL(task_nice);
int idle_cpu(int cpu)
struct task_struct *idle_task(int cpu)
static struct task_struct *find_process_by_pid(pid_t pid)
static void
__setscheduler(struct rq *rq, struct task_struct *p, int policy, int prio)
static bool check_same_owner(struct task_struct *p)
static int __sched_setscheduler(struct task_struct *p, int policy,
const struct sched_param *param, bool user)
int sched_setscheduler(struct task_struct *p, int policy,
const struct sched_param *param)
EXPORT_SYMBOL_GPL(sched_setscheduler);
int sched_setscheduler_nocheck(struct task_struct *p, int policy,
const struct sched_param *param)
static int
do_sched_setscheduler(pid_t pid, int policy, struct sched_param __user *param)
SYSCALL_DEFINE3(sched_setscheduler, pid_t, pid, int, policy,
struct sched_param __user *, param)
SYSCALL_DEFINE2(sched_setparam, pid_t, pid, struct sched_param __user *, param)
SYSCALL_DEFINE1(sched_getscheduler, pid_t, pid)
SYSCALL_DEFINE2(sched_getparam, pid_t, pid, struct sched_param __user *, param)
long sched_setaffinity(pid_t pid, const struct cpumask *in_mask)
static int get_user_cpu_mask(unsigned long __user *user_mask_ptr, unsigned len,
struct cpumask *new_mask)
SYSCALL_DEFINE3(sched_setaffinity, pid_t, pid, unsigned int, len,
unsigned long __user *, user_mask_ptr)
long sched_getaffinity(pid_t pid, struct cpumask *mask)
SYSCALL_DEFINE3(sched_getaffinity, pid_t, pid, unsigned int, len,
unsigned long __user *, user_mask_ptr)
SYSCALL_DEFINE0(sched_yield)
static inline int should_resched(void)
static void __cond_resched(void)
int __sched _cond_resched(void)
EXPORT_SYMBOL(_cond_resched);
int __cond_resched_lock(spinlock_t *lock)
EXPORT_SYMBOL(__cond_resched_lock);
int __sched __cond_resched_softirq(void)
EXPORT_SYMBOL(__cond_resched_softirq);
void __sched yield(void)
EXPORT_SYMBOL(yield);
bool __sched yield_to(struct task_struct *p, bool preempt)
EXPORT_SYMBOL_GPL(yield_to);
void __sched io_schedule(void)
EXPORT_SYMBOL(io_schedule);
long __sched io_schedule_timeout(long timeout)
SYSCALL_DEFINE1(sched_get_priority_max, int, policy)
SYSCALL_DEFINE1(sched_get_priority_min, int, policy)
SYSCALL_DEFINE2(sched_rr_get_interval, pid_t, pid,
struct timespec __user *, interval)
static const char stat_nam[] = TASK_STATE_TO_CHAR_STR;
void sched_show_task(struct task_struct *p)
void show_state_filter(unsigned long state_filter)
void __cpuinit init_idle_bootup_task(struct task_struct *idle)
void __cpuinit init_idle(struct task_struct *idle, int cpu)
cpumask_var_t nohz_cpu_mask;
static int get_update_sysctl_factor(void)
static void update_sysctl(void)
static inline void sched_init_granularity(void)
void do_set_cpus_allowed(struct task_struct *p, const struct cpumask *new_mask)
int set_cpus_allowed_ptr(struct task_struct *p, const struct cpumask *new_mask)
EXPORT_SYMBOL_GPL(set_cpus_allowed_ptr);
static int __migrate_task(struct task_struct *p, int src_cpu, int dest_cpu)
static int migration_cpu_stop(void *data)
void idle_task_exit(void)
static void migrate_nr_uninterruptible(struct rq *rq_src)
static void calc_global_load_remove(struct rq *rq)
static void migrate_tasks(unsigned int dead_cpu)
#if defined(CONFIG_SCHED_DEBUG) && defined(CONFIG_SYSCTL)
static struct ctl_table sd_ctl_dir[] = ;
static struct ctl_table sd_ctl_root[] = ;
static struct ctl_table *sd_alloc_ctl_entry(int n)
static void sd_free_ctl_entry(struct ctl_table **tablep)
static void
set_table_entry(struct ctl_table *entry,
const char *procname, void *data, int maxlen,
mode_t mode, proc_handler *proc_handler)
static struct ctl_table *
sd_alloc_ctl_domain_table(struct sched_domain *sd)
static ctl_table *sd_alloc_ctl_cpu_table(int cpu)
static struct ctl_table_header *sd_sysctl_header;
static void register_sched_domain_sysctl(void)
static void unregister_sched_domain_sysctl(void)
static void register_sched_domain_sysctl(void)
static void unregister_sched_domain_sysctl(void)
static void set_rq_online(struct rq *rq)
static void set_rq_offline(struct rq *rq)
static int __cpuinit
migration_call(struct notifier_block *nfb, unsigned long action, void *hcpu)
static struct notifier_block __cpuinitdata migration_notifier = ;
static int __cpuinit sched_cpu_active(struct notifier_block *nfb,
unsigned long action, void *hcpu)
static int __cpuinit sched_cpu_inactive(struct notifier_block *nfb,
unsigned long action, void *hcpu)
static int __init migration_init(void)
early_initcall(migration_init);
static cpumask_var_t sched_domains_tmpmask;
static __read_mostly int sched_domain_debug_enabled;
static int __init sched_domain_debug_setup(char *str)
early_param("sched_debug", sched_domain_debug_setup);
static int sched_domain_debug_one(struct sched_domain *sd, int cpu, int level,
struct cpumask *groupmask)
static void sched_domain_debug(struct sched_domain *sd, int cpu)
# define sched_domain_debug(sd, cpu) do  while (0)
static int sd_degenerate(struct sched_domain *sd)
static int
sd_parent_degenerate(struct sched_domain *sd, struct sched_domain *parent)
static void free_rootdomain(struct rcu_head *rcu)
static void rq_attach_root(struct rq *rq, struct root_domain *rd)
static int init_rootdomain(struct root_domain *rd)
static void init_defrootdomain(void)
static struct root_domain *alloc_rootdomain(void)
static void free_sched_groups(struct sched_group *sg, int free_sgp)
static void free_sched_domain(struct rcu_head *rcu)
static void destroy_sched_domain(struct sched_domain *sd, int cpu)
static void destroy_sched_domains(struct sched_domain *sd, int cpu)
static void
cpu_attach_domain(struct sched_domain *sd, struct root_domain *rd, int cpu)
static cpumask_var_t cpu_isolated_map;
static int __init isolated_cpu_setup(char *str)
__setup("isolcpus=", isolated_cpu_setup);
#define SD_NODES_PER_DOMAIN 16
static int find_next_best_node(int node, nodemask_t *used_nodes)
static void sched_domain_node_span(int node, struct cpumask *span)
static const struct cpumask *cpu_node_mask(int cpu)
static const struct cpumask *cpu_allnodes_mask(int cpu)
static const struct cpumask *cpu_cpu_mask(int cpu)
int sched_smt_power_savings = 0, sched_mc_power_savings = 0;
struct sd_data ;
struct s_data ;
enum s_alloc ;
struct sched_domain_topology_level;
typedef struct sched_domain *(*sched_domain_init_f)(struct sched_domain_topology_level *tl, int cpu);
typedef const struct cpumask *(*sched_domain_mask_f)(int cpu);
#define SDTL_OVERLAP	0x01
struct sched_domain_topology_level ;
static int
build_overlap_sched_groups(struct sched_domain *sd, int cpu)
static int get_group(int cpu, struct sd_data *sdd, struct sched_group **sg)
static int
build_sched_groups(struct sched_domain *sd, int cpu)
static void init_sched_groups_power(int cpu, struct sched_domain *sd)
# define SD_INIT_NAME(sd, type)		sd->name = #type
# define SD_INIT_NAME(sd, type)		do  while (0)
#define SD_INIT_FUNC(type)						\
static noinline struct sched_domain *					\
sd_init_##type(struct sched_domain_topology_level *tl, int cpu) 	\
SD_INIT_FUNC(CPU)
SD_INIT_FUNC(ALLNODES)
SD_INIT_FUNC(NODE)
SD_INIT_FUNC(SIBLING)
SD_INIT_FUNC(MC)
SD_INIT_FUNC(BOOK)
static int default_relax_domain_level = -1;
int sched_domain_level_max;
static int __init setup_relax_domain_level(char *str)
__setup("relax_domain_level=", setup_relax_domain_level);
static void set_domain_attribute(struct sched_domain *sd,
struct sched_domain_attr *attr)
static void __sdt_free(const struct cpumask *cpu_map);
static int __sdt_alloc(const struct cpumask *cpu_map);
static void __free_domain_allocs(struct s_data *d, enum s_alloc what,
const struct cpumask *cpu_map)
static enum s_alloc __visit_domain_allocation_hell(struct s_data *d,
const struct cpumask *cpu_map)
static void claim_allocations(int cpu, struct sched_domain *sd)
static const struct cpumask *cpu_smt_mask(int cpu)
static struct sched_domain_topology_level default_topology[] = ;
static struct sched_domain_topology_level *sched_domain_topology = default_topology;
static int __sdt_alloc(const struct cpumask *cpu_map)
static void __sdt_free(const struct cpumask *cpu_map)
struct sched_domain *build_sched_domain(struct sched_domain_topology_level *tl,
struct s_data *d, const struct cpumask *cpu_map,
struct sched_domain_attr *attr, struct sched_domain *child,
int cpu)
static int build_sched_domains(const struct cpumask *cpu_map,
struct sched_domain_attr *attr)
static cpumask_var_t *doms_cur;
static int ndoms_cur;
static struct sched_domain_attr *dattr_cur;
static cpumask_var_t fallback_doms;
int __attribute__((weak)) arch_update_cpu_topology(void)
cpumask_var_t *alloc_sched_domains(unsigned int ndoms)
void free_sched_domains(cpumask_var_t doms[], unsigned int ndoms)
static int init_sched_domains(const struct cpumask *cpu_map)
static void detach_destroy_domains(const struct cpumask *cpu_map)
static int dattrs_equal(struct sched_domain_attr *cur, int idx_cur,
struct sched_domain_attr *new, int idx_new)
void partition_sched_domains(int ndoms_new, cpumask_var_t doms_new[],
struct sched_domain_attr *dattr_new)
#if defined(CONFIG_SCHED_MC) || defined(CONFIG_SCHED_SMT)
static void reinit_sched_domains(void)
static ssize_t sched_power_savings_store(const char *buf, size_t count, int smt)
static ssize_t sched_mc_power_savings_show(struct sysdev_class *class,
struct sysdev_class_attribute *attr,
char *page)
static ssize_t sched_mc_power_savings_store(struct sysdev_class *class,
struct sysdev_class_attribute *attr,
const char *buf, size_t count)
static SYSDEV_CLASS_ATTR(sched_mc_power_savings, 0644,
sched_mc_power_savings_show,
sched_mc_power_savings_store);
static ssize_t sched_smt_power_savings_show(struct sysdev_class *dev,
struct sysdev_class_attribute *attr,
char *page)
static ssize_t sched_smt_power_savings_store(struct sysdev_class *dev,
struct sysdev_class_attribute *attr,
const char *buf, size_t count)
static SYSDEV_CLASS_ATTR(sched_smt_power_savings, 0644,
sched_smt_power_savings_show,
sched_smt_power_savings_store);
int __init sched_create_sysfs_power_savings_entries(struct sysdev_class *cls)
static int cpuset_cpu_active(struct notifier_block *nfb, unsigned long action,
void *hcpu)
static int cpuset_cpu_inactive(struct notifier_block *nfb, unsigned long action,
void *hcpu)
static int update_runtime(struct notifier_block *nfb,
unsigned long action, void *hcpu)
void __init sched_init_smp(void)
void __init sched_init_smp(void)
const_debug unsigned int sysctl_timer_migration = 1;
int in_sched_functions(unsigned long addr)
static void init_cfs_rq(struct cfs_rq *cfs_rq, struct rq *rq)
static void init_rt_rq(struct rt_rq *rt_rq, struct rq *rq)
static void init_tg_cfs_entry(struct task_group *tg, struct cfs_rq *cfs_rq,
struct sched_entity *se, int cpu,
struct sched_entity *parent)
static void init_tg_rt_entry(struct task_group *tg, struct rt_rq *rt_rq,
struct sched_rt_entity *rt_se, int cpu,
struct sched_rt_entity *parent)
void __init sched_init(void)
static inline int preempt_count_equals(int preempt_offset)
void __might_sleep(const char *file, int line, int preempt_offset)
EXPORT_SYMBOL(__might_sleep);
static void normalize_task(struct rq *rq, struct task_struct *p)
void normalize_rt_tasks(void)
#if defined(CONFIG_IA64) || defined(CONFIG_KGDB_KDB)
struct task_struct *curr_task(int cpu)
void set_curr_task(int cpu, struct task_struct *p)
static void free_fair_sched_group(struct task_group *tg)
static
int alloc_fair_sched_group(struct task_group *tg, struct task_group *parent)
static inline void unregister_fair_sched_group(struct task_group *tg, int cpu)
static inline void free_fair_sched_group(struct task_group *tg)
static inline
int alloc_fair_sched_group(struct task_group *tg, struct task_group *parent)
static inline void unregister_fair_sched_group(struct task_group *tg, int cpu)
static void free_rt_sched_group(struct task_group *tg)
static
int alloc_rt_sched_group(struct task_group *tg, struct task_group *parent)
static inline void free_rt_sched_group(struct task_group *tg)
static inline
int alloc_rt_sched_group(struct task_group *tg, struct task_group *parent)
static void free_sched_group(struct task_group *tg)
struct task_group *sched_create_group(struct task_group *parent)
static void free_sched_group_rcu(struct rcu_head *rhp)
void sched_destroy_group(struct task_group *tg)
void sched_move_task(struct task_struct *tsk)
static DEFINE_MUTEX(shares_mutex);
int sched_group_set_shares(struct task_group *tg, unsigned long shares)
unsigned long sched_group_shares(struct task_group *tg)
static DEFINE_MUTEX(rt_constraints_mutex);
static unsigned long to_ratio(u64 period, u64 runtime)
static inline int tg_has_rt_tasks(struct task_group *tg)
struct rt_schedulable_data ;
static int tg_schedulable(struct task_group *tg, void *data)
static int __rt_schedulable(struct task_group *tg, u64 period, u64 runtime)
static int tg_set_bandwidth(struct task_group *tg,
u64 rt_period, u64 rt_runtime)
int sched_group_set_rt_runtime(struct task_group *tg, long rt_runtime_us)
long sched_group_rt_runtime(struct task_group *tg)
int sched_group_set_rt_period(struct task_group *tg, long rt_period_us)
long sched_group_rt_period(struct task_group *tg)
static int sched_rt_global_constraints(void)
int sched_rt_can_attach(struct task_group *tg, struct task_struct *tsk)
static int sched_rt_global_constraints(void)
int sched_rt_handler(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp,
loff_t *ppos)
static inline struct task_group *cgroup_tg(struct cgroup *cgrp)
static struct cgroup_subsys_state *
cpu_cgroup_create(struct cgroup_subsys *ss, struct cgroup *cgrp)
static void
cpu_cgroup_destroy(struct cgroup_subsys *ss, struct cgroup *cgrp)
static int
cpu_cgroup_can_attach_task(struct cgroup *cgrp, struct task_struct *tsk)
static void
cpu_cgroup_attach_task(struct cgroup *cgrp, struct task_struct *tsk)
static void
cpu_cgroup_exit(struct cgroup_subsys *ss, struct cgroup *cgrp,
struct cgroup *old_cgrp, struct task_struct *task)
static int cpu_shares_write_u64(struct cgroup *cgrp, struct cftype *cftype,
u64 shareval)
static u64 cpu_shares_read_u64(struct cgroup *cgrp, struct cftype *cft)
static int cpu_rt_runtime_write(struct cgroup *cgrp, struct cftype *cft,
s64 val)
static s64 cpu_rt_runtime_read(struct cgroup *cgrp, struct cftype *cft)
static int cpu_rt_period_write_uint(struct cgroup *cgrp, struct cftype *cftype,
u64 rt_period_us)
static u64 cpu_rt_period_read_uint(struct cgroup *cgrp, struct cftype *cft)
static struct cftype cpu_files[] = ;
static int cpu_cgroup_populate(struct cgroup_subsys *ss, struct cgroup *cont)
struct cgroup_subsys cpu_cgroup_subsys = ;
struct cpuacct ;
struct cgroup_subsys cpuacct_subsys;
static inline struct cpuacct *cgroup_ca(struct cgroup *cgrp)
static inline struct cpuacct *task_ca(struct task_struct *tsk)
static struct cgroup_subsys_state *cpuacct_create(
struct cgroup_subsys *ss, struct cgroup *cgrp)
static void
cpuacct_destroy(struct cgroup_subsys *ss, struct cgroup *cgrp)
static u64 cpuacct_cpuusage_read(struct cpuacct *ca, int cpu)
static void cpuacct_cpuusage_write(struct cpuacct *ca, int cpu, u64 val)
static u64 cpuusage_read(struct cgroup *cgrp, struct cftype *cft)
static int cpuusage_write(struct cgroup *cgrp, struct cftype *cftype,
u64 reset)
static int cpuacct_percpu_seq_read(struct cgroup *cgroup, struct cftype *cft,
struct seq_file *m)
static const char *cpuacct_stat_desc[] = ;
static int cpuacct_stats_show(struct cgroup *cgrp, struct cftype *cft,
struct cgroup_map_cb *cb)
static struct cftype files[] = ;
static int cpuacct_populate(struct cgroup_subsys *ss, struct cgroup *cgrp)
static void cpuacct_charge(struct task_struct *tsk, u64 cputime)
#define CPUACCT_BATCH	\
min_t(long, percpu_counter_batch * cputime_one_jiffy, INT_MAX)
#define CPUACCT_BATCH	0
static void cpuacct_update_stats(struct task_struct *tsk,
enum cpuacct_stat_index idx, cputime_t val)
struct cgroup_subsys cpuacct_subsys = ;
