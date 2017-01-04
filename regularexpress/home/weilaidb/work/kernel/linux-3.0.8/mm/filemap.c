void __delete_from_page_cache(struct page *page)
void delete_from_page_cache(struct page *page)
EXPORT_SYMBOL(delete_from_page_cache);
static int sleep_on_page(void *word)
static int sleep_on_page_killable(void *word)
int __filemap_fdatawrite_range(struct address_space *mapping, loff_t start,
loff_t end, int sync_mode)
static inline int __filemap_fdatawrite(struct address_space *mapping,
int sync_mode)
int filemap_fdatawrite(struct address_space *mapping)
EXPORT_SYMBOL(filemap_fdatawrite);
int filemap_fdatawrite_range(struct address_space *mapping, loff_t start,
loff_t end)
EXPORT_SYMBOL(filemap_fdatawrite_range);
int filemap_flush(struct address_space *mapping)
EXPORT_SYMBOL(filemap_flush);
int filemap_fdatawait_range(struct address_space *mapping, loff_t start_byte,
loff_t end_byte)
EXPORT_SYMBOL(filemap_fdatawait_range);
int filemap_fdatawait(struct address_space *mapping)
EXPORT_SYMBOL(filemap_fdatawait);
int filemap_write_and_wait(struct address_space *mapping)
EXPORT_SYMBOL(filemap_write_and_wait);
int filemap_write_and_wait_range(struct address_space *mapping,
loff_t lstart, loff_t lend)
EXPORT_SYMBOL(filemap_write_and_wait_range);
int replace_page_cache_page(struct page *old, struct page *new, gfp_t gfp_mask)
EXPORT_SYMBOL_GPL(replace_page_cache_page);
int add_to_page_cache_locked(struct page *page, struct address_space *mapping,
pgoff_t offset, gfp_t gfp_mask)
EXPORT_SYMBOL(add_to_page_cache_locked);
int add_to_page_cache_lru(struct page *page, struct address_space *mapping,
pgoff_t offset, gfp_t gfp_mask)
EXPORT_SYMBOL_GPL(add_to_page_cache_lru);
struct page *__page_cache_alloc(gfp_t gfp)
EXPORT_SYMBOL(__page_cache_alloc);
static wait_queue_head_t *page_waitqueue(struct page *page)
static inline void wake_up_page(struct page *page, int bit)
void wait_on_page_bit(struct page *page, int bit_nr)
EXPORT_SYMBOL(wait_on_page_bit);
int wait_on_page_bit_killable(struct page *page, int bit_nr)
void add_page_wait_queue(struct page *page, wait_queue_t *waiter)
EXPORT_SYMBOL_GPL(add_page_wait_queue);
void unlock_page(struct page *page)
EXPORT_SYMBOL(unlock_page);
void end_page_writeback(struct page *page)
EXPORT_SYMBOL(end_page_writeback);
void __lock_page(struct page *page)
EXPORT_SYMBOL(__lock_page);
int __lock_page_killable(struct page *page)
EXPORT_SYMBOL_GPL(__lock_page_killable);
int __lock_page_or_retry(struct page *page, struct mm_struct *mm,
unsigned int flags)
struct page *find_get_page(struct address_space *mapping, pgoff_t offset)
EXPORT_SYMBOL(find_get_page);
struct page *find_lock_page(struct address_space *mapping, pgoff_t offset)
EXPORT_SYMBOL(find_lock_page);
struct page *find_or_create_page(struct address_space *mapping,
pgoff_t index, gfp_t gfp_mask)
EXPORT_SYMBOL(find_or_create_page);
unsigned find_get_pages(struct address_space *mapping, pgoff_t start,
unsigned int nr_pages, struct page **pages)
unsigned find_get_pages_contig(struct address_space *mapping, pgoff_t index,
unsigned int nr_pages, struct page **pages)
EXPORT_SYMBOL(find_get_pages_contig);
unsigned find_get_pages_tag(struct address_space *mapping, pgoff_t *index,
int tag, unsigned int nr_pages, struct page **pages)
EXPORT_SYMBOL(find_get_pages_tag);
struct page *
grab_cache_page_nowait(struct address_space *mapping, pgoff_t index)
EXPORT_SYMBOL(grab_cache_page_nowait);
static void shrink_readahead_size_eio(struct file *filp,
struct file_ra_state *ra)
static void do_generic_file_read(struct file *filp, loff_t *ppos,
read_descriptor_t *desc, read_actor_t actor)
int file_read_actor(read_descriptor_t *desc, struct page *page,
unsigned long offset, unsigned long size)
int generic_segment_checks(const struct iovec *iov,
unsigned long *nr_segs, size_t *count, int access_flags)
EXPORT_SYMBOL(generic_segment_checks);
ssize_t
generic_file_aio_read(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
EXPORT_SYMBOL(generic_file_aio_read);
static ssize_t
do_readahead(struct address_space *mapping, struct file *filp,
pgoff_t index, unsigned long nr)
SYSCALL_DEFINE(readahead)(int fd, loff_t offset, size_t count)
asmlinkage long SyS_readahead(long fd, loff_t offset, long count)
SYSCALL_ALIAS(sys_readahead, SyS_readahead);
static int page_cache_read(struct file *file, pgoff_t offset)
#define MMAP_LOTSAMISS  (100)
static void do_sync_mmap_readahead(struct vm_area_struct *vma,
struct file_ra_state *ra,
struct file *file,
pgoff_t offset)
static void do_async_mmap_readahead(struct vm_area_struct *vma,
struct file_ra_state *ra,
struct file *file,
struct page *page,
pgoff_t offset)
int filemap_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
EXPORT_SYMBOL(filemap_fault);
const struct vm_operations_struct generic_file_vm_ops = ;
int generic_file_mmap(struct file * file, struct vm_area_struct * vma)
int generic_file_readonly_mmap(struct file *file, struct vm_area_struct *vma)
int generic_file_mmap(struct file * file, struct vm_area_struct * vma)
int generic_file_readonly_mmap(struct file * file, struct vm_area_struct * vma)
EXPORT_SYMBOL(generic_file_mmap);
EXPORT_SYMBOL(generic_file_readonly_mmap);
static struct page *__read_cache_page(struct address_space *mapping,
pgoff_t index,
int (*filler)(void *,struct page*),
void *data,
gfp_t gfp)
static struct page *do_read_cache_page(struct address_space *mapping,
pgoff_t index,
int (*filler)(void *,struct page*),
void *data,
gfp_t gfp)
struct page *read_cache_page_async(struct address_space *mapping,
pgoff_t index,
int (*filler)(void *,struct page*),
void *data)
EXPORT_SYMBOL(read_cache_page_async);
static struct page *wait_on_page_read(struct page *page)
struct page *read_cache_page_gfp(struct address_space *mapping,
pgoff_t index,
gfp_t gfp)
EXPORT_SYMBOL(read_cache_page_gfp);
struct page *read_cache_page(struct address_space *mapping,
pgoff_t index,
int (*filler)(void *,struct page*),
void *data)
EXPORT_SYMBOL(read_cache_page);
int should_remove_suid(struct dentry *dentry)
EXPORT_SYMBOL(should_remove_suid);
static int __remove_suid(struct dentry *dentry, int kill)
int file_remove_suid(struct file *file)
EXPORT_SYMBOL(file_remove_suid);
static size_t __iovec_copy_from_user_inatomic(char *vaddr,
const struct iovec *iov, size_t base, size_t bytes)
size_t iov_iter_copy_from_user_atomic(struct page *page,
struct iov_iter *i, unsigned long offset, size_t bytes)
EXPORT_SYMBOL(iov_iter_copy_from_user_atomic);
size_t iov_iter_copy_from_user(struct page *page,
struct iov_iter *i, unsigned long offset, size_t bytes)
EXPORT_SYMBOL(iov_iter_copy_from_user);
void iov_iter_advance(struct iov_iter *i, size_t bytes)
EXPORT_SYMBOL(iov_iter_advance);
int iov_iter_fault_in_readable(struct iov_iter *i, size_t bytes)
EXPORT_SYMBOL(iov_iter_fault_in_readable);
size_t iov_iter_single_seg_count(struct iov_iter *i)
EXPORT_SYMBOL(iov_iter_single_seg_count);
inline int generic_write_checks(struct file *file, loff_t *pos, size_t *count, int isblk)
EXPORT_SYMBOL(generic_write_checks);
int pagecache_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
EXPORT_SYMBOL(pagecache_write_begin);
int pagecache_write_end(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
EXPORT_SYMBOL(pagecache_write_end);
ssize_t
generic_file_direct_write(struct kiocb *iocb, const struct iovec *iov,
unsigned long *nr_segs, loff_t pos, loff_t *ppos,
size_t count, size_t ocount)
EXPORT_SYMBOL(generic_file_direct_write);
struct page *grab_cache_page_write_begin(struct address_space *mapping,
pgoff_t index, unsigned flags)
EXPORT_SYMBOL(grab_cache_page_write_begin);
static ssize_t generic_perform_write(struct file *file,
struct iov_iter *i, loff_t pos)
ssize_t
generic_file_buffered_write(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos, loff_t *ppos,
size_t count, ssize_t written)
EXPORT_SYMBOL(generic_file_buffered_write);
ssize_t __generic_file_aio_write(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t *ppos)
EXPORT_SYMBOL(__generic_file_aio_write);
ssize_t generic_file_aio_write(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
EXPORT_SYMBOL(generic_file_aio_write);
int try_to_release_page(struct page *page, gfp_t gfp_mask)
EXPORT_SYMBOL(try_to_release_page);
