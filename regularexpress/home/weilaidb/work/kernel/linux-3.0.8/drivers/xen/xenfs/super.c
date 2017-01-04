MODULE_DESCRIPTION("Xen filesystem");
MODULE_LICENSE("GPL");
static struct inode *xenfs_make_inode(struct super_block *sb, int mode)
static struct dentry *xenfs_create_file(struct super_block *sb,
struct dentry *parent,
const char *name,
const struct file_operations *fops,
void *data,
int mode)
static ssize_t capabilities_read(struct file *file, char __user *buf,
size_t size, loff_t *off)
static const struct file_operations capabilities_file_ops = ;
static int xenfs_fill_super(struct super_block *sb, void *data, int silent)
static struct dentry *xenfs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name,
void *data)
static struct file_system_type xenfs_type = ;
static int __init xenfs_init(void)
static void __exit xenfs_exit(void)
module_init(xenfs_init);
module_exit(xenfs_exit);
