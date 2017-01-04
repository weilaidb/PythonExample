u32 booke_wdt_enabled;
u32 booke_wdt_period = CONFIG_BOOKE_WDT_DEFAULT_TIMEOUT;
#define WDTP(x)		((((x)&0x3)<<30)|(((x)&0x3c)<<15))
#define WDTP_MASK	(WDTP(0x3f))
#define WDTP(x)		(TCR_WP(x))
#define WDTP_MASK	(TCR_WP_MASK)
static DEFINE_SPINLOCK(booke_wdt_lock);
static unsigned long long period_to_sec(unsigned int period)
static unsigned int sec_to_period(unsigned int secs)
static void __booke_wdt_set(void *data)
static void booke_wdt_set(void)
static void __booke_wdt_ping(void *data)
static void booke_wdt_ping(void)
static void __booke_wdt_enable(void *data)
static void __booke_wdt_disable(void *data)
static ssize_t booke_wdt_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static struct watchdog_info ident = ;
static long booke_wdt_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static unsigned long wdt_is_active;
static int booke_wdt_open(struct inode *inode, struct file *file)
static int booke_wdt_release(struct inode *inode, struct file *file)
static const struct file_operations booke_wdt_fops = ;
static struct miscdevice booke_wdt_miscdev = ;
static void __exit booke_wdt_exit(void)
static int __init booke_wdt_init(void)
module_init(booke_wdt_init);
module_exit(booke_wdt_exit);
MODULE_DESCRIPTION("PowerPC Book-E watchdog driver");
MODULE_LICENSE("GPL");
