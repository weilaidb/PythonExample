#define _ASM_FRV_PCI_H
struct pci_dev;
#define pcibios_assign_all_busses()	0
extern void pcibios_set_master(struct pci_dev *dev);
extern void pcibios_penalize_isa_irq(int irq);
extern void *consistent_alloc(gfp_t gfp, size_t size, dma_addr_t *dma_handle);
extern void consistent_free(void *vaddr);
extern void consistent_sync(void *vaddr, size_t size, int direction);
extern void consistent_sync_page(struct page *page, unsigned long offset,
size_t size, int direction);
extern void *pci_alloc_consistent(struct pci_dev *hwdev, size_t size,
dma_addr_t *dma_handle);
extern void pci_free_consistent(struct pci_dev *hwdev, size_t size,
void *vaddr, dma_addr_t dma_handle);
#define pci_controller_num(PDEV)	(0)
static inline void pci_dma_burst_advice(struct pci_dev *pdev,
enum pci_dma_burst_strategy *strat,
unsigned long *strategy_parameter)
#define PCIBIOS_MIN_IO		0x100
#define PCIBIOS_MIN_MEM		0x00010000
