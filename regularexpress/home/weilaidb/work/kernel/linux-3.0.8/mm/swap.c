int page_cluster;
static DEFINE_PER_CPU(struct pagevec[NR_LRU_LISTS], lru_add_pvecs);
static DEFINE_PER_CPU(struct pagevec, lru_rotate_pvecs);
static DEFINE_PER_CPU(struct pagevec, lru_deactivate_pvecs);
static void __page_cache_release(struct page *page)
static void __put_single_page(struct page *page)
static void __put_compound_page(struct page *page)
static void put_compound_page(struct page *page)
void put_page(struct page *page)
EXPORT_SYMBOL(put_page);
void put_pages_list(struct list_head *pages)
EXPORT_SYMBOL(put_pages_list);
static void pagevec_lru_move_fn(struct pagevec *pvec,
void (*move_fn)(struct page *page, void *arg),
void *arg)
static void pagevec_move_tail_fn(struct page *page, void *arg)
static void pagevec_move_tail(struct pagevec *pvec)
void rotate_reclaimable_page(struct page *page)
static void update_page_reclaim_stat(struct zone *zone, struct page *page,
int file, int rotated)
static void __activate_page(struct page *page, void *arg)
static DEFINE_PER_CPU(struct pagevec, activate_page_pvecs);
static void activate_page_drain(int cpu)
void activate_page(struct page *page)
static inline void activate_page_drain(int cpu)
void activate_page(struct page *page)
void mark_page_accessed(struct page *page)
EXPORT_SYMBOL(mark_page_accessed);
void __lru_cache_add(struct page *page, enum lru_list lru)
EXPORT_SYMBOL(__lru_cache_add);
void lru_cache_add_lru(struct page *page, enum lru_list lru)
void add_page_to_unevictable_list(struct page *page)
static void lru_deactivate_fn(struct page *page, void *arg)
static void drain_cpu_pagevecs(int cpu)
void deactivate_page(struct page *page)
void lru_add_drain(void)
static void lru_add_drain_per_cpu(struct work_struct *dummy)
int lru_add_drain_all(void)
void release_pages(struct page **pages, int nr, int cold)
EXPORT_SYMBOL(release_pages);
void __pagevec_release(struct pagevec *pvec)
EXPORT_SYMBOL(__pagevec_release);
void lru_add_page_tail(struct zone* zone,
struct page *page, struct page *page_tail)
static void ____pagevec_lru_add_fn(struct page *page, void *arg)
void ____pagevec_lru_add(struct pagevec *pvec, enum lru_list lru)
EXPORT_SYMBOL(____pagevec_lru_add);
void pagevec_strip(struct pagevec *pvec)
unsigned pagevec_lookup(struct pagevec *pvec, struct address_space *mapping,
pgoff_t start, unsigned nr_pages)
EXPORT_SYMBOL(pagevec_lookup);
unsigned pagevec_lookup_tag(struct pagevec *pvec, struct address_space *mapping,
pgoff_t *index, int tag, unsigned nr_pages)
EXPORT_SYMBOL(pagevec_lookup_tag);
void __init swap_setup(void)
