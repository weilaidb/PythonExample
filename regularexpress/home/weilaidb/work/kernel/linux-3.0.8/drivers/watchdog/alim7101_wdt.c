#define OUR_NAME "alim7101_wdt"
#define PFX OUR_NAME ": "
#define WDT_ENABLE 0x9C
#define WDT_DISABLE 0x8C
#define ALI_7101_WDT    0x92
#define ALI_7101_GPIO   0x7D
#define ALI_7101_GPIO_O 0x7E
#define ALI_WDT_ARM     0x01
#define WDT_INTERVAL (HZ/4+1)
#define WATCHDOG_TIMEOUT 30
static int timeout = WATCHDOG_TIMEOUT;
module_param(timeout, int, 0);
MODULE_PARM_DESC(timeout,
"Watchdog timeout in seconds. (1<=timeout<=3600, default="
__MODULE_STRING(WATCHDOG_TIMEOUT) ")");
static int use_gpio;
module_param(use_gpio, int, 0);
MODULE_PARM_DESC(use_gpio,
"Use the gpio watchdog (required by old cobalt boards).");
static void wdt_timer_ping(unsigned long);
static DEFINE_TIMER(timer, wdt_timer_ping, 0, 1);
static unsigned long next_heartbeat;
static unsigned long wdt_is_open;
static char wdt_expect_close;
static struct pci_dev *alim7101_pmu;
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static void wdt_timer_ping(unsigned long data)
static void wdt_change(int writeval)
static void wdt_startup(void)
static void wdt_turnoff(void)
static void wdt_keepalive(void)
static ssize_t fop_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static int fop_open(struct inode *inode, struct file *file)
static int fop_close(struct inode *inode, struct file *file)
static long fop_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static const struct file_operations wdt_fops = ;
static struct miscdevice wdt_miscdev = ;
static int wdt_notify_sys(struct notifier_block *this,
unsigned long code, void *unused)
static struct notifier_block wdt_notifier = ;
static void __exit alim7101_wdt_unload(void)
static int __init alim7101_wdt_init(void)
module_init(alim7101_wdt_init);
module_exit(alim7101_wdt_unload);
static DEFINE_PCI_DEVICE_TABLE(alim7101_pci_tbl) __used = ;
MODULE_DEVICE_TABLE(pci, alim7101_pci_tbl);
MODULE_AUTHOR("Steve Hill");
MODULE_DESCRIPTION("ALi M7101 PMU Computer Watchdog Timer driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
