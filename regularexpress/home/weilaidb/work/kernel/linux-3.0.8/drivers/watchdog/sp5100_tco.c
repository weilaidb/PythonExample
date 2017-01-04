#define TCO_VERSION "0.01"
#define TCO_MODULE_NAME "SP5100 TCO timer"
#define TCO_DRIVER_NAME   TCO_MODULE_NAME ", v" TCO_VERSION
#define PFX TCO_MODULE_NAME ": "
static u32 tcobase_phys;
static void __iomem *tcobase;
static unsigned int pm_iobase;
static DEFINE_SPINLOCK(tco_lock);
static unsigned long timer_alive;
static char tco_expect_close;
static struct pci_dev *sp5100_tco_pci;
static struct platform_device *sp5100_tco_platform_device;
#define WATCHDOG_HEARTBEAT 60
static int heartbeat = WATCHDOG_HEARTBEAT;
module_param(heartbeat, int, 0);
MODULE_PARM_DESC(heartbeat, "Watchdog heartbeat in seconds. (default="
__MODULE_STRING(WATCHDOG_HEARTBEAT) ")");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started"
" (default=" __MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static void tco_timer_start(void)
static void tco_timer_stop(void)
static void tco_timer_keepalive(void)
static int tco_timer_set_heartbeat(int t)
static int sp5100_tco_open(struct inode *inode, struct file *file)
static int sp5100_tco_release(struct inode *inode, struct file *file)
static ssize_t sp5100_tco_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static long sp5100_tco_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct file_operations sp5100_tco_fops = ;
static struct miscdevice sp5100_tco_miscdev = ;
static DEFINE_PCI_DEVICE_TABLE(sp5100_tco_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, sp5100_tco_pci_tbl);
static unsigned char __devinit sp5100_tco_setupdevice(void)
static int __devinit sp5100_tco_init(struct platform_device *dev)
static void __devexit sp5100_tco_cleanup(void)
static int __devexit sp5100_tco_remove(struct platform_device *dev)
static void sp5100_tco_shutdown(struct platform_device *dev)
static struct platform_driver sp5100_tco_driver = ;
static int __init sp5100_tco_init_module(void)
static void __exit sp5100_tco_cleanup_module(void)
module_init(sp5100_tco_init_module);
module_exit(sp5100_tco_cleanup_module);
MODULE_AUTHOR("Priyanka Gupta");
MODULE_DESCRIPTION("TCO timer driver for SP5100 chipset");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
