static DEFINE_SPINLOCK(sbwd_lock);
void sbwdog_set(char __iomem *wdog, unsigned long t)
void sbwdog_pet(char __iomem *wdog)
static unsigned long sbwdog_gate;
static char __iomem *kern_dog = (char __iomem *)(IO_BASE + (A_SCD_WDOG_CFG_0));
static char __iomem *user_dog = (char __iomem *)(IO_BASE + (A_SCD_WDOG_CFG_1));
static unsigned long timeout = 0x7fffffUL;
static int expect_close;
static const struct watchdog_info ident = ;
static int sbwdog_open(struct inode *inode, struct file *file)
static int sbwdog_release(struct inode *inode, struct file *file)
static ssize_t sbwdog_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static long sbwdog_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int sbwdog_notify_sys(struct notifier_block *this, unsigned long code,
void *erf)
static const struct file_operations sbwdog_fops = ;
static struct miscdevice sbwdog_miscdev = ;
static struct notifier_block sbwdog_notifier = ;
irqreturn_t sbwdog_interrupt(int irq, void *addr)
static int __init sbwdog_init(void)
static void __exit sbwdog_exit(void)
module_init(sbwdog_init);
module_exit(sbwdog_exit);
MODULE_AUTHOR("Andrew Sharp <andy.sharp@lsi.com>");
MODULE_DESCRIPTION("SiByte Watchdog");
module_param(timeout, ulong, 0);
MODULE_PARM_DESC(timeout,
"Watchdog timeout in microseconds (max/default 8388607 or 8.3ish secs)");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
