static int nowayout = WATCHDOG_NOWAYOUT;
static unsigned long wdt_status;
static unsigned long boot_status;
static spinlock_t wdt_lock;
#define WDT_IN_USE		0
#define WDT_OK_TO_CLOSE		1
#define WDT_ENABLED		2
static unsigned long iop_watchdog_timeout(void)
static int wdt_supports_disable(void)
static void wdt_enable(void)
static int wdt_disable(void)
static int iop_wdt_open(struct inode *inode, struct file *file)
static ssize_t iop_wdt_write(struct file *file, const char *data, size_t len,
loff_t *ppos)
static const struct watchdog_info ident = ;
static long iop_wdt_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static int iop_wdt_release(struct inode *inode, struct file *file)
static const struct file_operations iop_wdt_fops = ;
static struct miscdevice iop_wdt_miscdev = ;
static int __init iop_wdt_init(void)
static void __exit iop_wdt_exit(void)
module_init(iop_wdt_init);
module_exit(iop_wdt_exit);
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started");
MODULE_AUTHOR("Curt E Bruns <curt.e.bruns@intel.com>");
MODULE_DESCRIPTION("iop watchdog timer driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
