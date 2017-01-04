#define DRV_NAME "advantechwdt"
#define PFX DRV_NAME ": "
#define WATCHDOG_NAME "Advantech WDT"
#define WATCHDOG_TIMEOUT 60
static struct platform_device *advwdt_platform_device;
static unsigned long advwdt_is_open;
static char adv_expect_close;
static int wdt_stop = 0x443;
module_param(wdt_stop, int, 0);
MODULE_PARM_DESC(wdt_stop, "Advantech WDT 'stop' io port (default 0x443)");
static int wdt_start = 0x443;
module_param(wdt_start, int, 0);
MODULE_PARM_DESC(wdt_start, "Advantech WDT 'start' io port (default 0x443)");
static int timeout = WATCHDOG_TIMEOUT;
module_param(timeout, int, 0);
MODULE_PARM_DESC(timeout,
"Watchdog timeout in seconds. 1<= timeout <=63, default="
__MODULE_STRING(WATCHDOG_TIMEOUT) ".");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static void advwdt_ping(void)
static void advwdt_disable(void)
static int advwdt_set_heartbeat(int t)
static ssize_t advwdt_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static long advwdt_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int advwdt_open(struct inode *inode, struct file *file)
static int advwdt_close(struct inode *inode, struct file *file)
static const struct file_operations advwdt_fops = ;
static struct miscdevice advwdt_miscdev = ;
static int __devinit advwdt_probe(struct platform_device *dev)
static int __devexit advwdt_remove(struct platform_device *dev)
static void advwdt_shutdown(struct platform_device *dev)
static struct platform_driver advwdt_driver = ;
static int __init advwdt_init(void)
static void __exit advwdt_exit(void)
module_init(advwdt_init);
module_exit(advwdt_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Marek Michalkiewicz <marekm@linux.org.pl>");
MODULE_DESCRIPTION("Advantech Single Board Computer WDT driver");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
