unsigned int pipe_max_size = 1048576;
unsigned int pipe_min_size = PAGE_SIZE;
static void pipe_lock_nested(struct pipe_inode_info *pipe, int subclass)
void pipe_lock(struct pipe_inode_info *pipe)
EXPORT_SYMBOL(pipe_lock);
void pipe_unlock(struct pipe_inode_info *pipe)
EXPORT_SYMBOL(pipe_unlock);
void pipe_double_lock(struct pipe_inode_info *pipe1,
struct pipe_inode_info *pipe2)
void pipe_wait(struct pipe_inode_info *pipe)
static int
pipe_iov_copy_from_user(void *to, struct iovec *iov, unsigned long len,
int atomic)
static int
pipe_iov_copy_to_user(struct iovec *iov, const void *from, unsigned long len,
int atomic)
static int iov_fault_in_pages_write(struct iovec *iov, unsigned long len)
static void iov_fault_in_pages_read(struct iovec *iov, unsigned long len)
static void anon_pipe_buf_release(struct pipe_inode_info *pipe,
struct pipe_buffer *buf)
void *generic_pipe_buf_map(struct pipe_inode_info *pipe,
struct pipe_buffer *buf, int atomic)
EXPORT_SYMBOL(generic_pipe_buf_map);
void generic_pipe_buf_unmap(struct pipe_inode_info *pipe,
struct pipe_buffer *buf, void *map_data)
EXPORT_SYMBOL(generic_pipe_buf_unmap);
int generic_pipe_buf_steal(struct pipe_inode_info *pipe,
struct pipe_buffer *buf)
EXPORT_SYMBOL(generic_pipe_buf_steal);
void generic_pipe_buf_get(struct pipe_inode_info *pipe, struct pipe_buffer *buf)
EXPORT_SYMBOL(generic_pipe_buf_get);
int generic_pipe_buf_confirm(struct pipe_inode_info *info,
struct pipe_buffer *buf)
EXPORT_SYMBOL(generic_pipe_buf_confirm);
void generic_pipe_buf_release(struct pipe_inode_info *pipe,
struct pipe_buffer *buf)
EXPORT_SYMBOL(generic_pipe_buf_release);
static const struct pipe_buf_operations anon_pipe_buf_ops = ;
static ssize_t
pipe_read(struct kiocb *iocb, const struct iovec *_iov,
unsigned long nr_segs, loff_t pos)
static ssize_t
pipe_write(struct kiocb *iocb, const struct iovec *_iov,
unsigned long nr_segs, loff_t ppos)
static ssize_t
bad_pipe_r(struct file *filp, char __user *buf, size_t count, loff_t *ppos)
static ssize_t
bad_pipe_w(struct file *filp, const char __user *buf, size_t count,
loff_t *ppos)
static long pipe_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
static unsigned int
pipe_poll(struct file *filp, poll_table *wait)
static int
pipe_release(struct inode *inode, int decr, int decw)
static int
pipe_read_fasync(int fd, struct file *filp, int on)
static int
pipe_write_fasync(int fd, struct file *filp, int on)
static int
pipe_rdwr_fasync(int fd, struct file *filp, int on)
static int
pipe_read_release(struct inode *inode, struct file *filp)
static int
pipe_write_release(struct inode *inode, struct file *filp)
static int
pipe_rdwr_release(struct inode *inode, struct file *filp)
static int
pipe_read_open(struct inode *inode, struct file *filp)
static int
pipe_write_open(struct inode *inode, struct file *filp)
static int
pipe_rdwr_open(struct inode *inode, struct file *filp)
const struct file_operations read_pipefifo_fops = ;
const struct file_operations write_pipefifo_fops = ;
const struct file_operations rdwr_pipefifo_fops = ;
struct pipe_inode_info * alloc_pipe_info(struct inode *inode)
void __free_pipe_info(struct pipe_inode_info *pipe)
void free_pipe_info(struct inode *inode)
static struct vfsmount *pipe_mnt __read_mostly;
static char *pipefs_dname(struct dentry *dentry, char *buffer, int buflen)
static const struct dentry_operations pipefs_dentry_operations = ;
static struct inode * get_pipe_inode(void)
struct file *create_write_pipe(int flags)
void free_write_pipe(struct file *f)
struct file *create_read_pipe(struct file *wrf, int flags)
int do_pipe_flags(int *fd, int flags)
SYSCALL_DEFINE2(pipe2, int __user *, fildes, int, flags)
SYSCALL_DEFINE1(pipe, int __user *, fildes)
static long pipe_set_size(struct pipe_inode_info *pipe, unsigned long nr_pages)
static inline unsigned int round_pipe_size(unsigned int size)
int pipe_proc_fn(struct ctl_table *table, int write, void __user *buf,
size_t *lenp, loff_t *ppos)
struct pipe_inode_info *get_pipe_info(struct file *file)
long pipe_fcntl(struct file *file, unsigned int cmd, unsigned long arg)
static const struct super_operations pipefs_ops = ;
static struct dentry *pipefs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type pipe_fs_type = ;
static int __init init_pipe_fs(void)
static void __exit exit_pipe_fs(void)
fs_initcall(init_pipe_fs);
module_exit(exit_pipe_fs);
