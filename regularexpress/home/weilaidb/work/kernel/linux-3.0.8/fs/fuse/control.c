#define FUSE_CTL_SUPER_MAGIC 0x65735543
static struct super_block *fuse_control_sb;
static struct fuse_conn *fuse_ctl_file_conn_get(struct file *file)
static ssize_t fuse_conn_abort_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static ssize_t fuse_conn_waiting_read(struct file *file, char __user *buf,
size_t len, loff_t *ppos)
static ssize_t fuse_conn_limit_read(struct file *file, char __user *buf,
size_t len, loff_t *ppos, unsigned val)
static ssize_t fuse_conn_limit_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos, unsigned *val,
unsigned global_limit)
static ssize_t fuse_conn_max_background_read(struct file *file,
char __user *buf, size_t len,
loff_t *ppos)
static ssize_t fuse_conn_max_background_write(struct file *file,
const char __user *buf,
size_t count, loff_t *ppos)
static ssize_t fuse_conn_congestion_threshold_read(struct file *file,
char __user *buf, size_t len,
loff_t *ppos)
static ssize_t fuse_conn_congestion_threshold_write(struct file *file,
const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations fuse_ctl_abort_ops = ;
static const struct file_operations fuse_ctl_waiting_ops = ;
static const struct file_operations fuse_conn_max_background_ops = ;
static const struct file_operations fuse_conn_congestion_threshold_ops = ;
static struct dentry *fuse_ctl_add_dentry(struct dentry *parent,
struct fuse_conn *fc,
const char *name,
int mode, int nlink,
const struct inode_operations *iop,
const struct file_operations *fop)
int fuse_ctl_add_conn(struct fuse_conn *fc)
void fuse_ctl_remove_conn(struct fuse_conn *fc)
static int fuse_ctl_fill_super(struct super_block *sb, void *data, int silent)
static struct dentry *fuse_ctl_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *raw_data)
static void fuse_ctl_kill_sb(struct super_block *sb)
static struct file_system_type fuse_ctl_fs_type = ;
int __init fuse_ctl_init(void)
void fuse_ctl_cleanup(void)
