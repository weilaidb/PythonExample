static int ncp_fsync(struct file *file, int datasync)
int ncp_make_open(struct inode *inode, int right)
static ssize_t
ncp_file_read(struct file *file, char __user *buf, size_t count, loff_t *ppos)
static ssize_t
ncp_file_write(struct file *file, const char __user *buf, size_t count, loff_t *ppos)
static int ncp_release(struct inode *inode, struct file *file)
const struct file_operations ncp_file_operations =
;
const struct inode_operations ncp_file_inode_operations =
;
