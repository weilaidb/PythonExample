#define _ASM_X86_SWIOTLB_H
extern int swiotlb;
extern int __init pci_swiotlb_detect_override(void);
extern int __init pci_swiotlb_detect_4gb(void);
extern void __init pci_swiotlb_init(void);
extern void __init pci_swiotlb_late_init(void);
#define swiotlb 0
static inline int pci_swiotlb_detect_override(void)
static inline int pci_swiotlb_detect_4gb(void)
static inline void pci_swiotlb_init(void)
static inline void pci_swiotlb_late_init(void)
static inline void dma_mark_clean(void *addr, size_t size)
