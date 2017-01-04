#define stamp(fmt, args...) \
pr_debug("%s:%i: " fmt "\n", __func__, __LINE__, ## args)
#define stampit() stamp("here i am")
#define pr_devinit(fmt, args...) \
()
#define pr_init(fmt, args...) \
()
#define WATCHDOG_NAME "bfin-wdt"
#define PFX WATCHDOG_NAME ": "
# define bfin_read_WDOG_CTL()    bfin_read_WDOGA_CTL()
# define bfin_read_WDOG_CNT()    bfin_read_WDOGA_CNT()
# define bfin_read_WDOG_STAT()   bfin_read_WDOGA_STAT()
# define bfin_write_WDOG_CTL(x)  bfin_write_WDOGA_CTL(x)
# define bfin_write_WDOG_CNT(x)  bfin_write_WDOGA_CNT(x)
# define bfin_write_WDOG_STAT(x) bfin_write_WDOGA_STAT(x)
#define WATCHDOG_TIMEOUT 20
static unsigned int timeout = WATCHDOG_TIMEOUT;
static int nowayout = WATCHDOG_NOWAYOUT;
static const struct watchdog_info bfin_wdt_info;
static unsigned long open_check;
static char expect_close;
static DEFINE_SPINLOCK(bfin_wdt_spinlock);
static int bfin_wdt_keepalive(void)
static int bfin_wdt_stop(void)
static int bfin_wdt_start(void)
static int bfin_wdt_running(void)
static int bfin_wdt_set_timeout(unsigned long t)
static int bfin_wdt_open(struct inode *inode, struct file *file)
static int bfin_wdt_release(struct inode *inode, struct file *file)
static ssize_t bfin_wdt_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static long bfin_wdt_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static int state_before_suspend;
static int bfin_wdt_suspend(struct platform_device *pdev, pm_message_t state)
static int bfin_wdt_resume(struct platform_device *pdev)
# define bfin_wdt_suspend NULL
# define bfin_wdt_resume NULL
static const struct file_operations bfin_wdt_fops = ;
static struct miscdevice bfin_wdt_miscdev = ;
static const struct watchdog_info bfin_wdt_info = ;
static int __devinit bfin_wdt_probe(struct platform_device *pdev)
static int __devexit bfin_wdt_remove(struct platform_device *pdev)
static void bfin_wdt_shutdown(struct platform_device *pdev)
static struct platform_device *bfin_wdt_device;
static struct platform_driver bfin_wdt_driver = ;
static int __init bfin_wdt_init(void)
static void __exit bfin_wdt_exit(void)
module_init(bfin_wdt_init);
module_exit(bfin_wdt_exit);
MODULE_AUTHOR("Michele d'Amico, Mike Frysinger <vapier@gentoo.org>");
MODULE_DESCRIPTION("Blackfin Watchdog Device Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
module_param(timeout, uint, 0);
MODULE_PARM_DESC(timeout,
"Watchdog timeout in seconds. (1<=timeout<=((2^32)/SCLK), default="
__MODULE_STRING(WATCHDOG_TIMEOUT) ")");
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
