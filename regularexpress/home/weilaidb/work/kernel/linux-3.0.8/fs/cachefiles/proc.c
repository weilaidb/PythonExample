atomic_t cachefiles_lookup_histogram[HZ];
atomic_t cachefiles_mkdir_histogram[HZ];
atomic_t cachefiles_create_histogram[HZ];
static int cachefiles_histogram_show(struct seq_file *m, void *v)
static void *cachefiles_histogram_start(struct seq_file *m, loff_t *_pos)
static void *cachefiles_histogram_next(struct seq_file *m, void *v, loff_t *pos)
static void cachefiles_histogram_stop(struct seq_file *m, void *v)
static const struct seq_operations cachefiles_histogram_ops = ;
static int cachefiles_histogram_open(struct inode *inode, struct file *file)
static const struct file_operations cachefiles_histogram_fops = ;
int __init cachefiles_proc_init(void)
void cachefiles_proc_cleanup(void)
