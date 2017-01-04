enum cache_type ;
static int cache_seq_show(struct seq_file *file, void *iter)
static int cache_debugfs_open(struct inode *inode, struct file *file)
static const struct file_operations cache_debugfs_fops = ;
static int __init cache_debugfs_init(void)
module_init(cache_debugfs_init);
MODULE_LICENSE("GPL v2");
