#define __ASM_ARCH_MEMORY_H
#define PLAT_PHYS_OFFSET		KS8695_SDRAM_PA
#define __virt_to_bus(x)	((x) - PAGE_OFFSET + KS8695_PCIMEM_PA)
#define __bus_to_virt(x)	((x) - KS8695_PCIMEM_PA + PAGE_OFFSET)
extern struct bus_type platform_bus_type;
#define is_lbus_device(dev)		(dev && dev->bus == &platform_bus_type)
#define __arch_dma_to_virt(dev, x)	()
#define __arch_virt_to_dma(dev, x)	()
#define __arch_pfn_to_dma(dev, pfn)	\
()
#define __arch_dma_to_pfn(dev, x)	\
()
