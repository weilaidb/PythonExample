void set_pmd_pfn(unsigned long vaddr, unsigned long pfn, pgprot_t flags)
pte_t *pte_alloc_one_kernel(struct mm_struct *mm, unsigned long address)
struct page *pte_alloc_one(struct mm_struct *mm, unsigned long address)
DEFINE_SPINLOCK(pgd_lock);
struct page *pgd_list;
static inline void pgd_list_add(pgd_t *pgd)
static inline void pgd_list_del(pgd_t *pgd)
void pgd_ctor(void *pgd)
void pgd_dtor(void *pgd)
pgd_t *pgd_alloc(struct mm_struct *mm)
void pgd_free(struct mm_struct *mm, pgd_t *pgd)
void __init pgtable_cache_init(void)
void check_pgt_cache(void)
