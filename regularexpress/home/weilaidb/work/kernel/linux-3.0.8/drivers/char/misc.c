static LIST_HEAD(misc_list);
static DEFINE_MUTEX(misc_mtx);
#define DYNAMIC_MINORS 64
static DECLARE_BITMAP(misc_minors, DYNAMIC_MINORS);
static void *misc_seq_start(struct seq_file *seq, loff_t *pos)
static void *misc_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void misc_seq_stop(struct seq_file *seq, void *v)
static int misc_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations misc_seq_ops = ;
static int misc_seq_open(struct inode *inode, struct file *file)
static const struct file_operations misc_proc_fops = ;
static int misc_open(struct inode * inode, struct file * file)
static struct class *misc_class;
static const struct file_operations misc_fops = ;
int misc_register(struct miscdevice * misc)
int misc_deregister(struct miscdevice *misc)
EXPORT_SYMBOL(misc_register);
EXPORT_SYMBOL(misc_deregister);
static char *misc_devnode(struct device *dev, mode_t *mode)
static int __init misc_init(void)
subsys_initcall(misc_init);
