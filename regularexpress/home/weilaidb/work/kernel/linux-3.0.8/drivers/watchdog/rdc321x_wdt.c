#define RDC_WDT_MASK	0x80000000
#define RDC_WDT_EN	0x00800000
#define RDC_WDT_WTI	0x00200000
#define RDC_WDT_RST	0x00100000
#define RDC_WDT_WIF	0x00040000
#define RDC_WDT_IRT	0x00000100
#define RDC_WDT_CNT	0x00000001
#define RDC_CLS_TMR	0x80003844
#define RDC_WDT_INTERVAL	(HZ/10+1)
static int ticks = 1000;
static struct  rdc321x_wdt_device;
static void rdc321x_wdt_trigger(unsigned long unused)
static void rdc321x_wdt_reset(void)
static void rdc321x_wdt_start(void)
static int rdc321x_wdt_stop(void)
static int rdc321x_wdt_open(struct inode *inode, struct file *file)
static int rdc321x_wdt_release(struct inode *inode, struct file *file)
static long rdc321x_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static ssize_t rdc321x_wdt_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations rdc321x_wdt_fops = ;
static struct miscdevice rdc321x_wdt_misc = ;
static int __devinit rdc321x_wdt_probe(struct platform_device *pdev)
static int __devexit rdc321x_wdt_remove(struct platform_device *pdev)
static struct platform_driver rdc321x_wdt_driver = ;
static int __init rdc321x_wdt_init(void)
static void __exit rdc321x_wdt_exit(void)
module_init(rdc321x_wdt_init);
module_exit(rdc321x_wdt_exit);
MODULE_AUTHOR("Florian Fainelli <florian@openwrt.org>");
MODULE_DESCRIPTION("RDC321x watchdog driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
