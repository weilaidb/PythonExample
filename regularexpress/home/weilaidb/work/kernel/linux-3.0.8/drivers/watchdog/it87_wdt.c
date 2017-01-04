#define WATCHDOG_VERSION	"1.14"
#define WATCHDOG_NAME		"IT87 WDT"
#define PFX			WATCHDOG_NAME ": "
#define DRIVER_VERSION		WATCHDOG_NAME " driver, v" WATCHDOG_VERSION "\n"
#define WD_MAGIC		'V'
#define DEFAULT_NOGAMEPORT	0
#define DEFAULT_EXCLUSIVE	1
#define DEFAULT_TIMEOUT		60
#define DEFAULT_TESTMODE	0
#define DEFAULT_NOWAYOUT	WATCHDOG_NOWAYOUT
#define REG		0x2e
#define VAL		0x2f
#define GPIO		0x07
#define GAMEPORT	0x09
#define CIR		0x0a
#define LDNREG		0x07
#define CHIPID		0x20
#define CHIPREV		0x22
#define ACTREG		0x30
#define BASEREG		0x60
#define NO_DEV_ID	0xffff
#define IT8702_ID	0x8702
#define IT8705_ID	0x8705
#define IT8712_ID	0x8712
#define IT8716_ID	0x8716
#define IT8718_ID	0x8718
#define IT8720_ID	0x8720
#define IT8721_ID	0x8721
#define IT8726_ID	0x8726
#define WDTCTRL		0x71
#define WDTCFG		0x72
#define WDTVALLSB	0x73
#define WDTVALMSB	0x74
#define WDT_CIRINT	0x80
#define WDT_MOUSEINT	0x40
#define WDT_KYBINT	0x20
#define WDT_GAMEPORT	0x10
#define WDT_FORCE	0x02
#define WDT_ZERO	0x01
#define WDT_TOV1	0x80
#define WDT_KRST	0x40
#define WDT_TOVE	0x20
#define WDT_PWROK	0x10
#define WDT_INT_MASK	0x0f
#define CIR_ILS		0x70
#define CIR_BASE	0x0208
#define CIR_DR(b)	(b)
#define CIR_IER(b)	(b + 1)
#define CIR_RCR(b)	(b + 2)
#define CIR_TCR1(b)	(b + 3)
#define CIR_TCR2(b)	(b + 4)
#define CIR_TSR(b)	(b + 5)
#define CIR_RSR(b)	(b + 6)
#define CIR_BDLR(b)	(b + 5)
#define CIR_BDHR(b)	(b + 6)
#define CIR_IIR(b)	(b + 7)
#define GP_BASE_DEFAULT	0x0201
#define WDTS_TIMER_RUN	0
#define WDTS_DEV_OPEN	1
#define WDTS_KEEPALIVE	2
#define WDTS_LOCKED	3
#define WDTS_USE_GP	4
#define WDTS_EXPECTED	5
static	unsigned int base, gpact, ciract, max_units, chip_type;
static	unsigned long wdt_status;
static	DEFINE_SPINLOCK(spinlock);
static	int nogameport = DEFAULT_NOGAMEPORT;
static	int exclusive  = DEFAULT_EXCLUSIVE;
static	int timeout    = DEFAULT_TIMEOUT;
static	int testmode   = DEFAULT_TESTMODE;
static	int nowayout   = DEFAULT_NOWAYOUT;
module_param(nogameport, int, 0);
MODULE_PARM_DESC(nogameport, "Forbid the activation of game port, default="
__MODULE_STRING(DEFAULT_NOGAMEPORT));
module_param(exclusive, int, 0);
MODULE_PARM_DESC(exclusive, "Watchdog exclusive device open, default="
__MODULE_STRING(DEFAULT_EXCLUSIVE));
module_param(timeout, int, 0);
MODULE_PARM_DESC(timeout, "Watchdog timeout in seconds, default="
__MODULE_STRING(DEFAULT_TIMEOUT));
module_param(testmode, int, 0);
MODULE_PARM_DESC(testmode, "Watchdog test mode (1 = no reboot), default="
__MODULE_STRING(DEFAULT_TESTMODE));
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started, default="
__MODULE_STRING(WATCHDOG_NOWAYOUT));
static inline void superio_enter(void)
static inline void superio_exit(void)
static inline void superio_select(int ldn)
static inline int superio_inb(int reg)
static inline void superio_outb(int val, int reg)
static inline int superio_inw(int reg)
static inline void superio_outw(int val, int reg)
static void wdt_update_timeout(void)
static int wdt_round_time(int t)
static void wdt_keepalive(void)
static void wdt_start(void)
static void wdt_stop(void)
static int wdt_set_timeout(int t)
static int wdt_get_status(int *status)
static int wdt_open(struct inode *inode, struct file *file)
static int wdt_release(struct inode *inode, struct file *file)
static ssize_t wdt_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct watchdog_info ident = ;
static long wdt_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int wdt_notify_sys(struct notifier_block *this, unsigned long code,
void *unused)
static const struct file_operations wdt_fops = ;
static struct miscdevice wdt_miscdev = ;
static struct notifier_block wdt_notifier = ;
static int __init it87_wdt_init(void)
static void __exit it87_wdt_exit(void)
module_init(it87_wdt_init);
module_exit(it87_wdt_exit);
MODULE_AUTHOR("Oliver Schuster");
MODULE_DESCRIPTION("Hardware Watchdog Device Driver for IT87xx EC-LPC I/O");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
