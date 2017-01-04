#define LTQ_WDT_PW1		0x00BE0000
#define LTQ_WDT_PW2		0x00DC0000
#define LTQ_WDT_CR		0x0
#define LTQ_WDT_SR		0x8
#define LTQ_WDT_SR_EN		(0x1 << 31)
#define LTQ_WDT_SR_PWD		(0x3 << 26)
#define LTQ_WDT_SR_CLKDIV	(0x3 << 24)
#define LTQ_WDT_DIVIDER		0x40000
#define LTQ_MAX_TIMEOUT		((1 << 16) - 1)
static int nowayout = WATCHDOG_NOWAYOUT;
static void __iomem *ltq_wdt_membase;
static unsigned long ltq_io_region_clk_rate;
static unsigned long ltq_wdt_bootstatus;
static unsigned long ltq_wdt_in_use;
static int ltq_wdt_timeout = 30;
static int ltq_wdt_ok_to_close;
static void
ltq_wdt_enable(void)
static void
ltq_wdt_disable(void)
static ssize_t
ltq_wdt_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static struct watchdog_info ident = ;
static long
ltq_wdt_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static int
ltq_wdt_open(struct inode *inode, struct file *file)
static int
ltq_wdt_release(struct inode *inode, struct file *file)
static const struct file_operations ltq_wdt_fops = ;
static struct miscdevice ltq_wdt_miscdev = ;
static int __init
ltq_wdt_probe(struct platform_device *pdev)
static int __devexit
ltq_wdt_remove(struct platform_device *pdev)
static struct platform_driver ltq_wdt_driver = ;
static int __init
init_ltq_wdt(void)
static void __exit
exit_ltq_wdt(void)
module_init(init_ltq_wdt);
module_exit(exit_ltq_wdt);
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started");
MODULE_AUTHOR("John Crispin <blogic@openwrt.org>");
MODULE_DESCRIPTION("Lantiq SoC Watchdog");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
