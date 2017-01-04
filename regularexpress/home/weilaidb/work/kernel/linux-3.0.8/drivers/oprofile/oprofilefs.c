#define OPROFILEFS_MAGIC 0x6f70726f
DEFINE_SPINLOCK(oprofilefs_lock);
static struct inode *oprofilefs_get_inode(struct super_block *sb, int mode)
static const struct super_operations s_ops = ;
ssize_t oprofilefs_str_to_user(char const *str, char __user *buf, size_t count, loff_t *offset)
#define TMPBUFSIZE 50
ssize_t oprofilefs_ulong_to_user(unsigned long val, char __user *buf, size_t count, loff_t *offset)
int oprofilefs_ulong_from_user(unsigned long *val, char const __user *buf, size_t count)
static ssize_t ulong_read_file(struct file *file, char __user *buf, size_t count, loff_t *offset)
static ssize_t ulong_write_file(struct file *file, char const __user *buf, size_t count, loff_t *offset)
static int default_open(struct inode *inode, struct file *filp)
static const struct file_operations ulong_fops = ;
static const struct file_operations ulong_ro_fops = ;
static int __oprofilefs_create_file(struct super_block *sb,
struct dentry *root, char const *name, const struct file_operations *fops,
int perm, void *priv)
int oprofilefs_create_ulong(struct super_block *sb, struct dentry *root,
char const *name, unsigned long *val)
int oprofilefs_create_ro_ulong(struct super_block *sb, struct dentry *root,
char const *name, unsigned long *val)
static ssize_t atomic_read_file(struct file *file, char __user *buf, size_t count, loff_t *offset)
static const struct file_operations atomic_ro_fops = ;
int oprofilefs_create_ro_atomic(struct super_block *sb, struct dentry *root,
char const *name, atomic_t *val)
int oprofilefs_create_file(struct super_block *sb, struct dentry *root,
char const *name, const struct file_operations *fops)
int oprofilefs_create_file_perm(struct super_block *sb, struct dentry *root,
char const *name, const struct file_operations *fops, int perm)
struct dentry *oprofilefs_mkdir(struct super_block *sb,
struct dentry *root, char const *name)
static int oprofilefs_fill_super(struct super_block *sb, void *data, int silent)
static struct dentry *oprofilefs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type oprofilefs_type = ;
int __init oprofilefs_register(void)
void __exit oprofilefs_unregister(void)
