static loff_t
proc_bus_zorro_lseek(struct file *file, loff_t off, int whence)
static ssize_t
proc_bus_zorro_read(struct file *file, char __user *buf, size_t nbytes, loff_t *ppos)
static const struct file_operations proc_bus_zorro_operations = ;
static void * zorro_seq_start(struct seq_file *m, loff_t *pos)
static void * zorro_seq_next(struct seq_file *m, void *v, loff_t *pos)
static void zorro_seq_stop(struct seq_file *m, void *v)
static int zorro_seq_show(struct seq_file *m, void *v)
static const struct seq_operations zorro_devices_seq_ops = ;
static int zorro_devices_proc_open(struct inode *inode, struct file *file)
static const struct file_operations zorro_devices_proc_fops = ;
static struct proc_dir_entry *proc_bus_zorro_dir;
static int __init zorro_proc_attach_device(unsigned int slot)
static int __init zorro_proc_init(void)
device_initcall(zorro_proc_init);
