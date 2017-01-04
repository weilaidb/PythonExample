static int verbose;
static int port = 0x91;
static int ticks = 10000;
static spinlock_t cpu5wdt_lock;
#define PFX			"cpu5wdt: "
#define CPU5WDT_EXTENT          0x0A
#define CPU5WDT_STATUS_REG      0x00
#define CPU5WDT_TIME_A_REG      0x02
#define CPU5WDT_TIME_B_REG      0x03
#define CPU5WDT_MODE_REG        0x04
#define CPU5WDT_TRIGGER_REG     0x07
#define CPU5WDT_ENABLE_REG      0x08
#define CPU5WDT_RESET_REG       0x09
#define CPU5WDT_INTERVAL	(HZ/10+1)
static struct  cpu5wdt_device;
static void cpu5wdt_trigger(unsigned long unused)
static void cpu5wdt_reset(void)
static void cpu5wdt_start(void)
static int cpu5wdt_stop(void)
static int cpu5wdt_open(struct inode *inode, struct file *file)
static int cpu5wdt_release(struct inode *inode, struct file *file)
static long cpu5wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static ssize_t cpu5wdt_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations cpu5wdt_fops = ;
static struct miscdevice cpu5wdt_misc = ;
static int __devinit cpu5wdt_init(void)
static int __devinit cpu5wdt_init_module(void)
static void __devexit cpu5wdt_exit(void)
static void __devexit cpu5wdt_exit_module(void)
module_init(cpu5wdt_init_module);
module_exit(cpu5wdt_exit_module);
MODULE_AUTHOR("Heiko Ronsdorf <hero@ihg.uni-duisburg.de>");
MODULE_DESCRIPTION("sma cpu5 watchdog driver");
MODULE_SUPPORTED_DEVICE("sma cpu5 watchdog");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
module_param(port, int, 0);
MODULE_PARM_DESC(port, "base address of watchdog card, default is 0x91");
module_param(verbose, int, 0);
MODULE_PARM_DESC(verbose, "be verbose, default is 0 (no)");
module_param(ticks, int, 0);
MODULE_PARM_DESC(ticks, "count down ticks, default is 10000");
