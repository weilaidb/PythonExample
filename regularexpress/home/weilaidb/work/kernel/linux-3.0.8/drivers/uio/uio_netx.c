#define PCI_VENDOR_ID_HILSCHER		0x15CF
#define PCI_DEVICE_ID_HILSCHER_NETX	0x0000
#define PCI_DEVICE_ID_HILSCHER_NETPLC	0x0010
#define PCI_SUBDEVICE_ID_NETPLC_RAM	0x0000
#define PCI_SUBDEVICE_ID_NETPLC_FLASH	0x0001
#define PCI_SUBDEVICE_ID_NXSB_PCA	0x3235
#define PCI_SUBDEVICE_ID_NXPCA		0x3335
#define DPM_HOST_INT_EN0	0xfff0
#define DPM_HOST_INT_STAT0	0xffe0
#define DPM_HOST_INT_MASK	0xe600ffff
#define DPM_HOST_INT_GLOBAL_EN	0x80000000
static irqreturn_t netx_handler(int irq, struct uio_info *dev_info)
static int __devinit netx_pci_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static void netx_pci_remove(struct pci_dev *dev)
static struct pci_device_id netx_pci_ids[] = ;
static struct pci_driver netx_pci_driver = ;
static int __init netx_init_module(void)
static void __exit netx_exit_module(void)
module_init(netx_init_module);
module_exit(netx_exit_module);
MODULE_DEVICE_TABLE(pci, netx_pci_ids);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Hans J. Koch, Manuel Traut");
