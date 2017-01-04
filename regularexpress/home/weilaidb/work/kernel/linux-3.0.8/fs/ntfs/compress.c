typedef enum  ntfs_compression_constants;
static u8 *ntfs_compression_buffer = NULL;
static DEFINE_SPINLOCK(ntfs_cb_lock);
int allocate_compression_buffers(void)
void free_compression_buffers(void)
static void zero_partial_compressed_page(struct page *page,
const s64 initialized_size)
static inline void handle_bounds_compressed_page(struct page *page,
const loff_t i_size, const s64 initialized_size)
static int ntfs_decompress(struct page *dest_pages[], int *dest_index,
int *dest_ofs, const int dest_max_index, const int dest_max_ofs,
const int xpage, char *xpage_done, u8 *const cb_start,
const u32 cb_size, const loff_t i_size,
const s64 initialized_size)
int ntfs_read_compressed_block(struct page *page)
