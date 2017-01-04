#define __SPARC_PCI_H
#define pcibios_assign_all_busses()	0
#define PCIBIOS_MIN_IO		0UL
#define PCIBIOS_MIN_MEM		0UL
#define PCI_IRQ_NONE		0xffffffff
static inline void pcibios_set_master(struct pci_dev *dev)
static inline void pcibios_penalize_isa_irq(int irq, int active)
#define PCI_DMA_BUS_IS_PHYS	(0)
struct pci_dev;
static inline void pci_dma_burst_advice(struct pci_dev *pdev,
enum pci_dma_burst_strategy *strat,
unsigned long *strategy_parameter)
struct device_node;
extern struct device_node *pci_device_to_OF_node(struct pci_dev *pdev);
extern void
pcibios_resource_to_bus(struct pci_dev *dev, struct pci_bus_region *region,
struct resource *res);
extern void
pcibios_bus_to_resource(struct pci_dev *dev, struct resource *res,
struct pci_bus_region *region);
static inline int pci_get_legacy_ide_irq(struct pci_dev *dev, int channel)
