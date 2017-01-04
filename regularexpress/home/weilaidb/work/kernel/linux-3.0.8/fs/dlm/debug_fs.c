#define DLM_DEBUG_BUF_LEN 4096
static char debug_buf[DLM_DEBUG_BUF_LEN];
static struct mutex debug_buf_lock;
static struct dentry *dlm_root;
static char *print_lockmode(int mode)
static int print_format1_lock(struct seq_file *s, struct dlm_lkb *lkb,
struct dlm_rsb *res)
static int print_format1(struct dlm_rsb *res, struct seq_file *s)
static int print_format2_lock(struct seq_file *s, struct dlm_lkb *lkb,
struct dlm_rsb *r)
static int print_format2(struct dlm_rsb *r, struct seq_file *s)
static int print_format3_lock(struct seq_file *s, struct dlm_lkb *lkb,
int rsb_lookup)
static int print_format3(struct dlm_rsb *r, struct seq_file *s)
struct rsbtbl_iter ;
static int table_seq_show(struct seq_file *seq, void *iter_ptr)
static const struct seq_operations format1_seq_ops;
static const struct seq_operations format2_seq_ops;
static const struct seq_operations format3_seq_ops;
static void *table_seq_start(struct seq_file *seq, loff_t *pos)
static void *table_seq_next(struct seq_file *seq, void *iter_ptr, loff_t *pos)
static void table_seq_stop(struct seq_file *seq, void *iter_ptr)
static const struct seq_operations format1_seq_ops = ;
static const struct seq_operations format2_seq_ops = ;
static const struct seq_operations format3_seq_ops = ;
static const struct file_operations format1_fops;
static const struct file_operations format2_fops;
static const struct file_operations format3_fops;
static int table_open(struct inode *inode, struct file *file)
static const struct file_operations format1_fops = ;
static const struct file_operations format2_fops = ;
static const struct file_operations format3_fops = ;
static int waiters_open(struct inode *inode, struct file *file)
static ssize_t waiters_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static const struct file_operations waiters_fops = ;
void dlm_delete_debug_file(struct dlm_ls *ls)
int dlm_create_debug_file(struct dlm_ls *ls)
int __init dlm_register_debugfs(void)
void dlm_unregister_debugfs(void)
