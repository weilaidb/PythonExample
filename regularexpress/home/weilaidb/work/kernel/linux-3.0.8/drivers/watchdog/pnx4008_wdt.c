#define MODULE_NAME "PNX4008-WDT: "
#define DEFAULT_HEARTBEAT 19
#define MAX_HEARTBEAT     60
#define WDTIM_INT(p)     ((p) + 0x0)
#define WDTIM_CTRL(p)    ((p) + 0x4)
#define WDTIM_COUNTER(p) ((p) + 0x8)
#define WDTIM_MCTRL(p)   ((p) + 0xC)
#define WDTIM_MATCH0(p)  ((p) + 0x10)
#define WDTIM_EMR(p)     ((p) + 0x14)
#define WDTIM_PULSE(p)   ((p) + 0x18)
#define WDTIM_RES(p)     ((p) + 0x1C)
#define MATCH_INT      1
#define COUNT_ENAB     1
#define RESET_COUNT    (1 << 1)
#define DEBUG_EN       (1 << 2)
#define MR0_INT        1
#undef  RESET_COUNT0
#define RESET_COUNT0   (1 << 2)
#define STOP_COUNT0    (1 << 2)
#define M_RES1         (1 << 3)
#define M_RES2         (1 << 4)
#define RESFRC1        (1 << 5)
#define RESFRC2        (1 << 6)
#define EXT_MATCH0      1
#define MATCH_OUTPUT_HIGH (2 << 4)
#define WDOG_RESET      1
#define WDOG_COUNTER_RATE 13000000
static int nowayout = WATCHDOG_NOWAYOUT;
static int heartbeat = DEFAULT_HEARTBEAT;
static DEFINE_SPINLOCK(io_lock);
static unsigned long wdt_status;
#define WDT_IN_USE        0
#define WDT_OK_TO_CLOSE   1
#define WDT_REGION_INITED 2
#define WDT_DEVICE_INITED 3
static unsigned long boot_status;
static struct resource	*wdt_mem;
static void __iomem	*wdt_base;
struct clk		*wdt_clk;
static void wdt_enable(void)
static void wdt_disable(void)
static int pnx4008_wdt_open(struct inode *inode, struct file *file)
static ssize_t pnx4008_wdt_write(struct file *file, const char *data,
size_t len, loff_t *ppos)
static const struct watchdog_info ident = ;
static long pnx4008_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int pnx4008_wdt_release(struct inode *inode, struct file *file)
static const struct file_operations pnx4008_wdt_fops = ;
static struct miscdevice pnx4008_wdt_miscdev = ;
static int __devinit pnx4008_wdt_probe(struct platform_device *pdev)
static int __devexit pnx4008_wdt_remove(struct platform_device *pdev)
static struct platform_driver platform_wdt_driver = ;
static int __init pnx4008_wdt_init(void)
static void __exit pnx4008_wdt_exit(void)
module_init(pnx4008_wdt_init);
module_exit(pnx4008_wdt_exit);
MODULE_AUTHOR("MontaVista Software, Inc. <source@mvista.com>");
MODULE_DESCRIPTION("PNX4008 Watchdog Driver");
module_param(heartbeat, int, 0);
MODULE_PARM_DESC(heartbeat,
"Watchdog heartbeat period in seconds from 1 to "
__MODULE_STRING(MAX_HEARTBEAT) ", default "
__MODULE_STRING(DEFAULT_HEARTBEAT));
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Set to 1 to keep watchdog running after device release");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
MODULE_ALIAS("platform:pnx4008-watchdog");
