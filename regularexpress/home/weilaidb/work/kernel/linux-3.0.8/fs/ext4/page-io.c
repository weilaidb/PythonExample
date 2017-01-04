static struct kmem_cache *io_page_cachep, *io_end_cachep;
int __init ext4_init_pageio(void)
void ext4_exit_pageio(void)
void ext4_ioend_wait(struct inode *inode)
static void put_io_page(struct ext4_io_page *io_page)
void ext4_free_io_end(ext4_io_end_t *io)
int ext4_end_io_nolock(ext4_io_end_t *io)
static void ext4_end_io_work(struct work_struct *work)
ext4_io_end_t *ext4_init_io_end(struct inode *inode, gfp_t flags)
static void buffer_io_error(struct buffer_head *bh)
static void ext4_end_bio(struct bio *bio, int error)
void ext4_io_submit(struct ext4_io_submit *io)
static int io_submit_init(struct ext4_io_submit *io,
struct inode *inode,
struct writeback_control *wbc,
struct buffer_head *bh)
static int io_submit_add_bh(struct ext4_io_submit *io,
struct ext4_io_page *io_page,
struct inode *inode,
struct writeback_control *wbc,
struct buffer_head *bh)
int ext4_bio_write_page(struct ext4_io_submit *io,
struct page *page,
int len,
struct writeback_control *wbc)
