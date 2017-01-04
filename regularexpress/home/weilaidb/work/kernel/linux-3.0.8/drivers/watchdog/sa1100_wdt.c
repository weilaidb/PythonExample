static unsigned long oscr_freq;
static unsigned long sa1100wdt_users;
static unsigned int pre_margin;
static int boot_status;
static int sa1100dog_open(struct inode *inode, struct file *file)
static int sa1100dog_release(struct inode *inode, struct file *file)
static ssize_t sa1100dog_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static const struct watchdog_info ident = ;
static long sa1100dog_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct file_operations sa1100dog_fops = ;
static struct miscdevice sa1100dog_miscdev = ;
static int margin __initdata = 60;
static int __init sa1100dog_init(void)
static void __exit sa1100dog_exit(void)
module_init(sa1100dog_init);
module_exit(sa1100dog_exit);
MODULE_AUTHOR("Oleg Drokin <green@crimea.edu>");
MODULE_DESCRIPTION("SA1100/PXA2xx Watchdog");
module_param(margin, int, 0);
MODULE_PARM_DESC(margin, "Watchdog margin in seconds (default 60s)");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
