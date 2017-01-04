static atomic_t ecryptfs_num_miscdev_opens;
static unsigned int
ecryptfs_miscdev_poll(struct file *file, poll_table *pt)
static int
ecryptfs_miscdev_open(struct inode *inode, struct file *file)
static int
ecryptfs_miscdev_release(struct inode *inode, struct file *file)
int ecryptfs_send_miscdev(char *data, size_t data_size,
struct ecryptfs_msg_ctx *msg_ctx, u8 msg_type,
u16 msg_flags, struct ecryptfs_daemon *daemon)
static ssize_t
ecryptfs_miscdev_read(struct file *file, char __user *buf, size_t count,
loff_t *ppos)
static int ecryptfs_miscdev_response(char *data, size_t data_size,
uid_t euid, struct user_namespace *user_ns,
struct pid *pid, u32 seq)
static ssize_t
ecryptfs_miscdev_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations ecryptfs_miscdev_fops = ;
static struct miscdevice ecryptfs_miscdev = ;
int __init ecryptfs_init_ecryptfs_miscdev(void)
void ecryptfs_destroy_ecryptfs_miscdev(void)
