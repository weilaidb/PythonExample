struct ioapic ;
static int ioapic_probe(struct pci_dev *dev, const struct pci_device_id *ent)
static void ioapic_remove(struct pci_dev *dev)
static struct pci_device_id ioapic_devices[] = ;
static struct pci_driver ioapic_driver = ;
static int __init ioapic_init(void)
static void __exit ioapic_exit(void)
module_init(ioapic_init);
module_exit(ioapic_exit);
