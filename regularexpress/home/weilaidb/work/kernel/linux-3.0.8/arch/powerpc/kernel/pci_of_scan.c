static u32 get_int_prop(struct device_node *np, const char *name, u32 def)
unsigned int pci_parse_of_flags(u32 addr0, int bridge)
static void of_pci_parse_addrs(struct device_node *node, struct pci_dev *dev)
struct pci_dev *of_create_pci_dev(struct device_node *node,
struct pci_bus *bus, int devfn)
EXPORT_SYMBOL(of_create_pci_dev);
void __devinit of_scan_pci_bridge(struct device_node *node,
struct pci_dev *dev)
EXPORT_SYMBOL(of_scan_pci_bridge);
static void __devinit __of_scan_bus(struct device_node *node,
struct pci_bus *bus, int rescan_existing)
void __devinit of_scan_bus(struct device_node *node,
struct pci_bus *bus)
EXPORT_SYMBOL_GPL(of_scan_bus);
void __devinit of_rescan_bus(struct device_node *node,
struct pci_bus *bus)
EXPORT_SYMBOL_GPL(of_rescan_bus);
