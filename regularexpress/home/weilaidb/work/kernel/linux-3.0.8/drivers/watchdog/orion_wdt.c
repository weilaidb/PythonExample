#define TIMER_CTRL		(TIMER_VIRT_BASE + 0x0000)
#define  WDT_EN			0x0010
#define WDT_VAL			(TIMER_VIRT_BASE + 0x0024)
#define WDT_MAX_CYCLE_COUNT	0xffffffff
#define WDT_IN_USE		0
#define WDT_OK_TO_CLOSE		1
static int nowayout = WATCHDOG_NOWAYOUT;
static int heartbeat = -1;
static unsigned int wdt_max_duration;
static unsigned int wdt_tclk;
static unsigned long wdt_status;
static spinlock_t wdt_lock;
static void orion_wdt_ping(void)
static void orion_wdt_enable(void)
static void orion_wdt_disable(void)
static int orion_wdt_get_timeleft(int *time_left)
static int orion_wdt_open(struct inode *inode, struct file *file)
static ssize_t orion_wdt_write(struct file *file, const char *data,
size_t len, loff_t *ppos)
static int orion_wdt_settimeout(int new_time)
static const struct watchdog_info ident = ;
static long orion_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int orion_wdt_release(struct inode *inode, struct file *file)
static const struct file_operations orion_wdt_fops = ;
static struct miscdevice orion_wdt_miscdev = ;
static int __devinit orion_wdt_probe(struct platform_device *pdev)
static int __devexit orion_wdt_remove(struct platform_device *pdev)
static void orion_wdt_shutdown(struct platform_device *pdev)
static struct platform_driver orion_wdt_driver = ;
static int __init orion_wdt_init(void)
static void __exit orion_wdt_exit(void)
module_init(orion_wdt_init);
module_exit(orion_wdt_exit);
MODULE_AUTHOR("Sylver Bruneau <sylver.bruneau@googlemail.com>");
MODULE_DESCRIPTION("Orion Processor Watchdog");
module_param(heartbeat, int, 0);
MODULE_PARM_DESC(heartbeat, "Initial watchdog heartbeat in seconds");
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
