#define _VIA_DMABLIT_H
#define VIA_NUM_BLIT_ENGINES 2
#define VIA_NUM_BLIT_SLOTS 8
struct _drm_via_descriptor;
typedef struct _drm_via_sg_info  drm_via_sg_info_t;
typedef struct _drm_via_blitq  drm_via_blitq_t;
#define VIA_PCI_DMA_MAR0            0xE40
#define VIA_PCI_DMA_DAR0            0xE44
#define VIA_PCI_DMA_BCR0            0xE48
#define VIA_PCI_DMA_DPR0            0xE4C
#define VIA_PCI_DMA_MAR1            0xE50
#define VIA_PCI_DMA_DAR1            0xE54
#define VIA_PCI_DMA_BCR1            0xE58
#define VIA_PCI_DMA_DPR1            0xE5C
#define VIA_PCI_DMA_MAR2            0xE60
#define VIA_PCI_DMA_DAR2            0xE64
#define VIA_PCI_DMA_BCR2            0xE68
#define VIA_PCI_DMA_DPR2            0xE6C
#define VIA_PCI_DMA_MAR3            0xE70
#define VIA_PCI_DMA_DAR3            0xE74
#define VIA_PCI_DMA_BCR3            0xE78
#define VIA_PCI_DMA_DPR3            0xE7C
#define VIA_PCI_DMA_MR0             0xE80
#define VIA_PCI_DMA_MR1             0xE84
#define VIA_PCI_DMA_MR2             0xE88
#define VIA_PCI_DMA_MR3             0xE8C
#define VIA_PCI_DMA_CSR0            0xE90
#define VIA_PCI_DMA_CSR1            0xE94
#define VIA_PCI_DMA_CSR2            0xE98
#define VIA_PCI_DMA_CSR3            0xE9C
#define VIA_PCI_DMA_PTR             0xEA0
#define VIA_DMA_DPR_EC		(1<<1)
#define VIA_DMA_DPR_DDIE	(1<<2)
#define VIA_DMA_DPR_DT		(1<<3)
#define VIA_DMA_MR_CM		(1<<0)
#define VIA_DMA_MR_TDIE		(1<<1)
#define VIA_DMA_MR_HENDMACMD		(1<<7)
#define VIA_DMA_CSR_DE		(1<<0)
#define VIA_DMA_CSR_TS		(1<<1)
#define VIA_DMA_CSR_TA		(1<<2)
#define VIA_DMA_CSR_TD		(1<<3)
#define VIA_DMA_CSR_DD		(1<<4)
#define VIA_DMA_DPR_EC          (1<<1)
