struct dentry *arch_debugfs_dir;
EXPORT_SYMBOL(arch_debugfs_dir);
struct setup_data_node ;
static ssize_t setup_data_read(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static int setup_data_open(struct inode *inode, struct file *file)
static const struct file_operations fops_setup_data = ;
static int __init
create_setup_data_node(struct dentry *parent, int no,
struct setup_data_node *node)
static int __init create_setup_data_nodes(struct dentry *parent)
static struct debugfs_blob_wrapper boot_params_blob = ;
static int __init boot_params_kdebugfs_init(void)
static int __init arch_kdebugfs_init(void)
arch_initcall(arch_kdebugfs_init);
