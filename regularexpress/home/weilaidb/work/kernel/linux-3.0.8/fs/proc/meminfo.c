void __attribute__((weak)) arch_report_meminfo(struct seq_file *m)
static int meminfo_proc_show(struct seq_file *m, void *v)
static int meminfo_proc_open(struct inode *inode, struct file *file)
static const struct file_operations meminfo_proc_fops = ;
static int __init proc_meminfo_init(void)
module_init(proc_meminfo_init);
