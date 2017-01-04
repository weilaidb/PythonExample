#define __ASM_ARM_MEMORY_H
#define UL(x) _AC(x, UL)
#define PAGE_OFFSET		UL(CONFIG_PAGE_OFFSET)
#define TASK_SIZE		(UL(CONFIG_PAGE_OFFSET) - UL(0x01000000))
#define TASK_UNMAPPED_BASE	(UL(CONFIG_PAGE_OFFSET) / 3)
#define TASK_SIZE_26		UL(0x04000000)
#define MODULES_VADDR		(PAGE_OFFSET - 16*1024*1024)
#define MODULES_VADDR		(PAGE_OFFSET - 8*1024*1024)
#if TASK_SIZE > MODULES_VADDR
#error Top of user space clashes with start of module space
#define MODULES_END		(PAGE_OFFSET - PMD_SIZE)
#define MODULES_END		(PAGE_OFFSET)
#define XIP_VIRT_ADDR(physaddr)  (MODULES_VADDR + ((physaddr) & 0x000fffff))
#define IOREMAP_MAX_ORDER	24
#define CONSISTENT_DMA_SIZE 	SZ_2M
#define CONSISTENT_END		(0xffe00000UL)
#define CONSISTENT_BASE		(CONSISTENT_END - CONSISTENT_DMA_SIZE)
#define TASK_SIZE		(CONFIG_DRAM_SIZE)
#define TASK_UNMAPPED_BASE	UL(0x00000000)
#define PHYS_OFFSET 		UL(CONFIG_DRAM_BASE)
#define END_MEM     		(UL(CONFIG_DRAM_BASE) + CONFIG_DRAM_SIZE)
#define PAGE_OFFSET		(PHYS_OFFSET)
#define MODULES_END		(END_MEM)
#define MODULES_VADDR		(PHYS_OFFSET)
#define ITCM_OFFSET	UL(0xfffe0000)
#define DTCM_OFFSET	UL(0xfffe8000)
#define	__phys_to_pfn(paddr)	((unsigned long)((paddr) >> PAGE_SHIFT))
#define	__pfn_to_phys(pfn)	((phys_addr_t)(pfn) << PAGE_SHIFT)
#define page_to_phys(page)	(__pfn_to_phys(page_to_pfn(page)))
#define phys_to_page(phys)	(pfn_to_page(__phys_to_pfn(phys)))
#define __PV_BITS_31_24	0x81000000
#define __PV_BITS_23_16	0x00810000
extern unsigned long __pv_phys_offset;
#define PHYS_OFFSET __pv_phys_offset
#define __pv_stub(from,to,instr,type)			\
__asm__("@ __pv_stub\n"				\
"1:	" instr "	%0, %1, %2\n"		\
"	.pushsection .pv_table,\"a\"\n"		\
"	.long	1b\n"				\
"	.popsection\n"				\
: "=r" (to)					\
: "r" (from), "I" (type))
static inline unsigned long __virt_to_phys(unsigned long x)
static inline unsigned long __phys_to_virt(unsigned long x)
#define __virt_to_phys(x)	((x) - PAGE_OFFSET + PHYS_OFFSET)
#define __phys_to_virt(x)	((x) - PHYS_OFFSET + PAGE_OFFSET)
#define PHYS_OFFSET	PLAT_PHYS_OFFSET
#define ISA_DMA_THRESHOLD	(0xffffffffULL)
#define ISA_DMA_THRESHOLD	(PHYS_OFFSET + ARM_DMA_ZONE_SIZE - 1)
#define PHYS_PFN_OFFSET	(PHYS_OFFSET >> PAGE_SHIFT)
static inline phys_addr_t virt_to_phys(const volatile void *x)
static inline void *phys_to_virt(phys_addr_t x)
#define __pa(x)			__virt_to_phys((unsigned long)(x))
#define __va(x)			((void *)__phys_to_virt((unsigned long)(x)))
#define pfn_to_kaddr(pfn)	__va((pfn) << PAGE_SHIFT)
#define __virt_to_bus	__virt_to_phys
#define __bus_to_virt	__phys_to_virt
#define __pfn_to_bus(x)	__pfn_to_phys(x)
#define __bus_to_pfn(x)	__phys_to_pfn(x)
static inline __deprecated unsigned long virt_to_bus(void *x)
static inline __deprecated void *bus_to_virt(unsigned long x)
#define ARCH_PFN_OFFSET		PHYS_PFN_OFFSET
#define virt_to_page(kaddr)	pfn_to_page(__pa(kaddr) >> PAGE_SHIFT)
#define virt_addr_valid(kaddr)	((unsigned long)(kaddr) >= PAGE_OFFSET && (unsigned long)(kaddr) < (unsigned long)high_memory)
#define arch_is_coherent()		0
