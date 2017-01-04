MODULE_ALIAS_MISCDEV(FUSE_MINOR);
MODULE_ALIAS("devname:fuse");
static struct kmem_cache *fuse_req_cachep;
static struct fuse_conn *fuse_get_conn(struct file *file)
static void fuse_request_init(struct fuse_req *req)
struct fuse_req *fuse_request_alloc(void)
EXPORT_SYMBOL_GPL(fuse_request_alloc);
struct fuse_req *fuse_request_alloc_nofs(void)
void fuse_request_free(struct fuse_req *req)
static void block_sigs(sigset_t *oldset)
static void restore_sigs(sigset_t *oldset)
static void __fuse_get_request(struct fuse_req *req)
static void __fuse_put_request(struct fuse_req *req)
static void fuse_req_init_context(struct fuse_req *req)
struct fuse_req *fuse_get_req(struct fuse_conn *fc)
EXPORT_SYMBOL_GPL(fuse_get_req);
static struct fuse_req *get_reserved_req(struct fuse_conn *fc,
struct file *file)
static void put_reserved_req(struct fuse_conn *fc, struct fuse_req *req)
struct fuse_req *fuse_get_req_nofail(struct fuse_conn *fc, struct file *file)
void fuse_put_request(struct fuse_conn *fc, struct fuse_req *req)
EXPORT_SYMBOL_GPL(fuse_put_request);
static unsigned len_args(unsigned numargs, struct fuse_arg *args)
static u64 fuse_get_unique(struct fuse_conn *fc)
static void queue_request(struct fuse_conn *fc, struct fuse_req *req)
void fuse_queue_forget(struct fuse_conn *fc, struct fuse_forget_link *forget,
u64 nodeid, u64 nlookup)
static void flush_bg_queue(struct fuse_conn *fc)
static void request_end(struct fuse_conn *fc, struct fuse_req *req)
__releases(fc->lock)
static void wait_answer_interruptible(struct fuse_conn *fc,
struct fuse_req *req)
__releases(fc->lock)
__acquires(fc->lock)
static void queue_interrupt(struct fuse_conn *fc, struct fuse_req *req)
static void request_wait_answer(struct fuse_conn *fc, struct fuse_req *req)
__releases(fc->lock)
__acquires(fc->lock)
void fuse_request_send(struct fuse_conn *fc, struct fuse_req *req)
EXPORT_SYMBOL_GPL(fuse_request_send);
static void fuse_request_send_nowait_locked(struct fuse_conn *fc,
struct fuse_req *req)
static void fuse_request_send_nowait(struct fuse_conn *fc, struct fuse_req *req)
void fuse_request_send_background(struct fuse_conn *fc, struct fuse_req *req)
EXPORT_SYMBOL_GPL(fuse_request_send_background);
static int fuse_request_send_notify_reply(struct fuse_conn *fc,
struct fuse_req *req, u64 unique)
void fuse_request_send_background_locked(struct fuse_conn *fc,
struct fuse_req *req)
static int lock_request(struct fuse_conn *fc, struct fuse_req *req)
static void unlock_request(struct fuse_conn *fc, struct fuse_req *req)
struct fuse_copy_state ;
static void fuse_copy_init(struct fuse_copy_state *cs, struct fuse_conn *fc,
int write,
const struct iovec *iov, unsigned long nr_segs)
static void fuse_copy_finish(struct fuse_copy_state *cs)
static int fuse_copy_fill(struct fuse_copy_state *cs)
static int fuse_copy_do(struct fuse_copy_state *cs, void **val, unsigned *size)
static int fuse_check_page(struct page *page)
static int fuse_try_move_page(struct fuse_copy_state *cs, struct page **pagep)
static int fuse_ref_page(struct fuse_copy_state *cs, struct page *page,
unsigned offset, unsigned count)
static int fuse_copy_page(struct fuse_copy_state *cs, struct page **pagep,
unsigned offset, unsigned count, int zeroing)
static int fuse_copy_pages(struct fuse_copy_state *cs, unsigned nbytes,
int zeroing)
static int fuse_copy_one(struct fuse_copy_state *cs, void *val, unsigned size)
static int fuse_copy_args(struct fuse_copy_state *cs, unsigned numargs,
unsigned argpages, struct fuse_arg *args,
int zeroing)
static int forget_pending(struct fuse_conn *fc)
static int request_pending(struct fuse_conn *fc)
static void request_wait(struct fuse_conn *fc)
__releases(fc->lock)
__acquires(fc->lock)
static int fuse_read_interrupt(struct fuse_conn *fc, struct fuse_copy_state *cs,
size_t nbytes, struct fuse_req *req)
__releases(fc->lock)
static struct fuse_forget_link *dequeue_forget(struct fuse_conn *fc,
unsigned max,
unsigned *countp)
static int fuse_read_single_forget(struct fuse_conn *fc,
struct fuse_copy_state *cs,
size_t nbytes)
__releases(fc->lock)
static int fuse_read_batch_forget(struct fuse_conn *fc,
struct fuse_copy_state *cs, size_t nbytes)
__releases(fc->lock)
static int fuse_read_forget(struct fuse_conn *fc, struct fuse_copy_state *cs,
size_t nbytes)
__releases(fc->lock)
static ssize_t fuse_dev_do_read(struct fuse_conn *fc, struct file *file,
struct fuse_copy_state *cs, size_t nbytes)
static ssize_t fuse_dev_read(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
static int fuse_dev_pipe_buf_steal(struct pipe_inode_info *pipe,
struct pipe_buffer *buf)
static const struct pipe_buf_operations fuse_dev_pipe_buf_ops = ;
static ssize_t fuse_dev_splice_read(struct file *in, loff_t *ppos,
struct pipe_inode_info *pipe,
size_t len, unsigned int flags)
static int fuse_notify_poll(struct fuse_conn *fc, unsigned int size,
struct fuse_copy_state *cs)
static int fuse_notify_inval_inode(struct fuse_conn *fc, unsigned int size,
struct fuse_copy_state *cs)
static int fuse_notify_inval_entry(struct fuse_conn *fc, unsigned int size,
struct fuse_copy_state *cs)
static int fuse_notify_store(struct fuse_conn *fc, unsigned int size,
struct fuse_copy_state *cs)
static void fuse_retrieve_end(struct fuse_conn *fc, struct fuse_req *req)
static int fuse_retrieve(struct fuse_conn *fc, struct inode *inode,
struct fuse_notify_retrieve_out *outarg)
static int fuse_notify_retrieve(struct fuse_conn *fc, unsigned int size,
struct fuse_copy_state *cs)
static int fuse_notify(struct fuse_conn *fc, enum fuse_notify_code code,
unsigned int size, struct fuse_copy_state *cs)
static struct fuse_req *request_find(struct fuse_conn *fc, u64 unique)
static int copy_out_args(struct fuse_copy_state *cs, struct fuse_out *out,
unsigned nbytes)
static ssize_t fuse_dev_do_write(struct fuse_conn *fc,
struct fuse_copy_state *cs, size_t nbytes)
static ssize_t fuse_dev_write(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
static ssize_t fuse_dev_splice_write(struct pipe_inode_info *pipe,
struct file *out, loff_t *ppos,
size_t len, unsigned int flags)
static unsigned fuse_dev_poll(struct file *file, poll_table *wait)
static void end_requests(struct fuse_conn *fc, struct list_head *head)
__releases(fc->lock)
__acquires(fc->lock)
static void end_io_requests(struct fuse_conn *fc)
__releases(fc->lock)
__acquires(fc->lock)
static void end_queued_requests(struct fuse_conn *fc)
__releases(fc->lock)
__acquires(fc->lock)
static void end_polls(struct fuse_conn *fc)
void fuse_abort_conn(struct fuse_conn *fc)
EXPORT_SYMBOL_GPL(fuse_abort_conn);
int fuse_dev_release(struct inode *inode, struct file *file)
EXPORT_SYMBOL_GPL(fuse_dev_release);
static int fuse_dev_fasync(int fd, struct file *file, int on)
const struct file_operations fuse_dev_operations = ;
EXPORT_SYMBOL_GPL(fuse_dev_operations);
static struct miscdevice fuse_miscdevice = ;
int __init fuse_dev_init(void)
void fuse_dev_cleanup(void)
