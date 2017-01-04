#define TIMER_MARGIN	60
static int timeout = TIMER_MARGIN;
module_param(timeout, int, 0);
MODULE_PARM_DESC(timeout,
"Watchdog timeout in seconds. "
"(0<timeout<((2^" __MODULE_STRING(TXX9_TIMER_BITS) ")/(IMCLK/256)), "
"default=" __MODULE_STRING(TIMER_MARGIN) ")");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started "
"(default=" __MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
#define WD_TIMER_CCD	7
#define WD_TIMER_CLK	(clk_get_rate(txx9_imclk) / (2 << WD_TIMER_CCD))
#define WD_MAX_TIMEOUT	((0xffffffff >> (32 - TXX9_TIMER_BITS)) / WD_TIMER_CLK)
static unsigned long txx9wdt_alive;
static int expect_close;
static struct txx9_tmr_reg __iomem *txx9wdt_reg;
static struct clk *txx9_imclk;
static DEFINE_SPINLOCK(txx9_lock);
static void txx9wdt_ping(void)
static void txx9wdt_start(void)
static void txx9wdt_stop(void)
static int txx9wdt_open(struct inode *inode, struct file *file)
static int txx9wdt_release(struct inode *inode, struct file *file)
static ssize_t txx9wdt_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static long txx9wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct file_operations txx9wdt_fops = ;
static struct miscdevice txx9wdt_miscdev = ;
static int __init txx9wdt_probe(struct platform_device *dev)
static int __exit txx9wdt_remove(struct platform_device *dev)
static void txx9wdt_shutdown(struct platform_device *dev)
static struct platform_driver txx9wdt_driver = ;
static int __init watchdog_init(void)
static void __exit watchdog_exit(void)
module_init(watchdog_init);
module_exit(watchdog_exit);
MODULE_DESCRIPTION("TXx9 Watchdog Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
MODULE_ALIAS("platform:txx9wdt");
