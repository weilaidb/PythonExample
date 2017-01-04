#define WATCHDOG_VERSION  "1.00"
#define WATCHDOG_NAME     "W83977F WDT"
#define PFX WATCHDOG_NAME ": "
#define DRIVER_VERSION    WATCHDOG_NAME " driver, v" WATCHDOG_VERSION "\n"
#define IO_INDEX_PORT     0x3F0
#define IO_DATA_PORT      (IO_INDEX_PORT+1)
#define UNLOCK_DATA       0x87
#define LOCK_DATA         0xAA
#define DEVICE_REGISTER   0x07
#define	DEFAULT_TIMEOUT   45
static	int timeout = DEFAULT_TIMEOUT;
static	int timeoutW;
static	unsigned long timer_alive;
static	int testmode;
static	char expect_close;
static	DEFINE_SPINLOCK(spinlock);
module_param(timeout, int, 0);
MODULE_PARM_DESC(timeout,
"Watchdog timeout in seconds (15..7635), default="
__MODULE_STRING(DEFAULT_TIMEOUT) ")");
module_param(testmode, int, 0);
MODULE_PARM_DESC(testmode, "Watchdog testmode (1 = no reboot), default=0");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static int wdt_start(void)
static int wdt_stop(void)
static int wdt_keepalive(void)
static int wdt_set_timeout(int t)
static int wdt_get_status(int *status)
static int wdt_open(struct inode *inode, struct file *file)
static int wdt_release(struct inode *inode, struct file *file)
static ssize_t wdt_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct watchdog_info ident = ;
static long wdt_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int wdt_notify_sys(struct notifier_block *this, unsigned long code,
void *unused)
static const struct file_operations wdt_fops = ;
static struct miscdevice wdt_miscdev = ;
static struct notifier_block wdt_notifier = ;
static int __init w83977f_wdt_init(void)
static void __exit w83977f_wdt_exit(void)
module_init(w83977f_wdt_init);
module_exit(w83977f_wdt_exit);
MODULE_AUTHOR("Jose Goncalves <jose.goncalves@inov.pt>");
MODULE_DESCRIPTION("Driver for watchdog timer in W83977F I/O chip");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
