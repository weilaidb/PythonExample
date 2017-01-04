void
file_ra_state_init(struct file_ra_state *ra, struct address_space *mapping)
EXPORT_SYMBOL_GPL(file_ra_state_init);
#define list_to_page(head) (list_entry((head)->prev, struct page, lru))
static void read_cache_pages_invalidate_page(struct address_space *mapping,
struct page *page)
static void read_cache_pages_invalidate_pages(struct address_space *mapping,
struct list_head *pages)
int read_cache_pages(struct address_space *mapping, struct list_head *pages,
int (*filler)(void *, struct page *), void *data)
EXPORT_SYMBOL(read_cache_pages);
static int read_pages(struct address_space *mapping, struct file *filp,
struct list_head *pages, unsigned nr_pages)
static int
__do_page_cache_readahead(struct address_space *mapping, struct file *filp,
pgoff_t offset, unsigned long nr_to_read,
unsigned long lookahead_size)
int force_page_cache_readahead(struct address_space *mapping, struct file *filp,
pgoff_t offset, unsigned long nr_to_read)
unsigned long max_sane_readahead(unsigned long nr)
unsigned long ra_submit(struct file_ra_state *ra,
struct address_space *mapping, struct file *filp)
static unsigned long get_init_ra_size(unsigned long size, unsigned long max)
static unsigned long get_next_ra_size(struct file_ra_state *ra,
unsigned long max)
static pgoff_t count_history_pages(struct address_space *mapping,
struct file_ra_state *ra,
pgoff_t offset, unsigned long max)
static int try_context_readahead(struct address_space *mapping,
struct file_ra_state *ra,
pgoff_t offset,
unsigned long req_size,
unsigned long max)
static unsigned long
ondemand_readahead(struct address_space *mapping,
struct file_ra_state *ra, struct file *filp,
bool hit_readahead_marker, pgoff_t offset,
unsigned long req_size)
void page_cache_sync_readahead(struct address_space *mapping,
struct file_ra_state *ra, struct file *filp,
pgoff_t offset, unsigned long req_size)
EXPORT_SYMBOL_GPL(page_cache_sync_readahead);
void
page_cache_async_readahead(struct address_space *mapping,
struct file_ra_state *ra, struct file *filp,
struct page *page, pgoff_t offset,
unsigned long req_size)
EXPORT_SYMBOL_GPL(page_cache_async_readahead);
