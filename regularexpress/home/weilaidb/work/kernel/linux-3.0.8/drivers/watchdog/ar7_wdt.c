#define DRVNAME "ar7_wdt"
#define LONGNAME "TI AR7 Watchdog Timer"
MODULE_AUTHOR("Nicolas Thill <nico@openwrt.org>");
MODULE_DESCRIPTION(LONGNAME);
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
static int margin = 60;
module_param(margin, int, 0);
MODULE_PARM_DESC(margin, "Watchdog margin in seconds");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Disable watchdog shutdown on close");
#define READ_REG(x) readl((void __iomem *)&(x))
#define WRITE_REG(x, v) writel((v), (void __iomem *)&(x))
struct ar7_wdt ;
static unsigned long wdt_is_open;
static spinlock_t wdt_lock;
static unsigned expect_close;
#define prescale_value 0xffff
static struct resource *ar7_regs_wdt;
static struct ar7_wdt *ar7_wdt;
static struct clk *vbus_clk;
static void ar7_wdt_kick(u32 value)
static void ar7_wdt_prescale(u32 value)
static void ar7_wdt_change(u32 value)
static void ar7_wdt_disable(u32 value)
static void ar7_wdt_update_margin(int new_margin)
static void ar7_wdt_enable_wdt(void)
static void ar7_wdt_disable_wdt(void)
static int ar7_wdt_open(struct inode *inode, struct file *file)
static int ar7_wdt_release(struct inode *inode, struct file *file)
static ssize_t ar7_wdt_write(struct file *file, const char *data,
size_t len, loff_t *ppos)
static long ar7_wdt_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static const struct file_operations ar7_wdt_fops = ;
static struct miscdevice ar7_wdt_miscdev = ;
static int __devinit ar7_wdt_probe(struct platform_device *pdev)
static int __devexit ar7_wdt_remove(struct platform_device *pdev)
static void ar7_wdt_shutdown(struct platform_device *pdev)
static struct platform_driver ar7_wdt_driver = ;
static int __init ar7_wdt_init(void)
static void __exit ar7_wdt_cleanup(void)
module_init(ar7_wdt_init);
module_exit(ar7_wdt_cleanup);
