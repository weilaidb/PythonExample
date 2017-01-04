#define DRV_NAME	"iTCO_wdt"
#define DRV_VERSION	"1.06"
#define PFX		DRV_NAME ": "
enum iTCO_chipsets ;
static struct  iTCO_chipset_info[] __devinitdata = ;
#define ITCO_PCI_DEVICE(dev, data) \
.vendor = PCI_VENDOR_ID_INTEL,	\
.device = dev,			\
.subvendor = PCI_ANY_ID,	\
.subdevice = PCI_ANY_ID,	\
.class = 0,			\
.class_mask = 0,		\
.driver_data = data
static DEFINE_PCI_DEVICE_TABLE(iTCO_wdt_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, iTCO_wdt_pci_tbl);
#define TCOBASE		(iTCO_wdt_private.ACPIBASE + 0x60)
#define SMI_EN		(iTCO_wdt_private.ACPIBASE + 0x30)
#define TCO_RLD		(TCOBASE + 0x00)
#define TCOv1_TMR	(TCOBASE + 0x01)
#define TCO_DAT_IN	(TCOBASE + 0x02)
#define TCO_DAT_OUT	(TCOBASE + 0x03)
#define TCO1_STS	(TCOBASE + 0x04)
#define TCO2_STS	(TCOBASE + 0x06)
#define TCO1_CNT	(TCOBASE + 0x08)
#define TCO2_CNT	(TCOBASE + 0x0a)
#define TCOv2_TMR	(TCOBASE + 0x12)
static unsigned long is_active;
static char expect_release;
static struct  iTCO_wdt_private;
static struct platform_device *iTCO_wdt_platform_device;
#define WATCHDOG_HEARTBEAT 30
static int heartbeat = WATCHDOG_HEARTBEAT;
module_param(heartbeat, int, 0);
MODULE_PARM_DESC(heartbeat, "Watchdog timeout in seconds. "
"5..76 (TCO v1) or 3..614 (TCO v2), default="
__MODULE_STRING(WATCHDOG_HEARTBEAT) ")");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static inline unsigned int seconds_to_ticks(int seconds)
static void iTCO_wdt_set_NO_REBOOT_bit(void)
static int iTCO_wdt_unset_NO_REBOOT_bit(void)
static int iTCO_wdt_start(void)
static int iTCO_wdt_stop(void)
static int iTCO_wdt_keepalive(void)
static int iTCO_wdt_set_heartbeat(int t)
static int iTCO_wdt_get_timeleft(int *time_left)
static int iTCO_wdt_open(struct inode *inode, struct file *file)
static int iTCO_wdt_release(struct inode *inode, struct file *file)
static ssize_t iTCO_wdt_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static long iTCO_wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct file_operations iTCO_wdt_fops = ;
static struct miscdevice iTCO_wdt_miscdev = ;
static int __devinit iTCO_wdt_init(struct pci_dev *pdev,
const struct pci_device_id *ent, struct platform_device *dev)
static void __devexit iTCO_wdt_cleanup(void)
static int __devinit iTCO_wdt_probe(struct platform_device *dev)
static int __devexit iTCO_wdt_remove(struct platform_device *dev)
static void iTCO_wdt_shutdown(struct platform_device *dev)
#define iTCO_wdt_suspend NULL
#define iTCO_wdt_resume  NULL
static struct platform_driver iTCO_wdt_driver = ;
static int __init iTCO_wdt_init_module(void)
static void __exit iTCO_wdt_cleanup_module(void)
module_init(iTCO_wdt_init_module);
module_exit(iTCO_wdt_cleanup_module);
MODULE_AUTHOR("Wim Van Sebroeck <wim@iguana.be>");
MODULE_DESCRIPTION("Intel TCO WatchDog Timer Driver");
MODULE_VERSION(DRV_VERSION);
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
