typedef void (*print_fn_t)(struct seq_file *m, unsigned int *classes);
DECLARE_PER_CPU(struct hrtimer_cpu_base, hrtimer_bases);
#define SEQ_printf(m, x...)			\
do  while (0)
static void print_name_offset(struct seq_file *m, void *sym)
static void
print_timer(struct seq_file *m, struct hrtimer *taddr, struct hrtimer *timer,
int idx, u64 now)
static void
print_active_timers(struct seq_file *m, struct hrtimer_clock_base *base,
u64 now)
static void
print_base(struct seq_file *m, struct hrtimer_clock_base *base, u64 now)
static void print_cpu(struct seq_file *m, int cpu, u64 now)
static void
print_tickdevice(struct seq_file *m, struct tick_device *td, int cpu)
static void timer_list_show_tickdevices(struct seq_file *m)
static void timer_list_show_tickdevices(struct seq_file *m)
static int timer_list_show(struct seq_file *m, void *v)
void sysrq_timer_list_show(void)
static int timer_list_open(struct inode *inode, struct file *filp)
static const struct file_operations timer_list_fops = ;
static int __init init_timer_list_procfs(void)
__initcall(init_timer_list_procfs);
