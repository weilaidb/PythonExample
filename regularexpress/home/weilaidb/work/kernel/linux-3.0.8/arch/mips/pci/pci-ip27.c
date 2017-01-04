#define MAX_PCI_BUSSES		40
#define MAX_DEVICES_PER_PCIBUS	8
static struct bridge_controller bridges[MAX_PCI_BUSSES];
struct bridge_controller *irq_to_bridge[MAX_PCI_BUSSES * MAX_DEVICES_PER_PCIBUS];
int irq_to_slot[MAX_PCI_BUSSES * MAX_DEVICES_PER_PCIBUS];
extern struct pci_ops bridge_pci_ops;
int __cpuinit bridge_probe(nasid_t nasid, int widget_id, int masterwid)
int __devinit pcibios_map_irq(const struct pci_dev *dev, u8 slot, u8 pin)
static inline struct pci_dev *bridge_root_dev(struct pci_dev *dev)
int pcibios_plat_dev_init(struct pci_dev *dev)
static inline void pci_disable_swapping(struct pci_dev *dev)
static inline void pci_enable_swapping(struct pci_dev *dev)
static void __init pci_fixup_ioc3(struct pci_dev *d)
int pcibus_to_node(struct pci_bus *bus)
EXPORT_SYMBOL(pcibus_to_node);
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_SGI, PCI_DEVICE_ID_SGI_IOC3,
pci_fixup_ioc3);
