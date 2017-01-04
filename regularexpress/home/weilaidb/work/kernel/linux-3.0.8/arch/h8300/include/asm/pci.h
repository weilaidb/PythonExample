#define _ASM_H8300_PCI_H
#define pcibios_assign_all_busses()	0
static inline void pcibios_set_master(struct pci_dev *dev)
static inline void pcibios_penalize_isa_irq(int irq, int active)
#define PCI_DMA_BUS_IS_PHYS	(1)
