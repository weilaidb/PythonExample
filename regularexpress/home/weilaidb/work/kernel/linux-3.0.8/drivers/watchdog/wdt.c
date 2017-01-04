static unsigned long wdt_is_open;
static char expect_close;
#define WD_TIMO 60
static int heartbeat = WD_TIMO;
static int wd_heartbeat;
module_param(heartbeat, int, 0);
MODULE_PARM_DESC(heartbeat,
"Watchdog heartbeat in seconds. (0 < heartbeat < 65536, default="
__MODULE_STRING(WD_TIMO) ")");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static int io = 0x240;
static int irq = 11;
static DEFINE_SPINLOCK(wdt_lock);
module_param(io, int, 0);
MODULE_PARM_DESC(io, "WDT io port (default=0x240)");
module_param(irq, int, 0);
MODULE_PARM_DESC(irq, "WDT irq (default=11)");
static int tachometer;
module_param(tachometer, int, 0);
MODULE_PARM_DESC(tachometer,
"WDT501-P Fan Tachometer support (0=disable, default=0)");
static int type = 500;
module_param(type, int, 0);
MODULE_PARM_DESC(type,
"WDT501-P Card type (500 or 501, default=500)");
static void wdt_ctr_mode(int ctr, int mode)
static void wdt_ctr_load(int ctr, int val)
static int wdt_start(void)
static int wdt_stop(void)
static void wdt_ping(void)
static int wdt_set_heartbeat(int t)
static int wdt_get_status(void)
static int wdt_get_temperature(void)
static void wdt_decode_501(int status)
static irqreturn_t wdt_interrupt(int irq, void *dev_id)
static ssize_t wdt_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static long wdt_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int wdt_open(struct inode *inode, struct file *file)
static int wdt_release(struct inode *inode, struct file *file)
static ssize_t wdt_temp_read(struct file *file, char __user *buf,
size_t count, loff_t *ptr)
static int wdt_temp_open(struct inode *inode, struct file *file)
static int wdt_temp_release(struct inode *inode, struct file *file)
static int wdt_notify_sys(struct notifier_block *this, unsigned long code,
void *unused)
static const struct file_operations wdt_fops = ;
static struct miscdevice wdt_miscdev = ;
static const struct file_operations wdt_temp_fops = ;
static struct miscdevice temp_miscdev = ;
static struct notifier_block wdt_notifier = ;
static void __exit wdt_exit(void)
static int __init wdt_init(void)
module_init(wdt_init);
module_exit(wdt_exit);
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("Driver for ISA ICS watchdog cards (WDT500/501)");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
MODULE_ALIAS_MISCDEV(TEMP_MINOR);
MODULE_LICENSE("GPL");
