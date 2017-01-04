#define ASMARM_PCI_H
static inline int pci_domain_nr(struct pci_bus *bus)
static inline int pci_proc_domain(struct pci_bus *bus)
extern void pcibios_set_master(struct pci_dev *dev);
static inline void pcibios_set_master(struct pci_dev *dev)
static inline void pcibios_penalize_isa_irq(int irq, int active)
#define PCI_DMA_BUS_IS_PHYS     (1)
static inline void pci_dma_burst_advice(struct pci_dev *pdev,
enum pci_dma_burst_strategy *strat,
unsigned long *strategy_parameter)
#define HAVE_PCI_MMAP
extern int pci_mmap_page_range(struct pci_dev *dev, struct vm_area_struct *vma,
enum pci_mmap_state mmap_state, int write_combine);
extern void
pcibios_resource_to_bus(struct pci_dev *dev, struct pci_bus_region *region,
struct resource *res);
extern void
pcibios_bus_to_resource(struct pci_dev *dev, struct resource *res,
struct pci_bus_region *region);
static inline int pci_get_legacy_ide_irq(struct pci_dev *dev, int channel)
