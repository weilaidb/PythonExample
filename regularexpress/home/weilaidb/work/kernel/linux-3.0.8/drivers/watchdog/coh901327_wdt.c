#define DRV_NAME "WDOG COH 901 327"
#define U300_WDOG_FR							0x00
#define U300_WDOG_FR_FEED_RESTART_TIMER					0xFEEDU
#define U300_WDOG_TR							0x04
#define U300_WDOG_TR_TIMEOUT_MASK					0x7FFFU
#define U300_WDOG_D1R							0x08
#define U300_WDOG_D1R_DISABLE1_DISABLE_TIMER				0x2BADU
#define U300_WDOG_D2R							0x0C
#define U300_WDOG_D2R_DISABLE2_DISABLE_TIMER				0xCAFEU
#define U300_WDOG_D2R_DISABLE_STATUS_DISABLED				0xDABEU
#define U300_WDOG_D2R_DISABLE_STATUS_ENABLED				0x0000U
#define U300_WDOG_SR							0x10
#define U300_WDOG_SR_STATUS_TIMED_OUT					0xCFE8U
#define U300_WDOG_SR_STATUS_NORMAL					0x0000U
#define U300_WDOG_SR_RESET_STATUS_RESET					0xE8B4U
#define U300_WDOG_CR							0x14
#define U300_WDOG_CR_VALID_IND						0x8000U
#define U300_WDOG_CR_VALID_STABLE					0x0000U
#define U300_WDOG_CR_COUNT_VALUE_MASK					0x7FFFU
#define U300_WDOG_JOR							0x18
#define U300_WDOG_JOR_JTAG_MODE_IND					0x0002U
#define U300_WDOG_JOR_JTAG_WATCHDOG_ENABLE				0x0001U
#define U300_WDOG_RR							0x1C
#define U300_WDOG_RR_RESTART_VALUE_RESUME				0xACEDU
#define U300_WDOG_IER							0x20
#define U300_WDOG_IER_WILL_BARK_IRQ_EVENT_IND				0x0001U
#define U300_WDOG_IER_WILL_BARK_IRQ_ACK_ENABLE				0x0001U
#define U300_WDOG_IMR							0x24
#define U300_WDOG_IMR_WILL_BARK_IRQ_ENABLE				0x0001U
#define U300_WDOG_IFR							0x28
#define U300_WDOG_IFR_WILL_BARK_IRQ_FORCE_ENABLE			0x0001U
static int margin = 60;
static resource_size_t phybase;
static resource_size_t physize;
static int irq;
static void __iomem *virtbase;
static unsigned long coh901327_users;
static unsigned long boot_status;
static u16 wdogenablestore;
static u16 irqmaskstore;
static struct device *parent;
static struct clk *clk;
static void coh901327_enable(u16 timeout)
static void coh901327_disable(void)
static void coh901327_start(void)
static void coh901327_keepalive(void)
static int coh901327_settimeout(int time)
static irqreturn_t coh901327_interrupt(int irq, void *data)
static int coh901327_open(struct inode *inode, struct file *file)
static int coh901327_release(struct inode *inode, struct file *file)
static ssize_t coh901327_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static long coh901327_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct file_operations coh901327_fops = ;
static struct miscdevice coh901327_miscdev = ;
static int __exit coh901327_remove(struct platform_device *pdev)
static int __init coh901327_probe(struct platform_device *pdev)
static int coh901327_suspend(struct platform_device *pdev, pm_message_t state)
static int coh901327_resume(struct platform_device *pdev)
#define coh901327_suspend NULL
#define coh901327_resume  NULL
void coh901327_watchdog_reset(void)
static struct platform_driver coh901327_driver = ;
static int __init coh901327_init(void)
module_init(coh901327_init);
static void __exit coh901327_exit(void)
module_exit(coh901327_exit);
MODULE_AUTHOR("Linus Walleij <linus.walleij@stericsson.com>");
MODULE_DESCRIPTION("COH 901 327 Watchdog");
module_param(margin, int, 0);
MODULE_PARM_DESC(margin, "Watchdog margin in seconds (default 60s)");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
