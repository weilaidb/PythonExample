static int swsusp_page_is_free(struct page *);
static void swsusp_set_page_forbidden(struct page *);
static void swsusp_unset_page_forbidden(struct page *);
unsigned long reserved_size;
void __init hibernate_reserved_size_init(void)
unsigned long image_size;
void __init hibernate_image_size_init(void)
struct pbe *restore_pblist;
static void *buffer;
#define PG_ANY		0
#define PG_SAFE		1
#define PG_UNSAFE_CLEAR	1
#define PG_UNSAFE_KEEP	0
static unsigned int allocated_unsafe_pages;
static void *get_image_page(gfp_t gfp_mask, int safe_needed)
unsigned long get_safe_page(gfp_t gfp_mask)
static struct page *alloc_image_page(gfp_t gfp_mask)
static inline void free_image_page(void *addr, int clear_nosave_free)
#define LINKED_PAGE_DATA_SIZE	(PAGE_SIZE - sizeof(void *))
struct linked_page  __attribute__((packed));
static inline void
free_list_of_pages(struct linked_page *list, int clear_page_nosave)
struct chain_allocator ;
static void
chain_init(struct chain_allocator *ca, gfp_t gfp_mask, int safe_needed)
static void *chain_alloc(struct chain_allocator *ca, unsigned int size)
#define BM_END_OF_MAP	(~0UL)
#define BM_BITS_PER_BLOCK	(PAGE_SIZE * BITS_PER_BYTE)
struct bm_block ;
static inline unsigned long bm_block_bits(struct bm_block *bb)
struct bm_position ;
struct memory_bitmap ;
static void memory_bm_position_reset(struct memory_bitmap *bm)
static void memory_bm_free(struct memory_bitmap *bm, int clear_nosave_free);
static int create_bm_block_list(unsigned long pages,
struct list_head *list,
struct chain_allocator *ca)
struct mem_extent ;
static void free_mem_extents(struct list_head *list)
static int create_mem_extents(struct list_head *list, gfp_t gfp_mask)
static int
memory_bm_create(struct memory_bitmap *bm, gfp_t gfp_mask, int safe_needed)
static void memory_bm_free(struct memory_bitmap *bm, int clear_nosave_free)
static int memory_bm_find_bit(struct memory_bitmap *bm, unsigned long pfn,
void **addr, unsigned int *bit_nr)
static void memory_bm_set_bit(struct memory_bitmap *bm, unsigned long pfn)
static int mem_bm_set_bit_check(struct memory_bitmap *bm, unsigned long pfn)
static void memory_bm_clear_bit(struct memory_bitmap *bm, unsigned long pfn)
static int memory_bm_test_bit(struct memory_bitmap *bm, unsigned long pfn)
static bool memory_bm_pfn_present(struct memory_bitmap *bm, unsigned long pfn)
static unsigned long memory_bm_next_pfn(struct memory_bitmap *bm)
struct nosave_region ;
static LIST_HEAD(nosave_regions);
void __init
__register_nosave_region(unsigned long start_pfn, unsigned long end_pfn,
int use_kmalloc)
static struct memory_bitmap *forbidden_pages_map;
static struct memory_bitmap *free_pages_map;
void swsusp_set_page_free(struct page *page)
static int swsusp_page_is_free(struct page *page)
void swsusp_unset_page_free(struct page *page)
static void swsusp_set_page_forbidden(struct page *page)
int swsusp_page_is_forbidden(struct page *page)
static void swsusp_unset_page_forbidden(struct page *page)
static void mark_nosave_pages(struct memory_bitmap *bm)
int create_basic_memory_bitmaps(void)
void free_basic_memory_bitmaps(void)
unsigned int snapshot_additional_pages(struct zone *zone)
static unsigned int count_free_highmem_pages(void)
static struct page *saveable_highmem_page(struct zone *zone, unsigned long pfn)
static unsigned int count_highmem_pages(void)
static inline void *saveable_highmem_page(struct zone *z, unsigned long p)
static struct page *saveable_page(struct zone *zone, unsigned long pfn)
static unsigned int count_data_pages(void)
static inline void do_copy_page(long *dst, long *src)
static void safe_copy_page(void *dst, struct page *s_page)
static inline struct page *
page_is_saveable(struct zone *zone, unsigned long pfn)
static void copy_data_page(unsigned long dst_pfn, unsigned long src_pfn)
#define page_is_saveable(zone, pfn)	saveable_page(zone, pfn)
static inline void copy_data_page(unsigned long dst_pfn, unsigned long src_pfn)
static void
copy_data_pages(struct memory_bitmap *copy_bm, struct memory_bitmap *orig_bm)
static unsigned int nr_copy_pages;
static unsigned int nr_meta_pages;
unsigned int alloc_normal, alloc_highmem;
static struct memory_bitmap orig_bm;
static struct memory_bitmap copy_bm;
void swsusp_free(void)
#define GFP_IMAGE	(GFP_KERNEL | __GFP_NOWARN)
static unsigned long preallocate_image_pages(unsigned long nr_pages, gfp_t mask)
static unsigned long preallocate_image_memory(unsigned long nr_pages,
unsigned long avail_normal)
static unsigned long preallocate_image_highmem(unsigned long nr_pages)
static unsigned long __fraction(u64 x, u64 multiplier, u64 base)
static unsigned long preallocate_highmem_fraction(unsigned long nr_pages,
unsigned long highmem,
unsigned long total)
static inline unsigned long preallocate_image_highmem(unsigned long nr_pages)
static inline unsigned long preallocate_highmem_fraction(unsigned long nr_pages,
unsigned long highmem,
unsigned long total)
static void free_unnecessary_pages(void)
static unsigned long minimum_image_size(unsigned long saveable)
int hibernate_preallocate_memory(void)
static unsigned int count_pages_for_highmem(unsigned int nr_highmem)
static unsigned int
count_pages_for_highmem(unsigned int nr_highmem)
static int enough_free_mem(unsigned int nr_pages, unsigned int nr_highmem)
static inline int get_highmem_buffer(int safe_needed)
static inline unsigned int
alloc_highmem_pages(struct memory_bitmap *bm, unsigned int nr_highmem)
static inline int get_highmem_buffer(int safe_needed)
static inline unsigned int
alloc_highmem_pages(struct memory_bitmap *bm, unsigned int n)
static int
swsusp_alloc(struct memory_bitmap *orig_bm, struct memory_bitmap *copy_bm,
unsigned int nr_pages, unsigned int nr_highmem)
asmlinkage int swsusp_save(void)
static int init_header_complete(struct swsusp_info *info)
static char *check_image_kernel(struct swsusp_info *info)
unsigned long snapshot_get_image_size(void)
static int init_header(struct swsusp_info *info)
static inline void
pack_pfns(unsigned long *buf, struct memory_bitmap *bm)
int snapshot_read_next(struct snapshot_handle *handle)
static int mark_unsafe_pages(struct memory_bitmap *bm)
static void
duplicate_memory_bitmap(struct memory_bitmap *dst, struct memory_bitmap *src)
static int check_header(struct swsusp_info *info)
static int
load_header(struct swsusp_info *info)
static int unpack_orig_pfns(unsigned long *buf, struct memory_bitmap *bm)
static struct linked_page *safe_pages_list;
struct highmem_pbe ;
static struct highmem_pbe *highmem_pblist;
static unsigned int count_highmem_image_pages(struct memory_bitmap *bm)
static unsigned int safe_highmem_pages;
static struct memory_bitmap *safe_highmem_bm;
static int
prepare_highmem_image(struct memory_bitmap *bm, unsigned int *nr_highmem_p)
static struct page *last_highmem_page;
static void *
get_highmem_page_buffer(struct page *page, struct chain_allocator *ca)
static void copy_last_highmem_page(void)
static inline int last_highmem_page_copied(void)
static inline void free_highmem_data(void)
static inline int get_safe_write_buffer(void)
static unsigned int
count_highmem_image_pages(struct memory_bitmap *bm)
static inline int
prepare_highmem_image(struct memory_bitmap *bm, unsigned int *nr_highmem_p)
static inline void *
get_highmem_page_buffer(struct page *page, struct chain_allocator *ca)
static inline void copy_last_highmem_page(void)
static inline int last_highmem_page_copied(void)
static inline void free_highmem_data(void)
#define PBES_PER_LINKED_PAGE	(LINKED_PAGE_DATA_SIZE / sizeof(struct pbe))
static int
prepare_image(struct memory_bitmap *new_bm, struct memory_bitmap *bm)
static void *get_buffer(struct memory_bitmap *bm, struct chain_allocator *ca)
int snapshot_write_next(struct snapshot_handle *handle)
void snapshot_write_finalize(struct snapshot_handle *handle)
int snapshot_image_loaded(struct snapshot_handle *handle)
static inline void
swap_two_pages_data(struct page *p1, struct page *p2, void *buf)
int restore_highmem(void)
