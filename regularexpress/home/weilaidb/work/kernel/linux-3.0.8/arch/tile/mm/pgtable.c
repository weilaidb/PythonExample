#define K(x) ((x) << (PAGE_SHIFT-10))
void show_mem(unsigned int filter)
static void set_pte_pfn(unsigned long vaddr, unsigned long pfn, pgprot_t flags)
void __set_fixmap(enum fixed_addresses idx, unsigned long phys, pgprot_t flags)
#if defined(CONFIG_HIGHPTE)
pte_t *_pte_offset_map(pmd_t *dir, unsigned long address)
void shatter_huge_page(unsigned long addr)
DEFINE_SPINLOCK(pgd_lock);
LIST_HEAD(pgd_list);
static inline void pgd_list_add(pgd_t *pgd)
static inline void pgd_list_del(pgd_t *pgd)
#define KERNEL_PGD_INDEX_START pgd_index(PAGE_OFFSET)
#define KERNEL_PGD_PTRS (PTRS_PER_PGD - KERNEL_PGD_INDEX_START)
static void pgd_ctor(pgd_t *pgd)
static void pgd_dtor(pgd_t *pgd)
pgd_t *pgd_alloc(struct mm_struct *mm)
void pgd_free(struct mm_struct *mm, pgd_t *pgd)
#define L2_USER_PGTABLE_PAGES (1 << L2_USER_PGTABLE_ORDER)
struct page *pte_alloc_one(struct mm_struct *mm, unsigned long address)
void pte_free(struct mm_struct *mm, struct page *p)
void __pte_free_tlb(struct mmu_gather *tlb, struct page *pte,
unsigned long address)
int ptep_test_and_clear_young(struct vm_area_struct *vma,
unsigned long addr, pte_t *ptep)
void ptep_set_wrprotect(struct mm_struct *mm,
unsigned long addr, pte_t *ptep)
pte_t *virt_to_pte(struct mm_struct* mm, unsigned long addr)
pgprot_t set_remote_cache_cpu(pgprot_t prot, int cpu)
int get_remote_cache_cpu(pgprot_t prot)
int va_to_cpa_and_pte(void *va, unsigned long long *cpa, pte_t *pte)
EXPORT_SYMBOL(va_to_cpa_and_pte);
void __set_pte(pte_t *ptep, pte_t pte)
void set_pte(pte_t *ptep, pte_t pte)
static inline int mm_is_priority_cached(struct mm_struct *mm)
void start_mm_caching(struct mm_struct *mm)
static unsigned int update_priority_cached(struct mm_struct *mm)
void check_mm_caching(struct mm_struct *prev, struct mm_struct *next)
#if CHIP_HAS_MMIO()
void __iomem *ioremap_prot(resource_size_t phys_addr, unsigned long size,
pgprot_t home)
EXPORT_SYMBOL(ioremap_prot);
void __iomem *ioremap(resource_size_t phys_addr, unsigned long size)
EXPORT_SYMBOL(ioremap);
void iounmap(volatile void __iomem *addr_in)
EXPORT_SYMBOL(iounmap);
