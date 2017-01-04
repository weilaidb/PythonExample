#define LZO_LEN	4
struct workspace ;
static void lzo_free_workspace(struct list_head *ws)
static struct list_head *lzo_alloc_workspace(void)
static inline void write_compress_length(char *buf, size_t len)
static inline size_t read_compress_length(char *buf)
static int lzo_compress_pages(struct list_head *ws,
struct address_space *mapping,
u64 start, unsigned long len,
struct page **pages,
unsigned long nr_dest_pages,
unsigned long *out_pages,
unsigned long *total_in,
unsigned long *total_out,
unsigned long max_out)
static int lzo_decompress_biovec(struct list_head *ws,
struct page **pages_in,
u64 disk_start,
struct bio_vec *bvec,
int vcnt,
size_t srclen)
static int lzo_decompress(struct list_head *ws, unsigned char *data_in,
struct page *dest_page,
unsigned long start_byte,
size_t srclen, size_t destlen)
struct btrfs_compress_op btrfs_lzo_compress = ;
