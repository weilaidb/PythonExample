static int valid_policy = 1;
#define TMPBUFLEN 12
static ssize_t ima_show_htable_value(char __user *buf, size_t count,
loff_t *ppos, atomic_long_t *val)
static ssize_t ima_show_htable_violations(struct file *filp,
char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations ima_htable_violations_ops = ;
static ssize_t ima_show_measurements_count(struct file *filp,
char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations ima_measurements_count_ops = ;
static void *ima_measurements_start(struct seq_file *m, loff_t *pos)
static void *ima_measurements_next(struct seq_file *m, void *v, loff_t *pos)
static void ima_measurements_stop(struct seq_file *m, void *v)
static void ima_putc(struct seq_file *m, void *data, int datalen)
static int ima_measurements_show(struct seq_file *m, void *v)
static const struct seq_operations ima_measurments_seqops = ;
static int ima_measurements_open(struct inode *inode, struct file *file)
static const struct file_operations ima_measurements_ops = ;
static void ima_print_digest(struct seq_file *m, u8 *digest)
void ima_template_show(struct seq_file *m, void *e, enum ima_show_type show)
static int ima_ascii_measurements_show(struct seq_file *m, void *v)
static const struct seq_operations ima_ascii_measurements_seqops = ;
static int ima_ascii_measurements_open(struct inode *inode, struct file *file)
static const struct file_operations ima_ascii_measurements_ops = ;
static ssize_t ima_write_policy(struct file *file, const char __user *buf,
size_t datalen, loff_t *ppos)
static struct dentry *ima_dir;
static struct dentry *binary_runtime_measurements;
static struct dentry *ascii_runtime_measurements;
static struct dentry *runtime_measurements_count;
static struct dentry *violations;
static struct dentry *ima_policy;
static atomic_t policy_opencount = ATOMIC_INIT(1);
int ima_open_policy(struct inode * inode, struct file * filp)
static int ima_release_policy(struct inode *inode, struct file *file)
static const struct file_operations ima_measure_policy_ops = ;
int __init ima_fs_init(void)
void __exit ima_fs_cleanup(void)
