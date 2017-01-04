#define __ASM_ARCH_MEMORY_H
#if defined(CONFIG_ARCH_OMAP1)
#define PLAT_PHYS_OFFSET		UL(0x10000000)
#define PLAT_PHYS_OFFSET		UL(0x80000000)
#define OMAP1510_LB_OFFSET	UL(0x30000000)
#define virt_to_lbus(x)		((x) - PAGE_OFFSET + OMAP1510_LB_OFFSET)
#define lbus_to_virt(x)		((x) - OMAP1510_LB_OFFSET + PAGE_OFFSET)
#define is_lbus_device(dev)	(cpu_is_omap15xx() && dev && (strncmp(dev_name(dev), "ohci", 4) == 0))
#define __arch_pfn_to_dma(dev, pfn)	\
()
#define __arch_dma_to_pfn(dev, addr)	\
()
#define __arch_dma_to_virt(dev, addr)	()
#define __arch_virt_to_dma(dev, addr)	()
#if (CONFIG_FB_OMAP_CONSISTENT_DMA_SIZE == 0)
#undef CONFIG_FB_OMAP_CONSISTENT_DMA_SIZE
#define CONFIG_FB_OMAP_CONSISTENT_DMA_SIZE 2
#define CONSISTENT_DMA_SIZE \
(((CONFIG_FB_OMAP_CONSISTENT_DMA_SIZE + 1) & ~1) * 1024 * 1024)
