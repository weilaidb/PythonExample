#define DEFAULT_TIMEOUT		60
#define MODULE_NAME		"sp805-wdt"
#define WDTLOAD			0x000
#define LOAD_MIN	0x00000001
#define LOAD_MAX	0xFFFFFFFF
#define WDTVALUE		0x004
#define WDTCONTROL		0x008
#define	INT_ENABLE	(1 << 0)
#define	RESET_ENABLE	(1 << 1)
#define WDTINTCLR		0x00C
#define WDTRIS			0x010
#define WDTMIS			0x014
#define INT_MASK	(1 << 0)
#define WDTLOCK			0xC00
#define	UNLOCK		0x1ACCE551
#define	LOCK		0x00000001
struct sp805_wdt ;
static struct sp805_wdt *wdt;
static int nowayout = WATCHDOG_NOWAYOUT;
static void wdt_setload(unsigned int timeout)
static u32 wdt_timeleft(void)
static void wdt_enable(void)
static void wdt_disable(void)
static ssize_t sp805_wdt_write(struct file *file, const char *data,
size_t len, loff_t *ppos)
static const struct watchdog_info ident = ;
static long sp805_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int sp805_wdt_open(struct inode *inode, struct file *file)
static int sp805_wdt_release(struct inode *inode, struct file *file)
static const struct file_operations sp805_wdt_fops = ;
static struct miscdevice sp805_wdt_miscdev = ;
static int __devinit
sp805_wdt_probe(struct amba_device *adev, const struct amba_id *id)
static int __devexit sp805_wdt_remove(struct amba_device *adev)
static struct amba_id sp805_wdt_ids[] __initdata = ;
static struct amba_driver sp805_wdt_driver = ;
static int __init sp805_wdt_init(void)
module_init(sp805_wdt_init);
static void __exit sp805_wdt_exit(void)
module_exit(sp805_wdt_exit);
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Set to 1 to keep watchdog running after device release");
MODULE_AUTHOR("Viresh Kumar <viresh.kumar@st.com>");
MODULE_DESCRIPTION("ARM SP805 Watchdog Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
