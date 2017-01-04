#define PFX "pnx833x: "
#define WATCHDOG_TIMEOUT 30
#define WATCHDOG_COUNT_FREQUENCY 68000000U
#define	PNX_WATCHDOG_TIMEOUT	(WATCHDOG_TIMEOUT * WATCHDOG_COUNT_FREQUENCY)
#define PNX_TIMEOUT_VALUE	2040000000U
#define PNX833X_CONFIG                      (0x07000U)
#define PNX833X_CONFIG_CPU_WATCHDOG         (0x54)
#define PNX833X_CONFIG_CPU_WATCHDOG_COMPARE (0x58)
#define PNX833X_CONFIG_CPU_COUNTERS_CONTROL (0x1c)
#define PNX833X_RESET                       (0x08000U)
#define PNX833X_RESET_CONFIG                (0x08)
static int pnx833x_wdt_alive;
static int pnx833x_wdt_timeout = PNX_WATCHDOG_TIMEOUT;
module_param(pnx833x_wdt_timeout, int, 0);
MODULE_PARM_DESC(timeout, "Watchdog timeout in Mhz. (68Mhz clock), default="
__MODULE_STRING(PNX_TIMEOUT_VALUE) "(30 seconds).");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
#define START_DEFAULT	1
static int start_enabled = START_DEFAULT;
module_param(start_enabled, int, 0);
MODULE_PARM_DESC(start_enabled, "Watchdog is started on module insertion "
"(default=" __MODULE_STRING(START_DEFAULT) ")");
static void pnx833x_wdt_start(void)
static void pnx833x_wdt_stop(void)
static void pnx833x_wdt_ping(void)
static int pnx833x_wdt_open(struct inode *inode, struct file *file)
static int pnx833x_wdt_release(struct inode *inode, struct file *file)
static ssize_t pnx833x_wdt_write(struct file *file, const char *data, size_t len, loff_t *ppos)
static long pnx833x_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int pnx833x_wdt_notify_sys(struct notifier_block *this,
unsigned long code, void *unused)
static const struct file_operations pnx833x_wdt_fops = ;
static struct miscdevice pnx833x_wdt_miscdev = ;
static struct notifier_block pnx833x_wdt_notifier = ;
static char banner[] __initdata =
KERN_INFO PFX "Hardware Watchdog Timer for PNX833x: Version 0.1\n";
static int __init watchdog_init(void)
static void __exit watchdog_exit(void)
module_init(watchdog_init);
module_exit(watchdog_exit);
MODULE_AUTHOR("Daniel Laird/Andre McCurdy");
MODULE_DESCRIPTION("Hardware Watchdog Device for PNX833x");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
