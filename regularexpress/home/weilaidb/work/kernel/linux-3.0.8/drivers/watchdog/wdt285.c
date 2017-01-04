#undef ONLY_TESTING
static unsigned int soft_margin = 60;
static unsigned int reload;
static unsigned long timer_alive;
static void watchdog_fire(int irq, void *dev_id)
static void watchdog_ping(void)
static int watchdog_open(struct inode *inode, struct file *file)
static int watchdog_release(struct inode *inode, struct file *file)
static ssize_t watchdog_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static const struct watchdog_info ident = ;
static long watchdog_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct file_operations watchdog_fops = ;
static struct miscdevice watchdog_miscdev = ;
static int __init footbridge_watchdog_init(void)
static void __exit footbridge_watchdog_exit(void)
MODULE_AUTHOR("Phil Blundell <pb@nexus.co.uk>");
MODULE_DESCRIPTION("Footbridge watchdog driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
module_param(soft_margin, int, 0);
MODULE_PARM_DESC(soft_margin, "Watchdog timeout in seconds");
module_init(footbridge_watchdog_init);
module_exit(footbridge_watchdog_exit);
