struct musb_register_map ;
static const struct musb_register_map musb_regmap[] = ;
static struct dentry *musb_debugfs_root;
static int musb_regdump_show(struct seq_file *s, void *unused)
static int musb_regdump_open(struct inode *inode, struct file *file)
static int musb_test_mode_show(struct seq_file *s, void *unused)
static const struct file_operations musb_regdump_fops = ;
static int musb_test_mode_open(struct inode *inode, struct file *file)
static ssize_t musb_test_mode_write(struct file *file,
const char __user *ubuf, size_t count, loff_t *ppos)
static const struct file_operations musb_test_mode_fops = ;
int __init musb_init_debugfs(struct musb *musb)
void musb_exit_debugfs(struct musb *musb)
