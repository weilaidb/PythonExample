#define ASM_IA64__SWIOTLB_H
extern int swiotlb;
extern void pci_swiotlb_init(void);
#define swiotlb 0
static inline void pci_swiotlb_init(void)
