static void __init rcu_bootup_announce_oddness(void)
struct rcu_state rcu_preempt_state = RCU_STATE_INITIALIZER(rcu_preempt_state);
DEFINE_PER_CPU(struct rcu_data, rcu_preempt_data);
static struct rcu_state *rcu_state = &rcu_preempt_state;
static void rcu_read_unlock_special(struct task_struct *t);
static int rcu_preempted_readers_exp(struct rcu_node *rnp);
static void __init rcu_bootup_announce(void)
long rcu_batches_completed_preempt(void)
EXPORT_SYMBOL_GPL(rcu_batches_completed_preempt);
long rcu_batches_completed(void)
EXPORT_SYMBOL_GPL(rcu_batches_completed);
void rcu_force_quiescent_state(void)
EXPORT_SYMBOL_GPL(rcu_force_quiescent_state);
static void rcu_preempt_qs(int cpu)
static void rcu_preempt_note_context_switch(int cpu)
void __rcu_read_lock(void)
EXPORT_SYMBOL_GPL(__rcu_read_lock);
static int rcu_preempt_blocked_readers_cgp(struct rcu_node *rnp)
static void rcu_report_unblock_qs_rnp(struct rcu_node *rnp, unsigned long flags)
__releases(rnp->lock)
static struct list_head *rcu_next_node_entry(struct task_struct *t,
struct rcu_node *rnp)
static noinline void rcu_read_unlock_special(struct task_struct *t)
void __rcu_read_unlock(void)
EXPORT_SYMBOL_GPL(__rcu_read_unlock);
static void rcu_print_detail_task_stall_rnp(struct rcu_node *rnp)
static void rcu_print_detail_task_stall(struct rcu_state *rsp)
static void rcu_print_detail_task_stall(struct rcu_state *rsp)
static void rcu_print_task_stall(struct rcu_node *rnp)
static void rcu_preempt_stall_reset(void)
static void rcu_preempt_check_blocked_tasks(struct rcu_node *rnp)
static int rcu_preempt_offline_tasks(struct rcu_state *rsp,
struct rcu_node *rnp,
struct rcu_data *rdp)
static void rcu_preempt_offline_cpu(int cpu)
static void rcu_preempt_check_callbacks(int cpu)
static void rcu_preempt_process_callbacks(void)
static void rcu_preempt_do_callbacks(void)
void call_rcu(struct rcu_head *head, void (*func)(struct rcu_head *rcu))
EXPORT_SYMBOL_GPL(call_rcu);
void synchronize_rcu(void)
EXPORT_SYMBOL_GPL(synchronize_rcu);
static DECLARE_WAIT_QUEUE_HEAD(sync_rcu_preempt_exp_wq);
static long sync_rcu_preempt_exp_count;
static DEFINE_MUTEX(sync_rcu_preempt_exp_mutex);
static int rcu_preempted_readers_exp(struct rcu_node *rnp)
static int sync_rcu_preempt_exp_done(struct rcu_node *rnp)
static void rcu_report_exp_rnp(struct rcu_state *rsp, struct rcu_node *rnp)
static void
sync_rcu_preempt_exp_init(struct rcu_state *rsp, struct rcu_node *rnp)
void synchronize_rcu_expedited(void)
EXPORT_SYMBOL_GPL(synchronize_rcu_expedited);
static int rcu_preempt_pending(int cpu)
static int rcu_preempt_needs_cpu(int cpu)
void rcu_barrier(void)
EXPORT_SYMBOL_GPL(rcu_barrier);
static void __cpuinit rcu_preempt_init_percpu_data(int cpu)
static void rcu_preempt_send_cbs_to_online(void)
static void __init __rcu_init_preempt(void)
void exit_rcu(void)
static struct rcu_state *rcu_state = &rcu_sched_state;
static void __init rcu_bootup_announce(void)
long rcu_batches_completed(void)
EXPORT_SYMBOL_GPL(rcu_batches_completed);
void rcu_force_quiescent_state(void)
EXPORT_SYMBOL_GPL(rcu_force_quiescent_state);
static void rcu_preempt_note_context_switch(int cpu)
static int rcu_preempt_blocked_readers_cgp(struct rcu_node *rnp)
static void rcu_report_unblock_qs_rnp(struct rcu_node *rnp, unsigned long flags)
static void rcu_print_detail_task_stall(struct rcu_state *rsp)
static void rcu_print_task_stall(struct rcu_node *rnp)
static void rcu_preempt_stall_reset(void)
static void rcu_preempt_check_blocked_tasks(struct rcu_node *rnp)
static int rcu_preempt_offline_tasks(struct rcu_state *rsp,
struct rcu_node *rnp,
struct rcu_data *rdp)
static void rcu_preempt_offline_cpu(int cpu)
static void rcu_preempt_check_callbacks(int cpu)
static void rcu_preempt_process_callbacks(void)
void synchronize_rcu_expedited(void)
EXPORT_SYMBOL_GPL(synchronize_rcu_expedited);
static void rcu_report_exp_rnp(struct rcu_state *rsp, struct rcu_node *rnp)
static int rcu_preempt_pending(int cpu)
static int rcu_preempt_needs_cpu(int cpu)
void rcu_barrier(void)
EXPORT_SYMBOL_GPL(rcu_barrier);
static void __cpuinit rcu_preempt_init_percpu_data(int cpu)
static void rcu_preempt_send_cbs_to_online(void)
static void __init __rcu_init_preempt(void)
static void rcu_initiate_boost_trace(struct rcu_node *rnp)
static void rcu_initiate_boost_trace(struct rcu_node *rnp)
static int rcu_boost(struct rcu_node *rnp)
static void rcu_boost_kthread_timer(unsigned long arg)
static int rcu_boost_kthread(void *arg)
static void rcu_initiate_boost(struct rcu_node *rnp, unsigned long flags)
static void invoke_rcu_callbacks_kthread(void)
static void rcu_boost_kthread_setaffinity(struct rcu_node *rnp,
cpumask_var_t cm)
#define RCU_BOOST_DELAY_JIFFIES DIV_ROUND_UP(CONFIG_RCU_BOOST_DELAY * HZ, 1000)
static void rcu_preempt_boost_start_gp(struct rcu_node *rnp)
static int __cpuinit rcu_spawn_one_boost_kthread(struct rcu_state *rsp,
struct rcu_node *rnp,
int rnp_index)
static void rcu_stop_cpu_kthread(int cpu)
static void rcu_kthread_do_work(void)
static void invoke_rcu_node_kthread(struct rcu_node *rnp)
static void rcu_cpu_kthread_setrt(int cpu, int to_rt)
static void rcu_cpu_kthread_timer(unsigned long arg)
static void rcu_yield(void (*f)(unsigned long), unsigned long arg)
static int rcu_cpu_kthread_should_stop(int cpu)
static int rcu_cpu_kthread(void *arg)
static int __cpuinit rcu_spawn_one_cpu_kthread(int cpu)
static int rcu_node_kthread(void *arg)
static void rcu_node_kthread_setaffinity(struct rcu_node *rnp, int outgoingcpu)
static int __cpuinit rcu_spawn_one_node_kthread(struct rcu_state *rsp,
struct rcu_node *rnp)
static int __init rcu_spawn_kthreads(void)
early_initcall(rcu_spawn_kthreads);
static void __cpuinit rcu_prepare_kthreads(int cpu)
static void rcu_initiate_boost(struct rcu_node *rnp, unsigned long flags)
static void invoke_rcu_callbacks_kthread(void)
static void rcu_preempt_boost_start_gp(struct rcu_node *rnp)
static void rcu_stop_cpu_kthread(int cpu)
static void rcu_node_kthread_setaffinity(struct rcu_node *rnp, int outgoingcpu)
static void rcu_cpu_kthread_setrt(int cpu, int to_rt)
static int __init rcu_scheduler_really_started(void)
early_initcall(rcu_scheduler_really_started);
static void __cpuinit rcu_prepare_kthreads(int cpu)
void synchronize_sched_expedited(void)
EXPORT_SYMBOL_GPL(synchronize_sched_expedited);
static atomic_t sync_sched_expedited_started = ATOMIC_INIT(0);
static atomic_t sync_sched_expedited_done = ATOMIC_INIT(0);
static int synchronize_sched_expedited_cpu_stop(void *data)
void synchronize_sched_expedited(void)
EXPORT_SYMBOL_GPL(synchronize_sched_expedited);
#if !defined(CONFIG_RCU_FAST_NO_HZ)
int rcu_needs_cpu(int cpu)
static void rcu_needs_cpu_flush(void)
#define RCU_NEEDS_CPU_FLUSHES 5
static DEFINE_PER_CPU(int, rcu_dyntick_drain);
static DEFINE_PER_CPU(unsigned long, rcu_dyntick_holdoff);
int rcu_needs_cpu(int cpu)
static void rcu_needs_cpu_flush(void)
