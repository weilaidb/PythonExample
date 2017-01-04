#define STACK_TRACE_ENTRIES 500
static unsigned long stack_dump_trace[STACK_TRACE_ENTRIES+1] =
;
static unsigned stack_dump_index[STACK_TRACE_ENTRIES];
static struct stack_trace max_stack_trace = ;
static unsigned long max_stack_size;
static arch_spinlock_t max_stack_lock =
(arch_spinlock_t)__ARCH_SPIN_LOCK_UNLOCKED;
static int stack_trace_disabled __read_mostly;
static DEFINE_PER_CPU(int, trace_active);
static DEFINE_MUTEX(stack_sysctl_mutex);
int stack_tracer_enabled;
static int last_stack_tracer_enabled;
static inline void check_stack(void)
static void
stack_trace_call(unsigned long ip, unsigned long parent_ip)
static struct ftrace_ops trace_ops __read_mostly =
;
static ssize_t
stack_max_size_read(struct file *filp, char __user *ubuf,
size_t count, loff_t *ppos)
static ssize_t
stack_max_size_write(struct file *filp, const char __user *ubuf,
size_t count, loff_t *ppos)
static const struct file_operations stack_max_size_fops = ;
static void *
__next(struct seq_file *m, loff_t *pos)
static void *
t_next(struct seq_file *m, void *v, loff_t *pos)
static void *t_start(struct seq_file *m, loff_t *pos)
static void t_stop(struct seq_file *m, void *p)
static int trace_lookup_stack(struct seq_file *m, long i)
static void print_disabled(struct seq_file *m)
static int t_show(struct seq_file *m, void *v)
static const struct seq_operations stack_trace_seq_ops = ;
static int stack_trace_open(struct inode *inode, struct file *file)
static const struct file_operations stack_trace_fops = ;
int
stack_trace_sysctl(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp,
loff_t *ppos)
static __init int enable_stacktrace(char *str)
__setup("stacktrace", enable_stacktrace);
static __init int stack_trace_init(void)
device_initcall(stack_trace_init);
