#define _XTENSA_PCI_H
#define pcibios_assign_all_busses()	0
extern struct pci_controller* pcibios_alloc_controller(void);
static inline void pcibios_set_master(struct pci_dev *dev)
static inline void pcibios_penalize_isa_irq(int irq)
#define PCIBIOS_MIN_IO		0x2000
#define PCIBIOS_MIN_MEM		0x10000000
struct pci_dev;
#define PCI_DMA_BUS_IS_PHYS	(1)
int pci_mmap_page_range(struct pci_dev *pdev, struct vm_area_struct *vma,
enum pci_mmap_state mmap_state, int write_combine);
#define HAVE_PCI_MMAP	1
