#define DRV_NAME "rz1000"
static int __devinit rz1000_disable_readahead(struct pci_dev *dev)
static const struct ide_port_info rz1000_chipset __devinitdata = ;
static int __devinit rz1000_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static void rz1000_remove(struct pci_dev *dev)
static const struct pci_device_id rz1000_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, rz1000_pci_tbl);
static struct pci_driver rz1000_pci_driver = ;
static int __init rz1000_ide_init(void)
static void __exit rz1000_ide_exit(void)
module_init(rz1000_ide_init);
module_exit(rz1000_ide_exit);
MODULE_AUTHOR("Andre Hedrick");
MODULE_DESCRIPTION("PCI driver module for RZ1000 IDE");
MODULE_LICENSE("GPL");
