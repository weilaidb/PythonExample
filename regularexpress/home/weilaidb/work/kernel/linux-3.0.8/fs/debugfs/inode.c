static struct vfsmount *debugfs_mount;
static int debugfs_mount_count;
static bool debugfs_registered;
static struct inode *debugfs_get_inode(struct super_block *sb, int mode, dev_t dev,
void *data, const struct file_operations *fops)
static int debugfs_mknod(struct inode *dir, struct dentry *dentry,
int mode, dev_t dev, void *data,
const struct file_operations *fops)
static int debugfs_mkdir(struct inode *dir, struct dentry *dentry, int mode,
void *data, const struct file_operations *fops)
static int debugfs_link(struct inode *dir, struct dentry *dentry, int mode,
void *data, const struct file_operations *fops)
static int debugfs_create(struct inode *dir, struct dentry *dentry, int mode,
void *data, const struct file_operations *fops)
static inline int debugfs_positive(struct dentry *dentry)
static int debug_fill_super(struct super_block *sb, void *data, int silent)
static struct dentry *debug_mount(struct file_system_type *fs_type,
int flags, const char *dev_name,
void *data)
static struct file_system_type debug_fs_type = ;
static int debugfs_create_by_name(const char *name, mode_t mode,
struct dentry *parent,
struct dentry **dentry,
void *data,
const struct file_operations *fops)
struct dentry *debugfs_create_file(const char *name, mode_t mode,
struct dentry *parent, void *data,
const struct file_operations *fops)
EXPORT_SYMBOL_GPL(debugfs_create_file);
struct dentry *debugfs_create_dir(const char *name, struct dentry *parent)
EXPORT_SYMBOL_GPL(debugfs_create_dir);
struct dentry *debugfs_create_symlink(const char *name, struct dentry *parent,
const char *target)
EXPORT_SYMBOL_GPL(debugfs_create_symlink);
static int __debugfs_remove(struct dentry *dentry, struct dentry *parent)
void debugfs_remove(struct dentry *dentry)
EXPORT_SYMBOL_GPL(debugfs_remove);
void debugfs_remove_recursive(struct dentry *dentry)
EXPORT_SYMBOL_GPL(debugfs_remove_recursive);
struct dentry *debugfs_rename(struct dentry *old_dir, struct dentry *old_dentry,
struct dentry *new_dir, const char *new_name)
EXPORT_SYMBOL_GPL(debugfs_rename);
bool debugfs_initialized(void)
EXPORT_SYMBOL_GPL(debugfs_initialized);
static struct kobject *debug_kobj;
static int __init debugfs_init(void)
core_initcall(debugfs_init);
