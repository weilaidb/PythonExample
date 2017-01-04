#define GEODEWDT_HZ 500
#define GEODEWDT_SCALE 6
#define GEODEWDT_MAX_SECONDS 131
#define WDT_FLAGS_OPEN 1
#define WDT_FLAGS_ORPHAN 2
#define DRV_NAME "geodewdt"
#define WATCHDOG_NAME "Geode GX/LX WDT"
#define WATCHDOG_TIMEOUT 60
static int timeout = WATCHDOG_TIMEOUT;
module_param(timeout, int, 0);
MODULE_PARM_DESC(timeout,
"Watchdog timeout in seconds. 1<= timeout <=131, default="
__MODULE_STRING(WATCHDOG_TIMEOUT) ".");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static struct platform_device *geodewdt_platform_device;
static unsigned long wdt_flags;
static struct cs5535_mfgpt_timer *wdt_timer;
static int safe_close;
static void geodewdt_ping(void)
static void geodewdt_disable(void)
static int geodewdt_set_heartbeat(int val)
static int geodewdt_open(struct inode *inode, struct file *file)
static int geodewdt_release(struct inode *inode, struct file *file)
static ssize_t geodewdt_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static long geodewdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct file_operations geodewdt_fops = ;
static struct miscdevice geodewdt_miscdev = ;
static int __devinit geodewdt_probe(struct platform_device *dev)
static int __devexit geodewdt_remove(struct platform_device *dev)
static void geodewdt_shutdown(struct platform_device *dev)
static struct platform_driver geodewdt_driver = ;
static int __init geodewdt_init(void)
static void __exit geodewdt_exit(void)
module_init(geodewdt_init);
module_exit(geodewdt_exit);
MODULE_AUTHOR("Advanced Micro Devices, Inc");
MODULE_DESCRIPTION("Geode GX/LX Watchdog Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
