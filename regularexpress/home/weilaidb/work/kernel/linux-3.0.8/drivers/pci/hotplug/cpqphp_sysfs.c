static DEFINE_MUTEX(cpqphp_mutex);
static int show_ctrl (struct controller *ctrl, char *buf)
static int show_dev (struct controller *ctrl, char *buf)
static int spew_debug_info(struct controller *ctrl, char *data, int size)
struct ctrl_dbg ;
#define MAX_OUTPUT	(4*PAGE_SIZE)
static int open(struct inode *inode, struct file *file)
static loff_t lseek(struct file *file, loff_t off, int whence)
static ssize_t read(struct file *file, char __user *buf,
size_t nbytes, loff_t *ppos)
static int release(struct inode *inode, struct file *file)
static const struct file_operations debug_ops = ;
static struct dentry *root;
void cpqhp_initialize_debugfs(void)
void cpqhp_shutdown_debugfs(void)
void cpqhp_create_debugfs_files(struct controller *ctrl)
void cpqhp_remove_debugfs_files(struct controller *ctrl)
