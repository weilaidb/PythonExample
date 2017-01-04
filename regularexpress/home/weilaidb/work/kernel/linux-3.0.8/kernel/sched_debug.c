static DEFINE_SPINLOCK(sched_debug_lock);
#define SEQ_printf(m, x...)			\
do  while (0)
static long long nsec_high(unsigned long long nsec)
static unsigned long nsec_low(unsigned long long nsec)
#define SPLIT_NS(x) nsec_high(x), nsec_low(x)
static void print_cfs_group_stats(struct seq_file *m, int cpu, struct task_group *tg)
static char group_path[PATH_MAX];
static char *task_group_path(struct task_group *tg)
static void
print_task(struct seq_file *m, struct rq *rq, struct task_struct *p)
static void print_rq(struct seq_file *m, struct rq *rq, int rq_cpu)
void print_cfs_rq(struct seq_file *m, int cpu, struct cfs_rq *cfs_rq)
void print_rt_rq(struct seq_file *m, int cpu, struct rt_rq *rt_rq)
extern __read_mostly int sched_clock_running;
static void print_cpu(struct seq_file *m, int cpu)
static const char *sched_tunable_scaling_names[] = ;
static int sched_debug_show(struct seq_file *m, void *v)
static void sysrq_sched_debug_show(void)
static int sched_debug_open(struct inode *inode, struct file *filp)
static const struct file_operations sched_debug_fops = ;
static int __init init_sched_debug_procfs(void)
__initcall(init_sched_debug_procfs);
void proc_sched_show_task(struct task_struct *p, struct seq_file *m)
void proc_sched_set_task(struct task_struct *p)
