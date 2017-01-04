static unsigned long eurwdt_is_open;
static int eurwdt_timeout;
static char eur_expect_close;
static spinlock_t eurwdt_lock;
static int io = 0x3f0;
static int irq = 10;
static char *ev = "int";
#define WDT_TIMEOUT		60
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
#define WDT_CTRL_REG		0x30
#define WDT_OUTPIN_CFG		0xe2
#define WDT_EVENT_INT		0x00
#define WDT_EVENT_REBOOT	0x08
#define WDT_UNIT_SEL		0xf1
#define WDT_UNIT_SECS		0x80
#define WDT_TIMEOUT_VAL		0xf2
#define WDT_TIMER_CFG		0xf3
module_param(io, int, 0);
MODULE_PARM_DESC(io, "Eurotech WDT io port (default=0x3f0)");
module_param(irq, int, 0);
MODULE_PARM_DESC(irq, "Eurotech WDT irq (default=10)");
module_param(ev, charp, 0);
MODULE_PARM_DESC(ev, "Eurotech WDT event type (default is `int')");
static inline void eurwdt_write_reg(u8 index, u8 data)
static inline void eurwdt_lock_chip(void)
static inline void eurwdt_unlock_chip(void)
static inline void eurwdt_set_timeout(int timeout)
static inline void eurwdt_disable_timer(void)
static void eurwdt_activate_timer(void)
static irqreturn_t eurwdt_interrupt(int irq, void *dev_id)
static void eurwdt_ping(void)
static ssize_t eurwdt_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static long eurwdt_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static int eurwdt_open(struct inode *inode, struct file *file)
static int eurwdt_release(struct inode *inode, struct file *file)
static int eurwdt_notify_sys(struct notifier_block *this, unsigned long code,
void *unused)
static const struct file_operations eurwdt_fops = ;
static struct miscdevice eurwdt_miscdev = ;
static struct notifier_block eurwdt_notifier = ;
static void __exit eurwdt_exit(void)
static int __init eurwdt_init(void)
module_init(eurwdt_init);
module_exit(eurwdt_exit);
MODULE_AUTHOR("Rodolfo Giometti");
MODULE_DESCRIPTION("Driver for Eurotech CPU-1220/1410 on board watchdog");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
