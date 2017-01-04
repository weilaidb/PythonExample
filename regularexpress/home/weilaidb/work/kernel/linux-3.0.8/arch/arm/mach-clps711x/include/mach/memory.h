#define __ASM_ARCH_MEMORY_H
#define PLAT_PHYS_OFFSET	UL(0xc0000000)
#if !defined(CONFIG_ARCH_CDB89712) && !defined (CONFIG_ARCH_AUTCPU12)
#define __virt_to_bus(x)	((x) - PAGE_OFFSET)
#define __bus_to_virt(x)	((x) + PAGE_OFFSET)
#define __pfn_to_bus(x)		(__pfn_to_phys(x) - PHYS_OFFSET)
#define __bus_to_pfn(x)		__phys_to_pfn((x) + PHYS_OFFSET)
#define SECTION_SIZE_BITS	24
#define MAX_PHYSMEM_BITS	32
