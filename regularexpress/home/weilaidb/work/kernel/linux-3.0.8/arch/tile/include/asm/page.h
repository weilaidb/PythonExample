#define _ASM_TILE_PAGE_H
#define PAGE_SHIFT	HV_LOG2_PAGE_SIZE_SMALL
#define HPAGE_SHIFT	HV_LOG2_PAGE_SIZE_LARGE
#define PAGE_SIZE	(_AC(1, UL) << PAGE_SHIFT)
#define HPAGE_SIZE	(_AC(1, UL) << HPAGE_SHIFT)
#define PAGE_MASK	(~(PAGE_SIZE - 1))
#define HPAGE_MASK	(~(HPAGE_SIZE - 1))
#define CONFIG_FORCE_MAX_ZONEORDER (HPAGE_SHIFT - PAGE_SHIFT + 1)
struct page;
static inline void clear_page(void *page)
static inline void copy_page(void *to, void *from)
static inline void clear_user_page(void *page, unsigned long vaddr,
struct page *pg)
static inline void copy_user_page(void *to, void *from, unsigned long vaddr,
struct page *topage)
typedef HV_PTE pte_t;
typedef HV_PTE pgd_t;
typedef HV_PTE pgprot_t;
typedef struct page *pgtable_t;
#define __pgprot(val) hv_pte(val)
#define __pte(x) hv_pte(x)
#define __pgd(x) hv_pte(x)
static inline u64 pgprot_val(pgprot_t pgprot)
static inline u64 pte_val(pte_t pte)
static inline u64 pgd_val(pgd_t pgd)
typedef HV_PTE pmd_t;
#define __pmd(x) hv_pte(x)
static inline u64 pmd_val(pmd_t pmd)
static inline __attribute_const__ int get_order(unsigned long size)
#define HUGETLB_PAGE_ORDER	(HPAGE_SHIFT - PAGE_SHIFT)
#define HUGE_MAX_HSTATE		2
#define HAVE_ARCH_HUGETLB_UNMAPPED_AREA
#define NR_PA_HIGHBIT_SHIFT (CHIP_PA_WIDTH() - CHIP_LOG_NUM_MSHIMS())
#define NR_PA_HIGHBIT_VALUES (1 << CHIP_LOG_NUM_MSHIMS())
#define __pa_to_highbits(pa) ((phys_addr_t)(pa) >> NR_PA_HIGHBIT_SHIFT)
#define __pfn_to_highbits(pfn) ((pfn) >> (NR_PA_HIGHBIT_SHIFT - PAGE_SHIFT))
#if CHIP_PA_WIDTH() + 2 > CHIP_VA_WIDTH()
# error Too much PA to map with the VA available!
#define HALF_VA_SPACE           (_AC(1, UL) << (CHIP_VA_WIDTH() - 1))
#define MEM_LOW_END		(HALF_VA_SPACE - 1)
#define MEM_HIGH_START		(-HALF_VA_SPACE)
#define PAGE_OFFSET		MEM_HIGH_START
#define _VMALLOC_START		_AC(0xfffffff500000000, UL)
#define HUGE_VMAP_BASE		_AC(0xfffffff600000000, UL)
#define MEM_SV_START		_AC(0xfffffff700000000, UL)
#define MEM_SV_INTRPT		MEM_SV_START
#define MEM_MODULE_START	_AC(0xfffffff710000000, UL)
#define MEM_MODULE_END		(MEM_MODULE_START + (256*1024*1024))
#define MEM_HV_START		_AC(0xfffffff800000000, UL)
#define KERNEL_HIGH_VADDR	MEM_SV_START
#define FIXADDR_TOP             MEM_HV_START
#define MEM_USER_INTRPT		_AC(0xfc000000, UL)
#if CONFIG_KERNEL_PL == 1
#define MEM_SV_INTRPT		_AC(0xfd000000, UL)
#define MEM_HV_INTRPT		_AC(0xfe000000, UL)
#define MEM_GUEST_INTRPT	_AC(0xfd000000, UL)
#define MEM_SV_INTRPT		_AC(0xfe000000, UL)
#define MEM_HV_INTRPT		_AC(0xff000000, UL)
#define INTRPT_SIZE		0x4000
#if PAGE_SIZE > INTRPT_SIZE
#undef INTRPT_SIZE
#define INTRPT_SIZE PAGE_SIZE
#define KERNEL_HIGH_VADDR	MEM_USER_INTRPT
#define FIXADDR_TOP		(KERNEL_HIGH_VADDR - PAGE_SIZE)
#define PAGE_OFFSET		_AC(CONFIG_PAGE_OFFSET, UL)
#define MEM_MODULE_START	VMALLOC_START
#define MEM_MODULE_END		VMALLOC_END
extern unsigned long pbase_map[];
extern void *vbase_map[];
static inline unsigned long kaddr_to_pfn(const volatile void *_kaddr)
static inline void *pfn_to_kaddr(unsigned long pfn)
static inline phys_addr_t virt_to_phys(const volatile void *kaddr)
static inline void *phys_to_virt(phys_addr_t paddr)
static inline int virt_addr_valid(const volatile void *kaddr)
static inline unsigned long kaddr_to_pfn(const volatile void *kaddr)
static inline void *pfn_to_kaddr(unsigned long pfn)
static inline phys_addr_t virt_to_phys(const volatile void *kaddr)
static inline void *phys_to_virt(phys_addr_t paddr)
#define virt_addr_valid(kaddr) pfn_valid(kaddr_to_pfn(kaddr))
#define __pa(kaddr) virt_to_phys((void *)(unsigned long)(kaddr))
#define __va(paddr) phys_to_virt((phys_addr_t)(paddr))
extern int devmem_is_allowed(unsigned long pagenr);
static inline int pfn_valid(unsigned long pfn)
#define page_to_pa(page) ((phys_addr_t)(page_to_pfn(page)) << PAGE_SHIFT)
#define virt_to_page(kaddr) pfn_to_page(kaddr_to_pfn((void *)(kaddr)))
#define page_to_virt(page) pfn_to_kaddr(page_to_pfn(page))
struct mm_struct;
extern pte_t *virt_to_pte(struct mm_struct *mm, unsigned long addr);
#define VM_DATA_DEFAULT_FLAGS \
(VM_READ | VM_WRITE | VM_MAYREAD | VM_MAYWRITE | VM_MAYEXEC)
