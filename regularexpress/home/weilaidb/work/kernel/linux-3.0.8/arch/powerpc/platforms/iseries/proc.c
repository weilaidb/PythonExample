static int __init iseries_proc_create(void)
core_initcall(iseries_proc_create);
static unsigned long startTitan = 0;
static unsigned long startTb = 0;
static int proc_titantod_show(struct seq_file *m, void *v)
static int proc_titantod_open(struct inode *inode, struct file *file)
static const struct file_operations proc_titantod_operations = ;
static int __init iseries_proc_init(void)
__initcall(iseries_proc_init);
