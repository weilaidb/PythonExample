#define WDT_IS_PCI
#define PFX "wdt_pci: "
static int dev_count;
static unsigned long open_lock;
static DEFINE_SPINLOCK(wdtpci_lock);
static char expect_close;
static resource_size_t io;
static int irq;
#define WD_TIMO 60
static int heartbeat = WD_TIMO;
static int wd_heartbeat;
module_param(heartbeat, int, 0);
MODULE_PARM_DESC(heartbeat,
"Watchdog heartbeat in seconds. (0<heartbeat<65536, default="
__MODULE_STRING(WD_TIMO) ")");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static int tachometer;
module_param(tachometer, int, 0);
MODULE_PARM_DESC(tachometer,
"PCI-WDT501 Fan Tachometer support (0=disable, default=0)");
static int type = 500;
module_param(type, int, 0);
MODULE_PARM_DESC(type,
"PCI-WDT501 Card type (500 or 501 , default=500)");
static void wdtpci_ctr_mode(int ctr, int mode)
static void wdtpci_ctr_load(int ctr, int val)
static int wdtpci_start(void)
static int wdtpci_stop(void)
static int wdtpci_ping(void)
static int wdtpci_set_heartbeat(int t)
static int wdtpci_get_status(int *status)
static int wdtpci_get_temperature(int *temperature)
static irqreturn_t wdtpci_interrupt(int irq, void *dev_id)
static ssize_t wdtpci_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static long wdtpci_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int wdtpci_open(struct inode *inode, struct file *file)
static int wdtpci_release(struct inode *inode, struct file *file)
static ssize_t wdtpci_temp_read(struct file *file, char __user *buf,
size_t count, loff_t *ptr)
static int wdtpci_temp_open(struct inode *inode, struct file *file)
static int wdtpci_temp_release(struct inode *inode, struct file *file)
static int wdtpci_notify_sys(struct notifier_block *this, unsigned long code,
void *unused)
static const struct file_operations wdtpci_fops = ;
static struct miscdevice wdtpci_miscdev = ;
static const struct file_operations wdtpci_temp_fops = ;
static struct miscdevice temp_miscdev = ;
static struct notifier_block wdtpci_notifier = ;
static int __devinit wdtpci_init_one(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit wdtpci_remove_one(struct pci_dev *pdev)
static DEFINE_PCI_DEVICE_TABLE(wdtpci_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, wdtpci_pci_tbl);
static struct pci_driver wdtpci_driver = ;
static void __exit wdtpci_cleanup(void)
static int __init wdtpci_init(void)
module_init(wdtpci_init);
module_exit(wdtpci_cleanup);
MODULE_AUTHOR("JP Nollmann, Alan Cox");
MODULE_DESCRIPTION("Driver for the ICS PCI-WDT500/501 watchdog cards");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
MODULE_ALIAS_MISCDEV(TEMP_MINOR);
