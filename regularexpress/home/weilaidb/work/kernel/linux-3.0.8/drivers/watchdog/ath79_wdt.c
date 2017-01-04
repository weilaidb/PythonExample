#define DRIVER_NAME	"ath79-wdt"
#define WDT_TIMEOUT	15
#define WDOG_CTRL_LAST_RESET	BIT(31)
#define WDOG_CTRL_ACTION_MASK	3
#define WDOG_CTRL_ACTION_NONE	0
#define WDOG_CTRL_ACTION_GPI	1
#define WDOG_CTRL_ACTION_NMI	2
#define WDOG_CTRL_ACTION_FCR	3
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started "
"(default=" __MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static int timeout = WDT_TIMEOUT;
module_param(timeout, int, 0);
MODULE_PARM_DESC(timeout, "Watchdog timeout in seconds "
"(default=" __MODULE_STRING(WDT_TIMEOUT) "s)");
static unsigned long wdt_flags;
#define WDT_FLAGS_BUSY		0
#define WDT_FLAGS_EXPECT_CLOSE	1
static struct clk *wdt_clk;
static unsigned long wdt_freq;
static int boot_status;
static int max_timeout;
static inline void ath79_wdt_keepalive(void)
static inline void ath79_wdt_enable(void)
static inline void ath79_wdt_disable(void)
static int ath79_wdt_set_timeout(int val)
static int ath79_wdt_open(struct inode *inode, struct file *file)
static int ath79_wdt_release(struct inode *inode, struct file *file)
static ssize_t ath79_wdt_write(struct file *file, const char *data,
size_t len, loff_t *ppos)
static const struct watchdog_info ath79_wdt_info = ;
static long ath79_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct file_operations ath79_wdt_fops = ;
static struct miscdevice ath79_wdt_miscdev = ;
static int __devinit ath79_wdt_probe(struct platform_device *pdev)
static int __devexit ath79_wdt_remove(struct platform_device *pdev)
static void ath97_wdt_shutdown(struct platform_device *pdev)
static struct platform_driver ath79_wdt_driver = ;
static int __init ath79_wdt_init(void)
module_init(ath79_wdt_init);
static void __exit ath79_wdt_exit(void)
module_exit(ath79_wdt_exit);
MODULE_DESCRIPTION("Atheros AR71XX/AR724X/AR913X hardware watchdog driver");
MODULE_AUTHOR("Gabor Juhos <juhosg@openwrt.org");
MODULE_AUTHOR("Imre Kaloz <kaloz@openwrt.org");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:" DRIVER_NAME);
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
