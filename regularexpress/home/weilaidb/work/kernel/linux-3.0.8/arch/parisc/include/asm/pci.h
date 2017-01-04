#define __ASM_PARISC_PCI_H
#define PCI_MAX_BUSSES	256
#define pci_post_reset_delay 50
struct pci_hba_data ;
#define HBA_DATA(d)		((struct pci_hba_data *) (d))
#define HBA_PORT_SPACE_BITS	16
#define HBA_PORT_BASE(h)	((h) << HBA_PORT_SPACE_BITS)
#define HBA_PORT_SPACE_SIZE	(1UL << HBA_PORT_SPACE_BITS)
#define PCI_PORT_HBA(a)		((a) >> HBA_PORT_SPACE_BITS)
#define PCI_PORT_ADDR(a)	((a) & (HBA_PORT_SPACE_SIZE - 1))
#define PCI_F_EXTEND		0xffffffff00000000UL
#define PCI_IS_LMMIO(hba,a)	pci_is_lmmio(hba,a)
static __inline__  int pci_is_lmmio(struct pci_hba_data *hba, unsigned long a)
#define PCI_BUS_ADDR(hba,a)	(PCI_IS_LMMIO(hba,a)	\
?  ((a) - hba->lmmio_space_offset) \
: (a))
#define PCI_HOST_ADDR(hba,a)	(((a) & PCI_F_EXTEND) == 0 \
? (a) + hba->lmmio_space_offset \
: (a))
#define PCI_BUS_ADDR(hba,a)	(a)
#define PCI_HOST_ADDR(hba,a)	(a)
#define PCI_F_EXTEND		0UL
#define PCI_IS_LMMIO(hba,a)	(1)
struct pci_bus;
struct pci_dev;
#define PCI_DMA_BUS_IS_PHYS	0
#define parisc_has_iommu()	do  while (0)
#if defined(CONFIG_IOMMU_CCIO) || defined(CONFIG_IOMMU_SBA)
extern int parisc_bus_is_phys;
#define PCI_DMA_BUS_IS_PHYS	parisc_bus_is_phys
#define parisc_has_iommu()	do  while (0)
#define PCI_DMA_BUS_IS_PHYS	1
#define parisc_has_iommu()	do  while (0)
struct pci_port_ops ;
struct pci_bios_ops ;
extern struct pci_port_ops *pci_port;
extern struct pci_bios_ops *pci_bios;
extern void pcibios_register_hba(struct pci_hba_data *);
extern void pcibios_set_master(struct pci_dev *);
static inline void pcibios_register_hba(struct pci_hba_data *x)
#define pcibios_assign_all_busses()     (1)
#define PCIBIOS_MIN_IO          0x10
#define PCIBIOS_MIN_MEM         0x1000
static inline void pci_dma_burst_advice(struct pci_dev *pdev,
enum pci_dma_burst_strategy *strat,
unsigned long *strategy_parameter)
extern void
pcibios_resource_to_bus(struct pci_dev *dev, struct pci_bus_region *region,
struct resource *res);
extern void
pcibios_bus_to_resource(struct pci_dev *dev, struct resource *res,
struct pci_bus_region *region);
static inline void pcibios_penalize_isa_irq(int irq, int active)
static inline int pci_get_legacy_ide_irq(struct pci_dev *dev, int channel)
