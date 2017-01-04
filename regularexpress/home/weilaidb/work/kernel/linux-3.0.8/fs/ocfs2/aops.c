static int ocfs2_symlink_get_block(struct inode *inode, sector_t iblock,
struct buffer_head *bh_result, int create)
int ocfs2_get_block(struct inode *inode, sector_t iblock,
struct buffer_head *bh_result, int create)
int ocfs2_read_inline_data(struct inode *inode, struct page *page,
struct buffer_head *di_bh)
static int ocfs2_readpage_inline(struct inode *inode, struct page *page)
static int ocfs2_readpage(struct file *file, struct page *page)
static int ocfs2_readpages(struct file *filp, struct address_space *mapping,
struct list_head *pages, unsigned nr_pages)
static int ocfs2_writepage(struct page *page, struct writeback_control *wbc)
int walk_page_buffers(	handle_t *handle,
struct buffer_head *head,
unsigned from,
unsigned to,
int *partial,
int (*fn)(	handle_t *handle,
struct buffer_head *bh))
static sector_t ocfs2_bmap(struct address_space *mapping, sector_t block)
static int ocfs2_direct_IO_get_blocks(struct inode *inode, sector_t iblock,
struct buffer_head *bh_result, int create)
static void ocfs2_dio_end_io(struct kiocb *iocb,
loff_t offset,
ssize_t bytes,
void *private,
int ret,
bool is_async)
static void ocfs2_invalidatepage(struct page *page, unsigned long offset)
static int ocfs2_releasepage(struct page *page, gfp_t wait)
static ssize_t ocfs2_direct_IO(int rw,
struct kiocb *iocb,
const struct iovec *iov,
loff_t offset,
unsigned long nr_segs)
static void ocfs2_figure_cluster_boundaries(struct ocfs2_super *osb,
u32 cpos,
unsigned int *start,
unsigned int *end)
static void ocfs2_clear_page_regions(struct page *page,
struct ocfs2_super *osb, u32 cpos,
unsigned from, unsigned to)
static int ocfs2_should_read_blk(struct inode *inode, struct page *page,
unsigned int block_start)
int ocfs2_map_page_blocks(struct page *page, u64 *p_blkno,
struct inode *inode, unsigned int from,
unsigned int to, int new)
#if (PAGE_CACHE_SIZE >= OCFS2_MAX_CLUSTERSIZE)
#define OCFS2_MAX_CTXT_PAGES	1
#define OCFS2_MAX_CTXT_PAGES	(OCFS2_MAX_CLUSTERSIZE / PAGE_CACHE_SIZE)
#define OCFS2_MAX_CLUSTERS_PER_PAGE	(PAGE_CACHE_SIZE / OCFS2_MIN_CLUSTERSIZE)
struct ocfs2_write_cluster_desc ;
struct ocfs2_write_ctxt ;
void ocfs2_unlock_and_free_pages(struct page **pages, int num_pages)
static void ocfs2_free_write_ctxt(struct ocfs2_write_ctxt *wc)
static int ocfs2_alloc_write_ctxt(struct ocfs2_write_ctxt **wcp,
struct ocfs2_super *osb, loff_t pos,
unsigned len, struct buffer_head *di_bh)
static void ocfs2_zero_new_buffers(struct page *page, unsigned from, unsigned to)
static void ocfs2_write_failure(struct inode *inode,
struct ocfs2_write_ctxt *wc,
loff_t user_pos, unsigned user_len)
static int ocfs2_prepare_page_for_write(struct inode *inode, u64 *p_blkno,
struct ocfs2_write_ctxt *wc,
struct page *page, u32 cpos,
loff_t user_pos, unsigned user_len,
int new)
static int ocfs2_grab_pages_for_write(struct address_space *mapping,
struct ocfs2_write_ctxt *wc,
u32 cpos, loff_t user_pos,
unsigned user_len, int new,
struct page *mmap_page)
static int ocfs2_write_cluster(struct address_space *mapping,
u32 phys, unsigned int unwritten,
unsigned int should_zero,
struct ocfs2_alloc_context *data_ac,
struct ocfs2_alloc_context *meta_ac,
struct ocfs2_write_ctxt *wc, u32 cpos,
loff_t user_pos, unsigned user_len)
static int ocfs2_write_cluster_by_desc(struct address_space *mapping,
struct ocfs2_alloc_context *data_ac,
struct ocfs2_alloc_context *meta_ac,
struct ocfs2_write_ctxt *wc,
loff_t pos, unsigned len)
static void ocfs2_set_target_boundaries(struct ocfs2_super *osb,
struct ocfs2_write_ctxt *wc,
loff_t pos, unsigned len, int alloc)
static int ocfs2_populate_write_desc(struct inode *inode,
struct ocfs2_write_ctxt *wc,
unsigned int *clusters_to_alloc,
unsigned int *extents_to_split)
static int ocfs2_write_begin_inline(struct address_space *mapping,
struct inode *inode,
struct ocfs2_write_ctxt *wc)
int ocfs2_size_fits_inline_data(struct buffer_head *di_bh, u64 new_size)
static int ocfs2_try_to_write_inline_data(struct address_space *mapping,
struct inode *inode, loff_t pos,
unsigned len, struct page *mmap_page,
struct ocfs2_write_ctxt *wc)
static int ocfs2_expand_nonsparse_inode(struct inode *inode,
struct buffer_head *di_bh,
loff_t pos, unsigned len,
struct ocfs2_write_ctxt *wc)
static int ocfs2_zero_tail(struct inode *inode, struct buffer_head *di_bh,
loff_t pos)
static int ocfs2_try_to_free_truncate_log(struct ocfs2_super *osb,
unsigned int needed)
int ocfs2_write_begin_nolock(struct file *filp,
struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata,
struct buffer_head *di_bh, struct page *mmap_page)
static int ocfs2_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static void ocfs2_write_end_inline(struct inode *inode, loff_t pos,
unsigned len, unsigned *copied,
struct ocfs2_dinode *di,
struct ocfs2_write_ctxt *wc)
int ocfs2_write_end_nolock(struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
static int ocfs2_write_end(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
const struct address_space_operations ocfs2_aops = ;
