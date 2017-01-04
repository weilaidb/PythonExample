struct compressed_bio ;
static inline int compressed_bio_size(struct btrfs_root *root,
unsigned long disk_size)
static struct bio *compressed_bio_alloc(struct block_device *bdev,
u64 first_byte, gfp_t gfp_flags)
static int check_compressed_csum(struct inode *inode,
struct compressed_bio *cb,
u64 disk_start)
static void end_compressed_bio_read(struct bio *bio, int err)
static noinline int end_compressed_writeback(struct inode *inode, u64 start,
unsigned long ram_size)
static void end_compressed_bio_write(struct bio *bio, int err)
int btrfs_submit_compressed_write(struct inode *inode, u64 start,
unsigned long len, u64 disk_start,
unsigned long compressed_len,
struct page **compressed_pages,
unsigned long nr_pages)
static noinline int add_ra_bio_pages(struct inode *inode,
u64 compressed_end,
struct compressed_bio *cb)
int btrfs_submit_compressed_read(struct inode *inode, struct bio *bio,
int mirror_num, unsigned long bio_flags)
static struct list_head comp_idle_workspace[BTRFS_COMPRESS_TYPES];
static spinlock_t comp_workspace_lock[BTRFS_COMPRESS_TYPES];
static int comp_num_workspace[BTRFS_COMPRESS_TYPES];
static atomic_t comp_alloc_workspace[BTRFS_COMPRESS_TYPES];
static wait_queue_head_t comp_workspace_wait[BTRFS_COMPRESS_TYPES];
struct btrfs_compress_op *btrfs_compress_op[] = ;
int __init btrfs_init_compress(void)
static struct list_head *find_workspace(int type)
static void free_workspace(int type, struct list_head *workspace)
static void free_workspaces(void)
int btrfs_compress_pages(int type, struct address_space *mapping,
u64 start, unsigned long len,
struct page **pages,
unsigned long nr_dest_pages,
unsigned long *out_pages,
unsigned long *total_in,
unsigned long *total_out,
unsigned long max_out)
int btrfs_decompress_biovec(int type, struct page **pages_in, u64 disk_start,
struct bio_vec *bvec, int vcnt, size_t srclen)
int btrfs_decompress(int type, unsigned char *data_in, struct page *dest_page,
unsigned long start_byte, size_t srclen, size_t destlen)
void btrfs_exit_compress(void)
int btrfs_decompress_buf2page(char *buf, unsigned long buf_start,
unsigned long total_out, u64 disk_start,
struct bio_vec *bvec, int vcnt,
unsigned long *pg_index,
unsigned long *pg_offset)
