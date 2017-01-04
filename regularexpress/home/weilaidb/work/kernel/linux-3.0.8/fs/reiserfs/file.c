static int reiserfs_file_release(struct inode *inode, struct file *filp)
static int reiserfs_file_open(struct inode *inode, struct file *file)
static void reiserfs_vfs_truncate_file(struct inode *inode)
static int reiserfs_sync_file(struct file *filp, int datasync)
int reiserfs_commit_page(struct inode *inode, struct page *page,
unsigned from, unsigned to)
static ssize_t reiserfs_file_write(struct file *file,
const char __user * buf,
size_t count,
loff_t * ppos
)
const struct file_operations reiserfs_file_operations = ;
const struct inode_operations reiserfs_file_inode_operations = ;
