static int cmdline_proc_show(struct seq_file *m, void *v)
static int cmdline_proc_open(struct inode *inode, struct file *file)
static const struct file_operations cmdline_proc_fops = ;
static int __init proc_cmdline_init(void)
module_init(proc_cmdline_init);
