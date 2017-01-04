static loff_t gfs2_llseek(struct file *file, loff_t offset, int origin)
static int gfs2_readdir(struct file *file, void *dirent, filldir_t filldir)
static u32 fsflags_cvt(const u32 *table, u32 val)
static const u32 fsflags_to_gfs2[32] = ;
static const u32 gfs2_to_fsflags[32] = ;
static int gfs2_get_flags(struct file *filp, u32 __user *ptr)
void gfs2_set_inode_flags(struct inode *inode)
#define GFS2_FLAGS_USER_SET (GFS2_DIF_JDATA|			\
GFS2_DIF_IMMUTABLE|		\
GFS2_DIF_APPENDONLY|		\
GFS2_DIF_NOATIME|			\
GFS2_DIF_SYNC|			\
GFS2_DIF_SYSTEM|			\
GFS2_DIF_INHERIT_JDATA)
static int do_gfs2_set_flags(struct file *filp, u32 reqflags, u32 mask)
static int gfs2_set_flags(struct file *filp, u32 __user *ptr)
static long gfs2_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
static int gfs2_allocate_page_backing(struct page *page)
static int gfs2_page_mkwrite(struct vm_area_struct *vma, struct vm_fault *vmf)
static const struct vm_operations_struct gfs2_vm_ops = ;
static int gfs2_mmap(struct file *file, struct vm_area_struct *vma)
static int gfs2_open(struct inode *inode, struct file *file)
static int gfs2_close(struct inode *inode, struct file *file)
static int gfs2_fsync(struct file *file, int datasync)
static ssize_t gfs2_file_aio_write(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
static int empty_write_end(struct page *page, unsigned from,
unsigned to, int mode)
static int needs_empty_write(sector_t block, struct inode *inode)
static int write_empty_blocks(struct page *page, unsigned from, unsigned to,
int mode)
static int fallocate_chunk(struct inode *inode, loff_t offset, loff_t len,
int mode)
static void calc_max_reserv(struct gfs2_inode *ip, loff_t max, loff_t *len,
unsigned int *data_blocks, unsigned int *ind_blocks)
static long gfs2_fallocate(struct file *file, int mode, loff_t offset,
loff_t len)
static int gfs2_setlease(struct file *file, long arg, struct file_lock **fl)
static int gfs2_lock(struct file *file, int cmd, struct file_lock *fl)
static int do_flock(struct file *file, int cmd, struct file_lock *fl)
static void do_unflock(struct file *file, struct file_lock *fl)
static int gfs2_flock(struct file *file, int cmd, struct file_lock *fl)
const struct file_operations gfs2_file_fops = ;
const struct file_operations gfs2_dir_fops = ;
const struct file_operations gfs2_file_fops_nolock = ;
const struct file_operations gfs2_dir_fops_nolock = ;
