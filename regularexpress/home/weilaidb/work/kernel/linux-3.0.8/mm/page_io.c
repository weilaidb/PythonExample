static struct bio *get_swap_bio(gfp_t gfp_flags,
struct page *page, bio_end_io_t end_io)
static void end_swap_bio_write(struct bio *bio, int err)
void end_swap_bio_read(struct bio *bio, int err)
int swap_writepage(struct page *page, struct writeback_control *wbc)
int swap_readpage(struct page *page)
