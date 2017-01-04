#if CHIP_HAS_COHERENT_LOCAL_CACHE()
static int __write_once noallocl2;
static int __init set_noallocl2(char *str)
early_param("noallocl2", set_noallocl2);
#define noallocl2 0
#define mark_caches_evicted_start() 0
#define mark_caches_evicted_finish(mask, timestamp) do  while (0)
static void hv_flush_update(const struct cpumask *cache_cpumask,
struct cpumask *tlb_cpumask,
unsigned long tlb_va, unsigned long tlb_length,
HV_Remote_ASID *asids, int asidcount)
void flush_remote(unsigned long cache_pfn, unsigned long cache_control,
const struct cpumask *cache_cpumask_orig,
HV_VirtAddr tlb_va, unsigned long tlb_length,
unsigned long tlb_pgsize,
const struct cpumask *tlb_cpumask_orig,
HV_Remote_ASID *asids, int asidcount)
void flush_remote_page(struct page *page, int order)
void homecache_evict(const struct cpumask *mask)
static int homecache_mask(struct page *page, int pages,
struct cpumask *home_mask)
static unsigned long cache_flush_length(unsigned long length)
void homecache_flush_cache(struct page *page, int order)
static int pte_to_home(pte_t pte)
pte_t pte_set_home(pte_t pte, int home)
EXPORT_SYMBOL(pte_set_home);
#if CHIP_HAS_CBOX_HOME_MAP()
static inline int initial_page_home(void)
static inline int initial_page_home(void)
int page_home(struct page *page)
void homecache_change_page_home(struct page *page, int order, int home)
struct page *homecache_alloc_pages(gfp_t gfp_mask,
unsigned int order, int home)
EXPORT_SYMBOL(homecache_alloc_pages);
struct page *homecache_alloc_pages_node(int nid, gfp_t gfp_mask,
unsigned int order, int home)
void homecache_free_pages(unsigned long addr, unsigned int order)
