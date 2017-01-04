#define _ASM_PCI_H
#define pcibios_assign_all_busses()	1
extern void unit_pci_init(void);
#define pcibios_assign_all_busses()	0
extern unsigned long pci_mem_start;
#define PCIBIOS_MIN_IO		0xBE000004
#define PCIBIOS_MIN_MEM		0xB8000000
void pcibios_set_master(struct pci_dev *dev);
void pcibios_penalize_isa_irq(int irq);
struct pci_dev;
#define PCI_DMA_BUS_IS_PHYS	(1)
static inline int pci_controller_num(struct pci_dev *dev)
#define HAVE_PCI_MMAP
extern int pci_mmap_page_range(struct pci_dev *dev, struct vm_area_struct *vma,
enum pci_mmap_state mmap_state,
int write_combine);
extern void pcibios_resource_to_bus(struct pci_dev *dev,
struct pci_bus_region *region,
struct resource *res);
extern void pcibios_bus_to_resource(struct pci_dev *dev,
struct resource *res,
struct pci_bus_region *region);
static inline struct resource *
pcibios_select_root(struct pci_dev *pdev, struct resource *res)
static inline int pci_get_legacy_ide_irq(struct pci_dev *dev, int channel)
