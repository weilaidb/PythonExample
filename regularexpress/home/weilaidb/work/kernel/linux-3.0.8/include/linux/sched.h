#define _LINUX_SCHED_H
#define CSIGNAL		0x000000ff
#define CLONE_VM	0x00000100
#define CLONE_FS	0x00000200
#define CLONE_FILES	0x00000400
#define CLONE_SIGHAND	0x00000800
#define CLONE_PTRACE	0x00002000
#define CLONE_VFORK	0x00004000
#define CLONE_PARENT	0x00008000
#define CLONE_THREAD	0x00010000
#define CLONE_NEWNS	0x00020000
#define CLONE_SYSVSEM	0x00040000
#define CLONE_SETTLS	0x00080000
#define CLONE_PARENT_SETTID	0x00100000
#define CLONE_CHILD_CLEARTID	0x00200000
#define CLONE_DETACHED		0x00400000
#define CLONE_UNTRACED		0x00800000
#define CLONE_CHILD_SETTID	0x01000000
#define CLONE_NEWUTS		0x04000000
#define CLONE_NEWIPC		0x08000000
#define CLONE_NEWUSER		0x10000000
#define CLONE_NEWPID		0x20000000
#define CLONE_NEWNET		0x40000000
#define CLONE_IO		0x80000000
#define SCHED_NORMAL		0
#define SCHED_FIFO		1
#define SCHED_RR		2
#define SCHED_BATCH		3
#define SCHED_IDLE		5
#define SCHED_RESET_ON_FORK     0x40000000
struct sched_param ;
struct exec_domain;
struct futex_pi_state;
struct robust_list_head;
struct bio_list;
struct fs_struct;
struct perf_event_context;
struct blk_plug;
#define CLONE_KERNEL	(CLONE_FS | CLONE_FILES | CLONE_SIGHAND)
extern unsigned long avenrun[];
extern void get_avenrun(unsigned long *loads, unsigned long offset, int shift);
#define FSHIFT		11
#define FIXED_1		(1<<FSHIFT)
#define LOAD_FREQ	(5*HZ+1)
#define EXP_1		1884
#define EXP_5		2014
#define EXP_15		2037
#define CALC_LOAD(load,exp,n) \
load *= exp; \
load += n*(FIXED_1-exp); \
load >>= FSHIFT;
extern unsigned long total_forks;
extern int nr_threads;
DECLARE_PER_CPU(unsigned long, process_counts);
extern int nr_processes(void);
extern unsigned long nr_running(void);
extern unsigned long nr_uninterruptible(void);
extern unsigned long nr_iowait(void);
extern unsigned long nr_iowait_cpu(int cpu);
extern unsigned long this_cpu_load(void);
extern void calc_global_load(unsigned long ticks);
extern unsigned long get_parent_ip(unsigned long addr);
struct seq_file;
struct cfs_rq;
struct task_group;
extern void proc_sched_show_task(struct task_struct *p, struct seq_file *m);
extern void proc_sched_set_task(struct task_struct *p);
extern void
print_cfs_rq(struct seq_file *m, int cpu, struct cfs_rq *cfs_rq);
static inline void
proc_sched_show_task(struct task_struct *p, struct seq_file *m)
static inline void proc_sched_set_task(struct task_struct *p)
static inline void
print_cfs_rq(struct seq_file *m, int cpu, struct cfs_rq *cfs_rq)
#define TASK_RUNNING		0
#define TASK_INTERRUPTIBLE	1
#define TASK_UNINTERRUPTIBLE	2
#define __TASK_STOPPED		4
#define __TASK_TRACED		8
#define EXIT_ZOMBIE		16
#define EXIT_DEAD		32
#define TASK_DEAD		64
#define TASK_WAKEKILL		128
#define TASK_WAKING		256
#define TASK_STATE_MAX		512
#define TASK_STATE_TO_CHAR_STR "RSDTtZXxKW"
extern char ___assert_task_state[1 - 2*!!(
sizeof(TASK_STATE_TO_CHAR_STR)-1 != ilog2(TASK_STATE_MAX)+1)];
#define TASK_KILLABLE		(TASK_WAKEKILL | TASK_UNINTERRUPTIBLE)
#define TASK_STOPPED		(TASK_WAKEKILL | __TASK_STOPPED)
#define TASK_TRACED		(TASK_WAKEKILL | __TASK_TRACED)
#define TASK_NORMAL		(TASK_INTERRUPTIBLE | TASK_UNINTERRUPTIBLE)
#define TASK_ALL		(TASK_NORMAL | __TASK_STOPPED | __TASK_TRACED)
#define TASK_REPORT		(TASK_RUNNING | TASK_INTERRUPTIBLE | \
TASK_UNINTERRUPTIBLE | __TASK_STOPPED | \
__TASK_TRACED)
#define task_is_traced(task)	((task->state & __TASK_TRACED) != 0)
#define task_is_stopped(task)	((task->state & __TASK_STOPPED) != 0)
#define task_is_dead(task)	((task)->exit_state != 0)
#define task_is_stopped_or_traced(task)	\
((task->state & (__TASK_STOPPED | __TASK_TRACED)) != 0)
#define task_contributes_to_load(task)	\
((task->state & TASK_UNINTERRUPTIBLE) != 0 && \
(task->flags & PF_FREEZING) == 0)
#define __set_task_state(tsk, state_value)		\
do  while (0)
#define set_task_state(tsk, state_value)		\
set_mb((tsk)->state, (state_value))
#define __set_current_state(state_value)			\
do  while (0)
#define set_current_state(state_value)		\
set_mb(current->state, (state_value))
#define TASK_COMM_LEN 16
extern rwlock_t tasklist_lock;
extern spinlock_t mmlist_lock;
struct task_struct;
extern int lockdep_tasklist_lock_is_held(void);
extern void sched_init(void);
extern void sched_init_smp(void);
extern asmlinkage void schedule_tail(struct task_struct *prev);
extern void init_idle(struct task_struct *idle, int cpu);
extern void init_idle_bootup_task(struct task_struct *idle);
extern int runqueue_is_locked(int cpu);
extern cpumask_var_t nohz_cpu_mask;
#if defined(CONFIG_SMP) && defined(CONFIG_NO_HZ)
extern void select_nohz_load_balancer(int stop_tick);
extern int get_nohz_timer_target(void);
static inline void select_nohz_load_balancer(int stop_tick)
extern void show_state_filter(unsigned long state_filter);
static inline void show_state(void)
extern void show_regs(struct pt_regs *);
extern void show_stack(struct task_struct *task, unsigned long *sp);
void io_schedule(void);
long io_schedule_timeout(long timeout);
extern void cpu_init (void);
extern void trap_init(void);
extern void update_process_times(int user);
extern void scheduler_tick(void);
extern void sched_show_task(struct task_struct *p);
extern void touch_softlockup_watchdog(void);
extern void touch_softlockup_watchdog_sync(void);
extern void touch_all_softlockup_watchdogs(void);
extern int proc_dowatchdog_thresh(struct ctl_table *table, int write,
void __user *buffer,
size_t *lenp, loff_t *ppos);
extern unsigned int  softlockup_panic;
void lockup_detector_init(void);
static inline void touch_softlockup_watchdog(void)
static inline void touch_softlockup_watchdog_sync(void)
static inline void touch_all_softlockup_watchdogs(void)
static inline void lockup_detector_init(void)
extern unsigned int  sysctl_hung_task_panic;
extern unsigned long sysctl_hung_task_check_count;
extern unsigned long sysctl_hung_task_timeout_secs;
extern unsigned long sysctl_hung_task_warnings;
extern int proc_dohung_task_timeout_secs(struct ctl_table *table, int write,
void __user *buffer,
size_t *lenp, loff_t *ppos);
enum ;
#define __sched		__attribute__((__section__(".sched.text")))
extern char __sched_text_start[], __sched_text_end[];
extern int in_sched_functions(unsigned long addr);
#define	MAX_SCHEDULE_TIMEOUT	LONG_MAX
extern signed long schedule_timeout(signed long timeout);
extern signed long schedule_timeout_interruptible(signed long timeout);
extern signed long schedule_timeout_killable(signed long timeout);
extern signed long schedule_timeout_uninterruptible(signed long timeout);
asmlinkage void schedule(void);
extern int mutex_spin_on_owner(struct mutex *lock, struct task_struct *owner);
struct nsproxy;
struct user_namespace;
#define MAPCOUNT_ELF_CORE_MARGIN	(5)
#define DEFAULT_MAX_MAP_COUNT	(USHRT_MAX - MAPCOUNT_ELF_CORE_MARGIN)
extern int sysctl_max_map_count;
extern void arch_pick_mmap_layout(struct mm_struct *mm);
extern unsigned long
arch_get_unmapped_area(struct file *, unsigned long, unsigned long,
unsigned long, unsigned long);
extern unsigned long
arch_get_unmapped_area_topdown(struct file *filp, unsigned long addr,
unsigned long len, unsigned long pgoff,
unsigned long flags);
extern void arch_unmap_area(struct mm_struct *, unsigned long);
extern void arch_unmap_area_topdown(struct mm_struct *, unsigned long);
static inline void arch_pick_mmap_layout(struct mm_struct *mm)
extern void set_dumpable(struct mm_struct *mm, int value);
extern int get_dumpable(struct mm_struct *mm);
#define MMF_DUMPABLE      0
#define MMF_DUMP_SECURELY 1
#define MMF_DUMPABLE_BITS 2
#define MMF_DUMPABLE_MASK ((1 << MMF_DUMPABLE_BITS) - 1)
#define MMF_DUMP_ANON_PRIVATE	2
#define MMF_DUMP_ANON_SHARED	3
#define MMF_DUMP_MAPPED_PRIVATE	4
#define MMF_DUMP_MAPPED_SHARED	5
#define MMF_DUMP_ELF_HEADERS	6
#define MMF_DUMP_HUGETLB_PRIVATE 7
#define MMF_DUMP_HUGETLB_SHARED  8
#define MMF_DUMP_FILTER_SHIFT	MMF_DUMPABLE_BITS
#define MMF_DUMP_FILTER_BITS	7
#define MMF_DUMP_FILTER_MASK \
(((1 << MMF_DUMP_FILTER_BITS) - 1) << MMF_DUMP_FILTER_SHIFT)
#define MMF_DUMP_FILTER_DEFAULT \
((1 << MMF_DUMP_ANON_PRIVATE) |	(1 << MMF_DUMP_ANON_SHARED) |\
(1 << MMF_DUMP_HUGETLB_PRIVATE) | MMF_DUMP_MASK_DEFAULT_ELF)
# define MMF_DUMP_MASK_DEFAULT_ELF	(1 << MMF_DUMP_ELF_HEADERS)
# define MMF_DUMP_MASK_DEFAULT_ELF	0
#define MMF_VM_MERGEABLE	16
#define MMF_VM_HUGEPAGE		17
#define MMF_INIT_MASK		(MMF_DUMPABLE_MASK | MMF_DUMP_FILTER_MASK)
struct sighand_struct ;
struct pacct_struct ;
struct cpu_itimer ;
struct task_cputime ;
#define prof_exp	stime
#define virt_exp	utime
#define sched_exp	sum_exec_runtime
#define INIT_CPUTIME	\
(struct task_cputime)
#define INIT_PREEMPT_COUNT	(1 + PREEMPT_ACTIVE)
struct thread_group_cputimer ;
struct autogroup;
struct signal_struct ;
# define __ARCH_WANT_UNLOCKED_CTXSW
#define SIGNAL_STOP_STOPPED	0x00000001
#define SIGNAL_STOP_CONTINUED	0x00000002
#define SIGNAL_GROUP_EXIT	0x00000004
#define SIGNAL_CLD_STOPPED	0x00000010
#define SIGNAL_CLD_CONTINUED	0x00000020
#define SIGNAL_CLD_MASK		(SIGNAL_CLD_STOPPED|SIGNAL_CLD_CONTINUED)
#define SIGNAL_UNKILLABLE	0x00000040
static inline int signal_group_exit(const struct signal_struct *sig)
struct user_struct ;
extern int uids_sysfs_init(void);
extern struct user_struct *find_user(uid_t);
extern struct user_struct root_user;
#define INIT_USER (&root_user)
struct backing_dev_info;
struct reclaim_state;
#if defined(CONFIG_SCHEDSTATS) || defined(CONFIG_TASK_DELAY_ACCT)
struct sched_info ;
struct task_delay_info ;
static inline int sched_info_on(void)
enum cpu_idle_type ;
#define SCHED_LOAD_SHIFT	(10 + SCHED_LOAD_RESOLUTION)
#define SCHED_LOAD_SCALE	(1L << SCHED_LOAD_SHIFT)
#define SCHED_POWER_SHIFT	10
#define SCHED_POWER_SCALE	(1L << SCHED_POWER_SHIFT)
#define SD_LOAD_BALANCE		0x0001
#define SD_BALANCE_NEWIDLE	0x0002
#define SD_BALANCE_EXEC		0x0004
#define SD_BALANCE_FORK		0x0008
#define SD_BALANCE_WAKE		0x0010
#define SD_WAKE_AFFINE		0x0020
#define SD_PREFER_LOCAL		0x0040
#define SD_SHARE_CPUPOWER	0x0080
#define SD_POWERSAVINGS_BALANCE	0x0100
#define SD_SHARE_PKG_RESOURCES	0x0200
#define SD_SERIALIZE		0x0400
#define SD_ASYM_PACKING		0x0800
#define SD_PREFER_SIBLING	0x1000
#define SD_OVERLAP		0x2000
enum powersavings_balance_level ;
extern int sched_mc_power_savings, sched_smt_power_savings;
static inline int sd_balance_for_mc_power(void)
static inline int sd_balance_for_package_power(void)
extern int __weak arch_sd_sibiling_asym_packing(void);
static inline int sd_power_saving_flags(void)
struct sched_group_power ;
struct sched_group ;
static inline struct cpumask *sched_group_cpus(struct sched_group *sg)
struct sched_domain_attr ;
#define SD_ATTR_INIT	(struct sched_domain_attr)
extern int sched_domain_level_max;
struct sched_domain ;
static inline struct cpumask *sched_domain_span(struct sched_domain *sd)
extern void partition_sched_domains(int ndoms_new, cpumask_var_t doms_new[],
struct sched_domain_attr *dattr_new);
cpumask_var_t *alloc_sched_domains(unsigned int ndoms);
void free_sched_domains(cpumask_var_t doms[], unsigned int ndoms);
static inline int test_sd_parent(struct sched_domain *sd, int flag)
unsigned long default_scale_freq_power(struct sched_domain *sd, int cpu);
unsigned long default_scale_smt_power(struct sched_domain *sd, int cpu);
struct sched_domain_attr;
static inline void
partition_sched_domains(int ndoms_new, cpumask_var_t doms_new[],
struct sched_domain_attr *dattr_new)
struct io_context;
extern void prefetch_stack(struct task_struct *t);
static inline void prefetch_stack(struct task_struct *t)
struct audit_context;
struct mempolicy;
struct pipe_inode_info;
struct uts_namespace;
struct rq;
struct sched_domain;
#define WF_SYNC		0x01
#define WF_FORK		0x02
#define WF_MIGRATED	0x04
#define ENQUEUE_WAKEUP		1
#define ENQUEUE_HEAD		2
#define ENQUEUE_WAKING		4
#define ENQUEUE_WAKING		0
#define DEQUEUE_SLEEP		1
struct sched_class ;
struct load_weight ;
struct sched_statistics ;
struct sched_entity ;
struct sched_rt_entity ;
struct rcu_node;
enum perf_event_task_context ;
struct task_struct ;
#define tsk_cpus_allowed(tsk) (&(tsk)->cpus_allowed)
#define MAX_USER_RT_PRIO	100
#define MAX_RT_PRIO		MAX_USER_RT_PRIO
#define MAX_PRIO		(MAX_RT_PRIO + 40)
#define DEFAULT_PRIO		(MAX_RT_PRIO + 20)
static inline int rt_prio(int prio)
static inline int rt_task(struct task_struct *p)
static inline struct pid *task_pid(struct task_struct *task)
static inline struct pid *task_tgid(struct task_struct *task)
static inline struct pid *task_pgrp(struct task_struct *task)
static inline struct pid *task_session(struct task_struct *task)
struct pid_namespace;
pid_t __task_pid_nr_ns(struct task_struct *task, enum pid_type type,
struct pid_namespace *ns);
static inline pid_t task_pid_nr(struct task_struct *tsk)
static inline pid_t task_pid_nr_ns(struct task_struct *tsk,
struct pid_namespace *ns)
static inline pid_t task_pid_vnr(struct task_struct *tsk)
static inline pid_t task_tgid_nr(struct task_struct *tsk)
pid_t task_tgid_nr_ns(struct task_struct *tsk, struct pid_namespace *ns);
static inline pid_t task_tgid_vnr(struct task_struct *tsk)
static inline pid_t task_pgrp_nr_ns(struct task_struct *tsk,
struct pid_namespace *ns)
static inline pid_t task_pgrp_vnr(struct task_struct *tsk)
static inline pid_t task_session_nr_ns(struct task_struct *tsk,
struct pid_namespace *ns)
static inline pid_t task_session_vnr(struct task_struct *tsk)
static inline pid_t task_pgrp_nr(struct task_struct *tsk)
static inline int pid_alive(struct task_struct *p)
static inline int is_global_init(struct task_struct *tsk)
extern int is_container_init(struct task_struct *tsk);
extern struct pid *cad_pid;
extern void free_task(struct task_struct *tsk);
#define get_task_struct(tsk) do  while(0)
extern void __put_task_struct(struct task_struct *t);
static inline void put_task_struct(struct task_struct *t)
extern void task_times(struct task_struct *p, cputime_t *ut, cputime_t *st);
extern void thread_group_times(struct task_struct *p, cputime_t *ut, cputime_t *st);
#define PF_STARTING	0x00000002
#define PF_EXITING	0x00000004
#define PF_EXITPIDONE	0x00000008
#define PF_VCPU		0x00000010
#define PF_WQ_WORKER	0x00000020
#define PF_FORKNOEXEC	0x00000040
#define PF_MCE_PROCESS  0x00000080
#define PF_SUPERPRIV	0x00000100
#define PF_DUMPCORE	0x00000200
#define PF_SIGNALED	0x00000400
#define PF_MEMALLOC	0x00000800
#define PF_USED_MATH	0x00002000
#define PF_FREEZING	0x00004000
#define PF_NOFREEZE	0x00008000
#define PF_FROZEN	0x00010000
#define PF_FSTRANS	0x00020000
#define PF_KSWAPD	0x00040000
#define PF_LESS_THROTTLE 0x00100000
#define PF_KTHREAD	0x00200000
#define PF_RANDOMIZE	0x00400000
#define PF_SWAPWRITE	0x00800000
#define PF_SPREAD_PAGE	0x01000000
#define PF_SPREAD_SLAB	0x02000000
#define PF_THREAD_BOUND	0x04000000
#define PF_MCE_EARLY    0x08000000
#define PF_MEMPOLICY	0x10000000
#define PF_MUTEX_TESTER	0x20000000
#define PF_FREEZER_SKIP	0x40000000
#define PF_FREEZER_NOSIG 0x80000000
#define clear_stopped_child_used_math(child) do  while (0)
#define set_stopped_child_used_math(child) do  while (0)
#define clear_used_math() clear_stopped_child_used_math(current)
#define set_used_math() set_stopped_child_used_math(current)
#define conditional_stopped_child_used_math(condition, child) \
do  while (0)
#define conditional_used_math(condition) \
conditional_stopped_child_used_math(condition, current)
#define copy_to_stopped_child_used_math(child) \
do  while (0)
#define tsk_used_math(p) ((p)->flags & PF_USED_MATH)
#define used_math() tsk_used_math(current)
#define GROUP_STOP_SIGMASK	0xffff
#define GROUP_STOP_PENDING	(1 << 16)
#define GROUP_STOP_CONSUME	(1 << 17)
#define GROUP_STOP_TRAPPING	(1 << 18)
#define GROUP_STOP_DEQUEUED	(1 << 19)
extern void task_clear_group_stop_pending(struct task_struct *task);
#define RCU_READ_UNLOCK_BLOCKED (1 << 0)
#define RCU_READ_UNLOCK_BOOSTED (1 << 1)
#define RCU_READ_UNLOCK_NEED_QS (1 << 2)
static inline void rcu_copy_process(struct task_struct *p)
static inline void rcu_copy_process(struct task_struct *p)
extern void do_set_cpus_allowed(struct task_struct *p,
const struct cpumask *new_mask);
extern int set_cpus_allowed_ptr(struct task_struct *p,
const struct cpumask *new_mask);
static inline void do_set_cpus_allowed(struct task_struct *p,
const struct cpumask *new_mask)
static inline int set_cpus_allowed_ptr(struct task_struct *p,
const struct cpumask *new_mask)
static inline int set_cpus_allowed(struct task_struct *p, cpumask_t new_mask)
extern unsigned long long notrace sched_clock(void);
extern u64 cpu_clock(int cpu);
extern u64 local_clock(void);
extern u64 sched_clock_cpu(int cpu);
extern void sched_clock_init(void);
static inline void sched_clock_tick(void)
static inline void sched_clock_idle_sleep_event(void)
static inline void sched_clock_idle_wakeup_event(u64 delta_ns)
extern int sched_clock_stable;
extern void sched_clock_tick(void);
extern void sched_clock_idle_sleep_event(void);
extern void sched_clock_idle_wakeup_event(u64 delta_ns);
extern void enable_sched_clock_irqtime(void);
extern void disable_sched_clock_irqtime(void);
static inline void enable_sched_clock_irqtime(void)
static inline void disable_sched_clock_irqtime(void)
extern unsigned long long
task_sched_runtime(struct task_struct *task);
extern void sched_exec(void);
#define sched_exec()
extern void sched_clock_idle_sleep_event(void);
extern void sched_clock_idle_wakeup_event(u64 delta_ns);
extern void idle_task_exit(void);
static inline void idle_task_exit(void)
#if defined(CONFIG_NO_HZ) && defined(CONFIG_SMP)
extern void wake_up_idle_cpu(int cpu);
static inline void wake_up_idle_cpu(int cpu)
extern unsigned int sysctl_sched_latency;
extern unsigned int sysctl_sched_min_granularity;
extern unsigned int sysctl_sched_wakeup_granularity;
extern unsigned int sysctl_sched_child_runs_first;
enum sched_tunable_scaling ;
extern enum sched_tunable_scaling sysctl_sched_tunable_scaling;
extern unsigned int sysctl_sched_migration_cost;
extern unsigned int sysctl_sched_nr_migrate;
extern unsigned int sysctl_sched_time_avg;
extern unsigned int sysctl_timer_migration;
extern unsigned int sysctl_sched_shares_window;
int sched_proc_update_handler(struct ctl_table *table, int write,
void __user *buffer, size_t *length,
loff_t *ppos);
static inline unsigned int get_sysctl_timer_migration(void)
static inline unsigned int get_sysctl_timer_migration(void)
extern unsigned int sysctl_sched_rt_period;
extern int sysctl_sched_rt_runtime;
int sched_rt_handler(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp,
loff_t *ppos);
extern unsigned int sysctl_sched_autogroup_enabled;
extern void sched_autogroup_create_attach(struct task_struct *p);
extern void sched_autogroup_detach(struct task_struct *p);
extern void sched_autogroup_fork(struct signal_struct *sig);
extern void sched_autogroup_exit(struct signal_struct *sig);
extern void proc_sched_autogroup_show_task(struct task_struct *p, struct seq_file *m);
extern int proc_sched_autogroup_set_nice(struct task_struct *p, int *nice);
static inline void sched_autogroup_create_attach(struct task_struct *p)
static inline void sched_autogroup_detach(struct task_struct *p)
static inline void sched_autogroup_fork(struct signal_struct *sig)
static inline void sched_autogroup_exit(struct signal_struct *sig)
extern int rt_mutex_getprio(struct task_struct *p);
extern void rt_mutex_setprio(struct task_struct *p, int prio);
extern void rt_mutex_adjust_pi(struct task_struct *p);
static inline int rt_mutex_getprio(struct task_struct *p)
# define rt_mutex_adjust_pi(p)		do  while (0)
extern bool yield_to(struct task_struct *p, bool preempt);
extern void set_user_nice(struct task_struct *p, long nice);
extern int task_prio(const struct task_struct *p);
extern int task_nice(const struct task_struct *p);
extern int can_nice(const struct task_struct *p, const int nice);
extern int task_curr(const struct task_struct *p);
extern int idle_cpu(int cpu);
extern int sched_setscheduler(struct task_struct *, int,
const struct sched_param *);
extern int sched_setscheduler_nocheck(struct task_struct *, int,
const struct sched_param *);
extern struct task_struct *idle_task(int cpu);
extern struct task_struct *curr_task(int cpu);
extern void set_curr_task(int cpu, struct task_struct *p);
void yield(void);
extern struct exec_domain	default_exec_domain;
union thread_union ;
static inline int kstack_end(void *addr)
extern union thread_union init_thread_union;
extern struct task_struct init_task;
extern struct   mm_struct init_mm;
extern struct pid_namespace init_pid_ns;
extern struct task_struct *find_task_by_vpid(pid_t nr);
extern struct task_struct *find_task_by_pid_ns(pid_t nr,
struct pid_namespace *ns);
extern void __set_special_pids(struct pid *pid);
extern struct user_struct * alloc_uid(struct user_namespace *, uid_t);
static inline struct user_struct *get_uid(struct user_struct *u)
extern void free_uid(struct user_struct *);
extern void release_uids(struct user_namespace *ns);
extern void xtime_update(unsigned long ticks);
extern int wake_up_state(struct task_struct *tsk, unsigned int state);
extern int wake_up_process(struct task_struct *tsk);
extern void wake_up_new_task(struct task_struct *tsk);
extern void kick_process(struct task_struct *tsk);
static inline void kick_process(struct task_struct *tsk)
extern void sched_fork(struct task_struct *p);
extern void sched_dead(struct task_struct *p);
extern void proc_caches_init(void);
extern void flush_signals(struct task_struct *);
extern void __flush_signals(struct task_struct *);
extern void ignore_signals(struct task_struct *);
extern void flush_signal_handlers(struct task_struct *, int force_default);
extern int dequeue_signal(struct task_struct *tsk, sigset_t *mask, siginfo_t *info);
static inline int dequeue_signal_lock(struct task_struct *tsk, sigset_t *mask, siginfo_t *info)
extern void block_all_signals(int (*notifier)(void *priv), void *priv,
sigset_t *mask);
extern void unblock_all_signals(void);
extern void release_task(struct task_struct * p);
extern int send_sig_info(int, struct siginfo *, struct task_struct *);
extern int force_sigsegv(int, struct task_struct *);
extern int force_sig_info(int, struct siginfo *, struct task_struct *);
extern int __kill_pgrp_info(int sig, struct siginfo *info, struct pid *pgrp);
extern int kill_pid_info(int sig, struct siginfo *info, struct pid *pid);
extern int kill_pid_info_as_uid(int, struct siginfo *, struct pid *, uid_t, uid_t, u32);
extern int kill_pgrp(struct pid *pid, int sig, int priv);
extern int kill_pid(struct pid *pid, int sig, int priv);
extern int kill_proc_info(int, struct siginfo *, pid_t);
extern int do_notify_parent(struct task_struct *, int);
extern void __wake_up_parent(struct task_struct *p, struct task_struct *parent);
extern void force_sig(int, struct task_struct *);
extern int send_sig(int, struct task_struct *, int);
extern int zap_other_threads(struct task_struct *p);
extern struct sigqueue *sigqueue_alloc(void);
extern void sigqueue_free(struct sigqueue *);
extern int send_sigqueue(struct sigqueue *,  struct task_struct *, int group);
extern int do_sigaction(int, struct k_sigaction *, struct k_sigaction *);
extern int do_sigaltstack(const stack_t __user *, stack_t __user *, unsigned long);
static inline int kill_cad_pid(int sig, int priv)
#define SEND_SIG_NOINFO ((struct siginfo *) 0)
#define SEND_SIG_PRIV	((struct siginfo *) 1)
#define SEND_SIG_FORCED	((struct siginfo *) 2)
static inline int on_sig_stack(unsigned long sp)
static inline int sas_ss_flags(unsigned long sp)
extern struct mm_struct * mm_alloc(void);
extern void __mmdrop(struct mm_struct *);
static inline void mmdrop(struct mm_struct * mm)
extern void mmput(struct mm_struct *);
extern struct mm_struct *get_task_mm(struct task_struct *task);
extern void mm_release(struct task_struct *, struct mm_struct *);
extern struct mm_struct *dup_mm(struct task_struct *tsk);
extern int copy_thread(unsigned long, unsigned long, unsigned long,
struct task_struct *, struct pt_regs *);
extern void flush_thread(void);
extern void exit_thread(void);
extern void exit_files(struct task_struct *);
extern void __cleanup_sighand(struct sighand_struct *);
extern void exit_itimers(struct signal_struct *);
extern void flush_itimer_signals(void);
extern NORET_TYPE void do_group_exit(int);
extern void daemonize(const char *, ...);
extern int allow_signal(int);
extern int disallow_signal(int);
extern int do_execve(const char *,
const char __user * const __user *,
const char __user * const __user *, struct pt_regs *);
extern long do_fork(unsigned long, unsigned long, struct pt_regs *, unsigned long, int __user *, int __user *);
struct task_struct *fork_idle(int);
extern void set_task_comm(struct task_struct *tsk, char *from);
extern char *get_task_comm(char *to, struct task_struct *tsk);
void scheduler_ipi(void);
extern unsigned long wait_task_inactive(struct task_struct *, long match_state);
static inline void scheduler_ipi(void)
static inline unsigned long wait_task_inactive(struct task_struct *p,
long match_state)
#define next_task(p) \
list_entry_rcu((p)->tasks.next, struct task_struct, tasks)
#define for_each_process(p) \
for (p = &init_task ; (p = next_task(p)) != &init_task ; )
extern bool current_is_single_threaded(void);
#define do_each_thread(g, t) \
for (g = t = &init_task ; (g = t = next_task(g)) != &init_task ; ) do
#define while_each_thread(g, t) \
while ((t = next_thread(t)) != g)
static inline int get_nr_threads(struct task_struct *tsk)
#define thread_group_leader(p)	(p == p->group_leader)
static inline int has_group_leader_pid(struct task_struct *p)
static inline
int same_thread_group(struct task_struct *p1, struct task_struct *p2)
static inline struct task_struct *next_thread(const struct task_struct *p)
static inline int thread_group_empty(struct task_struct *p)
#define delay_group_leader(p) \
(thread_group_leader(p) && !thread_group_empty(p))
static inline int task_detached(struct task_struct *p)
static inline void task_lock(struct task_struct *p)
static inline void task_unlock(struct task_struct *p)
extern struct sighand_struct *__lock_task_sighand(struct task_struct *tsk,
unsigned long *flags);
#define lock_task_sighand(tsk, flags)					\
()									\
static inline void unlock_task_sighand(struct task_struct *tsk,
unsigned long *flags)
static inline void threadgroup_fork_read_lock(struct task_struct *tsk)
static inline void threadgroup_fork_read_unlock(struct task_struct *tsk)
static inline void threadgroup_fork_write_lock(struct task_struct *tsk)
static inline void threadgroup_fork_write_unlock(struct task_struct *tsk)
static inline void threadgroup_fork_read_lock(struct task_struct *tsk)
static inline void threadgroup_fork_read_unlock(struct task_struct *tsk)
static inline void threadgroup_fork_write_lock(struct task_struct *tsk)
static inline void threadgroup_fork_write_unlock(struct task_struct *tsk)
#define task_thread_info(task)	((struct thread_info *)(task)->stack)
#define task_stack_page(task)	((task)->stack)
static inline void setup_thread_stack(struct task_struct *p, struct task_struct *org)
static inline unsigned long *end_of_stack(struct task_struct *p)
static inline int object_is_on_stack(void *obj)
extern void thread_info_cache_init(void);
static inline unsigned long stack_not_used(struct task_struct *p)
static inline void set_tsk_thread_flag(struct task_struct *tsk, int flag)
static inline void clear_tsk_thread_flag(struct task_struct *tsk, int flag)
static inline int test_and_set_tsk_thread_flag(struct task_struct *tsk, int flag)
static inline int test_and_clear_tsk_thread_flag(struct task_struct *tsk, int flag)
static inline int test_tsk_thread_flag(struct task_struct *tsk, int flag)
static inline void set_tsk_need_resched(struct task_struct *tsk)
static inline void clear_tsk_need_resched(struct task_struct *tsk)
static inline int test_tsk_need_resched(struct task_struct *tsk)
static inline int restart_syscall(void)
static inline int signal_pending(struct task_struct *p)
static inline int __fatal_signal_pending(struct task_struct *p)
static inline int fatal_signal_pending(struct task_struct *p)
static inline int signal_pending_state(long state, struct task_struct *p)
static inline int need_resched(void)
extern int _cond_resched(void);
#define cond_resched() ()
extern int __cond_resched_lock(spinlock_t *lock);
#define PREEMPT_LOCK_OFFSET	PREEMPT_OFFSET
#define PREEMPT_LOCK_OFFSET	0
#define cond_resched_lock(lock) ()
extern int __cond_resched_softirq(void);
#define cond_resched_softirq() ()
static inline int spin_needbreak(spinlock_t *lock)
void thread_group_cputime(struct task_struct *tsk, struct task_cputime *times);
void thread_group_cputimer(struct task_struct *tsk, struct task_cputime *times);
static inline void thread_group_cputime_init(struct signal_struct *sig)
extern void recalc_sigpending_and_wake(struct task_struct *t);
extern void recalc_sigpending(void);
extern void signal_wake_up(struct task_struct *t, int resume_stopped);
static inline unsigned int task_cpu(const struct task_struct *p)
extern void set_task_cpu(struct task_struct *p, unsigned int cpu);
static inline unsigned int task_cpu(const struct task_struct *p)
static inline void set_task_cpu(struct task_struct *p, unsigned int cpu)
extern long sched_setaffinity(pid_t pid, const struct cpumask *new_mask);
extern long sched_getaffinity(pid_t pid, struct cpumask *mask);
extern void normalize_rt_tasks(void);
extern struct task_group root_task_group;
extern struct task_group *sched_create_group(struct task_group *parent);
extern void sched_destroy_group(struct task_group *tg);
extern void sched_move_task(struct task_struct *tsk);
extern int sched_group_set_shares(struct task_group *tg, unsigned long shares);
extern unsigned long sched_group_shares(struct task_group *tg);
extern int sched_group_set_rt_runtime(struct task_group *tg,
long rt_runtime_us);
extern long sched_group_rt_runtime(struct task_group *tg);
extern int sched_group_set_rt_period(struct task_group *tg,
long rt_period_us);
extern long sched_group_rt_period(struct task_group *tg);
extern int sched_rt_can_attach(struct task_group *tg, struct task_struct *tsk);
extern int task_can_switch_user(struct user_struct *up,
struct task_struct *tsk);
static inline void add_rchar(struct task_struct *tsk, ssize_t amt)
static inline void add_wchar(struct task_struct *tsk, ssize_t amt)
static inline void inc_syscr(struct task_struct *tsk)
static inline void inc_syscw(struct task_struct *tsk)
static inline void add_rchar(struct task_struct *tsk, ssize_t amt)
static inline void add_wchar(struct task_struct *tsk, ssize_t amt)
static inline void inc_syscr(struct task_struct *tsk)
static inline void inc_syscw(struct task_struct *tsk)
#define TASK_SIZE_OF(tsk)	TASK_SIZE
extern void mm_update_next_owner(struct mm_struct *mm);
extern void mm_init_owner(struct mm_struct *mm, struct task_struct *p);
static inline void mm_update_next_owner(struct mm_struct *mm)
static inline void mm_init_owner(struct mm_struct *mm, struct task_struct *p)
static inline unsigned long task_rlimit(const struct task_struct *tsk,
unsigned int limit)
static inline unsigned long task_rlimit_max(const struct task_struct *tsk,
unsigned int limit)
static inline unsigned long rlimit(unsigned int limit)
static inline unsigned long rlimit_max(unsigned int limit)
