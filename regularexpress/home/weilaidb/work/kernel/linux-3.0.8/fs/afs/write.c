static int afs_write_back_from_locked_page(struct afs_writeback *wb,
struct page *page);
int afs_set_page_dirty(struct page *page)
static void afs_unlink_writeback(struct afs_writeback *wb)
static void afs_free_writeback(struct afs_writeback *wb)
void afs_put_writeback(struct afs_writeback *wb)
static int afs_fill_page(struct afs_vnode *vnode, struct key *key,
loff_t pos, struct page *page)
int afs_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
int afs_write_end(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
static void afs_kill_pages(struct afs_vnode *vnode, bool error,
pgoff_t first, pgoff_t last)
static int afs_write_back_from_locked_page(struct afs_writeback *wb,
struct page *primary_page)
int afs_writepage(struct page *page, struct writeback_control *wbc)
static int afs_writepages_region(struct address_space *mapping,
struct writeback_control *wbc,
pgoff_t index, pgoff_t end, pgoff_t *_next)
int afs_writepages(struct address_space *mapping,
struct writeback_control *wbc)
void afs_pages_written_back(struct afs_vnode *vnode, struct afs_call *call)
ssize_t afs_file_write(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
int afs_writeback_all(struct afs_vnode *vnode)
int afs_fsync(struct file *file, int datasync)
int afs_page_mkwrite(struct vm_area_struct *vma, struct page *page)
