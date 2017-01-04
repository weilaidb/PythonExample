#define _S390_PAGE_H
#define PAGE_SHIFT      12
#define PAGE_SIZE	(_AC(1,UL) << PAGE_SHIFT)
#define PAGE_MASK       (~(PAGE_SIZE-1))
#define PAGE_DEFAULT_ACC	0
#define PAGE_DEFAULT_KEY	(PAGE_DEFAULT_ACC << 4)
#define HPAGE_SHIFT	20
#define HPAGE_SIZE	(1UL << HPAGE_SHIFT)
#define HPAGE_MASK	(~(HPAGE_SIZE - 1))
#define HUGETLB_PAGE_ORDER	(HPAGE_SHIFT - PAGE_SHIFT)
#define ARCH_HAS_SETCLEAR_HUGE_PTE
#define ARCH_HAS_HUGE_PTE_TYPE
#define ARCH_HAS_PREPARE_HUGEPAGE
#define ARCH_HAS_HUGEPAGE_CLEAR_FLUSH
static inline void clear_page(void *page)
static inline void copy_page(void *to, void *from)
#define clear_user_page(page, vaddr, pg)	clear_page(page)
#define copy_user_page(to, from, vaddr, pg)	copy_page(to, from)
#define __alloc_zeroed_user_highpage(movableflags, vma, vaddr) \
alloc_page_vma(GFP_HIGHUSER | __GFP_ZERO | movableflags, vma, vaddr)
#define __HAVE_ARCH_ALLOC_ZEROED_USER_HIGHPAGE
typedef struct  pgprot_t;
typedef struct  pgste_t;
typedef struct  pte_t;
typedef struct  pmd_t;
typedef struct  pud_t;
typedef struct  pgd_t;
typedef pte_t *pgtable_t;
#define pgprot_val(x)	((x).pgprot)
#define pgste_val(x)	((x).pgste)
#define pte_val(x)	((x).pte)
#define pmd_val(x)	((x).pmd)
#define pud_val(x)	((x).pud)
#define pgd_val(x)      ((x).pgd)
#define __pgste(x)	((pgste_t)  )
#define __pte(x)        ((pte_t)  )
#define __pmd(x)        ((pmd_t)  )
#define __pud(x)	((pud_t)  )
#define __pgd(x)        ((pgd_t)  )
#define __pgprot(x)     ((pgprot_t)  )
static inline void page_set_storage_key(unsigned long addr,
unsigned char skey, int mapped)
static inline unsigned char page_get_storage_key(unsigned long addr)
static inline int page_reset_referenced(unsigned long addr)
#define _PAGE_CHANGED		0x02
#define _PAGE_REFERENCED	0x04
#define _PAGE_FP_BIT		0x08
#define _PAGE_ACC_BITS		0xf0
#define __HAVE_ARCH_PAGE_TEST_AND_CLEAR_DIRTY
static inline int page_test_and_clear_dirty(unsigned long pfn, int mapped)
#define __HAVE_ARCH_PAGE_TEST_AND_CLEAR_YOUNG
static inline int page_test_and_clear_young(unsigned long pfn)
struct page;
void arch_free_page(struct page *page, int order);
void arch_alloc_page(struct page *page, int order);
static inline int devmem_is_allowed(unsigned long pfn)
#define HAVE_ARCH_FREE_PAGE
#define HAVE_ARCH_ALLOC_PAGE
#define __PAGE_OFFSET           0x0UL
#define PAGE_OFFSET             0x0UL
#define __pa(x)                 (unsigned long)(x)
#define __va(x)                 (void *)(unsigned long)(x)
#define virt_to_page(kaddr)	pfn_to_page(__pa(kaddr) >> PAGE_SHIFT)
#define page_to_phys(page)	(page_to_pfn(page) << PAGE_SHIFT)
#define virt_addr_valid(kaddr)	pfn_valid(__pa(kaddr) >> PAGE_SHIFT)
#define VM_DATA_DEFAULT_FLAGS	(VM_READ | VM_WRITE | \
VM_MAYREAD | VM_MAYWRITE | VM_MAYEXEC)
#define __HAVE_ARCH_GATE_AREA 1
