static char zisofs_sink_page[PAGE_CACHE_SIZE];
static void *zisofs_zlib_workspace;
static DEFINE_MUTEX(zisofs_zlib_lock);
static loff_t zisofs_uncompress_block(struct inode *inode, loff_t block_start,
loff_t block_end, int pcount,
struct page **pages, unsigned poffset,
int *errp)
static int zisofs_fill_pages(struct inode *inode, int full_page, int pcount,
struct page **pages)
static int zisofs_readpage(struct file *file, struct page *page)
const struct address_space_operations zisofs_aops = ;
int __init zisofs_init(void)
void zisofs_cleanup(void)
