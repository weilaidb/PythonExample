#define MTX1_WDT_INTERVAL	(5 * HZ)
static int ticks = 100 * HZ;
static struct  mtx1_wdt_device;
static void mtx1_wdt_trigger(unsigned long unused)
static void mtx1_wdt_reset(void)
static void mtx1_wdt_start(void)
static int mtx1_wdt_stop(void)
static int mtx1_wdt_open(struct inode *inode, struct file *file)
static int mtx1_wdt_release(struct inode *inode, struct file *file)
static long mtx1_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static ssize_t mtx1_wdt_write(struct file *file, const char *buf,
size_t count, loff_t *ppos)
static const struct file_operations mtx1_wdt_fops = ;
static struct miscdevice mtx1_wdt_misc = ;
static int __devinit mtx1_wdt_probe(struct platform_device *pdev)
static int __devexit mtx1_wdt_remove(struct platform_device *pdev)
static struct platform_driver mtx1_wdt_driver = ;
static int __init mtx1_wdt_init(void)
static void __exit mtx1_wdt_exit(void)
module_init(mtx1_wdt_init);
module_exit(mtx1_wdt_exit);
MODULE_AUTHOR("Michael Stickel, Florian Fainelli");
MODULE_DESCRIPTION("Driver for the MTX-1 watchdog");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
MODULE_ALIAS("platform:mtx1-wdt");
