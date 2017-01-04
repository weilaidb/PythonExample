struct cpu_workqueue_stats ;
struct workqueue_global_stats ;
static DEFINE_PER_CPU(struct workqueue_global_stats, all_workqueue_stat);
#define workqueue_cpu_stat(cpu) (&per_cpu(all_workqueue_stat, cpu))
static void cpu_workqueue_stat_free(struct kref *kref)
static void
probe_workqueue_insertion(void *ignore,
struct task_struct *wq_thread,
struct work_struct *work)
static void
probe_workqueue_execution(void *ignore,
struct task_struct *wq_thread,
struct work_struct *work)
static void probe_workqueue_creation(void *ignore,
struct task_struct *wq_thread, int cpu)
static void
probe_workqueue_destruction(void *ignore, struct task_struct *wq_thread)
static struct cpu_workqueue_stats *workqueue_stat_start_cpu(int cpu)
static void *workqueue_stat_start(struct tracer_stat *trace)
static void *workqueue_stat_next(void *prev, int idx)
static int workqueue_stat_show(struct seq_file *s, void *p)
static void workqueue_stat_release(void *stat)
static int workqueue_stat_headers(struct seq_file *s)
struct tracer_stat workqueue_stats __read_mostly = ;
int __init stat_workqueue_init(void)
fs_initcall(stat_workqueue_init);
int __init trace_workqueue_early_init(void)
early_initcall(trace_workqueue_early_init);
