void gfs2_page_add_databufs(struct gfs2_inode *ip, struct page *page,
unsigned int from, unsigned int to)
static int gfs2_get_block_noalloc(struct inode *inode, sector_t lblock,
struct buffer_head *bh_result, int create)
static int gfs2_get_block_direct(struct inode *inode, sector_t lblock,
struct buffer_head *bh_result, int create)
static int gfs2_writepage_common(struct page *page,
struct writeback_control *wbc)
static int gfs2_writeback_writepage(struct page *page,
struct writeback_control *wbc)
static int gfs2_ordered_writepage(struct page *page,
struct writeback_control *wbc)
static int __gfs2_jdata_writepage(struct page *page, struct writeback_control *wbc)
static int gfs2_jdata_writepage(struct page *page, struct writeback_control *wbc)
static int gfs2_writeback_writepages(struct address_space *mapping,
struct writeback_control *wbc)
static int gfs2_write_jdata_pagevec(struct address_space *mapping,
struct writeback_control *wbc,
struct pagevec *pvec,
int nr_pages, pgoff_t end)
static int gfs2_write_cache_jdata(struct address_space *mapping,
struct writeback_control *wbc)
static int gfs2_jdata_writepages(struct address_space *mapping,
struct writeback_control *wbc)
static int stuffed_readpage(struct gfs2_inode *ip, struct page *page)
static int __gfs2_readpage(void *file, struct page *page)
static int gfs2_readpage(struct file *file, struct page *page)
int gfs2_internal_read(struct gfs2_inode *ip, struct file_ra_state *ra_state,
char *buf, loff_t *pos, unsigned size)
static int gfs2_readpages(struct file *file, struct address_space *mapping,
struct list_head *pages, unsigned nr_pages)
static int gfs2_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static void adjust_fs_space(struct inode *inode)
static int gfs2_stuffed_write_end(struct inode *inode, struct buffer_head *dibh,
loff_t pos, unsigned len, unsigned copied,
struct page *page)
static int gfs2_write_end(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
static int gfs2_set_page_dirty(struct page *page)
static sector_t gfs2_bmap(struct address_space *mapping, sector_t lblock)
static void gfs2_discard(struct gfs2_sbd *sdp, struct buffer_head *bh)
static void gfs2_invalidatepage(struct page *page, unsigned long offset)
static int gfs2_ok_for_dio(struct gfs2_inode *ip, int rw, loff_t offset)
static ssize_t gfs2_direct_IO(int rw, struct kiocb *iocb,
const struct iovec *iov, loff_t offset,
unsigned long nr_segs)
int gfs2_releasepage(struct page *page, gfp_t gfp_mask)
static const struct address_space_operations gfs2_writeback_aops = ;
static const struct address_space_operations gfs2_ordered_aops = ;
static const struct address_space_operations gfs2_jdata_aops = ;
void gfs2_set_aops(struct inode *inode)
