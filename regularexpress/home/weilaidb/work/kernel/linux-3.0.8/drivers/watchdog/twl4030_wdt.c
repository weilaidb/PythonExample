#define TWL4030_WATCHDOG_CFG_REG_OFFS	0x3
#define TWL4030_WDT_STATE_OPEN		0x1
#define TWL4030_WDT_STATE_ACTIVE	0x8
static struct platform_device *twl4030_wdt_dev;
struct twl4030_wdt ;
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started "
"(default=" __MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static int twl4030_wdt_write(unsigned char val)
static int twl4030_wdt_enable(struct twl4030_wdt *wdt)
static int twl4030_wdt_disable(struct twl4030_wdt *wdt)
static int twl4030_wdt_set_timeout(struct twl4030_wdt *wdt, int timeout)
static ssize_t twl4030_wdt_write_fop(struct file *file,
const char __user *data, size_t len, loff_t *ppos)
static long twl4030_wdt_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static int twl4030_wdt_open(struct inode *inode, struct file *file)
static int twl4030_wdt_release(struct inode *inode, struct file *file)
static const struct file_operations twl4030_wdt_fops = ;
static int __devinit twl4030_wdt_probe(struct platform_device *pdev)
static int __devexit twl4030_wdt_remove(struct platform_device *pdev)
static int twl4030_wdt_suspend(struct platform_device *pdev, pm_message_t state)
static int twl4030_wdt_resume(struct platform_device *pdev)
#define twl4030_wdt_suspend        NULL
#define twl4030_wdt_resume         NULL
static struct platform_driver twl4030_wdt_driver = ;
static int __devinit twl4030_wdt_init(void)
module_init(twl4030_wdt_init);
static void __devexit twl4030_wdt_exit(void)
module_exit(twl4030_wdt_exit);
MODULE_AUTHOR("Nokia Corporation");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
MODULE_ALIAS("platform:twl4030_wdt");
