#define _ASM_PAGE_H
#define get_user_page(vaddr)			__get_free_page(GFP_KERNEL)
#define free_user_page(page, addr)		free_page(addr)
#define clear_page(pgaddr)			memset((pgaddr), 0, PAGE_SIZE)
#define copy_page(to,from)			memcpy((to), (from), PAGE_SIZE)
#define clear_user_page(pgaddr, vaddr, page)	memset((pgaddr), 0, PAGE_SIZE)
#define copy_user_page(vto, vfrom, vaddr, topg)	memcpy((vto), (vfrom), PAGE_SIZE)
typedef struct  pte_t;
typedef struct  pmd_t;
typedef struct  pud_t;
typedef struct  pgd_t;
typedef struct  pgprot_t;
typedef struct page *pgtable_t;
#define pte_val(x)	((x).pte)
#define pmd_val(x)	((x).ste[0])
#define pud_val(x)	((x).pue[0])
#define pgd_val(x)	((x).pge[0])
#define pgprot_val(x)	((x).pgprot)
#define __pte(x)	((pte_t)  )
#define __pmd(x)	((pmd_t)  )
#define __pud(x)	((pud_t)  )
#define __pgd(x)	((pgd_t)  )
#define __pgprot(x)	((pgprot_t)  )
#define PTE_MASK	PAGE_MASK
#define devmem_is_allowed(pfn)	1
#define __pa(vaddr)		virt_to_phys((void *) (unsigned long) (vaddr))
#define __va(paddr)		phys_to_virt((unsigned long) (paddr))
#define pfn_to_kaddr(pfn)	__va((pfn) << PAGE_SHIFT)
extern unsigned long max_low_pfn;
extern unsigned long min_low_pfn;
extern unsigned long max_pfn;
#define pfn_valid(pfn)		((pfn) < max_mapnr)
#define ARCH_PFN_OFFSET		(PAGE_OFFSET >> PAGE_SHIFT)
#define pfn_valid(pfn)		((pfn) >= min_low_pfn && (pfn) < max_low_pfn)
#define virt_to_page(kaddr)	pfn_to_page(__pa(kaddr) >> PAGE_SHIFT)
#define virt_addr_valid(kaddr)	pfn_valid(__pa(kaddr) >> PAGE_SHIFT)
#define VM_DATA_DEFAULT_FLAGS \
(VM_READ | VM_WRITE | \
((current->personality & READ_IMPLIES_EXEC) ? VM_EXEC : 0 ) | \
VM_MAYREAD | VM_MAYWRITE | VM_MAYEXEC)
