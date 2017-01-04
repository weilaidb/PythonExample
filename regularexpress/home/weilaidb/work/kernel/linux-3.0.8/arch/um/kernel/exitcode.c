int uml_exitcode = 0;
static int exitcode_proc_show(struct seq_file *m, void *v)
static int exitcode_proc_open(struct inode *inode, struct file *file)
static ssize_t exitcode_proc_write(struct file *file,
const char __user *buffer, size_t count, loff_t *pos)
static const struct file_operations exitcode_proc_fops = ;
static int make_proc_exitcode(void)
__initcall(make_proc_exitcode);
