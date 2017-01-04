static DEFINE_SPINLOCK(latency_lock);
#define MAXLR 128
static struct latency_record latency_record[MAXLR];
int latencytop_enabled;
void clear_all_latency_tracing(struct task_struct *p)
static void clear_global_latency_tracing(void)
static void __sched
account_global_scheduler_latency(struct task_struct *tsk, struct latency_record *lat)
static inline void store_stacktrace(struct task_struct *tsk,
struct latency_record *lat)
void __sched
__account_scheduler_latency(struct task_struct *tsk, int usecs, int inter)
static int lstats_show(struct seq_file *m, void *v)
static ssize_t
lstats_write(struct file *file, const char __user *buf, size_t count,
loff_t *offs)
static int lstats_open(struct inode *inode, struct file *filp)
static const struct file_operations lstats_fops = ;
static int __init init_lstats_procfs(void)
device_initcall(init_lstats_procfs);
