#define PFX "epx_c3: "
static int epx_c3_alive;
#define WATCHDOG_TIMEOUT 1
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
#define EPXC3_WATCHDOG_CTL_REG 0x1ee
#define EPXC3_WATCHDOG_PET_REG 0x1ef
static void epx_c3_start(void)
static void epx_c3_stop(void)
static void epx_c3_pet(void)
static int epx_c3_open(struct inode *inode, struct file *file)
static int epx_c3_release(struct inode *inode, struct file *file)
static ssize_t epx_c3_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static long epx_c3_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int epx_c3_notify_sys(struct notifier_block *this, unsigned long code,
void *unused)
static const struct file_operations epx_c3_fops = ;
static struct miscdevice epx_c3_miscdev = ;
static struct notifier_block epx_c3_notifier = ;
static const char banner[] __initdata = KERN_INFO PFX
"Hardware Watchdog Timer for Winsystems EPX-C3 SBC: 0.1\n";
static int __init watchdog_init(void)
static void __exit watchdog_exit(void)
module_init(watchdog_init);
module_exit(watchdog_exit);
MODULE_AUTHOR("Calin A. Culianu <calin@ajvar.org>");
MODULE_DESCRIPTION("Hardware Watchdog Device for Winsystems EPX-C3 SBC.  "
"Note that there is no way to probe for this device -- "
"so only use it if you are *sure* you are running on this specific "
"SBC system from Winsystems!  It writes to IO ports 0x1ee and 0x1ef!");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
