#define DEFAULT_TIMEOUT     1
#define MAX_TIMEOUT         255
#define VERSION             "1.1"
#define MODNAME             "pc87413 WDT"
#define PFX                 MODNAME ": "
#define DPFX                MODNAME " - DEBUG: "
#define WDT_INDEX_IO_PORT   (io+0)
#define WDT_DATA_IO_PORT    (WDT_INDEX_IO_PORT+1)
#define SWC_LDN             0x04
#define SIOCFG2             0x22
#define WDCTL               0x10
#define WDTO                0x11
#define WDCFG               0x12
#define IO_DEFAULT	0x2E
static int io = IO_DEFAULT;
static int timeout = DEFAULT_TIMEOUT;
static unsigned long timer_enabled;
static char expect_close;
static DEFINE_SPINLOCK(io_lock);
static int nowayout = WATCHDOG_NOWAYOUT;
static inline void pc87413_select_wdt_out(void)
static inline void pc87413_enable_swc(void)
static inline unsigned int pc87413_get_swc_base(void)
static inline void pc87413_swc_bank3(unsigned int swc_base_addr)
static inline void pc87413_programm_wdto(unsigned int swc_base_addr,
char pc87413_time)
static inline void pc87413_enable_wden(unsigned int swc_base_addr)
static inline void pc87413_enable_sw_wd_tren(unsigned int swc_base_addr)
static inline void pc87413_disable_sw_wd_tren(unsigned int swc_base_addr)
static inline void pc87413_enable_sw_wd_trg(unsigned int swc_base_addr)
static inline void pc87413_disable_sw_wd_trg(unsigned int swc_base_addr)
static void pc87413_enable(void)
static void pc87413_disable(void)
static void pc87413_refresh(void)
static int pc87413_open(struct inode *inode, struct file *file)
static int pc87413_release(struct inode *inode, struct file *file)
static int pc87413_status(void)
static ssize_t pc87413_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static long pc87413_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int pc87413_notify_sys(struct notifier_block *this,
unsigned long code,
void *unused)
static const struct file_operations pc87413_fops = ;
static struct notifier_block pc87413_notifier = ;
static struct miscdevice pc87413_miscdev = ;
static int __init pc87413_init(void)
static void __exit pc87413_exit(void)
module_init(pc87413_init);
module_exit(pc87413_exit);
MODULE_AUTHOR("Sven Anders <anders@anduras.de>, "
"Marcus Junker <junker@anduras.de>,");
MODULE_DESCRIPTION("PC87413 WDT driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
module_param(io, int, 0);
MODULE_PARM_DESC(io, MODNAME " I/O port (default: "
__MODULE_STRING(IO_DEFAULT) ").");
module_param(timeout, int, 0);
MODULE_PARM_DESC(timeout,
"Watchdog timeout in minutes (default="
__MODULE_STRING(DEFAULT_TIMEOUT) ").");
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
