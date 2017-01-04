void * __devinit update_dn_pci_info(struct device_node *dn, void *data)
void *traverse_pci_devices(struct device_node *start, traverse_func pre,
void *data)
void __devinit pci_devs_phb_init_dynamic(struct pci_controller *phb)
static void *is_devfn_node(struct device_node *dn, void *data)
struct device_node *fetch_dev_dn(struct pci_dev *dev)
EXPORT_SYMBOL(fetch_dev_dn);
void __init pci_devs_phb_init(void)
