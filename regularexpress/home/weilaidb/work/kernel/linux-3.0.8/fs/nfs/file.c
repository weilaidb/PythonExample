#define NFSDBG_FACILITY		NFSDBG_FILE
static int nfs_file_open(struct inode *, struct file *);
static int nfs_file_release(struct inode *, struct file *);
static loff_t nfs_file_llseek(struct file *file, loff_t offset, int origin);
static int  nfs_file_mmap(struct file *, struct vm_area_struct *);
static ssize_t nfs_file_splice_read(struct file *filp, loff_t *ppos,
struct pipe_inode_info *pipe,
size_t count, unsigned int flags);
static ssize_t nfs_file_read(struct kiocb *, const struct iovec *iov,
unsigned long nr_segs, loff_t pos);
static ssize_t nfs_file_splice_write(struct pipe_inode_info *pipe,
struct file *filp, loff_t *ppos,
size_t count, unsigned int flags);
static ssize_t nfs_file_write(struct kiocb *, const struct iovec *iov,
unsigned long nr_segs, loff_t pos);
static int  nfs_file_flush(struct file *, fl_owner_t id);
static int  nfs_file_fsync(struct file *, int datasync);
static int nfs_check_flags(int flags);
static int nfs_lock(struct file *filp, int cmd, struct file_lock *fl);
static int nfs_flock(struct file *filp, int cmd, struct file_lock *fl);
static int nfs_setlease(struct file *file, long arg, struct file_lock **fl);
static const struct vm_operations_struct nfs_file_vm_ops;
const struct file_operations nfs_file_operations = ;
const struct inode_operations nfs_file_inode_operations = ;
const struct inode_operations nfs3_file_inode_operations = ;
# define IS_SWAPFILE(inode)	(0)
static int nfs_check_flags(int flags)
static int
nfs_file_open(struct inode *inode, struct file *filp)
static int
nfs_file_release(struct inode *inode, struct file *filp)
static int nfs_revalidate_file_size(struct inode *inode, struct file *filp)
static loff_t nfs_file_llseek(struct file *filp, loff_t offset, int origin)
static int
nfs_file_flush(struct file *file, fl_owner_t id)
static ssize_t
nfs_file_read(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
static ssize_t
nfs_file_splice_read(struct file *filp, loff_t *ppos,
struct pipe_inode_info *pipe, size_t count,
unsigned int flags)
static int
nfs_file_mmap(struct file * file, struct vm_area_struct * vma)
static int
nfs_file_fsync(struct file *file, int datasync)
static int nfs_want_read_modify_write(struct file *file, struct page *page,
loff_t pos, unsigned len)
static int nfs_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static int nfs_write_end(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
static void nfs_invalidate_page(struct page *page, unsigned long offset)
static int nfs_release_page(struct page *page, gfp_t gfp)
static int nfs_launder_page(struct page *page)
const struct address_space_operations nfs_file_aops = ;
static int nfs_vm_page_mkwrite(struct vm_area_struct *vma, struct vm_fault *vmf)
static const struct vm_operations_struct nfs_file_vm_ops = ;
static int nfs_need_sync_write(struct file *filp, struct inode *inode)
static ssize_t nfs_file_write(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
static ssize_t nfs_file_splice_write(struct pipe_inode_info *pipe,
struct file *filp, loff_t *ppos,
size_t count, unsigned int flags)
static int
do_getlk(struct file *filp, int cmd, struct file_lock *fl, int is_local)
static int do_vfs_lock(struct file *file, struct file_lock *fl)
static int
do_unlk(struct file *filp, int cmd, struct file_lock *fl, int is_local)
static int
is_time_granular(struct timespec *ts)
static int
do_setlk(struct file *filp, int cmd, struct file_lock *fl, int is_local)
static int nfs_lock(struct file *filp, int cmd, struct file_lock *fl)
static int nfs_flock(struct file *filp, int cmd, struct file_lock *fl)
static int nfs_setlease(struct file *file, long arg, struct file_lock **fl)
