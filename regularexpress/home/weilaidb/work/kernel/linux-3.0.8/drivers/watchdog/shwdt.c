#define DRV_NAME "sh-wdt"
static int clock_division_ratio = WTCSR_CKS_4096;
#define next_ping_period(cks)	(jiffies + msecs_to_jiffies(cks - 4))
static const struct watchdog_info sh_wdt_info;
static struct platform_device *sh_wdt_dev;
static DEFINE_SPINLOCK(shwdt_lock);
#define WATCHDOG_HEARTBEAT 30
static int heartbeat = WATCHDOG_HEARTBEAT;
static int nowayout = WATCHDOG_NOWAYOUT;
static unsigned long next_heartbeat;
struct sh_wdt ;
static void sh_wdt_start(struct sh_wdt *wdt)
static void sh_wdt_stop(struct sh_wdt *wdt)
static inline void sh_wdt_keepalive(struct sh_wdt *wdt)
static int sh_wdt_set_heartbeat(int t)
static void sh_wdt_ping(unsigned long data)
static int sh_wdt_open(struct inode *inode, struct file *file)
static int sh_wdt_close(struct inode *inode, struct file *file)
static ssize_t sh_wdt_write(struct file *file, const char *buf,
size_t count, loff_t *ppos)
static long sh_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int sh_wdt_notify_sys(struct notifier_block *this,
unsigned long code, void *unused)
static const struct file_operations sh_wdt_fops = ;
static const struct watchdog_info sh_wdt_info = ;
static struct notifier_block sh_wdt_notifier = ;
static struct miscdevice sh_wdt_miscdev = ;
static int __devinit sh_wdt_probe(struct platform_device *pdev)
static int __devexit sh_wdt_remove(struct platform_device *pdev)
static struct platform_driver sh_wdt_driver = ;
static int __init sh_wdt_init(void)
static void __exit sh_wdt_exit(void)
module_init(sh_wdt_init);
module_exit(sh_wdt_exit);
MODULE_AUTHOR("Paul Mundt <lethal@linux-sh.org>");
MODULE_DESCRIPTION("SuperH watchdog driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRV_NAME);
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
module_param(clock_division_ratio, int, 0);
MODULE_PARM_DESC(clock_division_ratio,
"Clock division ratio. Valid ranges are from 0x5 (1.31ms) "
"to 0x7 (5.25ms). (default=" __MODULE_STRING(WTCSR_CKS_4096) ")");
module_param(heartbeat, int, 0);
MODULE_PARM_DESC(heartbeat,
"Watchdog heartbeat in seconds. (1 <= heartbeat <= 3600, default="
__MODULE_STRING(WATCHDOG_HEARTBEAT) ")");
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
