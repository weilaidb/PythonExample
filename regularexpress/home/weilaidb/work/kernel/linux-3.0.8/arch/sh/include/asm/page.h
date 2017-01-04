#define __ASM_SH_PAGE_H
#if defined(CONFIG_PAGE_SIZE_4KB)
# define PAGE_SHIFT	12
#elif defined(CONFIG_PAGE_SIZE_8KB)
# define PAGE_SHIFT	13
#elif defined(CONFIG_PAGE_SIZE_16KB)
# define PAGE_SHIFT	14
#elif defined(CONFIG_PAGE_SIZE_64KB)
# define PAGE_SHIFT	16
# error "Bogus kernel page size?"
#define PAGE_SIZE	(_AC(1, UL) << PAGE_SHIFT)
#define PAGE_MASK	(~(PAGE_SIZE-1))
#define PTE_MASK	PAGE_MASK
#if defined(CONFIG_HUGETLB_PAGE_SIZE_64K)
#define HPAGE_SHIFT	16
#elif defined(CONFIG_HUGETLB_PAGE_SIZE_256K)
#define HPAGE_SHIFT	18
#elif defined(CONFIG_HUGETLB_PAGE_SIZE_1MB)
#define HPAGE_SHIFT	20
#elif defined(CONFIG_HUGETLB_PAGE_SIZE_4MB)
#define HPAGE_SHIFT	22
#elif defined(CONFIG_HUGETLB_PAGE_SIZE_64MB)
#define HPAGE_SHIFT	26
#elif defined(CONFIG_HUGETLB_PAGE_SIZE_512MB)
#define HPAGE_SHIFT	29
#define HPAGE_SIZE		(1UL << HPAGE_SHIFT)
#define HPAGE_MASK		(~(HPAGE_SIZE-1))
#define HUGETLB_PAGE_ORDER	(HPAGE_SHIFT-PAGE_SHIFT)
extern unsigned long shm_align_mask;
extern unsigned long max_low_pfn, min_low_pfn;
extern unsigned long memory_start, memory_end, memory_limit;
static inline unsigned long
pages_do_alias(unsigned long addr1, unsigned long addr2)
#define clear_page(page)	memset((void *)(page), 0, PAGE_SIZE)
extern void copy_page(void *to, void *from);
struct page;
struct vm_area_struct;
extern void copy_user_highpage(struct page *to, struct page *from,
unsigned long vaddr, struct vm_area_struct *vma);
#define __HAVE_ARCH_COPY_USER_HIGHPAGE
extern void clear_user_highpage(struct page *page, unsigned long vaddr);
#define clear_user_highpage	clear_user_highpage
typedef struct  pte_t;
typedef struct  pgprot_t;
typedef struct  pgd_t;
#define pte_val(x) \
((x).pte_low | ((unsigned long long)(x).pte_high << 32))
#define __pte(x) \
()
#elif defined(CONFIG_SUPERH32)
typedef struct  pte_t;
typedef struct  pgprot_t;
typedef struct  pgd_t;
#define pte_val(x)	((x).pte_low)
#define __pte(x)	((pte_t)  )
typedef struct  pte_t;
typedef struct  pgprot_t;
typedef struct  pgd_t;
#define pte_val(x)	((x).pte_low)
#define __pte(x)	((pte_t)  )
#define pgd_val(x)	((x).pgd)
#define pgprot_val(x)	((x).pgprot)
#define __pgd(x) ((pgd_t)  )
#define __pgprot(x)	((pgprot_t)  )
typedef struct page *pgtable_t;
#define pte_pgprot(x) __pgprot(pte_val(x) & PTE_FLAGS_MASK)
#define __MEMORY_START		CONFIG_MEMORY_START
#define __MEMORY_SIZE		CONFIG_MEMORY_SIZE
#define PAGE_OFFSET		CONFIG_PAGE_OFFSET
#define ___pa(x)	((x)-PAGE_OFFSET+__MEMORY_START)
#define ___va(x)	((x)+PAGE_OFFSET-__MEMORY_START)
#define ___pa(x)	((x)-PAGE_OFFSET)
#define ___va(x)	((x)+PAGE_OFFSET)
#define __pa(x)		___pa((unsigned long)x)
#define __va(x)		(void *)___va((unsigned long)x)
#define UNCAC_ADDR(addr)	((addr) - PAGE_OFFSET + uncached_start)
#define CAC_ADDR(addr)		((addr) - uncached_start + PAGE_OFFSET)
#define UNCAC_ADDR(addr)	((addr))
#define CAC_ADDR(addr)		((addr))
#define pfn_to_kaddr(pfn)	__va((pfn) << PAGE_SHIFT)
#define page_to_phys(page)	(page_to_pfn(page) << PAGE_SHIFT)
#define PFN_START		(__MEMORY_START >> PAGE_SHIFT)
#define ARCH_PFN_OFFSET		(PFN_START)
#define virt_to_page(kaddr)	pfn_to_page(__pa(kaddr) >> PAGE_SHIFT)
#define pfn_valid(pfn)		((pfn) >= min_low_pfn && (pfn) < max_low_pfn)
#define virt_addr_valid(kaddr)	pfn_valid(__pa(kaddr) >> PAGE_SHIFT)
#define VM_DATA_DEFAULT_FLAGS	(VM_READ | VM_WRITE | VM_EXEC | \
VM_MAYREAD | VM_MAYWRITE | VM_MAYEXEC)
#define __HAVE_ARCH_GATE_AREA
#define ARCH_DMA_MINALIGN	L1_CACHE_BYTES
#define ARCH_SLAB_MINALIGN	8
