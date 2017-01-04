#define DRV_NAME "ide_pci_generic"
static int ide_generic_all;
module_param_named(all_generic_ide, ide_generic_all, bool, 0444);
MODULE_PARM_DESC(all_generic_ide, "IDE generic will claim all unknown PCI IDE storage controllers.");
static void netcell_quirkproc(ide_drive_t *drive)
static const struct ide_port_ops netcell_port_ops = ;
#define DECLARE_GENERIC_PCI_DEV(extra_flags) \
static const struct ide_port_info generic_chipsets[] __devinitdata = ;
static int __devinit generic_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id generic_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, generic_pci_tbl);
static struct pci_driver generic_pci_driver = ;
static int __init generic_ide_init(void)
static void __exit generic_ide_exit(void)
module_init(generic_ide_init);
module_exit(generic_ide_exit);
MODULE_AUTHOR("Andre Hedrick");
MODULE_DESCRIPTION("PCI driver module for generic PCI IDE");
MODULE_LICENSE("GPL");
