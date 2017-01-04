static struct dentry *rootdir;
static struct dentry *tunnels;
struct l2tp_dfs_seq_data ;
static void l2tp_dfs_next_tunnel(struct l2tp_dfs_seq_data *pd)
static void l2tp_dfs_next_session(struct l2tp_dfs_seq_data *pd)
static void *l2tp_dfs_seq_start(struct seq_file *m, loff_t *offs)
static void *l2tp_dfs_seq_next(struct seq_file *m, void *v, loff_t *pos)
static void l2tp_dfs_seq_stop(struct seq_file *p, void *v)
static void l2tp_dfs_seq_tunnel_show(struct seq_file *m, void *v)
static void l2tp_dfs_seq_session_show(struct seq_file *m, void *v)
static int l2tp_dfs_seq_show(struct seq_file *m, void *v)
static const struct seq_operations l2tp_dfs_seq_ops = ;
static int l2tp_dfs_seq_open(struct inode *inode, struct file *file)
static int l2tp_dfs_seq_release(struct inode *inode, struct file *file)
static const struct file_operations l2tp_dfs_fops = ;
static int __init l2tp_debugfs_init(void)
static void __exit l2tp_debugfs_exit(void)
module_init(l2tp_debugfs_init);
module_exit(l2tp_debugfs_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("James Chapman <jchapman@katalix.com>");
MODULE_DESCRIPTION("L2TP debugfs driver");
MODULE_VERSION("1.0");
