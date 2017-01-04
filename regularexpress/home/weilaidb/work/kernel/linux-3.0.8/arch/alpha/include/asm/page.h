#define _ALPHA_PAGE_H
#define PAGE_SHIFT	13
#define PAGE_SIZE	(_AC(1,UL) << PAGE_SHIFT)
#define PAGE_MASK	(~(PAGE_SIZE-1))
#define STRICT_MM_TYPECHECKS
extern void clear_page(void *page);
#define clear_user_page(page, vaddr, pg)	clear_page(page)
#define __alloc_zeroed_user_highpage(movableflags, vma, vaddr) \
alloc_page_vma(GFP_HIGHUSER | __GFP_ZERO | movableflags, vma, vmaddr)
#define __HAVE_ARCH_ALLOC_ZEROED_USER_HIGHPAGE
extern void copy_page(void * _to, void * _from);
#define copy_user_page(to, from, vaddr, pg)	copy_page(to, from)
typedef struct  pte_t;
typedef struct  pmd_t;
typedef struct  pgd_t;
typedef struct  pgprot_t;
#define pte_val(x)	((x).pte)
#define pmd_val(x)	((x).pmd)
#define pgd_val(x)	((x).pgd)
#define pgprot_val(x)	((x).pgprot)
#define __pte(x)	((pte_t)  )
#define __pmd(x)	((pmd_t)  )
#define __pgd(x)	((pgd_t)  )
#define __pgprot(x)	((pgprot_t)  )
typedef unsigned long pte_t;
typedef unsigned long pmd_t;
typedef unsigned long pgd_t;
typedef unsigned long pgprot_t;
#define pte_val(x)	(x)
#define pmd_val(x)	(x)
#define pgd_val(x)	(x)
#define pgprot_val(x)	(x)
#define __pte(x)	(x)
#define __pgd(x)	(x)
#define __pgprot(x)	(x)
typedef struct page *pgtable_t;
#define PAGE_OFFSET		0xffff800000000000UL
#define PAGE_OFFSET		0xfffffc0000000000UL
#define PAGE_OFFSET		0xffff800000000000
#define PAGE_OFFSET		0xfffffc0000000000
#define __pa(x)			((unsigned long) (x) - PAGE_OFFSET)
#define __va(x)			((void *)((unsigned long) (x) + PAGE_OFFSET))
#define virt_to_page(kaddr)	pfn_to_page(__pa(kaddr) >> PAGE_SHIFT)
#define pfn_valid(pfn)		((pfn) < max_mapnr)
#define virt_addr_valid(kaddr)	pfn_valid(__pa(kaddr) >> PAGE_SHIFT)
#define VM_DATA_DEFAULT_FLAGS		(VM_READ | VM_WRITE | VM_EXEC | \
VM_MAYREAD | VM_MAYWRITE | VM_MAYEXEC)
