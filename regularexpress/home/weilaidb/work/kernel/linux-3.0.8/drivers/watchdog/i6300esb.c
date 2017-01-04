#define ESB_VERSION "0.05"
#define ESB_MODULE_NAME "i6300ESB timer"
#define ESB_DRIVER_NAME ESB_MODULE_NAME ", v" ESB_VERSION
#define PFX ESB_MODULE_NAME ": "
#define ESB_CONFIG_REG  0x60
#define ESB_LOCK_REG    0x68
#define ESB_TIMER1_REG (BASEADDR + 0x00)
#define ESB_TIMER2_REG (BASEADDR + 0x04)
#define ESB_GINTSR_REG (BASEADDR + 0x08)
#define ESB_RELOAD_REG (BASEADDR + 0x0c)
#define ESB_WDT_FUNC    (0x01 << 2)
#define ESB_WDT_ENABLE  (0x01 << 1)
#define ESB_WDT_LOCK    (0x01 << 0)
#define ESB_WDT_REBOOT  (0x01 << 5)
#define ESB_WDT_FREQ    (0x01 << 2)
#define ESB_WDT_INTTYPE (0x03 << 0)
#define ESB_WDT_TIMEOUT (0x01 << 9)
#define ESB_WDT_RELOAD  (0x01 << 8)
#define ESB_UNLOCK1     0x80
#define ESB_UNLOCK2     0x86
static void __iomem *BASEADDR;
static DEFINE_SPINLOCK(esb_lock);
static unsigned long timer_alive;
static struct pci_dev *esb_pci;
static unsigned short triggered;
static char esb_expect_close;
static int cards_found;
#define WATCHDOG_HEARTBEAT 30
static int heartbeat = WATCHDOG_HEARTBEAT;
module_param(heartbeat, int, 0);
MODULE_PARM_DESC(heartbeat,
"Watchdog heartbeat in seconds. (1<heartbeat<2046, default="
__MODULE_STRING(WATCHDOG_HEARTBEAT) ")");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static inline void esb_unlock_registers(void)
static int esb_timer_start(void)
static int esb_timer_stop(void)
static void esb_timer_keepalive(void)
static int esb_timer_set_heartbeat(int time)
static int esb_open(struct inode *inode, struct file *file)
static int esb_release(struct inode *inode, struct file *file)
static ssize_t esb_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static long esb_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static const struct file_operations esb_fops = ;
static struct miscdevice esb_miscdev = ;
static DEFINE_PCI_DEVICE_TABLE(esb_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, esb_pci_tbl);
static unsigned char __devinit esb_getdevice(struct pci_dev *pdev)
static void __devinit esb_initdevice(void)
static int __devinit esb_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit esb_remove(struct pci_dev *pdev)
static void esb_shutdown(struct pci_dev *pdev)
static struct pci_driver esb_driver = ;
static int __init watchdog_init(void)
static void __exit watchdog_cleanup(void)
module_init(watchdog_init);
module_exit(watchdog_cleanup);
MODULE_AUTHOR("Ross Biro and David Härdeman");
MODULE_DESCRIPTION("Watchdog driver for Intel 6300ESB chipsets");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
