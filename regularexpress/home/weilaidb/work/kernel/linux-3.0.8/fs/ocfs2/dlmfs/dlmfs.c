#define MLOG_MASK_PREFIX ML_DLMFS
static const struct super_operations dlmfs_ops;
static const struct file_operations dlmfs_file_operations;
static const struct inode_operations dlmfs_dir_inode_operations;
static const struct inode_operations dlmfs_root_inode_operations;
static const struct inode_operations dlmfs_file_inode_operations;
static struct kmem_cache *dlmfs_inode_cache;
struct workqueue_struct *user_dlm_worker;
#define DLMFS_CAPABILITIES "bast stackglue"
static int param_set_dlmfs_capabilities(const char *val,
struct kernel_param *kp)
static int param_get_dlmfs_capabilities(char *buffer,
struct kernel_param *kp)
module_param_call(capabilities, param_set_dlmfs_capabilities,
param_get_dlmfs_capabilities, NULL, 0444);
MODULE_PARM_DESC(capabilities, DLMFS_CAPABILITIES);
static int dlmfs_decode_open_flags(int open_flags,
int *level,
int *flags)
static int dlmfs_file_open(struct inode *inode,
struct file *file)
static int dlmfs_file_release(struct inode *inode,
struct file *file)
static int dlmfs_file_setattr(struct dentry *dentry, struct iattr *attr)
static unsigned int dlmfs_file_poll(struct file *file, poll_table *wait)
static ssize_t dlmfs_file_read(struct file *filp,
char __user *buf,
size_t count,
loff_t *ppos)
static ssize_t dlmfs_file_write(struct file *filp,
const char __user *buf,
size_t count,
loff_t *ppos)
static void dlmfs_init_once(void *foo)
static struct inode *dlmfs_alloc_inode(struct super_block *sb)
static void dlmfs_i_callback(struct rcu_head *head)
static void dlmfs_destroy_inode(struct inode *inode)
static void dlmfs_evict_inode(struct inode *inode)
static struct backing_dev_info dlmfs_backing_dev_info = ;
static struct inode *dlmfs_get_root_inode(struct super_block *sb)
static struct inode *dlmfs_get_inode(struct inode *parent,
struct dentry *dentry,
int mode)
static int dlmfs_mkdir(struct inode * dir,
struct dentry * dentry,
int mode)
static int dlmfs_create(struct inode *dir,
struct dentry *dentry,
int mode,
struct nameidata *nd)
static int dlmfs_unlink(struct inode *dir,
struct dentry *dentry)
static int dlmfs_fill_super(struct super_block * sb,
void * data,
int silent)
static const struct file_operations dlmfs_file_operations = ;
static const struct inode_operations dlmfs_dir_inode_operations = ;
static const struct inode_operations dlmfs_root_inode_operations = ;
static const struct super_operations dlmfs_ops = ;
static const struct inode_operations dlmfs_file_inode_operations = ;
static struct dentry *dlmfs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type dlmfs_fs_type = ;
static int __init init_dlmfs_fs(void)
static void __exit exit_dlmfs_fs(void)
MODULE_AUTHOR("Oracle");
MODULE_LICENSE("GPL");
module_init(init_dlmfs_fs)
module_exit(exit_dlmfs_fs)
