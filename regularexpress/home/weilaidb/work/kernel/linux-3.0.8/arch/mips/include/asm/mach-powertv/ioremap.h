#define __ASM_MACH_POWERTV_IOREMAP_H
#define IOR_BPC			8
#define IOR_PHYS_BITS		(IOR_BPC * sizeof(phys_addr_t))
#define IOR_DMA_BITS		(IOR_BPC * sizeof(dma_addr_t))
#define IOR_LSBITS		22
#define IOR_PHYS_MSBITS		(IOR_PHYS_BITS - IOR_LSBITS)
#define IOR_NUM_PHYS_TO_DMA	((phys_addr_t) 1 << IOR_PHYS_MSBITS)
#define IOR_DMA_MSBITS		(IOR_DMA_BITS - IOR_LSBITS)
#define IOR_NUM_DMA_TO_PHYS	((dma_addr_t) 1 << IOR_DMA_MSBITS)
#define _IOR_OFFSET_WIDTH(n)	(1 << order_base_2(n))
#define IOR_OFFSET_WIDTH(n) \
(_IOR_OFFSET_WIDTH(n) < 8 ? 8 : _IOR_OFFSET_WIDTH(n))
#define IOR_PHYS_OFFSET_BITS	IOR_OFFSET_WIDTH(IOR_PHYS_MSBITS)
#define IOR_PHYS_SHIFT		(IOR_PHYS_BITS - IOR_PHYS_OFFSET_BITS)
#define IOR_DMA_OFFSET_BITS	IOR_OFFSET_WIDTH(IOR_DMA_MSBITS)
#define IOR_DMA_SHIFT		(IOR_DMA_BITS - IOR_DMA_OFFSET_BITS)
struct ior_phys_to_dma ;
struct ior_dma_to_phys ;
extern struct ior_phys_to_dma _ior_phys_to_dma[IOR_NUM_PHYS_TO_DMA];
extern struct ior_dma_to_phys _ior_dma_to_phys[IOR_NUM_DMA_TO_PHYS];
static inline dma_addr_t _phys_to_dma_offset_raw(phys_addr_t phys)
static inline dma_addr_t _dma_to_phys_offset_raw(dma_addr_t dma)
static inline dma_addr_t phys_to_dma(phys_addr_t phys)
static inline phys_addr_t dma_to_phys(dma_addr_t dma)
extern void ioremap_add_map(dma_addr_t phys, phys_addr_t alias,
dma_addr_t size);
static inline phys_t fixup_bigphys_addr(phys_t phys_addr, phys_t size)
static inline void __iomem *plat_ioremap(phys_t start, unsigned long size,
unsigned long flags)
static inline int plat_iounmap(const volatile void __iomem *addr)
