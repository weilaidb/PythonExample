struct mem_section *mem_section[NR_SECTION_ROOTS]
____cacheline_internodealigned_in_smp;
struct mem_section mem_section[NR_SECTION_ROOTS][SECTIONS_PER_ROOT]
____cacheline_internodealigned_in_smp;
EXPORT_SYMBOL(mem_section);
#if MAX_NUMNODES <= 256
static u8 section_to_node_table[NR_MEM_SECTIONS] __cacheline_aligned;
static u16 section_to_node_table[NR_MEM_SECTIONS] __cacheline_aligned;
int page_to_nid(struct page *page)
EXPORT_SYMBOL(page_to_nid);
static void set_section_nid(unsigned long section_nr, int nid)
static inline void set_section_nid(unsigned long section_nr, int nid)
static struct mem_section noinline __init_refok *sparse_index_alloc(int nid)
static int __meminit sparse_index_init(unsigned long section_nr, int nid)
static inline int sparse_index_init(unsigned long section_nr, int nid)
int __section_nr(struct mem_section* ms)
static inline unsigned long sparse_encode_early_nid(int nid)
static inline int sparse_early_nid(struct mem_section *section)
void __meminit mminit_validate_memmodel_limits(unsigned long *start_pfn,
unsigned long *end_pfn)
void __init memory_present(int nid, unsigned long start, unsigned long end)
unsigned long __init node_memmap_size_bytes(int nid, unsigned long start_pfn,
unsigned long end_pfn)
static unsigned long sparse_encode_mem_map(struct page *mem_map, unsigned long pnum)
struct page *sparse_decode_mem_map(unsigned long coded_mem_map, unsigned long pnum)
static int __meminit sparse_init_one_section(struct mem_section *ms,
unsigned long pnum, struct page *mem_map,
unsigned long *pageblock_bitmap)
unsigned long usemap_size(void)
static unsigned long *__kmalloc_section_usemap(void)
static unsigned long * __init
sparse_early_usemaps_alloc_pgdat_section(struct pglist_data *pgdat,
unsigned long count)
static void __init check_usemap_section_nr(int nid, unsigned long *usemap)
static unsigned long * __init
sparse_early_usemaps_alloc_pgdat_section(struct pglist_data *pgdat,
unsigned long count)
static void __init check_usemap_section_nr(int nid, unsigned long *usemap)
static void __init sparse_early_usemaps_alloc_node(unsigned long**usemap_map,
unsigned long pnum_begin,
unsigned long pnum_end,
unsigned long usemap_count, int nodeid)
struct page __init *sparse_mem_map_populate(unsigned long pnum, int nid)
void __init sparse_mem_maps_populate_node(struct page **map_map,
unsigned long pnum_begin,
unsigned long pnum_end,
unsigned long map_count, int nodeid)
static void __init sparse_early_mem_maps_alloc_node(struct page **map_map,
unsigned long pnum_begin,
unsigned long pnum_end,
unsigned long map_count, int nodeid)
static struct page __init *sparse_early_mem_map_alloc(unsigned long pnum)
void __attribute__((weak)) __meminit vmemmap_populate_print_last(void)
void __init sparse_init(void)
static inline struct page *kmalloc_section_memmap(unsigned long pnum, int nid,
unsigned long nr_pages)
static void __kfree_section_memmap(struct page *memmap, unsigned long nr_pages)
static void free_map_bootmem(struct page *page, unsigned long nr_pages)
static struct page *__kmalloc_section_memmap(unsigned long nr_pages)
static inline struct page *kmalloc_section_memmap(unsigned long pnum, int nid,
unsigned long nr_pages)
static void __kfree_section_memmap(struct page *memmap, unsigned long nr_pages)
static void free_map_bootmem(struct page *page, unsigned long nr_pages)
static void free_section_usemap(struct page *memmap, unsigned long *usemap)
int __meminit sparse_add_one_section(struct zone *zone, unsigned long start_pfn,
int nr_pages)
void sparse_remove_one_section(struct zone *zone, struct mem_section *ms)
