static struct task_struct *rcu_kthread_task;
static DECLARE_WAIT_QUEUE_HEAD(rcu_kthread_wq);
static unsigned long have_rcu_kthread_work;
struct rcu_ctrlblk;
static void invoke_rcu_kthread(void);
static void rcu_process_callbacks(struct rcu_ctrlblk *rcp);
static int rcu_kthread(void *arg);
static void __call_rcu(struct rcu_head *head,
void (*func)(struct rcu_head *rcu),
struct rcu_ctrlblk *rcp);
static long rcu_dynticks_nesting = 1;
void rcu_enter_nohz(void)
void rcu_exit_nohz(void)
static int rcu_qsctr_help(struct rcu_ctrlblk *rcp)
static void invoke_rcu_kthread(void)
void rcu_sched_qs(int cpu)
void rcu_bh_qs(int cpu)
void rcu_check_callbacks(int cpu, int user)
static void rcu_process_callbacks(struct rcu_ctrlblk *rcp)
static int rcu_kthread(void *arg)
void synchronize_sched(void)
EXPORT_SYMBOL_GPL(synchronize_sched);
static void __call_rcu(struct rcu_head *head,
void (*func)(struct rcu_head *rcu),
struct rcu_ctrlblk *rcp)
void call_rcu_sched(struct rcu_head *head, void (*func)(struct rcu_head *rcu))
EXPORT_SYMBOL_GPL(call_rcu_sched);
void call_rcu_bh(struct rcu_head *head, void (*func)(struct rcu_head *rcu))
EXPORT_SYMBOL_GPL(call_rcu_bh);
void rcu_barrier_bh(void)
EXPORT_SYMBOL_GPL(rcu_barrier_bh);
void rcu_barrier_sched(void)
EXPORT_SYMBOL_GPL(rcu_barrier_sched);
static int __init rcu_spawn_kthreads(void)
early_initcall(rcu_spawn_kthreads);
