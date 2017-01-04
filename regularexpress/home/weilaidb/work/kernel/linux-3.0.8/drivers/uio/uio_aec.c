#define PCI_VENDOR_ID_AEC 0xaecb
#define PCI_DEVICE_ID_AEC_VITCLTC 0x6250
#define INT_ENABLE_ADDR		0xFC
#define INT_ENABLE		0x10
#define INT_DISABLE		0x0
#define INT_MASK_ADDR		0x2E
#define INT_MASK_ALL		0x3F
#define INTA_DRVR_ADDR		0xFE
#define INTA_ENABLED_FLAG	0x08
#define INTA_FLAG		0x01
#define MAILBOX			0x0F
static struct pci_device_id ids[] = ;
MODULE_DEVICE_TABLE(pci, ids);
static irqreturn_t aectc_irq(int irq, struct uio_info *dev_info)
static void print_board_data(struct pci_dev *pdev, struct uio_info *i)
static int __devinit probe(struct pci_dev *pdev, const struct pci_device_id *id)
static void remove(struct pci_dev *pdev)
static struct pci_driver pci_driver = ;
static int __init aectc_init(void)
static void __exit aectc_exit(void)
MODULE_LICENSE("GPL");
module_init(aectc_init);
module_exit(aectc_exit);
