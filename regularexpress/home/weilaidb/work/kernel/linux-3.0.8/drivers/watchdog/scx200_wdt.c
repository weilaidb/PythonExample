#define NAME "scx200_wdt"
MODULE_AUTHOR("Christer Weinigel <wingel@nano-system.com>");
MODULE_DESCRIPTION("NatSemi SCx200 Watchdog Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
static int margin = 60;
module_param(margin, int, 0);
MODULE_PARM_DESC(margin, "Watchdog margin in seconds");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Disable watchdog shutdown on close");
static u16 wdto_restart;
static char expect_close;
static unsigned long open_lock;
static DEFINE_SPINLOCK(scx_lock);
#define W_ENABLE 0x00fa
#define W_DISABLE 0x0000
#define W_SCALE (32768/1024)
static void scx200_wdt_ping(void)
static void scx200_wdt_update_margin(void)
static void scx200_wdt_enable(void)
static void scx200_wdt_disable(void)
static int scx200_wdt_open(struct inode *inode, struct file *file)
static int scx200_wdt_release(struct inode *inode, struct file *file)
static int scx200_wdt_notify_sys(struct notifier_block *this,
unsigned long code, void *unused)
static struct notifier_block scx200_wdt_notifier = ;
static ssize_t scx200_wdt_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static long scx200_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct file_operations scx200_wdt_fops = ;
static struct miscdevice scx200_wdt_miscdev = ;
static int __init scx200_wdt_init(void)
static void __exit scx200_wdt_cleanup(void)
module_init(scx200_wdt_init);
module_exit(scx200_wdt_cleanup);
