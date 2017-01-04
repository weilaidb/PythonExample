#define DEFAULT_HEARTBEAT 60
#define MAX_HEARTBEAT     60
static int heartbeat = DEFAULT_HEARTBEAT;
static int nowayout  = WATCHDOG_NOWAYOUT;
#define MAX6369_WDSET	(7 << 0)
#define MAX6369_WDI	(1 << 3)
static DEFINE_SPINLOCK(io_lock);
static unsigned long wdt_status;
#define WDT_IN_USE	0
#define WDT_RUNNING	1
#define WDT_OK_TO_CLOSE 2
static int nodelay;
static struct resource	*wdt_mem;
static void __iomem	*wdt_base;
static struct platform_device *max63xx_pdev;
struct max63xx_timeout ;
static struct max63xx_timeout max6369_table[] = ;
static struct max63xx_timeout max6371_table[] = ;
static struct max63xx_timeout max6373_table[] = ;
static struct max63xx_timeout *current_timeout;
static struct max63xx_timeout *
max63xx_select_timeout(struct max63xx_timeout *table, int value)
static void max63xx_wdt_ping(void)
static void max63xx_wdt_enable(struct max63xx_timeout *entry)
static void max63xx_wdt_disable(void)
static int max63xx_wdt_open(struct inode *inode, struct file *file)
static ssize_t max63xx_wdt_write(struct file *file, const char *data,
size_t len, loff_t *ppos)
static const struct watchdog_info ident = ;
static long max63xx_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int max63xx_wdt_release(struct inode *inode, struct file *file)
static const struct file_operations max63xx_wdt_fops = ;
static struct miscdevice max63xx_wdt_miscdev = ;
static int __devinit max63xx_wdt_probe(struct platform_device *pdev)
static int __devexit max63xx_wdt_remove(struct platform_device *pdev)
static struct platform_device_id max63xx_id_table[] = ;
MODULE_DEVICE_TABLE(platform, max63xx_id_table);
static struct platform_driver max63xx_wdt_driver = ;
static int __init max63xx_wdt_init(void)
static void __exit max63xx_wdt_exit(void)
module_init(max63xx_wdt_init);
module_exit(max63xx_wdt_exit);
MODULE_AUTHOR("Marc Zyngier <maz@misterjones.org>");
MODULE_DESCRIPTION("max63xx Watchdog Driver");
module_param(heartbeat, int, 0);
MODULE_PARM_DESC(heartbeat,
"Watchdog heartbeat period in seconds from 1 to "
__MODULE_STRING(MAX_HEARTBEAT) ", default "
__MODULE_STRING(DEFAULT_HEARTBEAT));
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
module_param(nodelay, int, 0);
MODULE_PARM_DESC(nodelay,
"Force selection of a timeout setting without initial delay "
"(max6373/74 only, default=0)");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
