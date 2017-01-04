#define GEF_WDC_ENABLE_SHIFT	24
#define GEF_WDC_SERVICE_SHIFT	26
#define GEF_WDC_ENABLED_SHIFT	31
#define GEF_WDC_ENABLED_TRUE	1
#define GEF_WDC_ENABLED_FALSE	0
#define GEF_WDOG_FLAG_OPENED	0
static unsigned long wdt_flags;
static int wdt_status;
static void __iomem *gef_wdt_regs;
static int gef_wdt_timeout;
static int gef_wdt_count;
static unsigned int bus_clk;
static char expect_close;
static DEFINE_SPINLOCK(gef_wdt_spinlock);
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static int gef_wdt_toggle_wdc(int enabled_predicate, int field_shift)
static void gef_wdt_service(void)
static void gef_wdt_handler_enable(void)
static void gef_wdt_handler_disable(void)
static void gef_wdt_set_timeout(unsigned int timeout)
static ssize_t gef_wdt_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static long gef_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int gef_wdt_open(struct inode *inode, struct file *file)
static int gef_wdt_release(struct inode *inode, struct file *file)
static const struct file_operations gef_wdt_fops = ;
static struct miscdevice gef_wdt_miscdev = ;
static int __devinit gef_wdt_probe(struct platform_device *dev)
static int __devexit gef_wdt_remove(struct platform_device *dev)
static const struct of_device_id gef_wdt_ids[] = ;
static struct platform_driver gef_wdt_driver = ;
static int __init gef_wdt_init(void)
static void __exit gef_wdt_exit(void)
module_init(gef_wdt_init);
module_exit(gef_wdt_exit);
MODULE_AUTHOR("Martyn Welch <martyn.welch@ge.com>");
MODULE_DESCRIPTION("GE watchdog driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
MODULE_ALIAS("platform:gef_wdt");
