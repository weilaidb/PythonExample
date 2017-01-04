static struct vfsmount *mount;
static int mount_count;
static ssize_t default_read_file(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t default_write_file(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static int default_open(struct inode *inode, struct file *file)
static const struct file_operations default_file_ops = ;
static struct inode *get_inode(struct super_block *sb, int mode, dev_t dev)
static int mknod(struct inode *dir, struct dentry *dentry,
int mode, dev_t dev)
static int mkdir(struct inode *dir, struct dentry *dentry, int mode)
static int create(struct inode *dir, struct dentry *dentry, int mode)
static inline int positive(struct dentry *dentry)
static int fill_super(struct super_block *sb, void *data, int silent)
static struct dentry *get_sb(struct file_system_type *fs_type,
int flags, const char *dev_name,
void *data)
static struct file_system_type fs_type = ;
static int create_by_name(const char *name, mode_t mode,
struct dentry *parent,
struct dentry **dentry)
struct dentry *securityfs_create_file(const char *name, mode_t mode,
struct dentry *parent, void *data,
const struct file_operations *fops)
EXPORT_SYMBOL_GPL(securityfs_create_file);
struct dentry *securityfs_create_dir(const char *name, struct dentry *parent)
EXPORT_SYMBOL_GPL(securityfs_create_dir);
void securityfs_remove(struct dentry *dentry)
EXPORT_SYMBOL_GPL(securityfs_remove);
static struct kobject *security_kobj;
static int __init securityfs_init(void)
core_initcall(securityfs_init);
MODULE_LICENSE("GPL");
