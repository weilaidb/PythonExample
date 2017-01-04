#define DRIVER_NAME		"Mantis Core"
int __devinit mantis_pci_init(struct mantis_pci *mantis)
EXPORT_SYMBOL_GPL(mantis_pci_init);
void mantis_pci_exit(struct mantis_pci *mantis)
EXPORT_SYMBOL_GPL(mantis_pci_exit);
MODULE_DESCRIPTION("Mantis PCI DTV bridge driver");
MODULE_AUTHOR("Manu Abraham");
MODULE_LICENSE("GPL");
