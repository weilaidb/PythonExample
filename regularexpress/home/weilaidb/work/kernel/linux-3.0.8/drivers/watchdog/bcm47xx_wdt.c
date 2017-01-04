#define DRV_NAME		"bcm47xx_wdt"
#define WDT_DEFAULT_TIME	30
#define WDT_MAX_TIME		255
static int wdt_time = WDT_DEFAULT_TIME;
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(wdt_time, int, 0);
MODULE_PARM_DESC(wdt_time, "Watchdog time in seconds. (default="
__MODULE_STRING(WDT_DEFAULT_TIME) ")");
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static unsigned long bcm47xx_wdt_busy;
static char expect_release;
static struct timer_list wdt_timer;
static atomic_t ticks;
static inline void bcm47xx_wdt_hw_start(void)
static inline int bcm47xx_wdt_hw_stop(void)
static void bcm47xx_timer_tick(unsigned long unused)
static inline void bcm47xx_wdt_pet(void)
static void bcm47xx_wdt_start(void)
static void bcm47xx_wdt_pause(void)
static void bcm47xx_wdt_stop(void)
static int bcm47xx_wdt_settimeout(int new_time)
static int bcm47xx_wdt_open(struct inode *inode, struct file *file)
static int bcm47xx_wdt_release(struct inode *inode, struct file *file)
static ssize_t bcm47xx_wdt_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static const struct watchdog_info bcm47xx_wdt_info = ;
static long bcm47xx_wdt_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static int bcm47xx_wdt_notify_sys(struct notifier_block *this,
unsigned long code, void *unused)
static const struct file_operations bcm47xx_wdt_fops = ;
static struct miscdevice bcm47xx_wdt_miscdev = ;
static struct notifier_block bcm47xx_wdt_notifier = ;
static int __init bcm47xx_wdt_init(void)
static void __exit bcm47xx_wdt_exit(void)
module_init(bcm47xx_wdt_init);
module_exit(bcm47xx_wdt_exit);
MODULE_AUTHOR("Aleksandar Radovanovic");
MODULE_DESCRIPTION("Watchdog driver for Broadcom BCM47xx");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
