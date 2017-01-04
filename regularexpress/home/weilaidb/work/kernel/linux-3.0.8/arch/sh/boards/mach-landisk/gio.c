#define DEVCOUNT                4
#define GIO_MINOR	        2
static dev_t dev;
static struct cdev *cdev_p;
static int openCnt;
static int gio_open(struct inode *inode, struct file *filp)
static int gio_close(struct inode *inode, struct file *filp)
static long gio_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
static const struct file_operations gio_fops = ;
static int __init gio_init(void)
static void __exit gio_exit(void)
module_init(gio_init);
module_exit(gio_exit);
MODULE_LICENSE("GPL");
