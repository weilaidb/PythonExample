static int nowayout = WATCHDOG_NOWAYOUT;
static unsigned int heartbeat = 60;
static unsigned long wdt_status;
static spinlock_t wdt_lock;
#define	WDT_IN_USE		0
#define	WDT_OK_TO_CLOSE		1
static unsigned long wdt_tick_rate;
static void wdt_enable(void)
static void wdt_disable(void)
static void wdt_keepalive(void)
static int ixp2000_wdt_open(struct inode *inode, struct file *file)
static ssize_t ixp2000_wdt_write(struct file *file, const char *data,
size_t len, loff_t *ppos)
static const struct watchdog_info ident = ;
static long ixp2000_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int ixp2000_wdt_release(struct inode *inode, struct file *file)
static const struct file_operations ixp2000_wdt_fops = ;
static struct miscdevice ixp2000_wdt_miscdev = ;
static int __init ixp2000_wdt_init(void)
static void __exit ixp2000_wdt_exit(void)
module_init(ixp2000_wdt_init);
module_exit(ixp2000_wdt_exit);
MODULE_AUTHOR("Deepak Saxena <dsaxena@plexity.net>");
MODULE_DESCRIPTION("IXP2000 Network Processor Watchdog");
module_param(heartbeat, int, 0);
MODULE_PARM_DESC(heartbeat, "Watchdog heartbeat in seconds (default 60s)");
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
