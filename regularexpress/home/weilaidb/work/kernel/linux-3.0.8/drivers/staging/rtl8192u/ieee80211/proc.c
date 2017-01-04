extern struct list_head crypto_alg_list;
extern struct rw_semaphore crypto_alg_sem;
static void *c_start(struct seq_file *m, loff_t *pos)
static void *c_next(struct seq_file *m, void *p, loff_t *pos)
static void c_stop(struct seq_file *m, void *p)
static int c_show(struct seq_file *m, void *p)
static struct seq_operations crypto_seq_ops = ;
static int crypto_info_open(struct inode *inode, struct file *file)
static struct file_operations proc_crypto_ops = ;
void __init crypto_init_proc(void)
