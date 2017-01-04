static int bcm_char_open(struct inode *inode, struct file * filp)
static int bcm_char_release(struct inode *inode, struct file *filp)
static ssize_t bcm_char_read(struct file *filp, char __user *buf, size_t size,
loff_t *f_pos)
static long bcm_char_ioctl(struct file *filp, UINT cmd, ULONG arg)
static const struct file_operations bcm_fops = ;
extern struct class *bcm_class;
int register_control_device_interface(PMINI_ADAPTER Adapter)
void unregister_control_device_interface(PMINI_ADAPTER Adapter)
