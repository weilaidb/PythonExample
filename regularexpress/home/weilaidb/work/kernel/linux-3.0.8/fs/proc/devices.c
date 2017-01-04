static int devinfo_show(struct seq_file *f, void *v)
static void *devinfo_start(struct seq_file *f, loff_t *pos)
static void *devinfo_next(struct seq_file *f, void *v, loff_t *pos)
static void devinfo_stop(struct seq_file *f, void *v)
static const struct seq_operations devinfo_ops = ;
static int devinfo_open(struct inode *inode, struct file *filp)
static const struct file_operations proc_devinfo_operations = ;
static int __init proc_devices_init(void)
module_init(proc_devices_init);
