#define SBC7240_PREFIX "sbc7240_wdt: "
#define SBC7240_ENABLE_PORT		0x443
#define SBC7240_DISABLE_PORT		0x043
#define SBC7240_SET_TIMEOUT_PORT	SBC7240_ENABLE_PORT
#define SBC7240_MAGIC_CHAR		'V'
#define SBC7240_TIMEOUT		30
#define SBC7240_MAX_TIMEOUT		255
static int timeout = SBC7240_TIMEOUT;
module_param(timeout, int, 0);
MODULE_PARM_DESC(timeout, "Watchdog timeout in seconds. (1<=timeout<="
__MODULE_STRING(SBC7240_MAX_TIMEOUT) ", default="
__MODULE_STRING(SBC7240_TIMEOUT) ")");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Disable watchdog when closing device file");
#define SBC7240_OPEN_STATUS_BIT		0
#define SBC7240_ENABLED_STATUS_BIT	1
#define SBC7240_EXPECT_CLOSE_STATUS_BIT	2
static unsigned long wdt_status;
static void wdt_disable(void)
static void wdt_enable(void)
static int wdt_set_timeout(int t)
static inline void wdt_keepalive(void)
static ssize_t fop_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static int fop_open(struct inode *inode, struct file *file)
static int fop_close(struct inode *inode, struct file *file)
static const struct watchdog_info ident = ;
static long fop_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static const struct file_operations wdt_fops = ;
static struct miscdevice wdt_miscdev = ;
static int wdt_notify_sys(struct notifier_block *this, unsigned long code,
void *unused)
static struct notifier_block wdt_notifier = ;
static void __exit sbc7240_wdt_unload(void)
static int __init sbc7240_wdt_init(void)
module_init(sbc7240_wdt_init);
module_exit(sbc7240_wdt_unload);
MODULE_AUTHOR("Gilles Gigan");
MODULE_DESCRIPTION("Watchdog device driver for single board"
" computers EPIC Nano 7240 from iEi");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
