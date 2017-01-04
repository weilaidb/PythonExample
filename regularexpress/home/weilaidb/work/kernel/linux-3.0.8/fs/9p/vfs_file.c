static const struct vm_operations_struct v9fs_file_vm_ops;
int v9fs_file_open(struct inode *inode, struct file *file)
static int v9fs_file_lock(struct file *filp, int cmd, struct file_lock *fl)
static int v9fs_file_do_lock(struct file *filp, int cmd, struct file_lock *fl)
static int v9fs_file_getlock(struct file *filp, struct file_lock *fl)
static int v9fs_file_lock_dotl(struct file *filp, int cmd, struct file_lock *fl)
static int v9fs_file_flock_dotl(struct file *filp, int cmd,
struct file_lock *fl)
ssize_t
v9fs_fid_readn(struct p9_fid *fid, char *data, char __user *udata, u32 count,
u64 offset)
ssize_t
v9fs_file_readn(struct file *filp, char *data, char __user *udata, u32 count,
u64 offset)
static ssize_t
v9fs_file_read(struct file *filp, char __user *udata, size_t count,
loff_t * offset)
ssize_t
v9fs_file_write_internal(struct inode *inode, struct p9_fid *fid,
const char __user *data, size_t count,
loff_t *offset, int invalidate)
static ssize_t
v9fs_file_write(struct file *filp, const char __user * data,
size_t count, loff_t *offset)
static int v9fs_file_fsync(struct file *filp, int datasync)
int v9fs_file_fsync_dotl(struct file *filp, int datasync)
static int
v9fs_file_mmap(struct file *file, struct vm_area_struct *vma)
static int
v9fs_vm_page_mkwrite(struct vm_area_struct *vma, struct vm_fault *vmf)
static ssize_t
v9fs_direct_read(struct file *filp, char __user *udata, size_t count,
loff_t *offsetp)
static ssize_t
v9fs_cached_file_read(struct file *filp, char __user *data, size_t count,
loff_t *offset)
static ssize_t
v9fs_direct_write(struct file *filp, const char __user * data,
size_t count, loff_t *offsetp)
static ssize_t
v9fs_cached_file_write(struct file *filp, const char __user * data,
size_t count, loff_t *offset)
static const struct vm_operations_struct v9fs_file_vm_ops = ;
const struct file_operations v9fs_cached_file_operations = ;
const struct file_operations v9fs_cached_file_operations_dotl = ;
const struct file_operations v9fs_file_operations = ;
const struct file_operations v9fs_file_operations_dotl = ;
