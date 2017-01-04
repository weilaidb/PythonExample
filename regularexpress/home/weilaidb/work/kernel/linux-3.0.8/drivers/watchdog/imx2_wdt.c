#define DRIVER_NAME "imx2-wdt"
#define IMX2_WDT_WCR		0x00
#define IMX2_WDT_WCR_WT		(0xFF << 8)
#define IMX2_WDT_WCR_WRE	(1 << 3)
#define IMX2_WDT_WCR_WDE	(1 << 2)
#define IMX2_WDT_WSR		0x02
#define IMX2_WDT_SEQ1		0x5555
#define IMX2_WDT_SEQ2		0xAAAA
#define IMX2_WDT_MAX_TIME	128
#define IMX2_WDT_DEFAULT_TIME	60
#define WDOG_SEC_TO_COUNT(s)	((s * 2 - 1) << 8)
#define IMX2_WDT_STATUS_OPEN	0
#define IMX2_WDT_STATUS_STARTED	1
#define IMX2_WDT_EXPECT_CLOSE	2
static struct  imx2_wdt;
static struct miscdevice imx2_wdt_miscdev;
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static unsigned timeout = IMX2_WDT_DEFAULT_TIME;
module_param(timeout, uint, 0);
MODULE_PARM_DESC(timeout, "Watchdog timeout in seconds (default="
__MODULE_STRING(IMX2_WDT_DEFAULT_TIME) ")");
static const struct watchdog_info imx2_wdt_info = ;
static inline void imx2_wdt_setup(void)
static inline void imx2_wdt_ping(void)
static void imx2_wdt_timer_ping(unsigned long arg)
static void imx2_wdt_start(void)
static void imx2_wdt_stop(void)
static void imx2_wdt_set_timeout(int new_timeout)
static int imx2_wdt_open(struct inode *inode, struct file *file)
static int imx2_wdt_close(struct inode *inode, struct file *file)
static long imx2_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static ssize_t imx2_wdt_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static const struct file_operations imx2_wdt_fops = ;
static struct miscdevice imx2_wdt_miscdev = ;
static int __init imx2_wdt_probe(struct platform_device *pdev)
static int __exit imx2_wdt_remove(struct platform_device *pdev)
static void imx2_wdt_shutdown(struct platform_device *pdev)
static struct platform_driver imx2_wdt_driver = ;
static int __init imx2_wdt_init(void)
module_init(imx2_wdt_init);
static void __exit imx2_wdt_exit(void)
module_exit(imx2_wdt_exit);
MODULE_AUTHOR("Wolfram Sang");
MODULE_DESCRIPTION("Watchdog driver for IMX2 and later");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
MODULE_ALIAS("platform:" DRIVER_NAME);
