#define __ASM_ARCH_MEMORY_H
#define PLAT_PHYS_OFFSET	UL(0x00000000)
#define BUS_OFFSET	UL(0x80000000)
#define __virt_to_bus(x)	((x) - PAGE_OFFSET + BUS_OFFSET)
#define __bus_to_virt(x)	((x) - BUS_OFFSET + PAGE_OFFSET)
#define __pfn_to_bus(x)		(__pfn_to_phys(x) + (BUS_OFFSET - PHYS_OFFSET))
#define __bus_to_pfn(x)		__phys_to_pfn((x) - (BUS_OFFSET - PHYS_OFFSET))
