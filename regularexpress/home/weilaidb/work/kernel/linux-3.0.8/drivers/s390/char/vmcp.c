static debug_info_t *vmcp_debug;
static int vmcp_open(struct inode *inode, struct file *file)
static int vmcp_release(struct inode *inode, struct file *file)
static ssize_t
vmcp_read(struct file *file, char __user *buff, size_t count, loff_t *ppos)
static ssize_t
vmcp_write(struct file *file, const char __user *buff, size_t count,
loff_t *ppos)
static long vmcp_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static const struct file_operations vmcp_fops = ;
static struct miscdevice vmcp_dev = ;
static int __init vmcp_init(void)
device_initcall(vmcp_init);
