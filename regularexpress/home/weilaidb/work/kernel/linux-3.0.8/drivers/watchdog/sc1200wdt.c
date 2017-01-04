#define SC1200_MODULE_VER	"build 20020303"
#define SC1200_MODULE_NAME	"sc1200wdt"
#define PFX			SC1200_MODULE_NAME ": "
#define	MAX_TIMEOUT	255
#define PMIR		(io)
#define PMDR		(io+1)
#define FER1		0x00
#define FER2		0x01
#define PMC1		0x02
#define PMC2		0x03
#define PMC3		0x04
#define WDTO		0x05
#define	WDCF		0x06
#define WDST		0x07
#define KBC_IRQ		0x01
#define MSE_IRQ		0x02
#define UART1_IRQ	0x03
#define UART2_IRQ	0x04
static char banner[] __initdata = PFX SC1200_MODULE_VER;
static int timeout = 1;
static int io = -1;
static int io_len = 2;
static unsigned long open_flag;
static char expect_close;
static DEFINE_SPINLOCK(sc1200wdt_lock);
#if defined CONFIG_PNP
static int isapnp = 1;
static struct pnp_dev *wdt_dev;
module_param(isapnp, int, 0);
MODULE_PARM_DESC(isapnp,
"When set to 0 driver ISA PnP support will be disabled");
module_param(io, int, 0);
MODULE_PARM_DESC(io, "io port");
module_param(timeout, int, 0);
MODULE_PARM_DESC(timeout, "range is 0-255 minutes, default is 1");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static inline void __sc1200wdt_read_data(unsigned char index,
unsigned char *data)
static void sc1200wdt_read_data(unsigned char index, unsigned char *data)
static inline void __sc1200wdt_write_data(unsigned char index,
unsigned char data)
static inline void sc1200wdt_write_data(unsigned char index,
unsigned char data)
static void sc1200wdt_start(void)
static void sc1200wdt_stop(void)
static inline int sc1200wdt_status(void)
static int sc1200wdt_open(struct inode *inode, struct file *file)
static long sc1200wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int sc1200wdt_release(struct inode *inode, struct file *file)
static ssize_t sc1200wdt_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static int sc1200wdt_notify_sys(struct notifier_block *this,
unsigned long code, void *unused)
static struct notifier_block sc1200wdt_notifier = ;
static const struct file_operations sc1200wdt_fops = ;
static struct miscdevice sc1200wdt_miscdev = ;
static int __init sc1200wdt_probe(void)
#if defined CONFIG_PNP
static struct pnp_device_id scl200wdt_pnp_devices[] = ;
static int scl200wdt_pnp_probe(struct pnp_dev *dev,
const struct pnp_device_id *dev_id)
static void scl200wdt_pnp_remove(struct pnp_dev *dev)
static struct pnp_driver scl200wdt_pnp_driver = ;
static int __init sc1200wdt_init(void)
static void __exit sc1200wdt_exit(void)
module_init(sc1200wdt_init);
module_exit(sc1200wdt_exit);
MODULE_AUTHOR("Zwane Mwaikambo <zwane@commfireservices.com>");
MODULE_DESCRIPTION(
"Driver for National Semiconductor PC87307/PC97307 watchdog component");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
