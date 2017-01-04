#define WDT_VERSION	"0.3"
#define PFX		"ep93xx_wdt: "
#define WDT_TIMEOUT 30
static int nowayout = WATCHDOG_NOWAYOUT;
static int timeout = WDT_TIMEOUT;
static struct timer_list timer;
static unsigned long next_heartbeat;
static unsigned long wdt_status;
static unsigned long boot_status;
#define WDT_IN_USE		0
#define WDT_OK_TO_CLOSE		1
#define EP93XX_WDT_REG(x)	(EP93XX_WATCHDOG_BASE + (x))
#define EP93XX_WDT_WATCHDOG	EP93XX_WDT_REG(0x00)
#define EP93XX_WDT_WDSTATUS	EP93XX_WDT_REG(0x04)
#define WDT_INTERVAL (HZ/5)
static void wdt_enable(void)
static void wdt_disable(void)
static inline void wdt_ping(void)
static void wdt_startup(void)
static void wdt_shutdown(void)
static void wdt_keepalive(void)
static int ep93xx_wdt_open(struct inode *inode, struct file *file)
static ssize_t
ep93xx_wdt_write(struct file *file, const char __user *data, size_t len,
loff_t *ppos)
static const struct watchdog_info ident = ;
static long ep93xx_wdt_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static int ep93xx_wdt_release(struct inode *inode, struct file *file)
static const struct file_operations ep93xx_wdt_fops = ;
static struct miscdevice ep93xx_wdt_miscdev = ;
static void ep93xx_timer_ping(unsigned long data)
static int __init ep93xx_wdt_init(void)
static void __exit ep93xx_wdt_exit(void)
module_init(ep93xx_wdt_init);
module_exit(ep93xx_wdt_exit);
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started");
module_param(timeout, int, 0);
MODULE_PARM_DESC(timeout,
"Watchdog timeout in seconds. (1<=timeout<=3600, default="
__MODULE_STRING(WDT_TIMEOUT) ")");
MODULE_AUTHOR("Ray Lehtiniemi <rayl@mail.com>,"
"Alessandro Zummo <a.zummo@towertech.it>");
MODULE_DESCRIPTION("EP93xx Watchdog");
MODULE_LICENSE("GPL");
MODULE_VERSION(WDT_VERSION);
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
