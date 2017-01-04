static int coda_ioctl_permission(struct inode *inode, int mask, unsigned int flags);
static long coda_pioctl(struct file *filp, unsigned int cmd,
unsigned long user_data);
const struct inode_operations coda_ioctl_inode_operations = ;
const struct file_operations coda_ioctl_operations = ;
static int coda_ioctl_permission(struct inode *inode, int mask, unsigned int flags)
static long coda_pioctl(struct file *filp, unsigned int cmd,
unsigned long user_data)
