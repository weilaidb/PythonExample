#define KMSG_COMPONENT "dasd"
#define PRINTK_HEADER "dasd_proc:"
static struct proc_dir_entry *dasd_proc_root_entry = NULL;
static struct proc_dir_entry *dasd_devices_entry = NULL;
static struct proc_dir_entry *dasd_statistics_entry = NULL;
static char *
dasd_get_user_string(const char __user *user_buf, size_t user_len)
static int
dasd_devices_show(struct seq_file *m, void *v)
static void *dasd_devices_start(struct seq_file *m, loff_t *pos)
static void *dasd_devices_next(struct seq_file *m, void *v, loff_t *pos)
static void dasd_devices_stop(struct seq_file *m, void *v)
static const struct seq_operations dasd_devices_seq_ops = ;
static int dasd_devices_open(struct inode *inode, struct file *file)
static const struct file_operations dasd_devices_file_ops = ;
static void dasd_statistics_array(struct seq_file *m, unsigned int *array, int factor)
static int dasd_stats_proc_show(struct seq_file *m, void *v)
static int dasd_stats_proc_open(struct inode *inode, struct file *file)
static ssize_t dasd_stats_proc_write(struct file *file,
const char __user *user_buf, size_t user_len, loff_t *pos)
static const struct file_operations dasd_stats_proc_fops = ;
int
dasd_proc_init(void)
void
dasd_proc_exit(void)
