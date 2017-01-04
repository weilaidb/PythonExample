#define TIMEOUT_MIN		1
#define TIMEOUT_MAX		2
#define TIMEOUT_DEFAULT		TIMEOUT_MAX
static int timeout =  TIMEOUT_DEFAULT;
module_param(timeout, int, 0);
MODULE_PARM_DESC(timeout,
"Timeout value. Limited to be 1 or 2 seconds. (default="
__MODULE_STRING(TIMEOUT_DEFAULT) ")");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
#define WDT_CTRL		0x00
#define WDT_CTRL_EN		   0
#define WDT_CTRL_PSEL		   8
#define WDT_CTRL_KEY		  24
#define WDT_CLR			0x04
#define WDT_RCAUSE		0x10
#define WDT_RCAUSE_POR		   0
#define WDT_RCAUSE_EXT		   2
#define WDT_RCAUSE_WDT		   3
#define WDT_RCAUSE_JTAG		   4
#define WDT_RCAUSE_SERP		   5
#define WDT_BIT(name)		(1 << WDT_##name)
#define WDT_BF(name, value)	((value) << WDT_##name)
#define wdt_readl(dev, reg)				\
__raw_readl((dev)->regs + WDT_##reg)
#define wdt_writel(dev, reg, value)			\
__raw_writel((value), (dev)->regs + WDT_##reg)
struct wdt_at32ap700x ;
static struct wdt_at32ap700x *wdt;
static char expect_release;
static inline void at32_wdt_stop(void)
static inline void at32_wdt_start(void)
static inline void at32_wdt_pat(void)
static int at32_wdt_open(struct inode *inode, struct file *file)
static int at32_wdt_close(struct inode *inode, struct file *file)
static int at32_wdt_settimeout(int time)
static int at32_wdt_get_status(void)
static const struct watchdog_info at32_wdt_info = ;
static long at32_wdt_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static ssize_t at32_wdt_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static const struct file_operations at32_wdt_fops = ;
static int __init at32_wdt_probe(struct platform_device *pdev)
static int __exit at32_wdt_remove(struct platform_device *pdev)
static void at32_wdt_shutdown(struct platform_device *pdev)
static int at32_wdt_suspend(struct platform_device *pdev, pm_message_t message)
static int at32_wdt_resume(struct platform_device *pdev)
#define at32_wdt_suspend NULL
#define at32_wdt_resume NULL
MODULE_ALIAS("platform:at32_wdt");
static struct platform_driver at32_wdt_driver = ;
static int __init at32_wdt_init(void)
module_init(at32_wdt_init);
static void __exit at32_wdt_exit(void)
module_exit(at32_wdt_exit);
MODULE_AUTHOR("Hans-Christian Egtvedt <egtvedt@samfundet.no>");
MODULE_DESCRIPTION("Watchdog driver for Atmel AT32AP700X");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
