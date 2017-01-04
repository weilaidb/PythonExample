static int nowayout = WATCHDOG_NOWAYOUT;
static unsigned int heartbeat = 30;
static unsigned long wdt_status;
#define	WDT_IN_USE		0
#define	WDT_OK_TO_CLOSE		1
static void wdt_enable(void)
static void wdt_disable(void)
static void wdt_keepalive(void)
static int m54xx_wdt_open(struct inode *inode, struct file *file)
static ssize_t m54xx_wdt_write(struct file *file, const char *data,
size_t len, loff_t *ppos)
static const struct watchdog_info ident = ;
static long m54xx_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int m54xx_wdt_release(struct inode *inode, struct file *file)
static const struct file_operations m54xx_wdt_fops = ;
static struct miscdevice m54xx_wdt_miscdev = ;
static int __init m54xx_wdt_init(void)
static void __exit m54xx_wdt_exit(void)
module_init(m54xx_wdt_init);
module_exit(m54xx_wdt_exit);
MODULE_AUTHOR("Philippe De Muyter <phdm@macqel.be>");
MODULE_DESCRIPTION("Coldfire M54xx Watchdog");
module_param(heartbeat, int, 0);
MODULE_PARM_DESC(heartbeat, "Watchdog heartbeat in seconds (default 30s)");
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
