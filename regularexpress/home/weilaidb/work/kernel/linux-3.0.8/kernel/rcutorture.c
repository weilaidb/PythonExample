MODULE_LICENSE("GPL");
MODULE_AUTHOR("Paul E. McKenney <paulmck@us.ibm.com> and "
"Josh Triplett <josh@freedesktop.org>");
static int nreaders = -1;
static int nfakewriters = 4;
static int stat_interval;
static int verbose;
static int test_no_idle_hz;
static int shuffle_interval = 3;
static int stutter = 5;
static int irqreader = 1;
static int fqs_duration = 0;
static int fqs_holdoff = 0;
static int fqs_stutter = 3;
static int test_boost = 1;
static int test_boost_interval = 7;
static int test_boost_duration = 4;
static char *torture_type = "rcu";
module_param(nreaders, int, 0444);
MODULE_PARM_DESC(nreaders, "Number of RCU reader threads");
module_param(nfakewriters, int, 0444);
MODULE_PARM_DESC(nfakewriters, "Number of RCU fake writer threads");
module_param(stat_interval, int, 0444);
MODULE_PARM_DESC(stat_interval, "Number of seconds between stats printk()s");
module_param(verbose, bool, 0444);
MODULE_PARM_DESC(verbose, "Enable verbose debugging printk()s");
module_param(test_no_idle_hz, bool, 0444);
MODULE_PARM_DESC(test_no_idle_hz, "Test support for tickless idle CPUs");
module_param(shuffle_interval, int, 0444);
MODULE_PARM_DESC(shuffle_interval, "Number of seconds between shuffles");
module_param(stutter, int, 0444);
MODULE_PARM_DESC(stutter, "Number of seconds to run/halt test");
module_param(irqreader, int, 0444);
MODULE_PARM_DESC(irqreader, "Allow RCU readers from irq handlers");
module_param(fqs_duration, int, 0444);
MODULE_PARM_DESC(fqs_duration, "Duration of fqs bursts (us)");
module_param(fqs_holdoff, int, 0444);
MODULE_PARM_DESC(fqs_holdoff, "Holdoff time within fqs bursts (us)");
module_param(fqs_stutter, int, 0444);
MODULE_PARM_DESC(fqs_stutter, "Wait time between fqs bursts (s)");
module_param(test_boost, int, 0444);
MODULE_PARM_DESC(test_boost, "Test RCU prio boost: 0=no, 1=maybe, 2=yes.");
module_param(test_boost_interval, int, 0444);
MODULE_PARM_DESC(test_boost_interval, "Interval between boost tests, seconds.");
module_param(test_boost_duration, int, 0444);
MODULE_PARM_DESC(test_boost_duration, "Duration of each boost test, seconds.");
module_param(torture_type, charp, 0444);
MODULE_PARM_DESC(torture_type, "Type of RCU to torture (rcu, rcu_bh, srcu)");
#define TORTURE_FLAG "-torture:"
#define PRINTK_STRING(s) \
do  while (0)
#define VERBOSE_PRINTK_STRING(s) \
do  while (0)
#define VERBOSE_PRINTK_ERRSTRING(s) \
do  while (0)
static char printk_buf[4096];
static int nrealreaders;
static struct task_struct *writer_task;
static struct task_struct **fakewriter_tasks;
static struct task_struct **reader_tasks;
static struct task_struct *stats_task;
static struct task_struct *shuffler_task;
static struct task_struct *stutter_task;
static struct task_struct *fqs_task;
static struct task_struct *boost_tasks[NR_CPUS];
#define RCU_TORTURE_PIPE_LEN 10
struct rcu_torture ;
static LIST_HEAD(rcu_torture_freelist);
static struct rcu_torture __rcu *rcu_torture_current;
static unsigned long rcu_torture_current_version;
static struct rcu_torture rcu_tortures[10 * RCU_TORTURE_PIPE_LEN];
static DEFINE_SPINLOCK(rcu_torture_lock);
static DEFINE_PER_CPU(long [RCU_TORTURE_PIPE_LEN + 1], rcu_torture_count) =
;
static DEFINE_PER_CPU(long [RCU_TORTURE_PIPE_LEN + 1], rcu_torture_batch) =
;
static atomic_t rcu_torture_wcount[RCU_TORTURE_PIPE_LEN + 1];
static atomic_t n_rcu_torture_alloc;
static atomic_t n_rcu_torture_alloc_fail;
static atomic_t n_rcu_torture_free;
static atomic_t n_rcu_torture_mberror;
static atomic_t n_rcu_torture_error;
static long n_rcu_torture_boost_ktrerror;
static long n_rcu_torture_boost_rterror;
static long n_rcu_torture_boost_failure;
static long n_rcu_torture_boosts;
static long n_rcu_torture_timers;
static struct list_head rcu_torture_removed;
static cpumask_var_t shuffle_tmp_mask;
static int stutter_pause_test;
#if defined(MODULE) || defined(CONFIG_RCU_TORTURE_TEST_RUNNABLE)
#define RCUTORTURE_RUNNABLE_INIT 1
#define RCUTORTURE_RUNNABLE_INIT 0
int rcutorture_runnable = RCUTORTURE_RUNNABLE_INIT;
#if defined(CONFIG_RCU_BOOST) && !defined(CONFIG_HOTPLUG_CPU)
#define rcu_can_boost() 1
#define rcu_can_boost() 0
static unsigned long boost_starttime;
DEFINE_MUTEX(boost_mutex);
#define FULLSTOP_DONTSTOP 0
#define FULLSTOP_SHUTDOWN 1
#define FULLSTOP_RMMOD    2
static int fullstop = FULLSTOP_RMMOD;
static DEFINE_MUTEX(fullstop_mutex);
static int
rcutorture_shutdown_notify(struct notifier_block *unused1,
unsigned long unused2, void *unused3)
static void rcutorture_shutdown_absorb(char *title)
static struct rcu_torture *
rcu_torture_alloc(void)
static void
rcu_torture_free(struct rcu_torture *p)
struct rcu_random_state ;
#define RCU_RANDOM_MULT 39916801
#define RCU_RANDOM_ADD	479001701
#define RCU_RANDOM_REFRESH 10000
#define DEFINE_RCU_RANDOM(name) struct rcu_random_state name =
static unsigned long
rcu_random(struct rcu_random_state *rrsp)
static void
rcu_stutter_wait(char *title)
struct rcu_torture_ops ;
static struct rcu_torture_ops *cur_ops;
static int rcu_torture_read_lock(void) __acquires(RCU)
static void rcu_read_delay(struct rcu_random_state *rrsp)
static void rcu_torture_read_unlock(int idx) __releases(RCU)
static int rcu_torture_completed(void)
static void
rcu_torture_cb(struct rcu_head *p)
static int rcu_no_completed(void)
static void rcu_torture_deferred_free(struct rcu_torture *p)
static struct rcu_torture_ops rcu_ops = ;
static void rcu_sync_torture_deferred_free(struct rcu_torture *p)
static void rcu_sync_torture_init(void)
static struct rcu_torture_ops rcu_sync_ops = ;
static struct rcu_torture_ops rcu_expedited_ops = ;
static int rcu_bh_torture_read_lock(void) __acquires(RCU_BH)
static void rcu_bh_torture_read_unlock(int idx) __releases(RCU_BH)
static int rcu_bh_torture_completed(void)
static void rcu_bh_torture_deferred_free(struct rcu_torture *p)
struct rcu_bh_torture_synchronize ;
static void rcu_bh_torture_wakeme_after_cb(struct rcu_head *head)
static void rcu_bh_torture_synchronize(void)
static struct rcu_torture_ops rcu_bh_ops = ;
static struct rcu_torture_ops rcu_bh_sync_ops = ;
static struct srcu_struct srcu_ctl;
static void srcu_torture_init(void)
static void srcu_torture_cleanup(void)
static int srcu_torture_read_lock(void) __acquires(&srcu_ctl)
static void srcu_read_delay(struct rcu_random_state *rrsp)
static void srcu_torture_read_unlock(int idx) __releases(&srcu_ctl)
static int srcu_torture_completed(void)
static void srcu_torture_synchronize(void)
static int srcu_torture_stats(char *page)
static struct rcu_torture_ops srcu_ops = ;
static void srcu_torture_synchronize_expedited(void)
static struct rcu_torture_ops srcu_expedited_ops = ;
static int sched_torture_read_lock(void)
static void sched_torture_read_unlock(int idx)
static void rcu_sched_torture_deferred_free(struct rcu_torture *p)
static void sched_torture_synchronize(void)
static struct rcu_torture_ops sched_ops = ;
static struct rcu_torture_ops sched_sync_ops = ;
static struct rcu_torture_ops sched_expedited_ops = ;
struct rcu_boost_inflight ;
static void rcu_torture_boost_cb(struct rcu_head *head)
static int rcu_torture_boost(void *arg)
static int
rcu_torture_fqs(void *arg)
static int
rcu_torture_writer(void *arg)
static int
rcu_torture_fakewriter(void *arg)
static void rcu_torture_timer(unsigned long unused)
static int
rcu_torture_reader(void *arg)
static int
rcu_torture_printk(char *page)
static void
rcu_torture_stats_print(void)
static int
rcu_torture_stats(void *arg)
static int rcu_idle_cpu;
static void rcu_torture_shuffle_tasks(void)
static int
rcu_torture_shuffle(void *arg)
static int
rcu_torture_stutter(void *arg)
static inline void
rcu_torture_print_module_parms(struct rcu_torture_ops *cur_ops, char *tag)
static struct notifier_block rcutorture_shutdown_nb = ;
static void rcutorture_booster_cleanup(int cpu)
static int rcutorture_booster_init(int cpu)
static int rcutorture_cpu_notify(struct notifier_block *self,
unsigned long action, void *hcpu)
static struct notifier_block rcutorture_cpu_nb = ;
static void
rcu_torture_cleanup(void)
static int __init
rcu_torture_init(void)
module_init(rcu_torture_init);
module_exit(rcu_torture_cleanup);
