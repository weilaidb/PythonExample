const struct file_operations generic_ro_fops = ;
EXPORT_SYMBOL(generic_ro_fops);
static inline int unsigned_offsets(struct file *file)
loff_t
generic_file_llseek_unlocked(struct file *file, loff_t offset, int origin)
EXPORT_SYMBOL(generic_file_llseek_unlocked);
loff_t generic_file_llseek(struct file *file, loff_t offset, int origin)
EXPORT_SYMBOL(generic_file_llseek);
loff_t noop_llseek(struct file *file, loff_t offset, int origin)
EXPORT_SYMBOL(noop_llseek);
loff_t no_llseek(struct file *file, loff_t offset, int origin)
EXPORT_SYMBOL(no_llseek);
loff_t default_llseek(struct file *file, loff_t offset, int origin)
EXPORT_SYMBOL(default_llseek);
loff_t vfs_llseek(struct file *file, loff_t offset, int origin)
EXPORT_SYMBOL(vfs_llseek);
SYSCALL_DEFINE3(lseek, unsigned int, fd, off_t, offset, unsigned int, origin)
SYSCALL_DEFINE5(llseek, unsigned int, fd, unsigned long, offset_high,
unsigned long, offset_low, loff_t __user *, result,
unsigned int, origin)
int rw_verify_area(int read_write, struct file *file, loff_t *ppos, size_t count)
static void wait_on_retry_sync_kiocb(struct kiocb *iocb)
ssize_t do_sync_read(struct file *filp, char __user *buf, size_t len, loff_t *ppos)
EXPORT_SYMBOL(do_sync_read);
ssize_t vfs_read(struct file *file, char __user *buf, size_t count, loff_t *pos)
EXPORT_SYMBOL(vfs_read);
ssize_t do_sync_write(struct file *filp, const char __user *buf, size_t len, loff_t *ppos)
EXPORT_SYMBOL(do_sync_write);
ssize_t vfs_write(struct file *file, const char __user *buf, size_t count, loff_t *pos)
EXPORT_SYMBOL(vfs_write);
static inline loff_t file_pos_read(struct file *file)
static inline void file_pos_write(struct file *file, loff_t pos)
SYSCALL_DEFINE3(read, unsigned int, fd, char __user *, buf, size_t, count)
SYSCALL_DEFINE3(write, unsigned int, fd, const char __user *, buf,
size_t, count)
SYSCALL_DEFINE(pread64)(unsigned int fd, char __user *buf,
size_t count, loff_t pos)
asmlinkage long SyS_pread64(long fd, long buf, long count, loff_t pos)
SYSCALL_ALIAS(sys_pread64, SyS_pread64);
SYSCALL_DEFINE(pwrite64)(unsigned int fd, const char __user *buf,
size_t count, loff_t pos)
asmlinkage long SyS_pwrite64(long fd, long buf, long count, loff_t pos)
SYSCALL_ALIAS(sys_pwrite64, SyS_pwrite64);
unsigned long iov_shorten(struct iovec *iov, unsigned long nr_segs, size_t to)
EXPORT_SYMBOL(iov_shorten);
ssize_t do_sync_readv_writev(struct file *filp, const struct iovec *iov,
unsigned long nr_segs, size_t len, loff_t *ppos, iov_fn_t fn)
ssize_t do_loop_readv_writev(struct file *filp, struct iovec *iov,
unsigned long nr_segs, loff_t *ppos, io_fn_t fn)
#define vrfy_dir(type) ((type) == READ ? VERIFY_WRITE : VERIFY_READ)
ssize_t rw_copy_check_uvector(int type, const struct iovec __user * uvector,
unsigned long nr_segs, unsigned long fast_segs,
struct iovec *fast_pointer,
struct iovec **ret_pointer)
static ssize_t do_readv_writev(int type, struct file *file,
const struct iovec __user * uvector,
unsigned long nr_segs, loff_t *pos)
ssize_t vfs_readv(struct file *file, const struct iovec __user *vec,
unsigned long vlen, loff_t *pos)
EXPORT_SYMBOL(vfs_readv);
ssize_t vfs_writev(struct file *file, const struct iovec __user *vec,
unsigned long vlen, loff_t *pos)
EXPORT_SYMBOL(vfs_writev);
SYSCALL_DEFINE3(readv, unsigned long, fd, const struct iovec __user *, vec,
unsigned long, vlen)
SYSCALL_DEFINE3(writev, unsigned long, fd, const struct iovec __user *, vec,
unsigned long, vlen)
static inline loff_t pos_from_hilo(unsigned long high, unsigned long low)
SYSCALL_DEFINE5(preadv, unsigned long, fd, const struct iovec __user *, vec,
unsigned long, vlen, unsigned long, pos_l, unsigned long, pos_h)
SYSCALL_DEFINE5(pwritev, unsigned long, fd, const struct iovec __user *, vec,
unsigned long, vlen, unsigned long, pos_l, unsigned long, pos_h)
static ssize_t do_sendfile(int out_fd, int in_fd, loff_t *ppos,
size_t count, loff_t max)
SYSCALL_DEFINE4(sendfile, int, out_fd, int, in_fd, off_t __user *, offset, size_t, count)
SYSCALL_DEFINE4(sendfile64, int, out_fd, int, in_fd, loff_t __user *, offset, size_t, count)
