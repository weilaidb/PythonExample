static int xen_add_device(struct device *dev)
static int xen_remove_device(struct device *dev)
static int xen_pci_notifier(struct notifier_block *nb,
unsigned long action, void *data)
struct notifier_block device_nb = ;
static int __init register_xen_pci_notifier(void)
arch_initcall(register_xen_pci_notifier);
