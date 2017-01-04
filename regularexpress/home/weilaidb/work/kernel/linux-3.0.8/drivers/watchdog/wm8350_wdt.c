static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static unsigned long wm8350_wdt_users;
static struct miscdevice wm8350_wdt_miscdev;
static int wm8350_wdt_expect_close;
static DEFINE_MUTEX(wdt_mutex);
static struct  wm8350_wdt_cfgs[] = ;
static struct wm8350 *get_wm8350(void)
static int wm8350_wdt_set_timeout(struct wm8350 *wm8350, u16 value)
static int wm8350_wdt_start(struct wm8350 *wm8350)
static int wm8350_wdt_stop(struct wm8350 *wm8350)
static int wm8350_wdt_kick(struct wm8350 *wm8350)
static int wm8350_wdt_open(struct inode *inode, struct file *file)
static int wm8350_wdt_release(struct inode *inode, struct file *file)
static ssize_t wm8350_wdt_write(struct file *file,
const char __user *data, size_t count,
loff_t *ppos)
static const struct watchdog_info ident = ;
static long wm8350_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct file_operations wm8350_wdt_fops = ;
static struct miscdevice wm8350_wdt_miscdev = ;
static int __devinit wm8350_wdt_probe(struct platform_device *pdev)
static int __devexit wm8350_wdt_remove(struct platform_device *pdev)
static struct platform_driver wm8350_wdt_driver = ;
static int __init wm8350_wdt_init(void)
module_init(wm8350_wdt_init);
static void __exit wm8350_wdt_exit(void)
module_exit(wm8350_wdt_exit);
MODULE_AUTHOR("Mark Brown");
MODULE_DESCRIPTION("WM8350 Watchdog");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:wm8350-wdt");
