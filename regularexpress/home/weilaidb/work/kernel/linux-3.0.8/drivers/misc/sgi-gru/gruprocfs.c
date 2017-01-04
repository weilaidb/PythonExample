#define printstat(s, f)		printstat_val(s, &gru_stats.f, #f)
static void printstat_val(struct seq_file *s, atomic_long_t *v, char *id)
static int statistics_show(struct seq_file *s, void *p)
static ssize_t statistics_write(struct file *file, const char __user *userbuf,
size_t count, loff_t *data)
static int mcs_statistics_show(struct seq_file *s, void *p)
static ssize_t mcs_statistics_write(struct file *file,
const char __user *userbuf, size_t count, loff_t *data)
static int options_show(struct seq_file *s, void *p)
static ssize_t options_write(struct file *file, const char __user *userbuf,
size_t count, loff_t *data)
static int cch_seq_show(struct seq_file *file, void *data)
static int gru_seq_show(struct seq_file *file, void *data)
static void seq_stop(struct seq_file *file, void *data)
static void *seq_start(struct seq_file *file, loff_t *gid)
static void *seq_next(struct seq_file *file, void *data, loff_t *gid)
static const struct seq_operations cch_seq_ops = ;
static const struct seq_operations gru_seq_ops = ;
static int statistics_open(struct inode *inode, struct file *file)
static int mcs_statistics_open(struct inode *inode, struct file *file)
static int options_open(struct inode *inode, struct file *file)
static int cch_open(struct inode *inode, struct file *file)
static int gru_open(struct inode *inode, struct file *file)
static const struct file_operations statistics_fops = ;
static const struct file_operations mcs_statistics_fops = ;
static const struct file_operations options_fops = ;
static const struct file_operations cch_fops = ;
static const struct file_operations gru_fops = ;
static struct proc_entry  proc_files[] = ;
static struct proc_dir_entry *proc_gru __read_mostly;
static int create_proc_file(struct proc_entry *p)
static void delete_proc_files(void)
int gru_proc_init(void)
void gru_proc_exit(void)
