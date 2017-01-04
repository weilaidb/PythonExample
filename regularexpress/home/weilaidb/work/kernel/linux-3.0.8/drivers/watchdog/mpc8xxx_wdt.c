struct mpc8xxx_wdt ;
struct mpc8xxx_wdt_type ;
static struct mpc8xxx_wdt __iomem *wd_base;
static int mpc8xxx_wdt_init_late(void);
static u16 timeout = 0xffff;
module_param(timeout, ushort, 0);
MODULE_PARM_DESC(timeout,
"Watchdog timeout in ticks. (0<timeout<65536, default=65535)");
static int reset = 1;
module_param(reset, bool, 0);
MODULE_PARM_DESC(reset,
"Watchdog Interrupt/Reset Mode. 0 = interrupt, 1 = reset");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started "
"(default=" __MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static int prescale = 1;
static unsigned int timeout_sec;
static unsigned long wdt_is_open;
static DEFINE_SPINLOCK(wdt_spinlock);
static void mpc8xxx_wdt_keepalive(void)
static void mpc8xxx_wdt_timer_ping(unsigned long arg);
static DEFINE_TIMER(wdt_timer, mpc8xxx_wdt_timer_ping, 0, 0);
static void mpc8xxx_wdt_timer_ping(unsigned long arg)
static void mpc8xxx_wdt_pr_warn(const char *msg)
static ssize_t mpc8xxx_wdt_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static int mpc8xxx_wdt_open(struct inode *inode, struct file *file)
static int mpc8xxx_wdt_release(struct inode *inode, struct file *file)
static long mpc8xxx_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct file_operations mpc8xxx_wdt_fops = ;
static struct miscdevice mpc8xxx_wdt_miscdev = ;
static const struct of_device_id mpc8xxx_wdt_match[];
static int __devinit mpc8xxx_wdt_probe(struct platform_device *ofdev)
static int __devexit mpc8xxx_wdt_remove(struct platform_device *ofdev)
static const struct of_device_id mpc8xxx_wdt_match[] = ;
MODULE_DEVICE_TABLE(of, mpc8xxx_wdt_match);
static struct platform_driver mpc8xxx_wdt_driver = ;
static int mpc8xxx_wdt_init_late(void)
module_init(mpc8xxx_wdt_init_late);
static int __init mpc8xxx_wdt_init(void)
arch_initcall(mpc8xxx_wdt_init);
static void __exit mpc8xxx_wdt_exit(void)
module_exit(mpc8xxx_wdt_exit);
MODULE_AUTHOR("Dave Updegraff, Kumar Gala");
MODULE_DESCRIPTION("Driver for watchdog timer in MPC8xx/MPC83xx/MPC86xx "
"uProcessors");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
