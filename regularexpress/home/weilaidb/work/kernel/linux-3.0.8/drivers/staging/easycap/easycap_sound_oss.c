void
easyoss_complete(struct urb *purb)
static int easyoss_open(struct inode *inode, struct file *file)
static int easyoss_release(struct inode *inode, struct file *file)
static ssize_t easyoss_read(struct file *file, char __user *puserspacebuffer,
size_t kount, loff_t *poff)
static long easyoss_unlocked_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static const struct file_operations easyoss_fops = ;
struct usb_class_driver easyoss_class = ;
