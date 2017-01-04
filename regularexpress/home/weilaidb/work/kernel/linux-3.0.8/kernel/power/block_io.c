static int submit(int rw, struct block_device *bdev, sector_t sector,
struct page *page, struct bio **bio_chain)
int hib_bio_read_page(pgoff_t page_off, void *addr, struct bio **bio_chain)
int hib_bio_write_page(pgoff_t page_off, void *addr, struct bio **bio_chain)
int hib_wait_on_bio_chain(struct bio **bio_chain)
