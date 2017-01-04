#define _ASM_PAGE_H
#define PAGE_SHIFT	12
#define PAGE_SHIFT	13
#define PAGE_SHIFT	14
#define PAGE_SHIFT	15
#define PAGE_SHIFT	16
#define PAGE_SIZE	(_AC(1,UL) << PAGE_SHIFT)
#define PAGE_MASK       (~((1 << PAGE_SHIFT) - 1))
#define HPAGE_SHIFT	(PAGE_SHIFT + PAGE_SHIFT - 3)
#define HPAGE_SIZE	(_AC(1,UL) << HPAGE_SHIFT)
#define HPAGE_MASK	(~(HPAGE_SIZE - 1))
#define HUGETLB_PAGE_ORDER	(HPAGE_SHIFT - PAGE_SHIFT)
extern void build_clear_page(void);
extern void build_copy_page(void);
#define ARCH_PFN_OFFSET		PFN_UP(PHYS_OFFSET)
extern void clear_page(void * page);
extern void copy_page(void * to, void * from);
extern unsigned long shm_align_mask;
static inline unsigned long pages_do_alias(unsigned long addr1,
unsigned long addr2)
struct page;
static inline void clear_user_page(void *addr, unsigned long vaddr,
struct page *page)
extern void copy_user_page(void *vto, void *vfrom, unsigned long vaddr,
struct page *to);
struct vm_area_struct;
extern void copy_user_highpage(struct page *to, struct page *from,
unsigned long vaddr, struct vm_area_struct *vma);
#define __HAVE_ARCH_COPY_USER_HIGHPAGE
typedef struct  pte_t;
#define pte_val(x)    ((x).pte_low | ((unsigned long long)(x).pte_high << 32))
#define __pte(x)      ()
typedef struct  pte_t;
#define pte_val(x)	((x).pte)
#define __pte(x)	((pte_t)  )
typedef struct  pte_t;
#define pte_val(x)	((x).pte)
#define __pte(x)	((pte_t)  )
typedef struct page *pgtable_t;
typedef struct  pgd_t;
#define pgd_val(x)	((x).pgd)
#define __pgd(x)	((pgd_t)  )
typedef struct  pgprot_t;
#define pgprot_val(x)	((x).pgprot)
#define __pgprot(x)	((pgprot_t)  )
#define ptep_buddy(x)	((pte_t *)((unsigned long)(x) ^ sizeof(pte_t)))
#define __pa(x)								\
()
#define __pa(x)								\
((unsigned long)(x) - PAGE_OFFSET + PHYS_OFFSET)
#define __va(x)		((void *)((unsigned long)(x) + PAGE_OFFSET - PHYS_OFFSET))
#define __pa_symbol(x)	__pa(RELOC_HIDE((unsigned long)(x), 0))
#define pfn_to_kaddr(pfn)	__va((pfn) << PAGE_SHIFT)
#define pfn_valid(pfn)							\
()
#elif defined(CONFIG_SPARSEMEM)
#elif defined(CONFIG_NEED_MULTIPLE_NODES)
#define pfn_valid(pfn)							\
()
#define virt_to_page(kaddr)	pfn_to_page(PFN_DOWN(virt_to_phys(kaddr)))
#define virt_addr_valid(kaddr)	pfn_valid(PFN_DOWN(virt_to_phys(kaddr)))
#define VM_DATA_DEFAULT_FLAGS	(VM_READ | VM_WRITE | VM_EXEC | \
VM_MAYREAD | VM_MAYWRITE | VM_MAYEXEC)
#define UNCAC_ADDR(addr)	((addr) - PAGE_OFFSET + UNCAC_BASE + 	\
PHYS_OFFSET)
#define CAC_ADDR(addr)		((addr) - UNCAC_BASE + PAGE_OFFSET -	\
PHYS_OFFSET)
