#define WATCHDOG_NAME "Wafer 5823 WDT"
#define PFX WATCHDOG_NAME ": "
#define WD_TIMO 60
static unsigned long wafwdt_is_open;
static char expect_close;
static DEFINE_SPINLOCK(wafwdt_lock);
static int wdt_stop = 0x843;
static int wdt_start = 0x443;
static int timeout = WD_TIMO;
module_param(timeout, int, 0);
MODULE_PARM_DESC(timeout,
"Watchdog timeout in seconds. 1 <= timeout <= 255, default="
__MODULE_STRING(WD_TIMO) ".");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static void wafwdt_ping(void)
static void wafwdt_start(void)
static void wafwdt_stop(void)
static ssize_t wafwdt_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static long wafwdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int wafwdt_open(struct inode *inode, struct file *file)
static int wafwdt_close(struct inode *inode, struct file *file)
static int wafwdt_notify_sys(struct notifier_block *this, unsigned long code,
void *unused)
static const struct file_operations wafwdt_fops = ;
static struct miscdevice wafwdt_miscdev = ;
static struct notifier_block wafwdt_notifier = ;
static int __init wafwdt_init(void)
static void __exit wafwdt_exit(void)
module_init(wafwdt_init);
module_exit(wafwdt_exit);
MODULE_AUTHOR("Justin Cormack");
MODULE_DESCRIPTION("ICP Wafer 5823 Single Board Computer WDT driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
