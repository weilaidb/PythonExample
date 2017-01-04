#define __ASM_ARCH_24A0_MEMORY_H __FILE__
#define PLAT_PHYS_OFFSET UL(0x10000000)
#define __virt_to_bus(x) __virt_to_phys(x)
#define __bus_to_virt(x) __phys_to_virt(x)
#define __pfn_to_bus(x) __pfn_to_phys(x)
#define __bus_to_pfn(x)	__phys_to_pfn(x)
