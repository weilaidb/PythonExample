#define PFX "SoftDog: "
#define TIMER_MARGIN	60
static int soft_margin = TIMER_MARGIN;
module_param(soft_margin, int, 0);
MODULE_PARM_DESC(soft_margin,
"Watchdog soft_margin in seconds. (0 < soft_margin < 65536, default="
__MODULE_STRING(TIMER_MARGIN) ")");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static int soft_noboot = 1;
static int soft_noboot = 0;
module_param(soft_noboot, int, 0);
MODULE_PARM_DESC(soft_noboot,
"Softdog action, set to 1 to ignore reboots, 0 to reboot "
"(default depends on ONLY_TESTING)");
static int soft_panic;
module_param(soft_panic, int, 0);
MODULE_PARM_DESC(soft_panic,
"Softdog action, set to 1 to panic, 0 to reboot (default=0)");
static void watchdog_fire(unsigned long);
static struct timer_list watchdog_ticktock =
TIMER_INITIALIZER(watchdog_fire, 0, 0);
static unsigned long driver_open, orphan_timer;
static char expect_close;
static void watchdog_fire(unsigned long data)
static int softdog_keepalive(void)
static int softdog_stop(void)
static int softdog_set_heartbeat(int t)
static int softdog_open(struct inode *inode, struct file *file)
static int softdog_release(struct inode *inode, struct file *file)
static ssize_t softdog_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static long softdog_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int softdog_notify_sys(struct notifier_block *this, unsigned long code,
void *unused)
static const struct file_operations softdog_fops = ;
static struct miscdevice softdog_miscdev = ;
static struct notifier_block softdog_notifier = ;
static char banner[] __initdata = KERN_INFO "Software Watchdog Timer: 0.07 "
"initialized. soft_noboot=%d soft_margin=%d sec soft_panic=%d "
"(nowayout= %d)\n";
static int __init watchdog_init(void)
static void __exit watchdog_exit(void)
module_init(watchdog_init);
module_exit(watchdog_exit);
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("Software Watchdog Device Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
