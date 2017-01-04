#define WDT_DEFAULT_TIME	5
#define WDT_MAX_TIME		171
static int wdt_time = WDT_DEFAULT_TIME;
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(wdt_time, int, 0);
MODULE_PARM_DESC(wdt_time, "Watchdog time in seconds. (default="
__MODULE_STRING(WDT_DEFAULT_TIME) ")");
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static unsigned long ks8695wdt_busy;
static spinlock_t ks8695_lock;
static inline void ks8695_wdt_stop(void)
static inline void ks8695_wdt_start(void)
static inline void ks8695_wdt_reload(void)
static int ks8695_wdt_settimeout(int new_time)
static int ks8695_wdt_open(struct inode *inode, struct file *file)
static int ks8695_wdt_close(struct inode *inode, struct file *file)
static const struct watchdog_info ks8695_wdt_info = ;
static long ks8695_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static ssize_t ks8695_wdt_write(struct file *file, const char *data,
size_t len, loff_t *ppos)
static const struct file_operations ks8695wdt_fops = ;
static struct miscdevice ks8695wdt_miscdev = ;
static int __devinit ks8695wdt_probe(struct platform_device *pdev)
static int __devexit ks8695wdt_remove(struct platform_device *pdev)
static void ks8695wdt_shutdown(struct platform_device *pdev)
static int ks8695wdt_suspend(struct platform_device *pdev, pm_message_t message)
static int ks8695wdt_resume(struct platform_device *pdev)
#define ks8695wdt_suspend NULL
#define ks8695wdt_resume	NULL
static struct platform_driver ks8695wdt_driver = ;
static int __init ks8695_wdt_init(void)
static void __exit ks8695_wdt_exit(void)
module_init(ks8695_wdt_init);
module_exit(ks8695_wdt_exit);
MODULE_AUTHOR("Andrew Victor");
MODULE_DESCRIPTION("Watchdog driver for KS8695");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
MODULE_ALIAS("platform:ks8695_wdt");
