#define kmap_get_pte(vaddr) \
pte_offset_kernel(pmd_offset(pud_offset(pgd_offset_k(vaddr), (vaddr)),\
(vaddr)), (vaddr))
void *kmap(struct page *page)
EXPORT_SYMBOL(kmap);
void kunmap(struct page *page)
EXPORT_SYMBOL(kunmap);
struct atomic_mapped_page ;
static spinlock_t amp_lock = __SPIN_LOCK_UNLOCKED(&amp_lock);
static struct list_head amp_list = LIST_HEAD_INIT(amp_list);
struct kmap_amps ;
static DEFINE_PER_CPU(struct kmap_amps, amps);
static void kmap_atomic_register(struct page *page, enum km_type type,
unsigned long va, pte_t *ptep, pte_t pteval)
static void kmap_atomic_unregister(struct page *page, unsigned long va)
static void kmap_atomic_fix_one_kpte(struct atomic_mapped_page *amp,
int finished)
void kmap_atomic_fix_kpte(struct page *page, int finished)
void *kmap_atomic_prot(struct page *page, pgprot_t prot)
EXPORT_SYMBOL(kmap_atomic_prot);
void *__kmap_atomic(struct page *page)
EXPORT_SYMBOL(__kmap_atomic);
void __kunmap_atomic(void *kvaddr)
EXPORT_SYMBOL(__kunmap_atomic);
void *kmap_atomic_pfn(unsigned long pfn)
void *kmap_atomic_prot_pfn(unsigned long pfn, pgprot_t prot)
struct page *kmap_atomic_to_page(void *ptr)
