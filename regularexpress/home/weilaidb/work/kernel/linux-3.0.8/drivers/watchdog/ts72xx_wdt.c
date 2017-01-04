#define TS72XX_WDT_FEED_VAL		0x05
#define TS72XX_WDT_DEFAULT_TIMEOUT	8
static int timeout = TS72XX_WDT_DEFAULT_TIMEOUT;
module_param(timeout, int, 0);
MODULE_PARM_DESC(timeout, "Watchdog timeout in seconds. "
"(1 <= timeout <= 8, default="
__MODULE_STRING(TS72XX_WDT_DEFAULT_TIMEOUT)
")");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Disable watchdog shutdown on close");
struct ts72xx_wdt ;
struct platform_device *ts72xx_wdt_pdev;
static const struct  ts72xx_wdt_map[] = ;
static int timeout_to_regval(int new_timeout)
static int regval_to_timeout(int regval)
static inline void ts72xx_wdt_kick(struct ts72xx_wdt *wdt)
static void ts72xx_wdt_start(struct ts72xx_wdt *wdt)
static void ts72xx_wdt_stop(struct ts72xx_wdt *wdt)
static int ts72xx_wdt_open(struct inode *inode, struct file *file)
static int ts72xx_wdt_release(struct inode *inode, struct file *file)
static ssize_t ts72xx_wdt_write(struct file *file,
const char __user *data,
size_t len,
loff_t *ppos)
static const struct watchdog_info winfo = ;
static long ts72xx_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct file_operations ts72xx_wdt_fops = ;
static struct miscdevice ts72xx_wdt_miscdev = ;
static __devinit int ts72xx_wdt_probe(struct platform_device *pdev)
static __devexit int ts72xx_wdt_remove(struct platform_device *pdev)
static struct platform_driver ts72xx_wdt_driver = ;
static __init int ts72xx_wdt_init(void)
module_init(ts72xx_wdt_init);
static __exit void ts72xx_wdt_exit(void)
module_exit(ts72xx_wdt_exit);
MODULE_AUTHOR("Mika Westerberg <mika.westerberg@iki.fi>");
MODULE_DESCRIPTION("TS-72xx SBC Watchdog");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:ts72xx-wdt");
