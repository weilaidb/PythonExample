#define __LINUX_MEMORY_HOTPLUG_H
struct page;
struct zone;
struct pglist_data;
struct mem_section;
enum ;
static inline
void pgdat_resize_lock(struct pglist_data *pgdat, unsigned long *flags)
static inline
void pgdat_resize_unlock(struct pglist_data *pgdat, unsigned long *flags)
static inline
void pgdat_resize_init(struct pglist_data *pgdat)
static inline unsigned zone_span_seqbegin(struct zone *zone)
static inline int zone_span_seqretry(struct zone *zone, unsigned iv)
static inline void zone_span_writelock(struct zone *zone)
static inline void zone_span_writeunlock(struct zone *zone)
static inline void zone_seqlock_init(struct zone *zone)
extern int zone_grow_free_lists(struct zone *zone, unsigned long new_nr_pages);
extern int zone_grow_waitqueues(struct zone *zone, unsigned long nr_pages);
extern int add_one_highpage(struct page *page, int pfn, int bad_ppro);
extern void online_page(struct page *page);
extern int online_pages(unsigned long, unsigned long);
extern void __offline_isolated_pages(unsigned long, unsigned long);
extern bool is_pageblock_removable_nolock(struct page *page);
extern int __add_pages(int nid, struct zone *zone, unsigned long start_pfn,
unsigned long nr_pages);
extern int __remove_pages(struct zone *zone, unsigned long start_pfn,
unsigned long nr_pages);
extern int memory_add_physaddr_to_nid(u64 start);
static inline int memory_add_physaddr_to_nid(u64 start)
extern pg_data_t *arch_alloc_nodedata(int nid);
extern void arch_free_nodedata(pg_data_t *pgdat);
extern void arch_refresh_nodedata(int nid, pg_data_t *pgdat);
#define arch_alloc_nodedata(nid)	generic_alloc_nodedata(nid)
#define arch_free_nodedata(pgdat)	generic_free_nodedata(pgdat)
#define generic_alloc_nodedata(nid)				\
()
#define generic_free_nodedata(pgdat)	kfree(pgdat)
extern pg_data_t *node_data[];
static inline void arch_refresh_nodedata(int nid, pg_data_t *pgdat)
static inline pg_data_t *generic_alloc_nodedata(int nid)
static inline void generic_free_nodedata(pg_data_t *pgdat)
static inline void arch_refresh_nodedata(int nid, pg_data_t *pgdat)
static inline void register_page_bootmem_info_node(struct pglist_data *pgdat)
static inline void put_page_bootmem(struct page *page)
extern void register_page_bootmem_info_node(struct pglist_data *pgdat);
extern void put_page_bootmem(struct page *page);
void lock_memory_hotplug(void);
void unlock_memory_hotplug(void);
static inline void pgdat_resize_lock(struct pglist_data *p, unsigned long *f)
static inline void pgdat_resize_unlock(struct pglist_data *p, unsigned long *f)
static inline void pgdat_resize_init(struct pglist_data *pgdat)
static inline unsigned zone_span_seqbegin(struct zone *zone)
static inline int zone_span_seqretry(struct zone *zone, unsigned iv)
static inline void zone_span_writelock(struct zone *zone)
static inline void zone_span_writeunlock(struct zone *zone)
static inline void zone_seqlock_init(struct zone *zone)
static inline int mhp_notimplemented(const char *func)
static inline void register_page_bootmem_info_node(struct pglist_data *pgdat)
static inline void lock_memory_hotplug(void)
static inline void unlock_memory_hotplug(void)
extern int is_mem_section_removable(unsigned long pfn, unsigned long nr_pages);
static inline int is_mem_section_removable(unsigned long pfn,
unsigned long nr_pages)
extern int mem_online_node(int nid);
extern int add_memory(int nid, u64 start, u64 size);
extern int arch_add_memory(int nid, u64 start, u64 size);
extern int remove_memory(u64 start, u64 size);
extern int sparse_add_one_section(struct zone *zone, unsigned long start_pfn,
int nr_pages);
extern void sparse_remove_one_section(struct zone *zone, struct mem_section *ms);
extern struct page *sparse_decode_mem_map(unsigned long coded_mem_map,
unsigned long pnum);
