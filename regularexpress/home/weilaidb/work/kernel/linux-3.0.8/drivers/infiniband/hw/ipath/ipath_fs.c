#define IPATHFS_MAGIC 0x726a77
static struct super_block *ipath_super;
static int ipathfs_mknod(struct inode *dir, struct dentry *dentry,
int mode, const struct file_operations *fops,
void *data)
static int create_file(const char *name, mode_t mode,
struct dentry *parent, struct dentry **dentry,
const struct file_operations *fops, void *data)
static ssize_t atomic_stats_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations atomic_stats_ops = ;
static ssize_t atomic_counters_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations atomic_counters_ops = ;
static ssize_t flash_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t flash_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations flash_ops = ;
static int create_device_files(struct super_block *sb,
struct ipath_devdata *dd)
static int remove_file(struct dentry *parent, char *name)
static int remove_device_files(struct super_block *sb,
struct ipath_devdata *dd)
static int ipathfs_fill_super(struct super_block *sb, void *data,
int silent)
static struct dentry *ipathfs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static void ipathfs_kill_super(struct super_block *s)
int ipathfs_add_device(struct ipath_devdata *dd)
int ipathfs_remove_device(struct ipath_devdata *dd)
static struct file_system_type ipathfs_fs_type = ;
int __init ipath_init_ipathfs(void)
void __exit ipath_exit_ipathfs(void)
