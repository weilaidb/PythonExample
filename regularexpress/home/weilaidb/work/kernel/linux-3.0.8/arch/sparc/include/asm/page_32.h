#define _SPARC_PAGE_H
#define PAGE_SHIFT   12
#define PAGE_SIZE    (1UL << PAGE_SHIFT)
#define PAGE_SIZE    (1 << PAGE_SHIFT)
#define PAGE_MASK    (~(PAGE_SIZE-1))
#define clear_page(page)	 memset((void *)(page), 0, PAGE_SIZE)
#define copy_page(to,from) 	memcpy((void *)(to), (void *)(from), PAGE_SIZE)
#define clear_user_page(addr, vaddr, page)	\
do  while (0)
#define copy_user_page(to, from, vaddr, page)	\
do  while (0)
struct sparc_phys_banks ;
#define SPARC_PHYS_BANKS 32
extern struct sparc_phys_banks sp_banks[SPARC_PHYS_BANKS+1];
struct cache_palias ;
typedef struct  pte_t;
typedef struct  iopte_t;
typedef struct  pmd_t;
typedef struct  pgd_t;
typedef struct  ctxd_t;
typedef struct  pgprot_t;
typedef struct  iopgprot_t;
#define pte_val(x)	((x).pte)
#define iopte_val(x)	((x).iopte)
#define pmd_val(x)      ((x).pmdv[0])
#define pgd_val(x)	((x).pgd)
#define ctxd_val(x)	((x).ctxd)
#define pgprot_val(x)	((x).pgprot)
#define iopgprot_val(x)	((x).iopgprot)
#define __pte(x)	((pte_t)  )
#define __iopte(x)	((iopte_t)  )
#define __pgd(x)	((pgd_t)  )
#define __ctxd(x)	((ctxd_t)  )
#define __pgprot(x)	((pgprot_t)  )
#define __iopgprot(x)	((iopgprot_t)  )
typedef unsigned long pte_t;
typedef unsigned long iopte_t;
typedef struct  pmd_t;
typedef unsigned long pgd_t;
typedef unsigned long ctxd_t;
typedef unsigned long pgprot_t;
typedef unsigned long iopgprot_t;
#define pte_val(x)	(x)
#define iopte_val(x)	(x)
#define pmd_val(x)      ((x).pmdv[0])
#define pgd_val(x)	(x)
#define ctxd_val(x)	(x)
#define pgprot_val(x)	(x)
#define iopgprot_val(x)	(x)
#define __pte(x)	(x)
#define __iopte(x)	(x)
#define __pgd(x)	(x)
#define __ctxd(x)	(x)
#define __pgprot(x)	(x)
#define __iopgprot(x)	(x)
typedef struct page *pgtable_t;
extern unsigned long sparc_unmapped_base;
BTFIXUPDEF_SETHI(sparc_unmapped_base)
#define TASK_UNMAPPED_BASE	BTFIXUP_SETHI(sparc_unmapped_base)
#define __pgprot(x)	(x)
#define PAGE_OFFSET	0xf0000000
extern unsigned long phys_base;
extern unsigned long pfn_base;
#define __pa(x)			((unsigned long)(x) - PAGE_OFFSET + phys_base)
#define __va(x)			((void *)((unsigned long) (x) - phys_base + PAGE_OFFSET))
#define virt_to_phys		__pa
#define phys_to_virt		__va
#define ARCH_PFN_OFFSET		(pfn_base)
#define virt_to_page(kaddr)	pfn_to_page(__pa(kaddr) >> PAGE_SHIFT)
#define pfn_valid(pfn)		(((pfn) >= (pfn_base)) && (((pfn)-(pfn_base)) < max_mapnr))
#define virt_addr_valid(kaddr)	((((unsigned long)(kaddr)-PAGE_OFFSET)>>PAGE_SHIFT) < max_mapnr)
#define VM_DATA_DEFAULT_FLAGS	(VM_READ | VM_WRITE | VM_EXEC | \
VM_MAYREAD | VM_MAYWRITE | VM_MAYEXEC)
