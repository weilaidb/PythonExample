#define REG_WTCR		0x1c
#define WTCLK			(0x01 << 10)
#define WTE			(0x01 << 7)
#define WTIS			(0x03 << 4)
#define WTIF			(0x01 << 3)
#define WTRF			(0x01 << 2)
#define WTRE			(0x01 << 1)
#define WTR			(0x01 << 0)
#define WDT_HW_TIMEOUT		0x02
#define WDT_TIMEOUT		(HZ/2)
#define WDT_HEARTBEAT		15
static int heartbeat = WDT_HEARTBEAT;
module_param(heartbeat, int, 0);
MODULE_PARM_DESC(heartbeat, "Watchdog heartbeats in seconds. "
"(default = " __MODULE_STRING(WDT_HEARTBEAT) ")");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started "
"(default=" __MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
struct nuc900_wdt ;
static unsigned long nuc900wdt_busy;
struct nuc900_wdt *nuc900_wdt;
static inline void nuc900_wdt_keepalive(void)
static inline void nuc900_wdt_start(void)
static inline void nuc900_wdt_stop(void)
static inline void nuc900_wdt_ping(void)
static int nuc900_wdt_open(struct inode *inode, struct file *file)
static int nuc900_wdt_close(struct inode *inode, struct file *file)
static const struct watchdog_info nuc900_wdt_info = ;
static long nuc900_wdt_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static ssize_t nuc900_wdt_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static void nuc900_wdt_timer_ping(unsigned long data)
static const struct file_operations nuc900wdt_fops = ;
static struct miscdevice nuc900wdt_miscdev = ;
static int __devinit nuc900wdt_probe(struct platform_device *pdev)
static int __devexit nuc900wdt_remove(struct platform_device *pdev)
static struct platform_driver nuc900wdt_driver = ;
static int __init nuc900_wdt_init(void)
static void __exit nuc900_wdt_exit(void)
module_init(nuc900_wdt_init);
module_exit(nuc900_wdt_exit);
MODULE_AUTHOR("Wan ZongShun <mcuos.com@gmail.com>");
MODULE_DESCRIPTION("Watchdog driver for NUC900");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
MODULE_ALIAS("platform:nuc900-wdt");
