struct file_operations;
static struct dentry *ipoib_root;
static void format_gid(union ib_gid *gid, char *buf)
static void *ipoib_mcg_seq_start(struct seq_file *file, loff_t *pos)
static void *ipoib_mcg_seq_next(struct seq_file *file, void *iter_ptr,
loff_t *pos)
static void ipoib_mcg_seq_stop(struct seq_file *file, void *iter_ptr)
static int ipoib_mcg_seq_show(struct seq_file *file, void *iter_ptr)
static const struct seq_operations ipoib_mcg_seq_ops = ;
static int ipoib_mcg_open(struct inode *inode, struct file *file)
static const struct file_operations ipoib_mcg_fops = ;
static void *ipoib_path_seq_start(struct seq_file *file, loff_t *pos)
static void *ipoib_path_seq_next(struct seq_file *file, void *iter_ptr,
loff_t *pos)
static void ipoib_path_seq_stop(struct seq_file *file, void *iter_ptr)
static int ipoib_path_seq_show(struct seq_file *file, void *iter_ptr)
static const struct seq_operations ipoib_path_seq_ops = ;
static int ipoib_path_open(struct inode *inode, struct file *file)
static const struct file_operations ipoib_path_fops = ;
void ipoib_create_debug_files(struct net_device *dev)
void ipoib_delete_debug_files(struct net_device *dev)
int ipoib_register_debugfs(void)
void ipoib_unregister_debugfs(void)
