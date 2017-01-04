static void mpage_end_io(struct bio *bio, int err)
static struct bio *mpage_bio_submit(int rw, struct bio *bio)
static struct bio *
mpage_alloc(struct block_device *bdev,
sector_t first_sector, int nr_vecs,
gfp_t gfp_flags)
static void
map_buffer_to_page(struct page *page, struct buffer_head *bh, int page_block)
static struct bio *
do_mpage_readpage(struct bio *bio, struct page *page, unsigned nr_pages,
sector_t *last_block_in_bio, struct buffer_head *map_bh,
unsigned long *first_logical_block, get_block_t get_block)
int
mpage_readpages(struct address_space *mapping, struct list_head *pages,
unsigned nr_pages, get_block_t get_block)
EXPORT_SYMBOL(mpage_readpages);
int mpage_readpage(struct page *page, get_block_t get_block)
EXPORT_SYMBOL(mpage_readpage);
struct mpage_data ;
static int __mpage_writepage(struct page *page, struct writeback_control *wbc,
void *data)
int
mpage_writepages(struct address_space *mapping,
struct writeback_control *wbc, get_block_t get_block)
EXPORT_SYMBOL(mpage_writepages);
int mpage_writepage(struct page *page, get_block_t get_block,
struct writeback_control *wbc)
EXPORT_SYMBOL(mpage_writepage);
