static void *l_next(struct seq_file *m, void *v, loff_t *pos)
static void *l_start(struct seq_file *m, loff_t *pos)
static void l_stop(struct seq_file *m, void *v)
static void print_name(struct seq_file *m, struct lock_class *class)
static int l_show(struct seq_file *m, void *v)
static const struct seq_operations lockdep_ops = ;
static int lockdep_open(struct inode *inode, struct file *file)
static const struct file_operations proc_lockdep_operations = ;
static void *lc_start(struct seq_file *m, loff_t *pos)
static void *lc_next(struct seq_file *m, void *v, loff_t *pos)
static void lc_stop(struct seq_file *m, void *v)
static int lc_show(struct seq_file *m, void *v)
static const struct seq_operations lockdep_chains_ops = ;
static int lockdep_chains_open(struct inode *inode, struct file *file)
static const struct file_operations proc_lockdep_chains_operations = ;
static void lockdep_stats_debug_show(struct seq_file *m)
static int lockdep_stats_show(struct seq_file *m, void *v)
static int lockdep_stats_open(struct inode *inode, struct file *file)
static const struct file_operations proc_lockdep_stats_operations = ;
struct lock_stat_data ;
struct lock_stat_seq ;
static int lock_stat_cmp(const void *l, const void *r)
static void seq_line(struct seq_file *m, char c, int offset, int length)
static void snprint_time(char *buf, size_t bufsiz, s64 nr)
static void seq_time(struct seq_file *m, s64 time)
static void seq_lock_time(struct seq_file *m, struct lock_time *lt)
static void seq_stats(struct seq_file *m, struct lock_stat_data *data)
static void seq_header(struct seq_file *m)
static void *ls_start(struct seq_file *m, loff_t *pos)
static void *ls_next(struct seq_file *m, void *v, loff_t *pos)
static void ls_stop(struct seq_file *m, void *v)
static int ls_show(struct seq_file *m, void *v)
static const struct seq_operations lockstat_ops = ;
static int lock_stat_open(struct inode *inode, struct file *file)
static ssize_t lock_stat_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static int lock_stat_release(struct inode *inode, struct file *file)
static const struct file_operations proc_lock_stat_operations = ;
static int __init lockdep_proc_init(void)
__initcall(lockdep_proc_init);
