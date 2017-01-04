static unsigned long mmapper_size;
static unsigned long p_buf;
static char *v_buf;
static ssize_t mmapper_read(struct file *file, char __user *buf, size_t count,
loff_t *ppos)
static ssize_t mmapper_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static long mmapper_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int mmapper_mmap(struct file *file, struct vm_area_struct *vma)
static int mmapper_open(struct inode *inode, struct file *file)
static int mmapper_release(struct inode *inode, struct file *file)
static const struct file_operations mmapper_fops = ;
static struct miscdevice mmapper_dev = ;
static int __init mmapper_init(void)
static void mmapper_exit(void)
module_init(mmapper_init);
module_exit(mmapper_exit);
MODULE_AUTHOR("Greg Lonnon <glonnon@ridgerun.com>");
MODULE_DESCRIPTION("DSPLinux simulator mmapper driver");
MODULE_LICENSE("GPL");
