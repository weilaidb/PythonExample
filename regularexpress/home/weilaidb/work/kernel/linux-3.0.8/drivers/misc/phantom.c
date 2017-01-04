#define PHANTOM_VERSION		"n0.9.8"
#define PHANTOM_MAX_MINORS	8
#define PHN_IRQCTL		0x4c
#define PHB_RUNNING		1
#define PHB_NOT_OH		2
static DEFINE_MUTEX(phantom_mutex);
static struct class *phantom_class;
static int phantom_major;
struct phantom_device ;
static unsigned char phantom_devices[PHANTOM_MAX_MINORS];
static int phantom_status(struct phantom_device *dev, unsigned long newstat)
static long phantom_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static long phantom_compat_ioctl(struct file *filp, unsigned int cmd,
unsigned long arg)
#define phantom_compat_ioctl NULL
static int phantom_open(struct inode *inode, struct file *file)
static int phantom_release(struct inode *inode, struct file *file)
static unsigned int phantom_poll(struct file *file, poll_table *wait)
static const struct file_operations phantom_file_ops = ;
static irqreturn_t phantom_isr(int irq, void *data)
static unsigned int __devinit phantom_get_free(void)
static int __devinit phantom_probe(struct pci_dev *pdev,
const struct pci_device_id *pci_id)
static void __devexit phantom_remove(struct pci_dev *pdev)
static int phantom_suspend(struct pci_dev *pdev, pm_message_t state)
static int phantom_resume(struct pci_dev *pdev)
#define phantom_suspend	NULL
#define phantom_resume	NULL
static struct pci_device_id phantom_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, phantom_pci_tbl);
static struct pci_driver phantom_pci_driver = ;
static CLASS_ATTR_STRING(version, 0444, PHANTOM_VERSION);
static int __init phantom_init(void)
static void __exit phantom_exit(void)
module_init(phantom_init);
module_exit(phantom_exit);
MODULE_AUTHOR("Jiri Slaby <jirislaby@gmail.com>");
MODULE_DESCRIPTION("Sensable Phantom driver (PCI devices)");
MODULE_LICENSE("GPL");
MODULE_VERSION(PHANTOM_VERSION);
