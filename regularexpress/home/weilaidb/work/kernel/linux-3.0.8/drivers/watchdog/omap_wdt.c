static struct platform_device *omap_wdt_dev;
static unsigned timer_margin;
module_param(timer_margin, uint, 0);
MODULE_PARM_DESC(timer_margin, "initial watchdog timeout (in seconds)");
static unsigned int wdt_trgr_pattern = 0x1234;
static spinlock_t wdt_lock;
struct omap_wdt_dev ;
static void omap_wdt_ping(struct omap_wdt_dev *wdev)
static void omap_wdt_enable(struct omap_wdt_dev *wdev)
static void omap_wdt_disable(struct omap_wdt_dev *wdev)
static void omap_wdt_adjust_timeout(unsigned new_timeout)
static void omap_wdt_set_timeout(struct omap_wdt_dev *wdev)
static int omap_wdt_open(struct inode *inode, struct file *file)
static int omap_wdt_release(struct inode *inode, struct file *file)
static ssize_t omap_wdt_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static long omap_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct file_operations omap_wdt_fops = ;
static int __devinit omap_wdt_probe(struct platform_device *pdev)
static void omap_wdt_shutdown(struct platform_device *pdev)
static int __devexit omap_wdt_remove(struct platform_device *pdev)
static int omap_wdt_suspend(struct platform_device *pdev, pm_message_t state)
static int omap_wdt_resume(struct platform_device *pdev)
#define	omap_wdt_suspend	NULL
#define	omap_wdt_resume		NULL
static struct platform_driver omap_wdt_driver = ;
static int __init omap_wdt_init(void)
static void __exit omap_wdt_exit(void)
module_init(omap_wdt_init);
module_exit(omap_wdt_exit);
MODULE_AUTHOR("George G. Davis");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
MODULE_ALIAS("platform:omap_wdt");
