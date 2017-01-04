#define DRV_NAME	"sch311x_wdt"
#define PFX		DRV_NAME ": "
#define RESGEN			0x1d
#define GP60			0x47
#define WDT_TIME_OUT		0x65
#define WDT_VAL			0x66
#define WDT_CFG			0x67
#define WDT_CTRL		0x68
static unsigned long sch311x_wdt_is_open;
static char sch311x_wdt_expect_close;
static struct platform_device *sch311x_wdt_pdev;
static int sch311x_ioports[] = ;
static struct  sch311x_wdt_data;
static unsigned short force_id;
module_param(force_id, ushort, 0);
MODULE_PARM_DESC(force_id, "Override the detected device ID");
static unsigned short therm_trip;
module_param(therm_trip, ushort, 0);
MODULE_PARM_DESC(therm_trip, "Should a ThermTrip trigger the reset generator");
#define WATCHDOG_TIMEOUT 60
static int timeout = WATCHDOG_TIMEOUT;
module_param(timeout, int, 0);
MODULE_PARM_DESC(timeout,
"Watchdog timeout in seconds. 1<= timeout <=15300, default="
__MODULE_STRING(WATCHDOG_TIMEOUT) ".");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static inline void sch311x_sio_enter(int sio_config_port)
static inline void sch311x_sio_exit(int sio_config_port)
static inline int sch311x_sio_inb(int sio_config_port, int reg)
static inline void sch311x_sio_outb(int sio_config_port, int reg, int val)
static void sch311x_wdt_set_timeout(int t)
static void sch311x_wdt_start(void)
static void sch311x_wdt_stop(void)
static void sch311x_wdt_keepalive(void)
static int sch311x_wdt_set_heartbeat(int t)
static void sch311x_wdt_get_status(int *status)
static ssize_t sch311x_wdt_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static long sch311x_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int sch311x_wdt_open(struct inode *inode, struct file *file)
static int sch311x_wdt_close(struct inode *inode, struct file *file)
static const struct file_operations sch311x_wdt_fops = ;
static struct miscdevice sch311x_wdt_miscdev = ;
static int __devinit sch311x_wdt_probe(struct platform_device *pdev)
static int __devexit sch311x_wdt_remove(struct platform_device *pdev)
static void sch311x_wdt_shutdown(struct platform_device *dev)
#define sch311x_wdt_suspend NULL
#define sch311x_wdt_resume  NULL
static struct platform_driver sch311x_wdt_driver = ;
static int __init sch311x_detect(int sio_config_port, unsigned short *addr)
static int __init sch311x_wdt_init(void)
static void __exit sch311x_wdt_exit(void)
module_init(sch311x_wdt_init);
module_exit(sch311x_wdt_exit);
MODULE_AUTHOR("Wim Van Sebroeck <wim@iguana.be>");
MODULE_DESCRIPTION("SMSC SCH311x WatchDog Timer Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
