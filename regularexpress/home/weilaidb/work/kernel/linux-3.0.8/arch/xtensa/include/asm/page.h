#define _XTENSA_PAGE_H
#define XCHAL_KSEG_CACHED_VADDR 0xd0000000
#define XCHAL_KSEG_BYPASS_VADDR 0xd8000000
#define XCHAL_KSEG_PADDR        0x00000000
#define XCHAL_KSEG_SIZE         0x08000000
#define PAGE_SHIFT		12
#define PAGE_SIZE		(__XTENSA_UL_CONST(1) << PAGE_SHIFT)
#define PAGE_MASK		(~(PAGE_SIZE-1))
#define PAGE_OFFSET		XCHAL_KSEG_CACHED_VADDR
#define MAX_MEM_PFN		XCHAL_KSEG_SIZE
#define PAGE_OFFSET		0
#define MAX_MEM_PFN		(PLATFORM_DEFAULT_MEM_START + PLATFORM_DEFAULT_MEM_SIZE)
#define PGTABLE_START		0x80000000
#if DCACHE_WAY_SIZE > PAGE_SIZE
# define DCACHE_ALIAS_ORDER	(DCACHE_WAY_SHIFT - PAGE_SHIFT)
# define DCACHE_ALIAS_MASK	(PAGE_MASK & (DCACHE_WAY_SIZE - 1))
# define DCACHE_ALIAS(a)	(((a) & DCACHE_ALIAS_MASK) >> PAGE_SHIFT)
# define DCACHE_ALIAS_EQ(a,b)	((((a) ^ (b)) & DCACHE_ALIAS_MASK) == 0)
# define DCACHE_ALIAS_ORDER	0
#if ICACHE_WAY_SIZE > PAGE_SIZE
# define ICACHE_ALIAS_ORDER	(ICACHE_WAY_SHIFT - PAGE_SHIFT)
# define ICACHE_ALIAS_MASK	(PAGE_MASK & (ICACHE_WAY_SIZE - 1))
# define ICACHE_ALIAS(a)	(((a) & ICACHE_ALIAS_MASK) >> PAGE_SHIFT)
# define ICACHE_ALIAS_EQ(a,b)	((((a) ^ (b)) & ICACHE_ALIAS_MASK) == 0)
# define ICACHE_ALIAS_ORDER	0
#define __pgprot(x)	(x)
typedef struct  pte_t;
typedef struct  pgd_t;
typedef struct  pgprot_t;
typedef struct page *pgtable_t;
#define pte_val(x)	((x).pte)
#define pgd_val(x)	((x).pgd)
#define pgprot_val(x)	((x).pgprot)
#define __pte(x)	((pte_t)  )
#define __pgd(x)	((pgd_t)  )
#define __pgprot(x)	((pgprot_t)  )
#if XCHAL_HAVE_NSA
static inline __attribute_const__ int get_order(unsigned long size)
# include <asm-generic/getorder.h>
struct page;
extern void clear_page(void *page);
extern void copy_page(void *to, void *from);
#if DCACHE_WAY_SIZE > PAGE_SIZE
extern void clear_user_page(void*, unsigned long, struct page*);
extern void copy_user_page(void*, void*, unsigned long, struct page*);
# define clear_user_page(page, vaddr, pg)	clear_page(page)
# define copy_user_page(to, from, vaddr, pg)	copy_page(to, from)
#define ARCH_PFN_OFFSET		(PLATFORM_DEFAULT_MEM_START >> PAGE_SHIFT)
#define __pa(x)			((unsigned long) (x) - PAGE_OFFSET)
#define __va(x)			((void *)((unsigned long) (x) + PAGE_OFFSET))
#define pfn_valid(pfn)		((pfn) >= ARCH_PFN_OFFSET && ((pfn) - ARCH_PFN_OFFSET) < max_mapnr)
# error CONFIG_DISCONTIGMEM not supported
#define virt_to_page(kaddr)	pfn_to_page(__pa(kaddr) >> PAGE_SHIFT)
#define page_to_virt(page)	__va(page_to_pfn(page) << PAGE_SHIFT)
#define virt_addr_valid(kaddr)	pfn_valid(__pa(kaddr) >> PAGE_SHIFT)
#define page_to_phys(page)	(page_to_pfn(page) << PAGE_SHIFT)
#define VM_DATA_DEFAULT_FLAGS	(VM_READ | VM_WRITE | VM_EXEC | \
VM_MAYREAD | VM_MAYWRITE | VM_MAYEXEC)
