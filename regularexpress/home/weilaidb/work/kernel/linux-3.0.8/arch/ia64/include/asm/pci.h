#define _ASM_IA64_PCI_H
#define pcibios_assign_all_busses()     0
#define PCIBIOS_MIN_IO		0x1000
#define PCIBIOS_MIN_MEM		0x10000000
void pcibios_config_init(void);
struct pci_dev;
extern unsigned long ia64_max_iommu_merge_mask;
#define PCI_DMA_BUS_IS_PHYS	(ia64_max_iommu_merge_mask == ~0UL)
static inline void
pcibios_set_master (struct pci_dev *dev)
static inline void
pcibios_penalize_isa_irq (int irq, int active)
static inline void pci_dma_burst_advice(struct pci_dev *pdev,
enum pci_dma_burst_strategy *strat,
unsigned long *strategy_parameter)
#define HAVE_PCI_MMAP
extern int pci_mmap_page_range (struct pci_dev *dev, struct vm_area_struct *vma,
enum pci_mmap_state mmap_state, int write_combine);
#define HAVE_PCI_LEGACY
extern int pci_mmap_legacy_page_range(struct pci_bus *bus,
struct vm_area_struct *vma,
enum pci_mmap_state mmap_state);
#define pci_get_legacy_mem platform_pci_get_legacy_mem
#define pci_legacy_read platform_pci_legacy_read
#define pci_legacy_write platform_pci_legacy_write
struct pci_window ;
struct pci_controller ;
#define PCI_CONTROLLER(busdev) ((struct pci_controller *) busdev->sysdata)
#define pci_domain_nr(busdev)    (PCI_CONTROLLER(busdev)->segment)
extern struct pci_ops pci_root_ops;
static inline int pci_proc_domain(struct pci_bus *bus)
extern void pcibios_resource_to_bus(struct pci_dev *dev,
struct pci_bus_region *region, struct resource *res);
extern void pcibios_bus_to_resource(struct pci_dev *dev,
struct resource *res, struct pci_bus_region *region);
static inline struct resource *
pcibios_select_root(struct pci_dev *pdev, struct resource *res)
#define HAVE_ARCH_PCI_GET_LEGACY_IDE_IRQ
static inline int pci_get_legacy_ide_irq(struct pci_dev *dev, int channel)
extern void pci_iommu_alloc(void);
