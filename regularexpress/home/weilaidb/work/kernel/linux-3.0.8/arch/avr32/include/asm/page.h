#define __ASM_AVR32_PAGE_H
#define PAGE_SHIFT	12
#define PAGE_SIZE	(_AC(1, UL) << PAGE_SHIFT)
#define PAGE_MASK	(~(PAGE_SIZE-1))
#define PTE_MASK	PAGE_MASK
extern void clear_page(void *to);
extern void copy_page(void *to, void *from);
#define clear_user_page(page, vaddr, pg)	clear_page(page)
#define copy_user_page(to, from, vaddr, pg)	copy_page(to, from)
typedef struct  pte_t;
typedef struct  pgd_t;
typedef struct  pgprot_t;
typedef struct page *pgtable_t;
#define pte_val(x)		((x).pte)
#define pgd_val(x)		((x).pgd)
#define pgprot_val(x)		((x).pgprot)
#define __pte(x)		((pte_t) )
#define __pgd(x)		((pgd_t) )
#define __pgprot(x)		((pgprot_t) )
extern unsigned long memory_start, memory_end;
static inline int get_order(unsigned long size)
#define PAGE_OFFSET		(0x80000000UL)
#define __pa(x)		PHYSADDR(x)
#define __va(x)		((void *)(P1SEGADDR(x)))
#define MAP_NR(addr)	(((unsigned long)(addr) - PAGE_OFFSET) >> PAGE_SHIFT)
#define phys_to_page(phys)	(pfn_to_page(phys >> PAGE_SHIFT))
#define page_to_phys(page)	(page_to_pfn(page) << PAGE_SHIFT)
#define PHYS_PFN_OFFSET		(CONFIG_PHYS_OFFSET >> PAGE_SHIFT)
#define pfn_to_page(pfn)	(mem_map + ((pfn) - PHYS_PFN_OFFSET))
#define page_to_pfn(page)	((unsigned long)((page) - mem_map) + PHYS_PFN_OFFSET)
#define pfn_valid(pfn)		((pfn) >= PHYS_PFN_OFFSET && (pfn) < (PHYS_PFN_OFFSET + max_mapnr))
#define virt_to_page(kaddr)	pfn_to_page(__pa(kaddr) >> PAGE_SHIFT)
#define virt_addr_valid(kaddr)	pfn_valid(__pa(kaddr) >> PAGE_SHIFT)
#define VM_DATA_DEFAULT_FLAGS	(VM_READ | VM_WRITE |	\
VM_MAYREAD | VM_MAYWRITE | VM_MAYEXEC)
#define HIGHMEM_START		0x20000000UL
