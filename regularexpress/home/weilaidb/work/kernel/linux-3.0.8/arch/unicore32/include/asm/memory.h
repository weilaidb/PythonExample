#define __UNICORE_MEMORY_H__
#define UL(x) _AC(x, UL)
#define PAGE_OFFSET		UL(0xC0000000)
#define TASK_SIZE		(PAGE_OFFSET - UL(0x41000000))
#define TASK_UNMAPPED_BASE	(PAGE_OFFSET / 3)
#define MODULES_VADDR		(PAGE_OFFSET - 16*1024*1024)
#if TASK_SIZE > MODULES_VADDR
#error Top of user space clashes with start of module space
#define MODULES_END		(PAGE_OFFSET)
#define IOREMAP_MAX_ORDER	24
#define __virt_to_phys(x)	((x) - PAGE_OFFSET + PHYS_OFFSET)
#define __phys_to_virt(x)	((x) - PHYS_OFFSET + PAGE_OFFSET)
#define	__phys_to_pfn(paddr)	((paddr) >> PAGE_SHIFT)
#define	__pfn_to_phys(pfn)	((pfn) << PAGE_SHIFT)
#define page_to_phys(page)	(__pfn_to_phys(page_to_pfn(page)))
#define phys_to_page(phys)	(pfn_to_page(__phys_to_pfn(phys)))
#define arch_adjust_zones(size, holes) do  while (0)
#define PHYS_PFN_OFFSET	(PHYS_OFFSET >> PAGE_SHIFT)
#define __pa(x)			__virt_to_phys((unsigned long)(x))
#define __va(x)			((void *)__phys_to_virt((unsigned long)(x)))
#define pfn_to_kaddr(pfn)	__va((pfn) << PAGE_SHIFT)
#define ARCH_PFN_OFFSET		PHYS_PFN_OFFSET
#define virt_to_page(kaddr)	pfn_to_page(__pa(kaddr) >> PAGE_SHIFT)
#define virt_addr_valid(kaddr)	((unsigned long)(kaddr) >= PAGE_OFFSET && \
(unsigned long)(kaddr) < (unsigned long)high_memory)
