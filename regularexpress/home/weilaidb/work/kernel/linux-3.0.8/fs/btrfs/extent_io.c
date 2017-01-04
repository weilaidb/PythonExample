static struct kmem_cache *extent_state_cache;
static struct kmem_cache *extent_buffer_cache;
static LIST_HEAD(buffers);
static LIST_HEAD(states);
#define LEAK_DEBUG 0
#if LEAK_DEBUG
static DEFINE_SPINLOCK(leak_lock);
#define BUFFER_LRU_MAX 64
struct tree_entry ;
struct extent_page_data ;
int __init extent_io_init(void)
void extent_io_exit(void)
void extent_io_tree_init(struct extent_io_tree *tree,
struct address_space *mapping)
static struct extent_state *alloc_extent_state(gfp_t mask)
void free_extent_state(struct extent_state *state)
static struct rb_node *tree_insert(struct rb_root *root, u64 offset,
struct rb_node *node)
static struct rb_node *__etree_search(struct extent_io_tree *tree, u64 offset,
struct rb_node **prev_ret,
struct rb_node **next_ret)
static inline struct rb_node *tree_search(struct extent_io_tree *tree,
u64 offset)
static void merge_cb(struct extent_io_tree *tree, struct extent_state *new,
struct extent_state *other)
static int merge_state(struct extent_io_tree *tree,
struct extent_state *state)
static int set_state_cb(struct extent_io_tree *tree,
struct extent_state *state, int *bits)
static void clear_state_cb(struct extent_io_tree *tree,
struct extent_state *state, int *bits)
static int insert_state(struct extent_io_tree *tree,
struct extent_state *state, u64 start, u64 end,
int *bits)
static int split_cb(struct extent_io_tree *tree, struct extent_state *orig,
u64 split)
static int split_state(struct extent_io_tree *tree, struct extent_state *orig,
struct extent_state *prealloc, u64 split)
static int clear_state_bit(struct extent_io_tree *tree,
struct extent_state *state,
int *bits, int wake)
static struct extent_state *
alloc_extent_state_atomic(struct extent_state *prealloc)
int clear_extent_bit(struct extent_io_tree *tree, u64 start, u64 end,
int bits, int wake, int delete,
struct extent_state **cached_state,
gfp_t mask)
static int wait_on_state(struct extent_io_tree *tree,
struct extent_state *state)
__releases(tree->lock)
__acquires(tree->lock)
int wait_extent_bit(struct extent_io_tree *tree, u64 start, u64 end, int bits)
static int set_state_bits(struct extent_io_tree *tree,
struct extent_state *state,
int *bits)
static void cache_state(struct extent_state *state,
struct extent_state **cached_ptr)
static void uncache_state(struct extent_state **cached_ptr)
int set_extent_bit(struct extent_io_tree *tree, u64 start, u64 end,
int bits, int exclusive_bits, u64 *failed_start,
struct extent_state **cached_state, gfp_t mask)
int set_extent_dirty(struct extent_io_tree *tree, u64 start, u64 end,
gfp_t mask)
int set_extent_bits(struct extent_io_tree *tree, u64 start, u64 end,
int bits, gfp_t mask)
int clear_extent_bits(struct extent_io_tree *tree, u64 start, u64 end,
int bits, gfp_t mask)
int set_extent_delalloc(struct extent_io_tree *tree, u64 start, u64 end,
struct extent_state **cached_state, gfp_t mask)
int clear_extent_dirty(struct extent_io_tree *tree, u64 start, u64 end,
gfp_t mask)
int set_extent_new(struct extent_io_tree *tree, u64 start, u64 end,
gfp_t mask)
int set_extent_uptodate(struct extent_io_tree *tree, u64 start, u64 end,
struct extent_state **cached_state, gfp_t mask)
static int clear_extent_uptodate(struct extent_io_tree *tree, u64 start,
u64 end, struct extent_state **cached_state,
gfp_t mask)
int lock_extent_bits(struct extent_io_tree *tree, u64 start, u64 end,
int bits, struct extent_state **cached_state, gfp_t mask)
int lock_extent(struct extent_io_tree *tree, u64 start, u64 end, gfp_t mask)
int try_lock_extent(struct extent_io_tree *tree, u64 start, u64 end,
gfp_t mask)
int unlock_extent_cached(struct extent_io_tree *tree, u64 start, u64 end,
struct extent_state **cached, gfp_t mask)
int unlock_extent(struct extent_io_tree *tree, u64 start, u64 end, gfp_t mask)
static int set_range_writeback(struct extent_io_tree *tree, u64 start, u64 end)
int find_first_extent_bit(struct extent_io_tree *tree, u64 start,
u64 *start_ret, u64 *end_ret, int bits)
struct extent_state *find_first_extent_bit_state(struct extent_io_tree *tree,
u64 start, int bits)
static noinline u64 find_delalloc_range(struct extent_io_tree *tree,
u64 *start, u64 *end, u64 max_bytes,
struct extent_state **cached_state)
static noinline int __unlock_for_delalloc(struct inode *inode,
struct page *locked_page,
u64 start, u64 end)
static noinline int lock_delalloc_pages(struct inode *inode,
struct page *locked_page,
u64 delalloc_start,
u64 delalloc_end)
static noinline u64 find_lock_delalloc_range(struct inode *inode,
struct extent_io_tree *tree,
struct page *locked_page,
u64 *start, u64 *end,
u64 max_bytes)
int extent_clear_unlock_delalloc(struct inode *inode,
struct extent_io_tree *tree,
u64 start, u64 end, struct page *locked_page,
unsigned long op)
u64 count_range_bits(struct extent_io_tree *tree,
u64 *start, u64 search_end, u64 max_bytes,
unsigned long bits, int contig)
int set_state_private(struct extent_io_tree *tree, u64 start, u64 private)
int get_state_private(struct extent_io_tree *tree, u64 start, u64 *private)
int test_range_bit(struct extent_io_tree *tree, u64 start, u64 end,
int bits, int filled, struct extent_state *cached)
static int check_page_uptodate(struct extent_io_tree *tree,
struct page *page)
static int check_page_locked(struct extent_io_tree *tree,
struct page *page)
static int check_page_writeback(struct extent_io_tree *tree,
struct page *page)
static void end_bio_extent_writepage(struct bio *bio, int err)
static void end_bio_extent_readpage(struct bio *bio, int err)
struct bio *
btrfs_bio_alloc(struct block_device *bdev, u64 first_sector, int nr_vecs,
gfp_t gfp_flags)
static int submit_one_bio(int rw, struct bio *bio, int mirror_num,
unsigned long bio_flags)
static int submit_extent_page(int rw, struct extent_io_tree *tree,
struct page *page, sector_t sector,
size_t size, unsigned long offset,
struct block_device *bdev,
struct bio **bio_ret,
unsigned long max_pages,
bio_end_io_t end_io_func,
int mirror_num,
unsigned long prev_bio_flags,
unsigned long bio_flags)
void set_page_extent_mapped(struct page *page)
static void set_page_extent_head(struct page *page, unsigned long len)
static int __extent_read_full_page(struct extent_io_tree *tree,
struct page *page,
get_extent_t *get_extent,
struct bio **bio, int mirror_num,
unsigned long *bio_flags)
int extent_read_full_page(struct extent_io_tree *tree, struct page *page,
get_extent_t *get_extent)
static noinline void update_nr_written(struct page *page,
struct writeback_control *wbc,
unsigned long nr_written)
static int __extent_writepage(struct page *page, struct writeback_control *wbc,
void *data)
static int extent_write_cache_pages(struct extent_io_tree *tree,
struct address_space *mapping,
struct writeback_control *wbc,
writepage_t writepage, void *data,
void (*flush_fn)(void *))
static void flush_epd_write_bio(struct extent_page_data *epd)
static noinline void flush_write_bio(void *data)
int extent_write_full_page(struct extent_io_tree *tree, struct page *page,
get_extent_t *get_extent,
struct writeback_control *wbc)
int extent_write_locked_range(struct extent_io_tree *tree, struct inode *inode,
u64 start, u64 end, get_extent_t *get_extent,
int mode)
int extent_writepages(struct extent_io_tree *tree,
struct address_space *mapping,
get_extent_t *get_extent,
struct writeback_control *wbc)
int extent_readpages(struct extent_io_tree *tree,
struct address_space *mapping,
struct list_head *pages, unsigned nr_pages,
get_extent_t get_extent)
int extent_invalidatepage(struct extent_io_tree *tree,
struct page *page, unsigned long offset)
int try_release_extent_state(struct extent_map_tree *map,
struct extent_io_tree *tree, struct page *page,
gfp_t mask)
int try_release_extent_mapping(struct extent_map_tree *map,
struct extent_io_tree *tree, struct page *page,
gfp_t mask)
static struct extent_map *get_extent_skip_holes(struct inode *inode,
u64 offset,
u64 last,
get_extent_t *get_extent)
int extent_fiemap(struct inode *inode, struct fiemap_extent_info *fieinfo,
__u64 start, __u64 len, get_extent_t *get_extent)
static inline struct page *extent_buffer_page(struct extent_buffer *eb,
unsigned long i)
static inline unsigned long num_extent_pages(u64 start, u64 len)
static struct extent_buffer *__alloc_extent_buffer(struct extent_io_tree *tree,
u64 start,
unsigned long len,
gfp_t mask)
static void __free_extent_buffer(struct extent_buffer *eb)
static void btrfs_release_extent_buffer_page(struct extent_buffer *eb,
unsigned long start_idx)
static inline void btrfs_release_extent_buffer(struct extent_buffer *eb)
struct extent_buffer *alloc_extent_buffer(struct extent_io_tree *tree,
u64 start, unsigned long len,
struct page *page0)
struct extent_buffer *find_extent_buffer(struct extent_io_tree *tree,
u64 start, unsigned long len)
void free_extent_buffer(struct extent_buffer *eb)
int clear_extent_buffer_dirty(struct extent_io_tree *tree,
struct extent_buffer *eb)
int set_extent_buffer_dirty(struct extent_io_tree *tree,
struct extent_buffer *eb)
int clear_extent_buffer_uptodate(struct extent_io_tree *tree,
struct extent_buffer *eb,
struct extent_state **cached_state)
int set_extent_buffer_uptodate(struct extent_io_tree *tree,
struct extent_buffer *eb)
int extent_range_uptodate(struct extent_io_tree *tree,
u64 start, u64 end)
int extent_buffer_uptodate(struct extent_io_tree *tree,
struct extent_buffer *eb,
struct extent_state *cached_state)
int read_extent_buffer_pages(struct extent_io_tree *tree,
struct extent_buffer *eb,
u64 start, int wait,
get_extent_t *get_extent, int mirror_num)
void read_extent_buffer(struct extent_buffer *eb, void *dstv,
unsigned long start,
unsigned long len)
int map_private_extent_buffer(struct extent_buffer *eb, unsigned long start,
unsigned long min_len, char **token, char **map,
unsigned long *map_start,
unsigned long *map_len, int km)
int map_extent_buffer(struct extent_buffer *eb, unsigned long start,
unsigned long min_len,
char **token, char **map,
unsigned long *map_start,
unsigned long *map_len, int km)
void unmap_extent_buffer(struct extent_buffer *eb, char *token, int km)
int memcmp_extent_buffer(struct extent_buffer *eb, const void *ptrv,
unsigned long start,
unsigned long len)
void write_extent_buffer(struct extent_buffer *eb, const void *srcv,
unsigned long start, unsigned long len)
void memset_extent_buffer(struct extent_buffer *eb, char c,
unsigned long start, unsigned long len)
void copy_extent_buffer(struct extent_buffer *dst, struct extent_buffer *src,
unsigned long dst_offset, unsigned long src_offset,
unsigned long len)
static void move_pages(struct page *dst_page, struct page *src_page,
unsigned long dst_off, unsigned long src_off,
unsigned long len)
static inline bool areas_overlap(unsigned long src, unsigned long dst, unsigned long len)
static void copy_pages(struct page *dst_page, struct page *src_page,
unsigned long dst_off, unsigned long src_off,
unsigned long len)
void memcpy_extent_buffer(struct extent_buffer *dst, unsigned long dst_offset,
unsigned long src_offset, unsigned long len)
void memmove_extent_buffer(struct extent_buffer *dst, unsigned long dst_offset,
unsigned long src_offset, unsigned long len)
static inline void btrfs_release_extent_buffer_rcu(struct rcu_head *head)
int try_release_extent_buffer(struct extent_io_tree *tree, struct page *page)
