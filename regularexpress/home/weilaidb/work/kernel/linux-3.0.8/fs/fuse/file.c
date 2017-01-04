static const struct file_operations fuse_direct_io_file_operations;
static int fuse_send_open(struct fuse_conn *fc, u64 nodeid, struct file *file,
int opcode, struct fuse_open_out *outargp)
struct fuse_file *fuse_file_alloc(struct fuse_conn *fc)
void fuse_file_free(struct fuse_file *ff)
struct fuse_file *fuse_file_get(struct fuse_file *ff)
static void fuse_release_async(struct work_struct *work)
static void fuse_release_end(struct fuse_conn *fc, struct fuse_req *req)
static void fuse_file_put(struct fuse_file *ff, bool sync)
int fuse_do_open(struct fuse_conn *fc, u64 nodeid, struct file *file,
bool isdir)
EXPORT_SYMBOL_GPL(fuse_do_open);
void fuse_finish_open(struct inode *inode, struct file *file)
int fuse_open_common(struct inode *inode, struct file *file, bool isdir)
static void fuse_prepare_release(struct fuse_file *ff, int flags, int opcode)
void fuse_release_common(struct file *file, int opcode)
static int fuse_open(struct inode *inode, struct file *file)
static int fuse_release(struct inode *inode, struct file *file)
void fuse_sync_release(struct fuse_file *ff, int flags)
EXPORT_SYMBOL_GPL(fuse_sync_release);
u64 fuse_lock_owner_id(struct fuse_conn *fc, fl_owner_t id)
static bool fuse_page_is_writeback(struct inode *inode, pgoff_t index)
static int fuse_wait_on_page_writeback(struct inode *inode, pgoff_t index)
static int fuse_flush(struct file *file, fl_owner_t id)
static void fuse_sync_writes(struct inode *inode)
int fuse_fsync_common(struct file *file, int datasync, int isdir)
static int fuse_fsync(struct file *file, int datasync)
void fuse_read_fill(struct fuse_req *req, struct file *file, loff_t pos,
size_t count, int opcode)
static size_t fuse_send_read(struct fuse_req *req, struct file *file,
loff_t pos, size_t count, fl_owner_t owner)
static void fuse_read_update_size(struct inode *inode, loff_t size,
u64 attr_ver)
static int fuse_readpage(struct file *file, struct page *page)
static void fuse_readpages_end(struct fuse_conn *fc, struct fuse_req *req)
static void fuse_send_readpages(struct fuse_req *req, struct file *file)
struct fuse_fill_data ;
static int fuse_readpages_fill(void *_data, struct page *page)
static int fuse_readpages(struct file *file, struct address_space *mapping,
struct list_head *pages, unsigned nr_pages)
static ssize_t fuse_file_aio_read(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
static void fuse_write_fill(struct fuse_req *req, struct fuse_file *ff,
loff_t pos, size_t count)
static size_t fuse_send_write(struct fuse_req *req, struct file *file,
loff_t pos, size_t count, fl_owner_t owner)
static int fuse_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
void fuse_write_update_size(struct inode *inode, loff_t pos)
static int fuse_buffered_write(struct file *file, struct inode *inode,
loff_t pos, unsigned count, struct page *page)
static int fuse_write_end(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
static size_t fuse_send_write_pages(struct fuse_req *req, struct file *file,
struct inode *inode, loff_t pos,
size_t count)
static ssize_t fuse_fill_write_pages(struct fuse_req *req,
struct address_space *mapping,
struct iov_iter *ii, loff_t pos)
static ssize_t fuse_perform_write(struct file *file,
struct address_space *mapping,
struct iov_iter *ii, loff_t pos)
static ssize_t fuse_file_aio_write(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
static void fuse_release_user_pages(struct fuse_req *req, int write)
static int fuse_get_user_pages(struct fuse_req *req, const char __user *buf,
size_t *nbytesp, int write)
ssize_t fuse_direct_io(struct file *file, const char __user *buf,
size_t count, loff_t *ppos, int write)
EXPORT_SYMBOL_GPL(fuse_direct_io);
static ssize_t fuse_direct_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t fuse_direct_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static void fuse_writepage_free(struct fuse_conn *fc, struct fuse_req *req)
static void fuse_writepage_finish(struct fuse_conn *fc, struct fuse_req *req)
static void fuse_send_writepage(struct fuse_conn *fc, struct fuse_req *req)
__releases(fc->lock)
__acquires(fc->lock)
void fuse_flush_writepages(struct inode *inode)
__releases(fc->lock)
__acquires(fc->lock)
static void fuse_writepage_end(struct fuse_conn *fc, struct fuse_req *req)
static int fuse_writepage_locked(struct page *page)
static int fuse_writepage(struct page *page, struct writeback_control *wbc)
static int fuse_launder_page(struct page *page)
static void fuse_vma_close(struct vm_area_struct *vma)
static int fuse_page_mkwrite(struct vm_area_struct *vma, struct vm_fault *vmf)
static const struct vm_operations_struct fuse_file_vm_ops = ;
static int fuse_file_mmap(struct file *file, struct vm_area_struct *vma)
static int fuse_direct_mmap(struct file *file, struct vm_area_struct *vma)
static int convert_fuse_file_lock(const struct fuse_file_lock *ffl,
struct file_lock *fl)
static void fuse_lk_fill(struct fuse_req *req, struct file *file,
const struct file_lock *fl, int opcode, pid_t pid,
int flock)
static int fuse_getlk(struct file *file, struct file_lock *fl)
static int fuse_setlk(struct file *file, struct file_lock *fl, int flock)
static int fuse_file_lock(struct file *file, int cmd, struct file_lock *fl)
static int fuse_file_flock(struct file *file, int cmd, struct file_lock *fl)
static sector_t fuse_bmap(struct address_space *mapping, sector_t block)
static loff_t fuse_file_llseek(struct file *file, loff_t offset, int origin)
static int fuse_ioctl_copy_user(struct page **pages, struct iovec *iov,
unsigned int nr_segs, size_t bytes, bool to_user)
static int fuse_copy_ioctl_iovec_old(struct iovec *dst, void *src,
size_t transferred, unsigned count,
bool is_compat)
static int fuse_verify_ioctl_iov(struct iovec *iov, size_t count)
static int fuse_copy_ioctl_iovec(struct fuse_conn *fc, struct iovec *dst,
void *src, size_t transferred, unsigned count,
bool is_compat)
long fuse_do_ioctl(struct file *file, unsigned int cmd, unsigned long arg,
unsigned int flags)
EXPORT_SYMBOL_GPL(fuse_do_ioctl);
static long fuse_file_ioctl_common(struct file *file, unsigned int cmd,
unsigned long arg, unsigned int flags)
static long fuse_file_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static long fuse_file_compat_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static struct rb_node **fuse_find_polled_node(struct fuse_conn *fc, u64 kh,
struct rb_node **parent_out)
static void fuse_register_polled_file(struct fuse_conn *fc,
struct fuse_file *ff)
unsigned fuse_file_poll(struct file *file, poll_table *wait)
EXPORT_SYMBOL_GPL(fuse_file_poll);
int fuse_notify_poll_wakeup(struct fuse_conn *fc,
struct fuse_notify_poll_wakeup_out *outarg)
static const struct file_operations fuse_file_operations = ;
static const struct file_operations fuse_direct_io_file_operations = ;
static const struct address_space_operations fuse_file_aops  = ;
void fuse_init_file_inode(struct inode *inode)
