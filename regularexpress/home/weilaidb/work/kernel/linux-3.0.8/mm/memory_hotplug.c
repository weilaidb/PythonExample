DEFINE_MUTEX(mem_hotplug_mutex);
void lock_memory_hotplug(void)
void unlock_memory_hotplug(void)
static struct resource *register_memory_resource(u64 start, u64 size)
static void release_memory_resource(struct resource *res)
static void get_page_bootmem(unsigned long info,  struct page *page,
unsigned long type)
void __ref put_page_bootmem(struct page *page)
static void register_page_bootmem_info_section(unsigned long start_pfn)
void register_page_bootmem_info_node(struct pglist_data *pgdat)
static void grow_zone_span(struct zone *zone, unsigned long start_pfn,
unsigned long end_pfn)
static void grow_pgdat_span(struct pglist_data *pgdat, unsigned long start_pfn,
unsigned long end_pfn)
static int __meminit __add_zone(struct zone *zone, unsigned long phys_start_pfn)
static int __meminit __add_section(int nid, struct zone *zone,
unsigned long phys_start_pfn)
static int __remove_section(struct zone *zone, struct mem_section *ms)
static int __remove_section(struct zone *zone, struct mem_section *ms)
int __ref __add_pages(int nid, struct zone *zone, unsigned long phys_start_pfn,
unsigned long nr_pages)
EXPORT_SYMBOL_GPL(__add_pages);
int __remove_pages(struct zone *zone, unsigned long phys_start_pfn,
unsigned long nr_pages)
EXPORT_SYMBOL_GPL(__remove_pages);
void online_page(struct page *page)
static int online_pages_range(unsigned long start_pfn, unsigned long nr_pages,
void *arg)
int __ref online_pages(unsigned long pfn, unsigned long nr_pages)
static pg_data_t __ref *hotadd_new_pgdat(int nid, u64 start)
static void rollback_node_hotadd(int nid, pg_data_t *pgdat)
int mem_online_node(int nid)
int __ref add_memory(int nid, u64 start, u64 size)
EXPORT_SYMBOL_GPL(add_memory);
static inline int pageblock_free(struct page *page)
static struct page *next_active_pageblock(struct page *page)
int is_mem_section_removable(unsigned long start_pfn, unsigned long nr_pages)
static int test_pages_in_a_zone(unsigned long start_pfn, unsigned long end_pfn)
static unsigned long scan_lru_pages(unsigned long start, unsigned long end)
static struct page *
hotremove_migrate_alloc(struct page *page, unsigned long private, int **x)
#define NR_OFFLINE_AT_ONCE_PAGES	(256)
static int
do_migrate_range(unsigned long start_pfn, unsigned long end_pfn)
static int
offline_isolated_pages_cb(unsigned long start, unsigned long nr_pages,
void *data)
static void
offline_isolated_pages(unsigned long start_pfn, unsigned long end_pfn)
static int
check_pages_isolated_cb(unsigned long start_pfn, unsigned long nr_pages,
void *data)
static long
check_pages_isolated(unsigned long start_pfn, unsigned long end_pfn)
static int __ref offline_pages(unsigned long start_pfn,
unsigned long end_pfn, unsigned long timeout)
int remove_memory(u64 start, u64 size)
int remove_memory(u64 start, u64 size)
EXPORT_SYMBOL_GPL(remove_memory);
