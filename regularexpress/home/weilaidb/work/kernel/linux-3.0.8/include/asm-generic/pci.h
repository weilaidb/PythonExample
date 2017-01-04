#define _ASM_GENERIC_PCI_H
static inline void
pcibios_resource_to_bus(struct pci_dev *dev, struct pci_bus_region *region,
struct resource *res)
static inline void
pcibios_bus_to_resource(struct pci_dev *dev, struct resource *res,
struct pci_bus_region *region)
static inline struct resource *
pcibios_select_root(struct pci_dev *pdev, struct resource *res)
static inline int pci_get_legacy_ide_irq(struct pci_dev *dev, int channel)
#define PCI_DMA_BUS_IS_PHYS	(1)
