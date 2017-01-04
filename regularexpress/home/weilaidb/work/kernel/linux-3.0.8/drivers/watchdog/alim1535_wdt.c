#define WATCHDOG_NAME "ALi_M1535"
#define PFX WATCHDOG_NAME ": "
#define WATCHDOG_TIMEOUT 60
static unsigned long ali_is_open;
static char ali_expect_release;
static struct pci_dev *ali_pci;
static u32 ali_timeout_bits;
static DEFINE_SPINLOCK(ali_lock);
static int timeout = WATCHDOG_TIMEOUT;
module_param(timeout, int, 0);
MODULE_PARM_DESC(timeout,
"Watchdog timeout in seconds. (0 < timeout < 18000, default="
__MODULE_STRING(WATCHDOG_TIMEOUT) ")");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static void ali_start(void)
static void ali_stop(void)
static void ali_keepalive(void)
static int ali_settimer(int t)
static ssize_t ali_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static long ali_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int ali_open(struct inode *inode, struct file *file)
static int ali_release(struct inode *inode, struct file *file)
static int ali_notify_sys(struct notifier_block *this,
unsigned long code, void *unused)
static DEFINE_PCI_DEVICE_TABLE(ali_pci_tbl) __used = ;
MODULE_DEVICE_TABLE(pci, ali_pci_tbl);
static int __init ali_find_watchdog(void)
static const struct file_operations ali_fops = ;
static struct miscdevice ali_miscdev = ;
static struct notifier_block ali_notifier = ;
static int __init watchdog_init(void)
static void __exit watchdog_exit(void)
module_init(watchdog_init);
module_exit(watchdog_exit);
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("ALi M1535 PMU Watchdog Timer driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
