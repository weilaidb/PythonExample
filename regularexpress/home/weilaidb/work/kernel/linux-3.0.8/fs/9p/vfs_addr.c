static int v9fs_fid_readpage(struct p9_fid *fid, struct page *page)
static int v9fs_vfs_readpage(struct file *filp, struct page *page)
static int v9fs_vfs_readpages(struct file *filp, struct address_space *mapping,
struct list_head *pages, unsigned nr_pages)
static int v9fs_release_page(struct page *page, gfp_t gfp)
static void v9fs_invalidate_page(struct page *page, unsigned long offset)
static int v9fs_vfs_writepage_locked(struct page *page)
static int v9fs_vfs_writepage(struct page *page, struct writeback_control *wbc)
static int v9fs_launder_page(struct page *page)
static ssize_t
v9fs_direct_IO(int rw, struct kiocb *iocb, const struct iovec *iov,
loff_t pos, unsigned long nr_segs)
static int v9fs_write_begin(struct file *filp, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static int v9fs_write_end(struct file *filp, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
const struct address_space_operations v9fs_addr_operations = ;
