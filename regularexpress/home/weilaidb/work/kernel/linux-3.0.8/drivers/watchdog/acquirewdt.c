#define DRV_NAME "acquirewdt"
#define PFX DRV_NAME ": "
#define WATCHDOG_NAME "Acquire WDT"
#define WATCHDOG_HEARTBEAT 0
static struct platform_device *acq_platform_device;
static unsigned long acq_is_open;
static char expect_close;
static int wdt_stop = 0x43;
module_param(wdt_stop, int, 0);
MODULE_PARM_DESC(wdt_stop, "Acquire WDT 'stop' io port (default 0x43)");
static int wdt_start = 0x443;
module_param(wdt_start, int, 0);
MODULE_PARM_DESC(wdt_start, "Acquire WDT 'start' io port (default 0x443)");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static void acq_keepalive(void)
static void acq_stop(void)
static ssize_t acq_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static long acq_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int acq_open(struct inode *inode, struct file *file)
static int acq_close(struct inode *inode, struct file *file)
static const struct file_operations acq_fops = ;
static struct miscdevice acq_miscdev = ;
static int __devinit acq_probe(struct platform_device *dev)
static int __devexit acq_remove(struct platform_device *dev)
static void acq_shutdown(struct platform_device *dev)
static struct platform_driver acquirewdt_driver = ;
static int __init acq_init(void)
static void __exit acq_exit(void)
module_init(acq_init);
module_exit(acq_exit);
MODULE_AUTHOR("David Woodhouse");
MODULE_DESCRIPTION("Acquire Inc. Single Board Computer Watchdog Timer driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
