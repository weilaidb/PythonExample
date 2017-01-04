#define _ASM_PCI_H
struct pci_controller ;
extern struct pci_controller * alloc_pci_controller(void);
extern void register_pci_controller(struct pci_controller *hose);
extern int pcibios_map_irq(const struct pci_dev *dev, u8 slot, u8 pin);
extern unsigned int pcibios_assign_all_busses(void);
extern unsigned long PCIBIOS_MIN_IO;
extern unsigned long PCIBIOS_MIN_MEM;
#define PCIBIOS_MIN_CARDBUS_IO	0x4000
extern void pcibios_set_master(struct pci_dev *dev);
static inline void pcibios_penalize_isa_irq(int irq, int active)
#define HAVE_PCI_MMAP
extern int pci_mmap_page_range(struct pci_dev *dev, struct vm_area_struct *vma,
enum pci_mmap_state mmap_state, int write_combine);
struct pci_dev;
extern unsigned int PCI_DMA_BUS_IS_PHYS;
static inline void pci_dma_burst_advice(struct pci_dev *pdev,
enum pci_dma_burst_strategy *strat,
unsigned long *strategy_parameter)
extern void pcibios_resource_to_bus(struct pci_dev *dev,
struct pci_bus_region *region, struct resource *res);
extern void pcibios_bus_to_resource(struct pci_dev *dev, struct resource *res,
struct pci_bus_region *region);
#define pci_domain_nr(bus) ((struct pci_controller *)(bus)->sysdata)->index
static inline int pci_proc_domain(struct pci_bus *bus)
extern int pcibios_plat_dev_init(struct pci_dev *dev);
static inline int pci_get_legacy_ide_irq(struct pci_dev *dev, int channel)
#define arch_setup_msi_irqs arch_setup_msi_irqs
extern int pci_probe_only;
extern char * (*pcibios_plat_setup)(char *str);
