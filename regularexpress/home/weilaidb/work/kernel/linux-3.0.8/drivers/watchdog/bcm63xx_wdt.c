#define PFX KBUILD_MODNAME
#define WDT_HZ		50000000
#define WDT_DEFAULT_TIME	30
#define WDT_MAX_TIME		256
static struct  bcm63xx_wdt_device;
static int expect_close;
static int wdt_time = WDT_DEFAULT_TIME;
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static void bcm63xx_wdt_hw_start(void)
static void bcm63xx_wdt_hw_stop(void)
static void bcm63xx_wdt_isr(void *data)
static void bcm63xx_timer_tick(unsigned long unused)
static void bcm63xx_wdt_pet(void)
static void bcm63xx_wdt_start(void)
static void bcm63xx_wdt_pause(void)
static int bcm63xx_wdt_settimeout(int new_time)
static int bcm63xx_wdt_open(struct inode *inode, struct file *file)
static int bcm63xx_wdt_release(struct inode *inode, struct file *file)
static ssize_t bcm63xx_wdt_write(struct file *file, const char *data,
size_t len, loff_t *ppos)
static struct watchdog_info bcm63xx_wdt_info = ;
static long bcm63xx_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct file_operations bcm63xx_wdt_fops = ;
static struct miscdevice bcm63xx_wdt_miscdev = ;
static int __devinit bcm63xx_wdt_probe(struct platform_device *pdev)
static int __devexit bcm63xx_wdt_remove(struct platform_device *pdev)
static void bcm63xx_wdt_shutdown(struct platform_device *pdev)
static struct platform_driver bcm63xx_wdt = ;
static int __init bcm63xx_wdt_init(void)
static void __exit bcm63xx_wdt_exit(void)
module_init(bcm63xx_wdt_init);
module_exit(bcm63xx_wdt_exit);
MODULE_AUTHOR("Miguel Gaio <miguel.gaio@efixo.com>");
MODULE_AUTHOR("Florian Fainelli <florian@openwrt.org>");
MODULE_DESCRIPTION("Driver for the Broadcom BCM63xx SoC watchdog");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
MODULE_ALIAS("platform:bcm63xx-wdt");
