#define OUR_NAME "sc520_wdt"
#define PFX OUR_NAME ": "
#define WDT_INTERVAL (HZ/4+1)
#define WATCHDOG_TIMEOUT 30
static int timeout = WATCHDOG_TIMEOUT;
module_param(timeout, int, 0);
MODULE_PARM_DESC(timeout,
"Watchdog timeout in seconds. (1 <= timeout <= 3600, default="
__MODULE_STRING(WATCHDOG_TIMEOUT) ")");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
#define MMCR_BASE	0xfffef000
#define OFFS_WDTMRCTL	0xCB0
#define WDT_EXP_SEL_01	0x0001
#define WDT_EXP_SEL_02	0x0002
#define WDT_EXP_SEL_03	0x0004
#define WDT_EXP_SEL_04	0x0008
#define WDT_EXP_SEL_05	0x0010
#define WDT_EXP_SEL_06	0x0020
#define WDT_EXP_SEL_07	0x0040
#define WDT_EXP_SEL_08	0x0080
#define WDT_IRQ_FLG	0x1000
#define WDT_WRST_ENB	0x4000
#define WDT_ENB		0x8000
static __u16 __iomem *wdtmrctl;
static void wdt_timer_ping(unsigned long);
static DEFINE_TIMER(timer, wdt_timer_ping, 0, 0);
static unsigned long next_heartbeat;
static unsigned long wdt_is_open;
static char wdt_expect_close;
static DEFINE_SPINLOCK(wdt_spinlock);
static void wdt_timer_ping(unsigned long data)
static void wdt_config(int writeval)
static int wdt_startup(void)
static int wdt_turnoff(void)
static int wdt_keepalive(void)
static int wdt_set_heartbeat(int t)
static ssize_t fop_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static int fop_open(struct inode *inode, struct file *file)
static int fop_close(struct inode *inode, struct file *file)
static long fop_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static const struct file_operations wdt_fops = ;
static struct miscdevice wdt_miscdev = ;
static int wdt_notify_sys(struct notifier_block *this, unsigned long code,
void *unused)
static struct notifier_block wdt_notifier = ;
static void __exit sc520_wdt_unload(void)
static int __init sc520_wdt_init(void)
module_init(sc520_wdt_init);
module_exit(sc520_wdt_unload);
MODULE_AUTHOR("Scott and Bill Jennings");
MODULE_DESCRIPTION(
"Driver for watchdog timer in AMD \"Elan\" SC520 uProcessor");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
