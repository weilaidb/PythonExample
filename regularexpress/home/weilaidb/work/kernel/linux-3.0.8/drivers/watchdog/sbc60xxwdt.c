#define OUR_NAME "sbc60xxwdt"
#define PFX OUR_NAME ": "
static int wdt_stop = 0x45;
module_param(wdt_stop, int, 0);
MODULE_PARM_DESC(wdt_stop, "SBC60xx WDT 'stop' io port (default 0x45)");
static int wdt_start = 0x443;
module_param(wdt_start, int, 0);
MODULE_PARM_DESC(wdt_start, "SBC60xx WDT 'start' io port (default 0x443)");
#define WDT_INTERVAL (HZ/4+1)
#define WATCHDOG_TIMEOUT 30
static int timeout = WATCHDOG_TIMEOUT;
module_param(timeout, int, 0);
MODULE_PARM_DESC(timeout,
"Watchdog timeout in seconds. (1<=timeout<=3600, default="
__MODULE_STRING(WATCHDOG_TIMEOUT) ")");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static void wdt_timer_ping(unsigned long);
static DEFINE_TIMER(timer, wdt_timer_ping, 0, 0);
static unsigned long next_heartbeat;
static unsigned long wdt_is_open;
static char wdt_expect_close;
static void wdt_timer_ping(unsigned long data)
static void wdt_startup(void)
static void wdt_turnoff(void)
static void wdt_keepalive(void)
static ssize_t fop_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static int fop_open(struct inode *inode, struct file *file)
static int fop_close(struct inode *inode, struct file *file)
static long fop_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static const struct file_operations wdt_fops = ;
static struct miscdevice wdt_miscdev = ;
static int wdt_notify_sys(struct notifier_block *this, unsigned long code,
void *unused)
static struct notifier_block wdt_notifier = ;
static void __exit sbc60xxwdt_unload(void)
static int __init sbc60xxwdt_init(void)
module_init(sbc60xxwdt_init);
module_exit(sbc60xxwdt_unload);
MODULE_AUTHOR("Jakob Oestergaard <jakob@unthought.net>");
MODULE_DESCRIPTION("60xx Single Board Computer Watchdog Timer driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
