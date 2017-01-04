static struct platform_device *ibwdt_platform_device;
static unsigned long ibwdt_is_open;
static DEFINE_SPINLOCK(ibwdt_lock);
static char expect_close;
#define DRV_NAME "ib700wdt"
#define PFX DRV_NAME ": "
#define WDT_STOP 0x441
#define WDT_START 0x443
#define WATCHDOG_TIMEOUT 30
static int timeout = WATCHDOG_TIMEOUT;
module_param(timeout, int, 0);
MODULE_PARM_DESC(timeout,
"Watchdog timeout in seconds. 0<= timeout <=30, default="
__MODULE_STRING(WATCHDOG_TIMEOUT) ".");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static void ibwdt_ping(void)
static void ibwdt_disable(void)
static int ibwdt_set_heartbeat(int t)
static ssize_t ibwdt_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static long ibwdt_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int ibwdt_open(struct inode *inode, struct file *file)
static int ibwdt_close(struct inode *inode, struct file *file)
static const struct file_operations ibwdt_fops = ;
static struct miscdevice ibwdt_miscdev = ;
static int __devinit ibwdt_probe(struct platform_device *dev)
static int __devexit ibwdt_remove(struct platform_device *dev)
static void ibwdt_shutdown(struct platform_device *dev)
static struct platform_driver ibwdt_driver = ;
static int __init ibwdt_init(void)
static void __exit ibwdt_exit(void)
module_init(ibwdt_init);
module_exit(ibwdt_exit);
MODULE_AUTHOR("Charles Howes <chowes@vsol.net>");
MODULE_DESCRIPTION("IB700 SBC watchdog driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
