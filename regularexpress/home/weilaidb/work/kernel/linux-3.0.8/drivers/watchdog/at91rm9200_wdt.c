#define WDT_DEFAULT_TIME	5
#define WDT_MAX_TIME		256
static int wdt_time = WDT_DEFAULT_TIME;
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(wdt_time, int, 0);
MODULE_PARM_DESC(wdt_time, "Watchdog time in seconds. (default="
__MODULE_STRING(WDT_DEFAULT_TIME) ")");
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static unsigned long at91wdt_busy;
static inline void at91_wdt_stop(void)
static inline void at91_wdt_start(void)
static inline void at91_wdt_reload(void)
static int at91_wdt_open(struct inode *inode, struct file *file)
static int at91_wdt_close(struct inode *inode, struct file *file)
static int at91_wdt_settimeout(int new_time)
static const struct watchdog_info at91_wdt_info = ;
static long at91_wdt_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static ssize_t at91_wdt_write(struct file *file, const char *data,
size_t len, loff_t *ppos)
static const struct file_operations at91wdt_fops = ;
static struct miscdevice at91wdt_miscdev = ;
static int __devinit at91wdt_probe(struct platform_device *pdev)
static int __devexit at91wdt_remove(struct platform_device *pdev)
static void at91wdt_shutdown(struct platform_device *pdev)
static int at91wdt_suspend(struct platform_device *pdev, pm_message_t message)
static int at91wdt_resume(struct platform_device *pdev)
#define at91wdt_suspend NULL
#define at91wdt_resume	NULL
static struct platform_driver at91wdt_driver = ;
static int __init at91_wdt_init(void)
static void __exit at91_wdt_exit(void)
module_init(at91_wdt_init);
module_exit(at91_wdt_exit);
MODULE_AUTHOR("Andrew Victor");
MODULE_DESCRIPTION("Watchdog driver for Atmel AT91RM9200");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
MODULE_ALIAS("platform:at91_wdt");
