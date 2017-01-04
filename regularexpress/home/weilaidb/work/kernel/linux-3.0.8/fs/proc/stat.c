#define arch_irq_stat_cpu(cpu) 0
#define arch_irq_stat() 0
#define arch_idle_time(cpu) 0
static int show_stat(struct seq_file *p, void *v)
static int stat_open(struct inode *inode, struct file *file)
static const struct file_operations proc_stat_operations = ;
static int __init proc_stat_init(void)
module_init(proc_stat_init);
