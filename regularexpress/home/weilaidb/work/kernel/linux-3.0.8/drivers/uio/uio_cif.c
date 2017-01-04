#define PLX9030_INTCSR		0x4C
#define INTSCR_INT1_ENABLE	0x01
#define INTSCR_INT1_STATUS	0x04
#define INT1_ENABLED_AND_ACTIVE	(INTSCR_INT1_ENABLE | INTSCR_INT1_STATUS)
#define PCI_SUBVENDOR_ID_PEP	0x1518
#define CIF_SUBDEVICE_PROFIBUS	0x430
#define CIF_SUBDEVICE_DEVICENET	0x432
static irqreturn_t hilscher_handler(int irq, struct uio_info *dev_info)
static int __devinit hilscher_pci_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static void hilscher_pci_remove(struct pci_dev *dev)
static struct pci_device_id hilscher_pci_ids[] __devinitdata = ;
static struct pci_driver hilscher_pci_driver = ;
static int __init hilscher_init_module(void)
static void __exit hilscher_exit_module(void)
module_init(hilscher_init_module);
module_exit(hilscher_exit_module);
MODULE_DEVICE_TABLE(pci, hilscher_pci_ids);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Hans J. Koch, Benedikt Spranger");
