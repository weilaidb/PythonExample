struct cpa_data ;
static DEFINE_SPINLOCK(cpa_lock);
#define CPA_FLUSHTLB 1
#define CPA_ARRAY 2
#define CPA_PAGES_ARRAY 4
static unsigned long direct_pages_count[PG_LEVEL_NUM];
void update_page_count(int level, unsigned long pages)
static void split_page_count(int level)
void arch_report_meminfo(struct seq_file *m)
static inline void split_page_count(int level)
static inline unsigned long highmap_start_pfn(void)
static inline unsigned long highmap_end_pfn(void)
# define debug_pagealloc 1
# define debug_pagealloc 0
static inline int
within(unsigned long addr, unsigned long start, unsigned long end)
void clflush_cache_range(void *vaddr, unsigned int size)
EXPORT_SYMBOL_GPL(clflush_cache_range);
static void __cpa_flush_all(void *arg)
static void cpa_flush_all(unsigned long cache)
static void __cpa_flush_range(void *arg)
static void cpa_flush_range(unsigned long start, int numpages, int cache)
static void cpa_flush_array(unsigned long *start, int numpages, int cache,
int in_flags, struct page **pages)
static inline pgprot_t static_protections(pgprot_t prot, unsigned long address,
unsigned long pfn)
pte_t *lookup_address(unsigned long address, unsigned int *level)
EXPORT_SYMBOL_GPL(lookup_address);
static void __set_pmd_pte(pte_t *kpte, unsigned long address, pte_t pte)
static int
try_preserve_large_page(pte_t *kpte, unsigned long address,
struct cpa_data *cpa)
static int split_large_page(pte_t *kpte, unsigned long address)
static int __cpa_process_fault(struct cpa_data *cpa, unsigned long vaddr,
int primary)
static int __change_page_attr(struct cpa_data *cpa, int primary)
static int __change_page_attr_set_clr(struct cpa_data *cpa, int checkalias);
static int cpa_process_alias(struct cpa_data *cpa)
static int __change_page_attr_set_clr(struct cpa_data *cpa, int checkalias)
static inline int cache_attr(pgprot_t attr)
static int change_page_attr_set_clr(unsigned long *addr, int numpages,
pgprot_t mask_set, pgprot_t mask_clr,
int force_split, int in_flag,
struct page **pages)
static inline int change_page_attr_set(unsigned long *addr, int numpages,
pgprot_t mask, int array)
static inline int change_page_attr_clear(unsigned long *addr, int numpages,
pgprot_t mask, int array)
static inline int cpa_set_pages_array(struct page **pages, int numpages,
pgprot_t mask)
static inline int cpa_clear_pages_array(struct page **pages, int numpages,
pgprot_t mask)
int _set_memory_uc(unsigned long addr, int numpages)
int set_memory_uc(unsigned long addr, int numpages)
EXPORT_SYMBOL(set_memory_uc);
int _set_memory_array(unsigned long *addr, int addrinarray,
unsigned long new_type)
int set_memory_array_uc(unsigned long *addr, int addrinarray)
EXPORT_SYMBOL(set_memory_array_uc);
int set_memory_array_wc(unsigned long *addr, int addrinarray)
EXPORT_SYMBOL(set_memory_array_wc);
int _set_memory_wc(unsigned long addr, int numpages)
int set_memory_wc(unsigned long addr, int numpages)
EXPORT_SYMBOL(set_memory_wc);
int _set_memory_wb(unsigned long addr, int numpages)
int set_memory_wb(unsigned long addr, int numpages)
EXPORT_SYMBOL(set_memory_wb);
int set_memory_array_wb(unsigned long *addr, int addrinarray)
EXPORT_SYMBOL(set_memory_array_wb);
int set_memory_x(unsigned long addr, int numpages)
EXPORT_SYMBOL(set_memory_x);
int set_memory_nx(unsigned long addr, int numpages)
EXPORT_SYMBOL(set_memory_nx);
int set_memory_ro(unsigned long addr, int numpages)
EXPORT_SYMBOL_GPL(set_memory_ro);
int set_memory_rw(unsigned long addr, int numpages)
EXPORT_SYMBOL_GPL(set_memory_rw);
int set_memory_np(unsigned long addr, int numpages)
int set_memory_4k(unsigned long addr, int numpages)
int set_pages_uc(struct page *page, int numpages)
EXPORT_SYMBOL(set_pages_uc);
static int _set_pages_array(struct page **pages, int addrinarray,
unsigned long new_type)
int set_pages_array_uc(struct page **pages, int addrinarray)
EXPORT_SYMBOL(set_pages_array_uc);
int set_pages_array_wc(struct page **pages, int addrinarray)
EXPORT_SYMBOL(set_pages_array_wc);
int set_pages_wb(struct page *page, int numpages)
EXPORT_SYMBOL(set_pages_wb);
int set_pages_array_wb(struct page **pages, int addrinarray)
EXPORT_SYMBOL(set_pages_array_wb);
int set_pages_x(struct page *page, int numpages)
EXPORT_SYMBOL(set_pages_x);
int set_pages_nx(struct page *page, int numpages)
EXPORT_SYMBOL(set_pages_nx);
int set_pages_ro(struct page *page, int numpages)
int set_pages_rw(struct page *page, int numpages)
static int __set_pages_p(struct page *page, int numpages)
static int __set_pages_np(struct page *page, int numpages)
void kernel_map_pages(struct page *page, int numpages, int enable)
bool kernel_page_present(struct page *page)
