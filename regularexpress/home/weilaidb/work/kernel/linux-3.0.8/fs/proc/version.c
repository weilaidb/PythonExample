static int version_proc_show(struct seq_file *m, void *v)
static int version_proc_open(struct inode *inode, struct file *file)
static const struct file_operations version_proc_fops = ;
static int __init proc_version_init(void)
module_init(proc_version_init);
