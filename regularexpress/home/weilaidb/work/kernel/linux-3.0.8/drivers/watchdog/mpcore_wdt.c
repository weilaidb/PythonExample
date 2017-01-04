struct mpcore_wdt ;
static struct platform_device *mpcore_wdt_dev;
static DEFINE_SPINLOCK(wdt_lock);
#define TIMER_MARGIN	60
static int mpcore_margin = TIMER_MARGIN;
module_param(mpcore_margin, int, 0);
MODULE_PARM_DESC(mpcore_margin,
"MPcore timer margin in seconds. (0 < mpcore_margin < 65536, default="
__MODULE_STRING(TIMER_MARGIN) ")");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
#define ONLY_TESTING	0
static int mpcore_noboot = ONLY_TESTING;
module_param(mpcore_noboot, int, 0);
MODULE_PARM_DESC(mpcore_noboot, "MPcore watchdog action, "
"set to 1 to ignore reboots, 0 to reboot (default="
__MODULE_STRING(ONLY_TESTING) ")");
static irqreturn_t mpcore_wdt_fire(int irq, void *arg)
static void mpcore_wdt_keepalive(struct mpcore_wdt *wdt)
static void mpcore_wdt_stop(struct mpcore_wdt *wdt)
static void mpcore_wdt_start(struct mpcore_wdt *wdt)
static int mpcore_wdt_set_heartbeat(int t)
static int mpcore_wdt_open(struct inode *inode, struct file *file)
static int mpcore_wdt_release(struct inode *inode, struct file *file)
static ssize_t mpcore_wdt_write(struct file *file, const char *data,
size_t len, loff_t *ppos)
static const struct watchdog_info ident = ;
static long mpcore_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static void mpcore_wdt_shutdown(struct platform_device *dev)
static const struct file_operations mpcore_wdt_fops = ;
static struct miscdevice mpcore_wdt_miscdev = ;
static int __devinit mpcore_wdt_probe(struct platform_device *dev)
static int __devexit mpcore_wdt_remove(struct platform_device *dev)
MODULE_ALIAS("platform:mpcore_wdt");
static struct platform_driver mpcore_wdt_driver = ;
static char banner[] __initdata = KERN_INFO "MPcore Watchdog Timer: 0.1. "
"mpcore_noboot=%d mpcore_margin=%d sec (nowayout= %d)\n";
static int __init mpcore_wdt_init(void)
static void __exit mpcore_wdt_exit(void)
module_init(mpcore_wdt_init);
module_exit(mpcore_wdt_exit);
MODULE_AUTHOR("ARM Limited");
MODULE_DESCRIPTION("MPcore Watchdog Device Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
