static int page_cache_pipe_buf_steal(struct pipe_inode_info *pipe,
struct pipe_buffer *buf)
static void page_cache_pipe_buf_release(struct pipe_inode_info *pipe,
struct pipe_buffer *buf)
static int page_cache_pipe_buf_confirm(struct pipe_inode_info *pipe,
struct pipe_buffer *buf)
static const struct pipe_buf_operations page_cache_pipe_buf_ops = ;
static int user_page_pipe_buf_steal(struct pipe_inode_info *pipe,
struct pipe_buffer *buf)
static const struct pipe_buf_operations user_page_pipe_buf_ops = ;
static void wakeup_pipe_readers(struct pipe_inode_info *pipe)
ssize_t splice_to_pipe(struct pipe_inode_info *pipe,
struct splice_pipe_desc *spd)
static void spd_release_page(struct splice_pipe_desc *spd, unsigned int i)
int splice_grow_spd(struct pipe_inode_info *pipe, struct splice_pipe_desc *spd)
void splice_shrink_spd(struct pipe_inode_info *pipe,
struct splice_pipe_desc *spd)
static int
__generic_file_splice_read(struct file *in, loff_t *ppos,
struct pipe_inode_info *pipe, size_t len,
unsigned int flags)
ssize_t generic_file_splice_read(struct file *in, loff_t *ppos,
struct pipe_inode_info *pipe, size_t len,
unsigned int flags)
EXPORT_SYMBOL(generic_file_splice_read);
static const struct pipe_buf_operations default_pipe_buf_ops = ;
static ssize_t kernel_readv(struct file *file, const struct iovec *vec,
unsigned long vlen, loff_t offset)
static ssize_t kernel_write(struct file *file, const char *buf, size_t count,
loff_t pos)
ssize_t default_file_splice_read(struct file *in, loff_t *ppos,
struct pipe_inode_info *pipe, size_t len,
unsigned int flags)
EXPORT_SYMBOL(default_file_splice_read);
static int pipe_to_sendpage(struct pipe_inode_info *pipe,
struct pipe_buffer *buf, struct splice_desc *sd)
int pipe_to_file(struct pipe_inode_info *pipe, struct pipe_buffer *buf,
struct splice_desc *sd)
EXPORT_SYMBOL(pipe_to_file);
static void wakeup_pipe_writers(struct pipe_inode_info *pipe)
int splice_from_pipe_feed(struct pipe_inode_info *pipe, struct splice_desc *sd,
splice_actor *actor)
EXPORT_SYMBOL(splice_from_pipe_feed);
int splice_from_pipe_next(struct pipe_inode_info *pipe, struct splice_desc *sd)
EXPORT_SYMBOL(splice_from_pipe_next);
void splice_from_pipe_begin(struct splice_desc *sd)
EXPORT_SYMBOL(splice_from_pipe_begin);
void splice_from_pipe_end(struct pipe_inode_info *pipe, struct splice_desc *sd)
EXPORT_SYMBOL(splice_from_pipe_end);
ssize_t __splice_from_pipe(struct pipe_inode_info *pipe, struct splice_desc *sd,
splice_actor *actor)
EXPORT_SYMBOL(__splice_from_pipe);
ssize_t splice_from_pipe(struct pipe_inode_info *pipe, struct file *out,
loff_t *ppos, size_t len, unsigned int flags,
splice_actor *actor)
ssize_t
generic_file_splice_write(struct pipe_inode_info *pipe, struct file *out,
loff_t *ppos, size_t len, unsigned int flags)
EXPORT_SYMBOL(generic_file_splice_write);
static int write_pipe_buf(struct pipe_inode_info *pipe, struct pipe_buffer *buf,
struct splice_desc *sd)
static ssize_t default_file_splice_write(struct pipe_inode_info *pipe,
struct file *out, loff_t *ppos,
size_t len, unsigned int flags)
ssize_t generic_splice_sendpage(struct pipe_inode_info *pipe, struct file *out,
loff_t *ppos, size_t len, unsigned int flags)
EXPORT_SYMBOL(generic_splice_sendpage);
static long do_splice_from(struct pipe_inode_info *pipe, struct file *out,
loff_t *ppos, size_t len, unsigned int flags)
static long do_splice_to(struct file *in, loff_t *ppos,
struct pipe_inode_info *pipe, size_t len,
unsigned int flags)
ssize_t splice_direct_to_actor(struct file *in, struct splice_desc *sd,
splice_direct_actor *actor)
EXPORT_SYMBOL(splice_direct_to_actor);
static int direct_splice_actor(struct pipe_inode_info *pipe,
struct splice_desc *sd)
long do_splice_direct(struct file *in, loff_t *ppos, struct file *out,
size_t len, unsigned int flags)
static int splice_pipe_to_pipe(struct pipe_inode_info *ipipe,
struct pipe_inode_info *opipe,
size_t len, unsigned int flags);
static long do_splice(struct file *in, loff_t __user *off_in,
struct file *out, loff_t __user *off_out,
size_t len, unsigned int flags)
static int get_iovec_page_array(const struct iovec __user *iov,
unsigned int nr_vecs, struct page **pages,
struct partial_page *partial, int aligned,
unsigned int pipe_buffers)
static int pipe_to_user(struct pipe_inode_info *pipe, struct pipe_buffer *buf,
struct splice_desc *sd)
static long vmsplice_to_user(struct file *file, const struct iovec __user *iov,
unsigned long nr_segs, unsigned int flags)
static long vmsplice_to_pipe(struct file *file, const struct iovec __user *iov,
unsigned long nr_segs, unsigned int flags)
SYSCALL_DEFINE4(vmsplice, int, fd, const struct iovec __user *, iov,
unsigned long, nr_segs, unsigned int, flags)
SYSCALL_DEFINE6(splice, int, fd_in, loff_t __user *, off_in,
int, fd_out, loff_t __user *, off_out,
size_t, len, unsigned int, flags)
static int ipipe_prep(struct pipe_inode_info *pipe, unsigned int flags)
static int opipe_prep(struct pipe_inode_info *pipe, unsigned int flags)
static int splice_pipe_to_pipe(struct pipe_inode_info *ipipe,
struct pipe_inode_info *opipe,
size_t len, unsigned int flags)
static int link_pipe(struct pipe_inode_info *ipipe,
struct pipe_inode_info *opipe,
size_t len, unsigned int flags)
static long do_tee(struct file *in, struct file *out, size_t len,
unsigned int flags)
SYSCALL_DEFINE4(tee, int, fdin, int, fdout, size_t, len, unsigned int, flags)
