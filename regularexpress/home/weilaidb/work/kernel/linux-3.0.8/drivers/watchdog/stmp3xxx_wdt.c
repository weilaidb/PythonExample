#define DEFAULT_HEARTBEAT	19
#define MAX_HEARTBEAT		(0x10000000 >> 6)
#define BV_RTC_PERSISTENT1_GENERAL__RTC_FORCE_UPDATER     0x80000000
#define WDT_IN_USE		0
#define WDT_OK_TO_CLOSE		1
#define WDOG_COUNTER_RATE	1000
static DEFINE_SPINLOCK(stmp3xxx_wdt_io_lock);
static unsigned long wdt_status;
static const int nowayout = WATCHDOG_NOWAYOUT;
static int heartbeat = DEFAULT_HEARTBEAT;
static unsigned long boot_status;
static void wdt_enable(u32 value)
static void wdt_disable(void)
static void wdt_ping(void)
static int stmp3xxx_wdt_open(struct inode *inode, struct file *file)
static ssize_t stmp3xxx_wdt_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static const struct watchdog_info ident = ;
static long stmp3xxx_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int stmp3xxx_wdt_release(struct inode *inode, struct file *file)
static const struct file_operations stmp3xxx_wdt_fops = ;
static struct miscdevice stmp3xxx_wdt_miscdev = ;
static int __devinit stmp3xxx_wdt_probe(struct platform_device *pdev)
static int __devexit stmp3xxx_wdt_remove(struct platform_device *pdev)
static int wdt_suspended;
static u32 wdt_saved_time;
static int stmp3xxx_wdt_suspend(struct platform_device *pdev,
pm_message_t state)
static int stmp3xxx_wdt_resume(struct platform_device *pdev)
#define stmp3xxx_wdt_suspend	NULL
#define stmp3xxx_wdt_resume	NULL
static struct platform_driver platform_wdt_driver = ;
static int __init stmp3xxx_wdt_init(void)
static void __exit stmp3xxx_wdt_exit(void)
module_init(stmp3xxx_wdt_init);
module_exit(stmp3xxx_wdt_exit);
MODULE_DESCRIPTION("STMP3XXX Watchdog Driver");
MODULE_LICENSE("GPL");
module_param(heartbeat, int, 0);
MODULE_PARM_DESC(heartbeat,
"Watchdog heartbeat period in seconds from 1 to "
__MODULE_STRING(MAX_HEARTBEAT) ", default "
__MODULE_STRING(DEFAULT_HEARTBEAT));
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
