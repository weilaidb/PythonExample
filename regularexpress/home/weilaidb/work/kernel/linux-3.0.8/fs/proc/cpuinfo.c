extern const struct seq_operations cpuinfo_op;
static int cpuinfo_open(struct inode *inode, struct file *file)
static const struct file_operations proc_cpuinfo_operations = ;
static int __init proc_cpuinfo_init(void)
module_init(proc_cpuinfo_init);
