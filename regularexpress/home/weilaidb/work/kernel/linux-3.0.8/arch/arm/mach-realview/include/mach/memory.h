#define __ASM_ARCH_MEMORY_H
#define PLAT_PHYS_OFFSET		UL(0x70000000)
#define PLAT_PHYS_OFFSET		UL(0x00000000)
#define ARM_DMA_ZONE_SIZE	SZ_256M
#error "SPARSEMEM not available with REALVIEW_HIGH_PHYS_OFFSET"
#define MAX_PHYSMEM_BITS	32
#define SECTION_SIZE_BITS	28
#define PAGE_OFFSET1	(PAGE_OFFSET + 0x10000000)
#define PAGE_OFFSET2	(PAGE_OFFSET + 0x30000000)
#define __phys_to_virt(phys)						\
((phys) >= 0x80000000 ?	(phys) - 0x80000000 + PAGE_OFFSET2 :	\
(phys) >= 0x20000000 ?	(phys) - 0x20000000 + PAGE_OFFSET1 :	\
(phys) + PAGE_OFFSET)
#define __virt_to_phys(virt)						\
((virt) >= PAGE_OFFSET2 ? (virt) - PAGE_OFFSET2 + 0x80000000 :	\
(virt) >= PAGE_OFFSET1 ? (virt) - PAGE_OFFSET1 + 0x20000000 :	\
(virt) - PAGE_OFFSET)
