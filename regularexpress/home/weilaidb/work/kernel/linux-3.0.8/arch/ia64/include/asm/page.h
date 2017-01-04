#define _ASM_IA64_PAGE_H
#define RGN_SHIFT	(61)
#define RGN_BASE(r)	(__IA64_UL_CONST(r)<<RGN_SHIFT)
#define RGN_BITS	(RGN_BASE(-1))
#define RGN_KERNEL	7
#define RGN_UNCACHED    6
#define RGN_GATE	5
#define RGN_HPAGE	4
#if defined(CONFIG_IA64_PAGE_SIZE_4KB)
# define PAGE_SHIFT	12
#elif defined(CONFIG_IA64_PAGE_SIZE_8KB)
# define PAGE_SHIFT	13
#elif defined(CONFIG_IA64_PAGE_SIZE_16KB)
# define PAGE_SHIFT	14
#elif defined(CONFIG_IA64_PAGE_SIZE_64KB)
# define PAGE_SHIFT	16
# error Unsupported page size!
#define PAGE_SIZE		(__IA64_UL_CONST(1) << PAGE_SHIFT)
#define PAGE_MASK		(~(PAGE_SIZE - 1))
#define PERCPU_PAGE_SHIFT	18
#define PERCPU_PAGE_SIZE	(__IA64_UL_CONST(1) << PERCPU_PAGE_SHIFT)
# define HPAGE_REGION_BASE	RGN_BASE(RGN_HPAGE)
# define HPAGE_SHIFT		hpage_shift
# define HPAGE_SHIFT_DEFAULT	28
# define HPAGE_SIZE		(__IA64_UL_CONST(1) << HPAGE_SHIFT)
# define HPAGE_MASK		(~(HPAGE_SIZE - 1))
# define HAVE_ARCH_HUGETLB_UNMAPPED_AREA
# define __pa(x)		((x) - PAGE_OFFSET)
# define __va(x)		((x) + PAGE_OFFSET)
#  define STRICT_MM_TYPECHECKS
extern void clear_page (void *page);
extern void copy_page (void *to, void *from);
#define clear_user_page(addr, vaddr, page)	\
do  while (0)
#define copy_user_page(to, from, vaddr, page)	\
do  while (0)
#define __alloc_zeroed_user_highpage(movableflags, vma, vaddr)		\
()
#define __HAVE_ARCH_ALLOC_ZEROED_USER_HIGHPAGE
#define virt_addr_valid(kaddr)	pfn_valid(__pa(kaddr) >> PAGE_SHIFT)
extern int ia64_pfn_valid (unsigned long pfn);
# define ia64_pfn_valid(pfn) 1
extern struct page *vmem_map;
# define page_to_pfn(page)	((unsigned long) (page - vmem_map))
# define pfn_to_page(pfn)	(vmem_map + (pfn))
# include <asm-generic/memory_model.h>
# include <asm-generic/memory_model.h>
# define pfn_valid(pfn)		(((pfn) < max_mapnr) && ia64_pfn_valid(pfn))
#elif defined(CONFIG_DISCONTIGMEM)
extern unsigned long min_low_pfn;
extern unsigned long max_low_pfn;
# define pfn_valid(pfn)		(((pfn) >= min_low_pfn) && ((pfn) < max_low_pfn) && ia64_pfn_valid(pfn))
#define page_to_phys(page)	(page_to_pfn(page) << PAGE_SHIFT)
#define virt_to_page(kaddr)	pfn_to_page(__pa(kaddr) >> PAGE_SHIFT)
#define pfn_to_kaddr(pfn)	__va((pfn) << PAGE_SHIFT)
typedef union ia64_va  ia64_va;
#define __pa(x)		()
#define __va(x)		()
#define REGION_NUMBER(x)	()
#define REGION_OFFSET(x)	()
# define htlbpage_to_page(x)	(((unsigned long) REGION_NUMBER(x) << 61)			\
| (REGION_OFFSET(x) >> (HPAGE_SHIFT-PAGE_SHIFT)))
# define HUGETLB_PAGE_ORDER	(HPAGE_SHIFT - PAGE_SHIFT)
extern unsigned int hpage_shift;
static __inline__ int
get_order (unsigned long size)
typedef struct  pte_t;
typedef struct  pmd_t;
typedef struct  pud_t;
typedef struct  pgd_t;
typedef struct  pgprot_t;
typedef struct page *pgtable_t;
# define pte_val(x)	((x).pte)
# define pmd_val(x)	((x).pmd)
# define pud_val(x)	((x).pud)
# define pgd_val(x)	((x).pgd)
# define pgprot_val(x)	((x).pgprot)
# define __pte(x)	((pte_t)  )
# define __pmd(x)	((pmd_t)  )
# define __pgprot(x)	((pgprot_t)  )
# ifndef __ASSEMBLY__
typedef unsigned long pte_t;
typedef unsigned long pmd_t;
typedef unsigned long pgd_t;
typedef unsigned long pgprot_t;
typedef struct page *pgtable_t;
# endif
# define pte_val(x)	(x)
# define pmd_val(x)	(x)
# define pgd_val(x)	(x)
# define pgprot_val(x)	(x)
# define __pte(x)	(x)
# define __pgd(x)	(x)
# define __pgprot(x)	(x)
#define PAGE_OFFSET			RGN_BASE(RGN_KERNEL)
#define VM_DATA_DEFAULT_FLAGS		(VM_READ | VM_WRITE |					\
VM_MAYREAD | VM_MAYWRITE | VM_MAYEXEC |		\
(((current->personality & READ_IMPLIES_EXEC) != 0)	\
? VM_EXEC : 0))
