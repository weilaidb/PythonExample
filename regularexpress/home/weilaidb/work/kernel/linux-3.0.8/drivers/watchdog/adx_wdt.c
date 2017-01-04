#define WATCHDOG_NAME "adx-wdt"
#define	ADX_WDT_CONTROL		0x00
#define	ADX_WDT_CONTROL_ENABLE	(1 << 0)
#define	ADX_WDT_CONTROL_nRESET	(1 << 1)
#define	ADX_WDT_TIMEOUT		0x08
static struct platform_device *adx_wdt_dev;
static unsigned long driver_open;
#define	WDT_STATE_STOP	0
#define	WDT_STATE_START	1
struct adx_wdt ;
static const struct watchdog_info adx_wdt_info = ;
static void adx_wdt_start_locked(struct adx_wdt *wdt)
static void adx_wdt_start(struct adx_wdt *wdt)
static void adx_wdt_stop_locked(struct adx_wdt *wdt)
static void adx_wdt_stop(struct adx_wdt *wdt)
static void adx_wdt_set_timeout(struct adx_wdt *wdt, unsigned long seconds)
static void adx_wdt_get_timeout(struct adx_wdt *wdt, unsigned long *seconds)
static void adx_wdt_keepalive(struct adx_wdt *wdt)
static int adx_wdt_open(struct inode *inode, struct file *file)
static int adx_wdt_release(struct inode *inode, struct file *file)
static long adx_wdt_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static ssize_t adx_wdt_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static const struct file_operations adx_wdt_fops = ;
static struct miscdevice adx_wdt_miscdev = ;
static int __devinit adx_wdt_probe(struct platform_device *pdev)
static int __devexit adx_wdt_remove(struct platform_device *pdev)
static void adx_wdt_shutdown(struct platform_device *pdev)
static int adx_wdt_suspend(struct device *dev)
static int adx_wdt_resume(struct device *dev)
static const struct dev_pm_ops adx_wdt_pm_ops = ;
#  define ADX_WDT_PM_OPS	(&adx_wdt_pm_ops)
#  define ADX_WDT_PM_OPS	NULL
static struct platform_driver adx_wdt_driver = ;
static int __init adx_wdt_init(void)
static void __exit adx_wdt_exit(void)
module_init(adx_wdt_init);
module_exit(adx_wdt_exit);
MODULE_DESCRIPTION("Avionic Design Xanthos Watchdog Driver");
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Thierry Reding <thierry.reding@avionic-design.de>");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
