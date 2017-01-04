#define OUR_NAME "w83877f_wdt"
#define PFX OUR_NAME ": "
#define ENABLE_W83877F_PORT 0x3F0
#define ENABLE_W83877F 0x87
#define DISABLE_W83877F 0xAA
#define WDT_PING 0x443
#define WDT_REGISTER 0x14
#define WDT_ENABLE 0x9C
#define WDT_DISABLE 0x8C
#define WDT_INTERVAL (HZ/4+1)
#define WATCHDOG_TIMEOUT 30
static int timeout = WATCHDOG_TIMEOUT;
module_param(timeout, int, 0);
MODULE_PARM_DESC(timeout,
"Watchdog timeout in seconds. (1<=timeout<=3600, default="
__MODULE_STRING(WATCHDOG_TIMEOUT) ")");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static void wdt_timer_ping(unsigned long);
static DEFINE_TIMER(timer, wdt_timer_ping, 0, 0);
static unsigned long next_heartbeat;
static unsigned long wdt_is_open;
static char wdt_expect_close;
static DEFINE_SPINLOCK(wdt_spinlock);
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
static int wdt_notify_sys(struct notifier_block *this, unsigned long code,
void *unused)
static struct notifier_block wdt_notifier = ;
static void __exit w83877f_wdt_unload(void)
static int __init w83877f_wdt_init(void)
module_init(w83877f_wdt_init);
module_exit(w83877f_wdt_unload);
MODULE_AUTHOR("Scott and Bill Jennings");
MODULE_DESCRIPTION("Driver for watchdog timer in w83877f chip");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
