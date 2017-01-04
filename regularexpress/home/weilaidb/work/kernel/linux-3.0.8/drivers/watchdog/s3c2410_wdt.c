#undef S3C_VA_WATCHDOG
#define S3C_VA_WATCHDOG (0)
#define PFX "s3c2410-wdt: "
#define CONFIG_S3C2410_WATCHDOG_ATBOOT		(0)
#define CONFIG_S3C2410_WATCHDOG_DEFAULT_TIME	(15)
static int nowayout	= WATCHDOG_NOWAYOUT;
static int tmr_margin	= CONFIG_S3C2410_WATCHDOG_DEFAULT_TIME;
static int tmr_atboot	= CONFIG_S3C2410_WATCHDOG_ATBOOT;
static int soft_noboot;
static int debug;
module_param(tmr_margin,  int, 0);
module_param(tmr_atboot,  int, 0);
module_param(nowayout,    int, 0);
module_param(soft_noboot, int, 0);
module_param(debug,	  int, 0);
MODULE_PARM_DESC(tmr_margin, "Watchdog tmr_margin in seconds. (default="
__MODULE_STRING(CONFIG_S3C2410_WATCHDOG_DEFAULT_TIME) ")");
MODULE_PARM_DESC(tmr_atboot,
"Watchdog is started at boot time if set to 1, default="
__MODULE_STRING(CONFIG_S3C2410_WATCHDOG_ATBOOT));
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
MODULE_PARM_DESC(soft_noboot, "Watchdog action, set to 1 to ignore reboots, "
"0 to reboot (default 0)");
MODULE_PARM_DESC(debug, "Watchdog debug, set to >1 for debug (default 0)");
static unsigned long open_lock;
static struct device    *wdt_dev;
static struct resource	*wdt_mem;
static struct resource	*wdt_irq;
static struct clk	*wdt_clock;
static void __iomem	*wdt_base;
static unsigned int	 wdt_count;
static char		 expect_close;
static DEFINE_SPINLOCK(wdt_lock);
#define DBG(msg...) do  while (0)
static void s3c2410wdt_keepalive(void)
static void __s3c2410wdt_stop(void)
static void s3c2410wdt_stop(void)
static void s3c2410wdt_start(void)
static inline int s3c2410wdt_is_running(void)
static int s3c2410wdt_set_heartbeat(int timeout)
static int s3c2410wdt_open(struct inode *inode, struct file *file)
static int s3c2410wdt_release(struct inode *inode, struct file *file)
static ssize_t s3c2410wdt_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
#define OPTIONS (WDIOF_SETTIMEOUT | WDIOF_KEEPALIVEPING | WDIOF_MAGICCLOSE)
static const struct watchdog_info s3c2410_wdt_ident = ;
static long s3c2410wdt_ioctl(struct file *file,	unsigned int cmd,
unsigned long arg)
static const struct file_operations s3c2410wdt_fops = ;
static struct miscdevice s3c2410wdt_miscdev = ;
static irqreturn_t s3c2410wdt_irq(int irqno, void *param)
static int s3c2410wdt_cpufreq_transition(struct notifier_block *nb,
unsigned long val, void *data)
static struct notifier_block s3c2410wdt_cpufreq_transition_nb = ;
static inline int s3c2410wdt_cpufreq_register(void)
static inline void s3c2410wdt_cpufreq_deregister(void)
static inline int s3c2410wdt_cpufreq_register(void)
static inline void s3c2410wdt_cpufreq_deregister(void)
static int __devinit s3c2410wdt_probe(struct platform_device *pdev)
static int __devexit s3c2410wdt_remove(struct platform_device *dev)
static void s3c2410wdt_shutdown(struct platform_device *dev)
static unsigned long wtcon_save;
static unsigned long wtdat_save;
static int s3c2410wdt_suspend(struct platform_device *dev, pm_message_t state)
static int s3c2410wdt_resume(struct platform_device *dev)
#define s3c2410wdt_suspend NULL
#define s3c2410wdt_resume  NULL
static struct platform_driver s3c2410wdt_driver = ;
static char banner[] __initdata =
KERN_INFO "S3C2410 Watchdog Timer, (c) 2004 Simtec Electronics\n";
static int __init watchdog_init(void)
static void __exit watchdog_exit(void)
module_init(watchdog_init);
module_exit(watchdog_exit);
MODULE_AUTHOR("Ben Dooks <ben@simtec.co.uk>, "
"Dimitry Andric <dimitry.andric@tomtom.com>");
MODULE_DESCRIPTION("S3C2410 Watchdog Device Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
MODULE_ALIAS("platform:s3c2410-wdt");
