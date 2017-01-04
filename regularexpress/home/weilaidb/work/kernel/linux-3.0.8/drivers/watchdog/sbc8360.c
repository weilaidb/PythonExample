static unsigned long sbc8360_is_open;
static char expect_close;
#define PFX "sbc8360: "
static int wd_times[64][2] = ;
#define SBC8360_ENABLE 0x120
#define SBC8360_BASETIME 0x121
static int timeout = 27;
static int wd_margin = 0xB;
static int wd_multiplier = 2;
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(timeout, int, 0);
MODULE_PARM_DESC(timeout, "Index into timeout table (0-63) (default=27 (60s))");
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static void sbc8360_activate(void)
static void sbc8360_ping(void)
static void sbc8360_stop(void)
static ssize_t sbc8360_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static int sbc8360_open(struct inode *inode, struct file *file)
static int sbc8360_close(struct inode *inode, struct file *file)
static int sbc8360_notify_sys(struct notifier_block *this, unsigned long code,
void *unused)
static const struct file_operations sbc8360_fops = ;
static struct miscdevice sbc8360_miscdev = ;
static struct notifier_block sbc8360_notifier = ;
static int __init sbc8360_init(void)
static void __exit sbc8360_exit(void)
module_init(sbc8360_init);
module_exit(sbc8360_exit);
MODULE_AUTHOR("Ian E. Morgan <imorgan@webcon.ca>");
MODULE_DESCRIPTION("SBC8360 watchdog driver");
MODULE_LICENSE("GPL");
MODULE_VERSION("1.01");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
