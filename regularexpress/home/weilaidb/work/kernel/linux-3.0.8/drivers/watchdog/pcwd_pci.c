#define WATCHDOG_VERSION "1.03"
#define WATCHDOG_DRIVER_NAME "PCI-PC Watchdog"
#define WATCHDOG_NAME "pcwd_pci"
#define PFX WATCHDOG_NAME ": "
#define DRIVER_VERSION WATCHDOG_DRIVER_NAME " driver, v" WATCHDOG_VERSION "\n"
#define PCI_VENDOR_ID_QUICKLOGIC    0x11e3
#define PCI_DEVICE_ID_WATCHDOG_PCIPCWD 0x5030
#define WD_PCI_WTRP		0x01
#define WD_PCI_HRBT		0x02
#define WD_PCI_TTRP		0x04
#define WD_PCI_RL2A		0x08
#define WD_PCI_RL1A		0x10
#define WD_PCI_R2DS		0x40
#define WD_PCI_RLY2		0x80
#define WD_PCI_WDIS		0x10
#define WD_PCI_ENTP		0x20
#define WD_PCI_WRSP		0x40
#define WD_PCI_PCMD		0x80
#define PCI_COMMAND_TIMEOUT	150
#define CMD_GET_STATUS				0x04
#define CMD_GET_FIRMWARE_VERSION		0x08
#define CMD_READ_WATCHDOG_TIMEOUT		0x18
#define CMD_WRITE_WATCHDOG_TIMEOUT		0x19
#define CMD_GET_CLEAR_RESET_COUNT		0x84
static const int heartbeat_tbl[] = ;
static int cards_found;
static int temp_panic;
static unsigned long is_active;
static char expect_release;
static struct  pcipcwd_private;
#define QUIET	0
#define VERBOSE	1
#define DEBUG	2
static int debug = QUIET;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "Debug level: 0=Quiet, 1=Verbose, 2=Debug (default=0)");
#define WATCHDOG_HEARTBEAT 0
static int heartbeat = WATCHDOG_HEARTBEAT;
module_param(heartbeat, int, 0);
MODULE_PARM_DESC(heartbeat, "Watchdog heartbeat in seconds. "
"(0<heartbeat<65536 or 0=delay-time from dip-switches, default="
__MODULE_STRING(WATCHDOG_HEARTBEAT) ")");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static int send_command(int cmd, int *msb, int *lsb)
static inline void pcipcwd_check_temperature_support(void)
static int pcipcwd_get_option_switches(void)
static void pcipcwd_show_card_info(void)
static int pcipcwd_start(void)
static int pcipcwd_stop(void)
static int pcipcwd_keepalive(void)
static int pcipcwd_set_heartbeat(int t)
static int pcipcwd_get_status(int *status)
static int pcipcwd_clear_status(void)
static int pcipcwd_get_temperature(int *temperature)
static int pcipcwd_get_timeleft(int *time_left)
static ssize_t pcipcwd_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static long pcipcwd_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int pcipcwd_open(struct inode *inode, struct file *file)
static int pcipcwd_release(struct inode *inode, struct file *file)
static ssize_t pcipcwd_temp_read(struct file *file, char __user *data,
size_t len, loff_t *ppos)
static int pcipcwd_temp_open(struct inode *inode, struct file *file)
static int pcipcwd_temp_release(struct inode *inode, struct file *file)
static int pcipcwd_notify_sys(struct notifier_block *this, unsigned long code,
void *unused)
static const struct file_operations pcipcwd_fops = ;
static struct miscdevice pcipcwd_miscdev = ;
static const struct file_operations pcipcwd_temp_fops = ;
static struct miscdevice pcipcwd_temp_miscdev = ;
static struct notifier_block pcipcwd_notifier = ;
static int __devinit pcipcwd_card_init(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit pcipcwd_card_exit(struct pci_dev *pdev)
static DEFINE_PCI_DEVICE_TABLE(pcipcwd_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, pcipcwd_pci_tbl);
static struct pci_driver pcipcwd_driver = ;
static int __init pcipcwd_init_module(void)
static void __exit pcipcwd_cleanup_module(void)
module_init(pcipcwd_init_module);
module_exit(pcipcwd_cleanup_module);
MODULE_AUTHOR("Wim Van Sebroeck <wim@iguana.be>");
MODULE_DESCRIPTION("Berkshire PCI-PC Watchdog driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
MODULE_ALIAS_MISCDEV(TEMP_MINOR);
