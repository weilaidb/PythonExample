#define SMSC_SUPPORT_MINUTES
#undef SMSC_SUPPORT_MINUTES
#define MAX_TIMEOUT     255
#define UNIT_SECOND     0
#define UNIT_MINUTE     1
#define MODNAME		"smsc37b787_wdt: "
#define VERSION		"1.1"
#define IOPORT		0x3F0
#define IOPORT_SIZE     2
#define IODEV_NO	8
static int unit = UNIT_SECOND;
static int timeout = 60;
static unsigned long timer_enabled;
static char expect_close;
static DEFINE_SPINLOCK(io_lock);
static int nowayout = WATCHDOG_NOWAYOUT;
static inline void open_io_config(void)
static inline void close_io_config(void)
static inline void select_io_device(unsigned char devno)
static inline void write_io_cr(unsigned char reg, unsigned char data)
static inline char read_io_cr(unsigned char reg)
static inline void gpio_bit12(unsigned char reg)
static inline void gpio_bit13(unsigned char reg)
static inline void wdt_timer_units(unsigned char new_units)
static inline void wdt_timeout_value(unsigned char new_timeout)
static inline void wdt_timer_conf(unsigned char conf)
static inline void wdt_timer_ctrl(unsigned char reg)
static void wb_smsc_wdt_initialize(void)
static void wb_smsc_wdt_shutdown(void)
static void wb_smsc_wdt_set_timeout(unsigned char new_timeout)
static unsigned char wb_smsc_wdt_get_timeout(void)
static void wb_smsc_wdt_disable(void)
static void wb_smsc_wdt_enable(void)
static void wb_smsc_wdt_reset_timer(void)
static int wb_smsc_wdt_status(void)
static int wb_smsc_wdt_open(struct inode *inode, struct file *file)
static int wb_smsc_wdt_release(struct inode *inode, struct file *file)
static ssize_t wb_smsc_wdt_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static long wb_smsc_wdt_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static int wb_smsc_wdt_notify_sys(struct notifier_block *this,
unsigned long code, void *unused)
static const struct file_operations wb_smsc_wdt_fops = ;
static struct notifier_block wb_smsc_wdt_notifier = ;
static struct miscdevice wb_smsc_wdt_miscdev = ;
static int __init wb_smsc_wdt_init(void)
static void __exit wb_smsc_wdt_exit(void)
module_init(wb_smsc_wdt_init);
module_exit(wb_smsc_wdt_exit);
MODULE_AUTHOR("Sven Anders <anders@anduras.de>");
MODULE_DESCRIPTION("Driver for SMsC 37B787 watchdog component (Version "
VERSION ")");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
module_param(unit, int, 0);
MODULE_PARM_DESC(unit,
"set unit to use, 0=seconds or 1=minutes, default is 0");
module_param(timeout, int, 0);
MODULE_PARM_DESC(timeout, "range is 1-255 units, default is 60");
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
