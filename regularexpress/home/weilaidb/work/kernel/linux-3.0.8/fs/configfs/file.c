#define SIMPLE_ATTR_SIZE 4096
struct configfs_buffer ;
static int fill_read_buffer(struct dentry * dentry, struct configfs_buffer * buffer)
static ssize_t
configfs_read_file(struct file *file, char __user *buf, size_t count, loff_t *ppos)
static int
fill_write_buffer(struct configfs_buffer * buffer, const char __user * buf, size_t count)
static int
flush_write_buffer(struct dentry * dentry, struct configfs_buffer * buffer, size_t count)
static ssize_t
configfs_write_file(struct file *file, const char __user *buf, size_t count, loff_t *ppos)
static int check_perm(struct inode * inode, struct file * file)
static int configfs_open_file(struct inode * inode, struct file * filp)
static int configfs_release(struct inode * inode, struct file * filp)
const struct file_operations configfs_file_operations = ;
int configfs_add_file(struct dentry * dir, const struct configfs_attribute * attr, int type)
int configfs_create_file(struct config_item * item, const struct configfs_attribute * attr)
