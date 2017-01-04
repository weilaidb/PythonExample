#define MODULE_NAME "DAVINCI-WDT: "
#define DEFAULT_HEARTBEAT 60
#define MAX_HEARTBEAT     600
#define PID12	(0x0)
#define EMUMGT	(0x4)
#define TIM12	(0x10)
#define TIM34	(0x14)
#define PRD12	(0x18)
#define PRD34	(0x1C)
#define TCR	(0x20)
#define TGCR	(0x24)
#define WDTCR	(0x28)
#define ENAMODE12_DISABLED	(0 << 6)
#define ENAMODE12_ONESHOT	(1 << 6)
#define ENAMODE12_PERIODIC	(2 << 6)
#define TIM12RS_UNRESET		(1 << 0)
#define TIM34RS_UNRESET		(1 << 1)
#define TIMMODE_64BIT_WDOG      (2 << 2)
#define WDEN			(1 << 14)
#define WDFLAG			(1 << 15)
#define WDKEY_SEQ0		(0xa5c6 << 16)
#define WDKEY_SEQ1		(0xda7e << 16)
static int heartbeat = DEFAULT_HEARTBEAT;
static DEFINE_SPINLOCK(io_lock);
static unsigned long wdt_status;
#define WDT_IN_USE        0
#define WDT_OK_TO_CLOSE   1
#define WDT_REGION_INITED 2
#define WDT_DEVICE_INITED 3
static struct resource	*wdt_mem;
static void __iomem	*wdt_base;
struct clk		*wdt_clk;
static void wdt_service(void)
static void wdt_enable(void)
static int davinci_wdt_open(struct inode *inode, struct file *file)
static ssize_t
davinci_wdt_write(struct file *file, const char *data, size_t len,
loff_t *ppos)
static const struct watchdog_info ident = ;
static long davinci_wdt_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static int davinci_wdt_release(struct inode *inode, struct file *file)
static const struct file_operations davinci_wdt_fops = ;
static struct miscdevice davinci_wdt_miscdev = ;
static int __devinit davinci_wdt_probe(struct platform_device *pdev)
static int __devexit davinci_wdt_remove(struct platform_device *pdev)
static struct platform_driver platform_wdt_driver = ;
static int __init davinci_wdt_init(void)
static void __exit davinci_wdt_exit(void)
module_init(davinci_wdt_init);
module_exit(davinci_wdt_exit);
MODULE_AUTHOR("Texas Instruments");
MODULE_DESCRIPTION("DaVinci Watchdog Driver");
module_param(heartbeat, int, 0);
MODULE_PARM_DESC(heartbeat,
"Watchdog heartbeat period in seconds from 1 to "
__MODULE_STRING(MAX_HEARTBEAT) ", default "
__MODULE_STRING(DEFAULT_HEARTBEAT));
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
MODULE_ALIAS("platform:watchdog");
