#define PFX KBUILD_MODNAME ": "
#define VERSION "1.0"
static struct  rc32434_wdt_device;
static struct integ __iomem *wdt_reg;
static int expect_close;
extern unsigned int idt_cpu_freq;
#define WTCOMP2SEC(x)	(x / idt_cpu_freq)
#define SEC2WTCOMP(x)	(x * idt_cpu_freq)
#define WATCHDOG_TIMEOUT 20
static int timeout = WATCHDOG_TIMEOUT;
module_param(timeout, int, 0);
MODULE_PARM_DESC(timeout, "Watchdog timeout value, in seconds (default="
__MODULE_STRING(WATCHDOG_TIMEOUT) ")");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
#define SET_BITS(addr, or, nand) \
writel((readl(&addr) | or) & ~nand, &addr)
static int rc32434_wdt_set(int new_timeout)
static void rc32434_wdt_start(void)
static void rc32434_wdt_stop(void)
static void rc32434_wdt_ping(void)
static int rc32434_wdt_open(struct inode *inode, struct file *file)
static int rc32434_wdt_release(struct inode *inode, struct file *file)
static ssize_t rc32434_wdt_write(struct file *file, const char *data,
size_t len, loff_t *ppos)
static long rc32434_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct file_operations rc32434_wdt_fops = ;
static struct miscdevice rc32434_wdt_miscdev = ;
static char banner[] __devinitdata = KERN_INFO PFX
"Watchdog Timer version " VERSION ", timer margin: %d sec\n";
static int __devinit rc32434_wdt_probe(struct platform_device *pdev)
static int __devexit rc32434_wdt_remove(struct platform_device *pdev)
static void rc32434_wdt_shutdown(struct platform_device *pdev)
static struct platform_driver rc32434_wdt_driver = ;
static int __init rc32434_wdt_init(void)
static void __exit rc32434_wdt_exit(void)
module_init(rc32434_wdt_init);
module_exit(rc32434_wdt_exit);
MODULE_AUTHOR("Ondrej Zajicek <santiago@crfreenet.org>,"
"Florian Fainelli <florian@openwrt.org>");
MODULE_DESCRIPTION("Driver for the IDT RC32434 SoC watchdog");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
