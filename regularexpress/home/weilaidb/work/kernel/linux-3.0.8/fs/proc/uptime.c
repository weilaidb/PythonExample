static int uptime_proc_show(struct seq_file *m, void *v)
static int uptime_proc_open(struct inode *inode, struct file *file)
static const struct file_operations uptime_proc_fops = ;
static int __init proc_uptime_init(void)
module_init(proc_uptime_init);
