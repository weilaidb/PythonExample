#define _ASM_PAGE_H
#define PAGE_SHIFT	12
#define PAGE_SIZE	(1UL << PAGE_SHIFT)
#define PAGE_MASK	(~(PAGE_SIZE - 1))
#define PAGE_SIZE	+(1 << PAGE_SHIFT)
#define PAGE_MASK	+(~(PAGE_SIZE - 1))
#define clear_page(page)	memset((void *)(page), 0, PAGE_SIZE)
#define copy_page(to, from)	memcpy((void *)(to), (void *)(from), PAGE_SIZE)
#define clear_user_page(addr, vaddr, page)	clear_page(addr)
#define copy_user_page(vto, vfrom, vaddr, to)	copy_page(vto, vfrom)
typedef struct  pte_t;
typedef struct  pgd_t;
typedef struct  pgprot_t;
typedef struct page *pgtable_t;
#define PTE_MASK	PAGE_MASK
#define HPAGE_SHIFT	22
#define HPAGE_SIZE		((1UL) << HPAGE_SHIFT)
#define HPAGE_MASK		(~(HPAGE_SIZE - 1))
#define HUGETLB_PAGE_ORDER	(HPAGE_SHIFT - PAGE_SHIFT)
#define pte_val(x)	((x).pte)
#define pgd_val(x)	((x).pgd)
#define pgprot_val(x)	((x).pgprot)
#define __pte(x)	((pte_t) )
#define __pgd(x)	((pgd_t) )
#define __pgprot(x)	((pgprot_t) )
static inline int get_order(unsigned long size) __attribute__((const));
static inline int get_order(unsigned long size)
#define __PAGE_OFFSET		(PAGE_OFFSET_RAW)
#define PAGE_OFFSET		((unsigned long) __PAGE_OFFSET)
#define __pfn_disp		(CONFIG_KERNEL_RAM_BASE_ADDRESS >> PAGE_SHIFT)
#define __pa(x)			((unsigned long)(x))
#define __va(x)			((void *)(unsigned long)(x))
#define pfn_to_kaddr(pfn)	__va((pfn) << PAGE_SHIFT)
#define pfn_to_page(pfn)	(mem_map + ((pfn) - __pfn_disp))
#define page_to_pfn(page)	((unsigned long)((page) - mem_map) + __pfn_disp)
#define pfn_valid(pfn)					\
()
#define virt_to_page(kaddr)	pfn_to_page(__pa(kaddr) >> PAGE_SHIFT)
#define virt_addr_valid(kaddr)	pfn_valid(__pa(kaddr) >> PAGE_SHIFT)
#define page_to_phys(page)	(page_to_pfn(page) << PAGE_SHIFT)
#define VM_DATA_DEFAULT_FLAGS \
(VM_READ | VM_WRITE | \
((current->personality & READ_IMPLIES_EXEC) ? VM_EXEC : 0) | \
VM_MAYREAD | VM_MAYWRITE | VM_MAYEXEC)
