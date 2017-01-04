static struct proc_dir_entry *base;
static int jfs_loglevel_proc_show(struct seq_file *m, void *v)
static int jfs_loglevel_proc_open(struct inode *inode, struct file *file)
static ssize_t jfs_loglevel_proc_write(struct file *file,
const char __user *buffer, size_t count, loff_t *ppos)
static const struct file_operations jfs_loglevel_proc_fops = ;
static struct  Entries[] = ;
#define NPROCENT	ARRAY_SIZE(Entries)
void jfs_proc_init(void)
void jfs_proc_clean(void)
