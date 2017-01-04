#define DIO_PAGES	64
struct dio ;
static inline unsigned dio_pages_present(struct dio *dio)
static int dio_refill_pages(struct dio *dio)
static struct page *dio_get_page(struct dio *dio)
static ssize_t dio_complete(struct dio *dio, loff_t offset, ssize_t ret, bool is_async)
static int dio_bio_complete(struct dio *dio, struct bio *bio);
static void dio_bio_end_aio(struct bio *bio, int error)
static void dio_bio_end_io(struct bio *bio, int error)
void dio_end_io(struct bio *bio, int error)
EXPORT_SYMBOL_GPL(dio_end_io);
static void
dio_bio_alloc(struct dio *dio, struct block_device *bdev,
sector_t first_sector, int nr_vecs)
static void dio_bio_submit(struct dio *dio)
static void dio_cleanup(struct dio *dio)
static struct bio *dio_await_one(struct dio *dio)
static int dio_bio_complete(struct dio *dio, struct bio *bio)
static void dio_await_completion(struct dio *dio)
static int dio_bio_reap(struct dio *dio)
static int get_more_blocks(struct dio *dio)
static int dio_new_bio(struct dio *dio, sector_t start_sector)
static int dio_bio_add_page(struct dio *dio)
static int dio_send_cur_page(struct dio *dio)
static int
submit_page_section(struct dio *dio, struct page *page,
unsigned offset, unsigned len, sector_t blocknr)
static void clean_blockdev_aliases(struct dio *dio)
static void dio_zero_block(struct dio *dio, int end)
static int do_direct_IO(struct dio *dio)
static ssize_t
direct_io_worker(int rw, struct kiocb *iocb, struct inode *inode,
const struct iovec *iov, loff_t offset, unsigned long nr_segs,
unsigned blkbits, get_block_t get_block, dio_iodone_t end_io,
dio_submit_t submit_io, struct dio *dio)
ssize_t
__blockdev_direct_IO(int rw, struct kiocb *iocb, struct inode *inode,
struct block_device *bdev, const struct iovec *iov, loff_t offset,
unsigned long nr_segs, get_block_t get_block, dio_iodone_t end_io,
dio_submit_t submit_io,	int flags)
EXPORT_SYMBOL(__blockdev_direct_IO);
