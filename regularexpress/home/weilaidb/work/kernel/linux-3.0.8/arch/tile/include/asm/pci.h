#define _ASM_TILE_PCI_H
struct pci_controller ;
#define PCI_DMA_BUS_IS_PHYS     1
int __devinit tile_pci_init(void);
int __devinit pcibios_init(void);
void __iomem *pci_iomap(struct pci_dev *dev, int bar, unsigned long max);
static inline void pci_iounmap(struct pci_dev *dev, void __iomem *addr)
void __devinit pcibios_fixup_bus(struct pci_bus *bus);
#define	TILE_NUM_PCIE	2
#define pci_domain_nr(bus) (((struct pci_controller *)(bus)->sysdata)->index)
static inline int pci_proc_domain(struct pci_bus *bus)
static inline int pcibios_assign_all_busses(void)
static inline void pcibios_set_master(struct pci_dev *dev)
#define PCIBIOS_MIN_MEM		0
#define PCIBIOS_MIN_IO		0
extern int tile_plx_gen1;
#define cpumask_of_pcibus(bus) cpu_online_mask
