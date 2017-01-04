#define _ASM_X86_SWIOTLB_XEN_H
extern int xen_swiotlb;
extern int __init pci_xen_swiotlb_detect(void);
extern void __init pci_xen_swiotlb_init(void);
#define xen_swiotlb (0)
static inline int __init pci_xen_swiotlb_detect(void)
static inline void __init pci_xen_swiotlb_init(void)
