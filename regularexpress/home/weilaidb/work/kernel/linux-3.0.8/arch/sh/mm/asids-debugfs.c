static int asids_seq_show(struct seq_file *file, void *iter)
static int asids_debugfs_open(struct inode *inode, struct file *file)
static const struct file_operations asids_debugfs_fops = ;
static int __init asids_debugfs_init(void)
module_init(asids_debugfs_init);
MODULE_LICENSE("GPL v2");
