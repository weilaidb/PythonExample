#define pr_fmt(fmt) KBUILD_MODNAME " WATCHDOG: " fmt
static int nowayout = WATCHDOG_NOWAYOUT;
static unsigned int margin = 60;
static unsigned long wdt_status;
static DEFINE_MUTEX(wdt_lock);
#define WDT_IN_USE		0
#define WDT_OK_TO_CLOSE		1
#define COMMAND_PORT		0x4c
#define DATA_PORT		0x48
#define IFACE_ON_COMMAND	1
#define REBOOT_COMMAND		2
#define WATCHDOG_NAME		"SBC-FITPC2 Watchdog"
static void wdt_send_data(unsigned char command, unsigned char data)
static void wdt_enable(void)
static void wdt_disable(void)
static int fitpc2_wdt_open(struct inode *inode, struct file *file)
static ssize_t fitpc2_wdt_write(struct file *file, const char *data,
size_t len, loff_t *ppos)
static const struct watchdog_info ident = ;
static long fitpc2_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int fitpc2_wdt_release(struct inode *inode, struct file *file)
static const struct file_operations fitpc2_wdt_fops = ;
static struct miscdevice fitpc2_wdt_miscdev = ;
static int __init fitpc2_wdt_init(void)
static void __exit fitpc2_wdt_exit(void)
module_init(fitpc2_wdt_init);
module_exit(fitpc2_wdt_exit);
MODULE_AUTHOR("Denis Turischev <denis@compulab.co.il>");
MODULE_DESCRIPTION("SBC-FITPC2 Watchdog");
module_param(margin, int, 0);
MODULE_PARM_DESC(margin, "Watchdog margin in seconds (default 60s)");
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
