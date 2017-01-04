#define WATCHDOG_VERSION  "0.04"
#define WATCHDOG_NAME     "Wdt977"
#define PFX WATCHDOG_NAME ": "
#define DRIVER_VERSION    WATCHDOG_NAME " driver, v" WATCHDOG_VERSION "\n"
#define IO_INDEX_PORT	0x370
#define IO_DATA_PORT	(IO_INDEX_PORT + 1)
#define UNLOCK_DATA	0x87
#define LOCK_DATA	0xAA
#define DEVICE_REGISTER	0x07
#define	DEFAULT_TIMEOUT	60
static	int timeout = DEFAULT_TIMEOUT;
static	int timeoutM;
static	unsigned long timer_alive;
static	int testmode;
static	char expect_close;
static	DEFINE_SPINLOCK(spinlock);
module_param(timeout, int, 0);
MODULE_PARM_DESC(timeout, "Watchdog timeout in seconds (60..15300, default="
__MODULE_STRING(DEFAULT_TIMEOUT) ")");
module_param(testmode, int, 0);
MODULE_PARM_DESC(testmode, "Watchdog testmode (1 = no reboot), default=0");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static int wdt977_start(void)
static int wdt977_stop(void)
static int wdt977_keepalive(void)
static int wdt977_set_timeout(int t)
static int wdt977_get_status(int *status)
static int wdt977_open(struct inode *inode, struct file *file)
static int wdt977_release(struct inode *inode, struct file *file)
static ssize_t wdt977_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct watchdog_info ident = ;
static long wdt977_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int wdt977_notify_sys(struct notifier_block *this, unsigned long code,
void *unused)
static const struct file_operations wdt977_fops = ;
static struct miscdevice wdt977_miscdev = ;
static struct notifier_block wdt977_notifier = ;
static int __init wd977_init(void)
static void __exit wd977_exit(void)
module_init(wd977_init);
module_exit(wd977_exit);
MODULE_AUTHOR("Woody Suwalski <woodys@xandros.com>");
MODULE_DESCRIPTION("W83977AF Watchdog driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
