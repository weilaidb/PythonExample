#define __ALPHA_PCI_H
struct pci_dev;
struct pci_bus;
struct resource;
struct pci_iommu_arena;
struct page;
struct pci_controller ;
#define pcibios_assign_all_busses()	1
#define PCIBIOS_MIN_IO		alpha_mv.min_io_address
#define PCIBIOS_MIN_MEM		alpha_mv.min_mem_address
extern void pcibios_set_master(struct pci_dev *dev);
extern inline void pcibios_penalize_isa_irq(int irq, int active)
#define PCI_DMA_BUS_IS_PHYS  0
static inline void pci_dma_burst_advice(struct pci_dev *pdev,
enum pci_dma_burst_strategy *strat,
unsigned long *strategy_parameter)
static inline int pci_get_legacy_ide_irq(struct pci_dev *dev, int channel)
extern void pcibios_resource_to_bus(struct pci_dev *, struct pci_bus_region *,
struct resource *);
extern void pcibios_bus_to_resource(struct pci_dev *dev, struct resource *res,
struct pci_bus_region *region);
#define pci_domain_nr(bus) ((struct pci_controller *)(bus)->sysdata)->index
static inline int pci_proc_domain(struct pci_bus *bus)
#define IOBASE_HOSE		0
#define IOBASE_SPARSE_MEM	1
#define IOBASE_DENSE_MEM	2
#define IOBASE_SPARSE_IO	3
#define IOBASE_DENSE_IO		4
#define IOBASE_ROOT_BUS		5
#define IOBASE_FROM_HOSE	0x10000
extern struct pci_dev *isa_bridge;
extern int pci_legacy_read(struct pci_bus *bus, loff_t port, u32 *val,
size_t count);
extern int pci_legacy_write(struct pci_bus *bus, loff_t port, u32 val,
size_t count);
extern int pci_mmap_legacy_page_range(struct pci_bus *bus,
struct vm_area_struct *vma,
enum pci_mmap_state mmap_state);
extern void pci_adjust_legacy_attr(struct pci_bus *bus,
enum pci_mmap_state mmap_type);
#define HAVE_PCI_LEGACY	1
extern int pci_create_resource_files(struct pci_dev *dev);
extern void pci_remove_resource_files(struct pci_dev *dev);
