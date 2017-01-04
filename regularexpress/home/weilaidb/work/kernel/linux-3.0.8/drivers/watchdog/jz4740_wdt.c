#define JZ_REG_WDT_TIMER_DATA     0x0
#define JZ_REG_WDT_COUNTER_ENABLE 0x4
#define JZ_REG_WDT_TIMER_COUNTER  0x8
#define JZ_REG_WDT_TIMER_CONTROL  0xC
#define JZ_WDT_CLOCK_PCLK 0x1
#define JZ_WDT_CLOCK_RTC  0x2
#define JZ_WDT_CLOCK_EXT  0x4
#define WDT_IN_USE        0
#define WDT_OK_TO_CLOSE   1
#define JZ_WDT_CLOCK_DIV_SHIFT   3
#define JZ_WDT_CLOCK_DIV_1    (0 << JZ_WDT_CLOCK_DIV_SHIFT)
#define JZ_WDT_CLOCK_DIV_4    (1 << JZ_WDT_CLOCK_DIV_SHIFT)
#define JZ_WDT_CLOCK_DIV_16   (2 << JZ_WDT_CLOCK_DIV_SHIFT)
#define JZ_WDT_CLOCK_DIV_64   (3 << JZ_WDT_CLOCK_DIV_SHIFT)
#define JZ_WDT_CLOCK_DIV_256  (4 << JZ_WDT_CLOCK_DIV_SHIFT)
#define JZ_WDT_CLOCK_DIV_1024 (5 << JZ_WDT_CLOCK_DIV_SHIFT)
#define DEFAULT_HEARTBEAT 5
#define MAX_HEARTBEAT     2048
static struct  jz4740_wdt;
static int heartbeat = DEFAULT_HEARTBEAT;
static void jz4740_wdt_service(void)
static void jz4740_wdt_set_heartbeat(int new_heartbeat)
static void jz4740_wdt_enable(void)
static void jz4740_wdt_disable(void)
static int jz4740_wdt_open(struct inode *inode, struct file *file)
static ssize_t jz4740_wdt_write(struct file *file, const char *data,
size_t len, loff_t *ppos)
static const struct watchdog_info ident = ;
static long jz4740_wdt_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static int jz4740_wdt_release(struct inode *inode, struct file *file)
static const struct file_operations jz4740_wdt_fops = ;
static struct miscdevice jz4740_wdt_miscdev = ;
static int __devinit jz4740_wdt_probe(struct platform_device *pdev)
static int __devexit jz4740_wdt_remove(struct platform_device *pdev)
static struct platform_driver jz4740_wdt_driver = ;
static int __init jz4740_wdt_init(void)
module_init(jz4740_wdt_init);
static void __exit jz4740_wdt_exit(void)
module_exit(jz4740_wdt_exit);
MODULE_AUTHOR("Paul Cercueil <paul@crapouillou.net>");
MODULE_DESCRIPTION("jz4740 Watchdog Driver");
module_param(heartbeat, int, 0);
MODULE_PARM_DESC(heartbeat,
"Watchdog heartbeat period in seconds from 1 to "
__MODULE_STRING(MAX_HEARTBEAT) ", default "
__MODULE_STRING(DEFAULT_HEARTBEAT));
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
MODULE_ALIAS("platform:jz4740-wdt");
