#define MV64x60_WDT_WDC_OFFSET	0
#define MV64x60_WDC_ENABLE_SHIFT	24
#define MV64x60_WDC_SERVICE_SHIFT	26
#define MV64x60_WDC_ENABLED_SHIFT	31
#define MV64x60_WDC_ENABLED_TRUE	1
#define MV64x60_WDC_ENABLED_FALSE	0
#define MV64x60_WDOG_FLAG_OPENED	0
static unsigned long wdt_flags;
static int wdt_status;
static void __iomem *mv64x60_wdt_regs;
static int mv64x60_wdt_timeout;
static int mv64x60_wdt_count;
static unsigned int bus_clk;
static char expect_close;
static DEFINE_SPINLOCK(mv64x60_wdt_spinlock);
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static int mv64x60_wdt_toggle_wdc(int enabled_predicate, int field_shift)
static void mv64x60_wdt_service(void)
static void mv64x60_wdt_handler_enable(void)
static void mv64x60_wdt_handler_disable(void)
static void mv64x60_wdt_set_timeout(unsigned int timeout)
static int mv64x60_wdt_open(struct inode *inode, struct file *file)
static int mv64x60_wdt_release(struct inode *inode, struct file *file)
static ssize_t mv64x60_wdt_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static long mv64x60_wdt_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static const struct file_operations mv64x60_wdt_fops = ;
static struct miscdevice mv64x60_wdt_miscdev = ;
static int __devinit mv64x60_wdt_probe(struct platform_device *dev)
static int __devexit mv64x60_wdt_remove(struct platform_device *dev)
static struct platform_driver mv64x60_wdt_driver = ;
static int __init mv64x60_wdt_init(void)
static void __exit mv64x60_wdt_exit(void)
module_init(mv64x60_wdt_init);
module_exit(mv64x60_wdt_exit);
MODULE_AUTHOR("James Chapman <jchapman@katalix.com>");
MODULE_DESCRIPTION("MV64x60 watchdog driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
MODULE_ALIAS("platform:" MV64x60_WDT_NAME);
