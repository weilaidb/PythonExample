static int ntfs_file_open(struct inode *vi, struct file *filp)
static int ntfs_attr_extend_initialized(ntfs_inode *ni, const s64 new_init_size)
static inline void ntfs_fault_in_pages_readable(const char __user *uaddr,
int bytes)
static inline void ntfs_fault_in_pages_readable_iovec(const struct iovec *iov,
size_t iov_ofs, int bytes)
static inline int __ntfs_grab_cache_pages(struct address_space *mapping,
pgoff_t index, const unsigned nr_pages, struct page **pages,
struct page **cached_page)
static inline int ntfs_submit_bh_for_read(struct buffer_head *bh)
static int ntfs_prepare_pages_for_non_resident_write(struct page **pages,
unsigned nr_pages, s64 pos, size_t bytes)
static inline size_t ntfs_copy_from_user(struct page **pages,
unsigned nr_pages, unsigned ofs, const char __user *buf,
size_t bytes)
static size_t __ntfs_copy_from_user_iovec_inatomic(char *vaddr,
const struct iovec *iov, size_t iov_ofs, size_t bytes)
static inline void ntfs_set_next_iovec(const struct iovec **iovp,
size_t *iov_ofsp, size_t bytes)
static inline size_t ntfs_copy_from_user_iovec(struct page **pages,
unsigned nr_pages, unsigned ofs, const struct iovec **iov,
size_t *iov_ofs, size_t bytes)
static inline void ntfs_flush_dcache_pages(struct page **pages,
unsigned nr_pages)
static inline int ntfs_commit_pages_after_non_resident_write(
struct page **pages, const unsigned nr_pages,
s64 pos, size_t bytes)
static int ntfs_commit_pages_after_write(struct page **pages,
const unsigned nr_pages, s64 pos, size_t bytes)
static ssize_t ntfs_file_buffered_write(struct kiocb *iocb,
const struct iovec *iov, unsigned long nr_segs,
loff_t pos, loff_t *ppos, size_t count)
static ssize_t ntfs_file_aio_write_nolock(struct kiocb *iocb,
const struct iovec *iov, unsigned long nr_segs, loff_t *ppos)
static ssize_t ntfs_file_aio_write(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
static int ntfs_file_fsync(struct file *filp, int datasync)
const struct file_operations ntfs_file_ops = ;
const struct inode_operations ntfs_file_inode_ops = ;
const struct file_operations ntfs_empty_file_ops = ;
const struct inode_operations ntfs_empty_inode_ops = ;
