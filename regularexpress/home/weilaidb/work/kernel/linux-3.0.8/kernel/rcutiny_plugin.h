#define RCU_TRACE(stmt)	stmt
#define RCU_TRACE(stmt)
struct rcu_ctrlblk ;
static struct rcu_ctrlblk rcu_sched_ctrlblk = ;
static struct rcu_ctrlblk rcu_bh_ctrlblk = ;
int rcu_scheduler_active __read_mostly;
EXPORT_SYMBOL_GPL(rcu_scheduler_active);
struct rcu_preempt_ctrlblk ;
static struct rcu_preempt_ctrlblk rcu_preempt_ctrlblk = ;
static int rcu_preempted_readers_exp(void);
static void rcu_report_exp_done(void);
static int rcu_cpu_blocking_cur_gp(void)
static int rcu_preempt_running_reader(void)
static int rcu_preempt_blocked_readers_any(void)
static int rcu_preempt_blocked_readers_cgp(void)
static int rcu_preempt_needs_another_gp(void)
static int rcu_preempt_gp_in_progress(void)
static struct list_head *rcu_next_node_entry(struct task_struct *t)
static void rcu_initiate_boost_trace(void);
static void show_tiny_preempt_stats(struct seq_file *m)
static int rcu_boost(void)
static int rcu_initiate_boost(void)
#define RCU_BOOST_DELAY_JIFFIES DIV_ROUND_UP(CONFIG_RCU_BOOST_DELAY * HZ, 1000)
static void rcu_preempt_boost_start_gp(void)
static int rcu_boost(void)
static int rcu_initiate_boost(void)
static void rcu_preempt_boost_start_gp(void)
static void rcu_preempt_cpu_qs(void)
static void rcu_preempt_start_gp(void)
void rcu_preempt_note_context_switch(void)
void __rcu_read_lock(void)
EXPORT_SYMBOL_GPL(__rcu_read_lock);
static void rcu_read_unlock_special(struct task_struct *t)
void __rcu_read_unlock(void)
EXPORT_SYMBOL_GPL(__rcu_read_unlock);
static void rcu_preempt_check_callbacks(void)
static void rcu_preempt_remove_callbacks(struct rcu_ctrlblk *rcp)
static void rcu_preempt_process_callbacks(void)
void call_rcu(struct rcu_head *head, void (*func)(struct rcu_head *rcu))
EXPORT_SYMBOL_GPL(call_rcu);
void rcu_barrier(void)
EXPORT_SYMBOL_GPL(rcu_barrier);
void synchronize_rcu(void)
EXPORT_SYMBOL_GPL(synchronize_rcu);
static DECLARE_WAIT_QUEUE_HEAD(sync_rcu_preempt_exp_wq);
static unsigned long sync_rcu_preempt_exp_count;
static DEFINE_MUTEX(sync_rcu_preempt_exp_mutex);
static int rcu_preempted_readers_exp(void)
static void rcu_report_exp_done(void)
void synchronize_rcu_expedited(void)
EXPORT_SYMBOL_GPL(synchronize_rcu_expedited);
int rcu_preempt_needs_cpu(void)
void exit_rcu(void)
static void show_tiny_preempt_stats(struct seq_file *m)
static int rcu_boost(void)
static void rcu_preempt_check_callbacks(void)
static void rcu_preempt_remove_callbacks(struct rcu_ctrlblk *rcp)
static void rcu_preempt_process_callbacks(void)
void __init rcu_scheduler_starting(void)
#define RCU_BOOST_PRIO CONFIG_RCU_BOOST_PRIO
#define RCU_BOOST_PRIO 1
static void rcu_initiate_boost_trace(void)
static void rcu_trace_sub_qlen(struct rcu_ctrlblk *rcp, int n)
static int show_tiny_stats(struct seq_file *m, void *unused)
static int show_tiny_stats_open(struct inode *inode, struct file *file)
static const struct file_operations show_tiny_stats_fops = ;
static struct dentry *rcudir;
static int __init rcutiny_trace_init(void)
static void __exit rcutiny_trace_cleanup(void)
module_init(rcutiny_trace_init);
module_exit(rcutiny_trace_cleanup);
MODULE_AUTHOR("Paul E. McKenney");
MODULE_DESCRIPTION("Read-Copy Update tracing for tiny implementation");
MODULE_LICENSE("GPL");
