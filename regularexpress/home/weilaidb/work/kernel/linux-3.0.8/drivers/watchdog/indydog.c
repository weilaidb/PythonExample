#define PFX "indydog: "
static unsigned long indydog_alive;
static spinlock_t indydog_lock;
#define WATCHDOG_TIMEOUT 30
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static void indydog_start(void)
static void indydog_stop(void)
static void indydog_ping(void)
static int indydog_open(struct inode *inode, struct file *file)
static int indydog_release(struct inode *inode, struct file *file)
static ssize_t indydog_write(struct file *file, const char *data,
size_t len, loff_t *ppos)
static long indydog_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int indydog_notify_sys(struct notifier_block *this,
unsigned long code, void *unused)
static const struct file_operations indydog_fops = ;
static struct miscdevice indydog_miscdev = ;
static struct notifier_block indydog_notifier = ;
static char banner[] __initdata =
KERN_INFO PFX "Hardware Watchdog Timer for SGI IP22: 0.3\n";
static int __init watchdog_init(void)
static void __exit watchdog_exit(void)
module_init(watchdog_init);
module_exit(watchdog_exit);
MODULE_AUTHOR("Guido Guenther <agx@sigxcpu.org>");
MODULE_DESCRIPTION("Hardware Watchdog Device for SGI IP22");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
