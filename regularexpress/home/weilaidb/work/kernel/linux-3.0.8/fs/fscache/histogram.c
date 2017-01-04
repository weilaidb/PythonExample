#define FSCACHE_DEBUG_LEVEL THREAD
atomic_t fscache_obj_instantiate_histogram[HZ];
atomic_t fscache_objs_histogram[HZ];
atomic_t fscache_ops_histogram[HZ];
atomic_t fscache_retrieval_delay_histogram[HZ];
atomic_t fscache_retrieval_histogram[HZ];
static int fscache_histogram_show(struct seq_file *m, void *v)
static void *fscache_histogram_start(struct seq_file *m, loff_t *_pos)
static void *fscache_histogram_next(struct seq_file *m, void *v, loff_t *pos)
static void fscache_histogram_stop(struct seq_file *m, void *v)
static const struct seq_operations fscache_histogram_ops = ;
static int fscache_histogram_open(struct inode *inode, struct file *file)
const struct file_operations fscache_histogram_fops = ;
