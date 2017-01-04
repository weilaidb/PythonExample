#define WATCHDOG_NAME "w83697hf/hg WDT"
#define PFX WATCHDOG_NAME ": "
#define WATCHDOG_TIMEOUT 60
#define WATCHDOG_EARLY_DISABLE 1
static unsigned long wdt_is_open;
static char expect_close;
static DEFINE_SPINLOCK(io_lock);
static int wdt_io = 0x2e;
module_param(wdt_io, int, 0);
MODULE_PARM_DESC(wdt_io,
"w83697hf/hg WDT io port (default 0x2e, 0 = autodetect)");
static int timeout = WATCHDOG_TIMEOUT;
module_param(timeout, int, 0);
MODULE_PARM_DESC(timeout,
"Watchdog timeout in seconds. 1<= timeout <=255 (default="
__MODULE_STRING(WATCHDOG_TIMEOUT) ")");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static int early_disable = WATCHDOG_EARLY_DISABLE;
module_param(early_disable, int, 0);
MODULE_PARM_DESC(early_disable,
"Watchdog gets disabled at boot time (default="
__MODULE_STRING(WATCHDOG_EARLY_DISABLE) ")");
#define W83697HF_EFER (wdt_io + 0)
#define W83697HF_EFIR (wdt_io + 0)
#define W83697HF_EFDR (wdt_io + 1)
static inline void w83697hf_unlock(void)
static inline void w83697hf_lock(void)
static unsigned char w83697hf_get_reg(unsigned char reg)
static void w83697hf_set_reg(unsigned char reg, unsigned char data)
static void w83697hf_write_timeout(int timeout)
static void w83697hf_select_wdt(void)
static inline void w83697hf_deselect_wdt(void)
static void w83697hf_init(void)
static void wdt_ping(void)
static void wdt_enable(void)
static void wdt_disable(void)
static unsigned char wdt_running(void)
static int wdt_set_heartbeat(int t)
static ssize_t wdt_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static long wdt_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int wdt_open(struct inode *inode, struct file *file)
static int wdt_close(struct inode *inode, struct file *file)
static int wdt_notify_sys(struct notifier_block *this, unsigned long code,
void *unused)
static const struct file_operations wdt_fops = ;
static struct miscdevice wdt_miscdev = ;
static struct notifier_block wdt_notifier = ;
static int w83697hf_check_wdt(void)
static int w83697hf_ioports[] = ;
static int __init wdt_init(void)
static void __exit wdt_exit(void)
module_init(wdt_init);
module_exit(wdt_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Marcus Junker <junker@anduras.de>, "
"Samuel Tardieu <sam@rfc1149.net>");
MODULE_DESCRIPTION("w83697hf/hg WDT driver");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
