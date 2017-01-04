#define DRV_NAME "PIKA-WDT"
#define PFX DRV_NAME ": "
#define WDT_HW_TIMEOUT 2
#define WDT_TIMEOUT	(HZ/2)
#define WDT_HEARTBEAT 15
static int heartbeat = WDT_HEARTBEAT;
module_param(heartbeat, int, 0);
MODULE_PARM_DESC(heartbeat, "Watchdog heartbeats in seconds. "
"(default = " __MODULE_STRING(WDT_HEARTBEAT) ")");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started "
"(default=" __MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static struct  pikawdt_private;
static struct watchdog_info ident = ;
static inline void pikawdt_reset(void)
static void pikawdt_ping(unsigned long data)
static void pikawdt_keepalive(void)
static void pikawdt_start(void)
static int pikawdt_open(struct inode *inode, struct file *file)
static int pikawdt_release(struct inode *inode, struct file *file)
static ssize_t pikawdt_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static long pikawdt_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static const struct file_operations pikawdt_fops = ;
static struct miscdevice pikawdt_miscdev = ;
static int __init pikawdt_init(void)
static void __exit pikawdt_exit(void)
module_init(pikawdt_init);
module_exit(pikawdt_exit);
MODULE_AUTHOR("Sean MacLennan <smaclennan@pikatech.com>");
MODULE_DESCRIPTION("PIKA FPGA based Watchdog Timer");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
