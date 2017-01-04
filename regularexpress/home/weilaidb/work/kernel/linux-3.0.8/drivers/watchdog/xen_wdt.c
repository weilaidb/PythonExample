#define DRV_NAME	"wdt"
#define DRV_VERSION	"0.01"
#define PFX		DRV_NAME ": "
static struct platform_device *platform_device;
static DEFINE_SPINLOCK(wdt_lock);
static struct sched_watchdog wdt;
static __kernel_time_t wdt_expires;
static bool is_active, expect_release;
#define WATCHDOG_TIMEOUT 60
static unsigned int timeout = WATCHDOG_TIMEOUT;
module_param(timeout, uint, S_IRUGO);
MODULE_PARM_DESC(timeout, "Watchdog timeout in seconds "
"(default=" __MODULE_STRING(WATCHDOG_TIMEOUT) ")");
static bool nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, bool, S_IRUGO);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started "
"(default=" __MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static inline __kernel_time_t set_timeout(void)
static int xen_wdt_start(void)
static int xen_wdt_stop(void)
static int xen_wdt_kick(void)
static int xen_wdt_open(struct inode *inode, struct file *file)
static int xen_wdt_release(struct inode *inode, struct file *file)
static ssize_t xen_wdt_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static long xen_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct file_operations xen_wdt_fops = ;
static struct miscdevice xen_wdt_miscdev = ;
static int __devinit xen_wdt_probe(struct platform_device *dev)
static int __devexit xen_wdt_remove(struct platform_device *dev)
static void xen_wdt_shutdown(struct platform_device *dev)
static int xen_wdt_suspend(struct platform_device *dev, pm_message_t state)
static int xen_wdt_resume(struct platform_device *dev)
static struct platform_driver xen_wdt_driver = ;
static int __init xen_wdt_init_module(void)
static void __exit xen_wdt_cleanup_module(void)
module_init(xen_wdt_init_module);
module_exit(xen_wdt_cleanup_module);
MODULE_AUTHOR("Jan Beulich <jbeulich@novell.com>");
MODULE_DESCRIPTION("Xen WatchDog Timer Driver");
MODULE_VERSION(DRV_VERSION);
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
