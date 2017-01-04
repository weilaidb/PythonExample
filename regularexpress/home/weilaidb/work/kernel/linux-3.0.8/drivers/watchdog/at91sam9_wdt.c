#define DRV_NAME "AT91SAM9 Watchdog"
#define ms_to_ticks(t)	(((t << 8) / 1000) - 1)
#define ticks_to_ms(t)	(((t + 1) * 1000) >> 8)
#define WDT_HW_TIMEOUT 2
#define WDT_TIMEOUT	(HZ/2)
#define WDT_HEARTBEAT 15
static int heartbeat = WDT_HEARTBEAT;
module_param(heartbeat, int, 0);
MODULE_PARM_DESC(heartbeat, "Watchdog heartbeats in seconds. "
"(default = " __MODULE_STRING(WDT_HEARTBEAT) ")");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started "
"(default=" __MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static void at91_ping(unsigned long data);
static struct  at91wdt_private;
static inline void at91_wdt_reset(void)
static void at91_ping(unsigned long data)
static int at91_wdt_open(struct inode *inode, struct file *file)
static int at91_wdt_close(struct inode *inode, struct file *file)
static int at91_wdt_settimeout(unsigned int timeout)
static const struct watchdog_info at91_wdt_info = ;
static long at91_wdt_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static ssize_t at91_wdt_write(struct file *file, const char *data, size_t len,
loff_t *ppos)
static const struct file_operations at91wdt_fops = ;
static struct miscdevice at91wdt_miscdev = ;
static int __init at91wdt_probe(struct platform_device *pdev)
static int __exit at91wdt_remove(struct platform_device *pdev)
static int at91wdt_suspend(struct platform_device *pdev, pm_message_t message)
static int at91wdt_resume(struct platform_device *pdev)
#define at91wdt_suspend	NULL
#define at91wdt_resume	NULL
static struct platform_driver at91wdt_driver = ;
static int __init at91sam_wdt_init(void)
static void __exit at91sam_wdt_exit(void)
module_init(at91sam_wdt_init);
module_exit(at91sam_wdt_exit);
MODULE_AUTHOR("Renaud CERRATO <r.cerrato@til-technologies.fr>");
MODULE_DESCRIPTION("Watchdog driver for Atmel AT91SAM9x processors");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
