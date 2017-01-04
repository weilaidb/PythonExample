enum context ;
enum ser ;
static struct severity  severities[] = ;
static int error_context(struct mce *m)
int mce_severity(struct mce *a, int tolerant, char **msg)
static void *s_start(struct seq_file *f, loff_t *pos)
static void *s_next(struct seq_file *f, void *data, loff_t *pos)
static void s_stop(struct seq_file *f, void *data)
static int s_show(struct seq_file *f, void *data)
static const struct seq_operations severities_seq_ops = ;
static int severities_coverage_open(struct inode *inode, struct file *file)
static ssize_t severities_coverage_write(struct file *file,
const char __user *ubuf,
size_t count, loff_t *ppos)
static const struct file_operations severities_coverage_fops = ;
static int __init severities_debugfs_init(void)
late_initcall(severities_debugfs_init);
