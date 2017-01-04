#define TCO_VERSION "0.01"
#define TCO_MODULE_NAME "NV_TCO"
#define TCO_DRIVER_NAME   TCO_MODULE_NAME ", v" TCO_VERSION
#define PFX TCO_MODULE_NAME ": "
static unsigned int tcobase;
static DEFINE_SPINLOCK(tco_lock);
static unsigned long timer_alive;
static char tco_expect_close;
static struct pci_dev *tco_pci;
static struct platform_device *nv_tco_platform_device;
#define WATCHDOG_HEARTBEAT 30
static int heartbeat = WATCHDOG_HEARTBEAT;
module_param(heartbeat, int, 0);
MODULE_PARM_DESC(heartbeat, "Watchdog heartbeat in seconds. (2<heartbeat<39, "
"default=" __MODULE_STRING(WATCHDOG_HEARTBEAT) ")");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started"
" (default=" __MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static inline unsigned char seconds_to_ticks(int seconds)
static void tco_timer_start(void)
static void tco_timer_stop(void)
static void tco_timer_keepalive(void)
static int tco_timer_set_heartbeat(int t)
static int nv_tco_open(struct inode *inode, struct file *file)
static int nv_tco_release(struct inode *inode, struct file *file)
static ssize_t nv_tco_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static long nv_tco_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct file_operations nv_tco_fops = ;
static struct miscdevice nv_tco_miscdev = ;
static DEFINE_PCI_DEVICE_TABLE(tco_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, tco_pci_tbl);
static unsigned char __devinit nv_tco_getdevice(void)
static int __devinit nv_tco_init(struct platform_device *dev)
static void __devexit nv_tco_cleanup(void)
static int __devexit nv_tco_remove(struct platform_device *dev)
static void nv_tco_shutdown(struct platform_device *dev)
static struct platform_driver nv_tco_driver = ;
static int __init nv_tco_init_module(void)
static void __exit nv_tco_cleanup_module(void)
module_init(nv_tco_init_module);
module_exit(nv_tco_cleanup_module);
MODULE_AUTHOR("Mike Waychison");
MODULE_DESCRIPTION("TCO timer driver for NV chipsets");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
