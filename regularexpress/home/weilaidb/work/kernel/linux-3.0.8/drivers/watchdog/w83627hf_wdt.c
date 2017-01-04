#define WATCHDOG_NAME "w83627hf/thf/hg/dhg WDT"
#define PFX WATCHDOG_NAME ": "
#define WATCHDOG_TIMEOUT 60
static unsigned long wdt_is_open;
static char expect_close;
static DEFINE_SPINLOCK(io_lock);
static int wdt_io = 0x2E;
module_param(wdt_io, int, 0);
MODULE_PARM_DESC(wdt_io, "w83627hf/thf WDT io port (default 0x2E)");
static int timeout = WATCHDOG_TIMEOUT;
module_param(timeout, int, 0);
MODULE_PARM_DESC(timeout,
"Watchdog timeout in seconds. 1 <= timeout <= 255, default="
__MODULE_STRING(WATCHDOG_TIMEOUT) ".");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
#define WDT_EFER (wdt_io+0)
#define WDT_EFIR (wdt_io+0)
#define WDT_EFDR (WDT_EFIR+1)
static void w83627hf_select_wd_register(void)
static void w83627hf_unselect_wd_register(void)
static void w83627hf_init(void)
static void wdt_ctrl(int timeout)
static int wdt_ping(void)
static int wdt_disable(void)
static int wdt_set_heartbeat(int t)
static ssize_t wdt_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static long wdt_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int wdt_open(struct inode *inode, struct file *file)
static int wdt_close(struct inode *inode, struct file *file)
static int wdt_notify_sys(struct notifier_block *this, unsigned long code,
void *unused)
static const struct file_operations wdt_fops = ;
static struct miscdevice wdt_miscdev = ;
static struct notifier_block wdt_notifier = ;
static int __init wdt_init(void)
static void __exit wdt_exit(void)
module_init(wdt_init);
module_exit(wdt_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Pádraig Brady <P@draigBrady.com>");
MODULE_DESCRIPTION("w83627hf/thf WDT driver");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
