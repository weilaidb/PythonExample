static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static unsigned long wm831x_wdt_users;
static struct miscdevice wm831x_wdt_miscdev;
static int wm831x_wdt_expect_close;
static DEFINE_MUTEX(wdt_mutex);
static struct wm831x *wm831x;
static unsigned int update_gpio;
static unsigned int update_state;
static struct  wm831x_wdt_cfgs[] = ;
static int wm831x_wdt_set_timeout(struct wm831x *wm831x, u16 value)
static int wm831x_wdt_start(struct wm831x *wm831x)
static int wm831x_wdt_stop(struct wm831x *wm831x)
static int wm831x_wdt_kick(struct wm831x *wm831x)
static int wm831x_wdt_open(struct inode *inode, struct file *file)
static int wm831x_wdt_release(struct inode *inode, struct file *file)
static ssize_t wm831x_wdt_write(struct file *file,
const char __user *data, size_t count,
loff_t *ppos)
static const struct watchdog_info ident = ;
static long wm831x_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct file_operations wm831x_wdt_fops = ;
static struct miscdevice wm831x_wdt_miscdev = ;
static int __devinit wm831x_wdt_probe(struct platform_device *pdev)
static int __devexit wm831x_wdt_remove(struct platform_device *pdev)
static struct platform_driver wm831x_wdt_driver = ;
static int __init wm831x_wdt_init(void)
module_init(wm831x_wdt_init);
static void __exit wm831x_wdt_exit(void)
module_exit(wm831x_wdt_exit);
MODULE_AUTHOR("Mark Brown");
MODULE_DESCRIPTION("WM831x Watchdog");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:wm831x-watchdog");
