struct workspace ;
static void zlib_free_workspace(struct list_head *ws)
static struct list_head *zlib_alloc_workspace(void)
static int zlib_compress_pages(struct list_head *ws,
struct address_space *mapping,
u64 start, unsigned long len,
struct page **pages,
unsigned long nr_dest_pages,
unsigned long *out_pages,
unsigned long *total_in,
unsigned long *total_out,
unsigned long max_out)
static int zlib_decompress_biovec(struct list_head *ws, struct page **pages_in,
u64 disk_start,
struct bio_vec *bvec,
int vcnt,
size_t srclen)
static int zlib_decompress(struct list_head *ws, unsigned char *data_in,
struct page *dest_page,
unsigned long start_byte,
size_t srclen, size_t destlen)
struct btrfs_compress_op btrfs_zlib_compress = ;
