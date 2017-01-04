static loff_t bad_file_llseek(struct file *file, loff_t offset, int origin)
static ssize_t bad_file_read(struct file *filp, char __user *buf,
size_t size, loff_t *ppos)
static ssize_t bad_file_write(struct file *filp, const char __user *buf,
size_t siz, loff_t *ppos)
static ssize_t bad_file_aio_read(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
static ssize_t bad_file_aio_write(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
static int bad_file_readdir(struct file *filp, void *dirent, filldir_t filldir)
static unsigned int bad_file_poll(struct file *filp, poll_table *wait)
static long bad_file_unlocked_ioctl(struct file *file, unsigned cmd,
unsigned long arg)
static long bad_file_compat_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int bad_file_mmap(struct file *file, struct vm_area_struct *vma)
static int bad_file_open(struct inode *inode, struct file *filp)
static int bad_file_flush(struct file *file, fl_owner_t id)
static int bad_file_release(struct inode *inode, struct file *filp)
static int bad_file_fsync(struct file *file, int datasync)
static int bad_file_aio_fsync(struct kiocb *iocb, int datasync)
static int bad_file_fasync(int fd, struct file *filp, int on)
static int bad_file_lock(struct file *file, int cmd, struct file_lock *fl)
static ssize_t bad_file_sendpage(struct file *file, struct page *page,
int off, size_t len, loff_t *pos, int more)
static unsigned long bad_file_get_unmapped_area(struct file *file,
unsigned long addr, unsigned long len,
unsigned long pgoff, unsigned long flags)
static int bad_file_check_flags(int flags)
static int bad_file_flock(struct file *filp, int cmd, struct file_lock *fl)
static ssize_t bad_file_splice_write(struct pipe_inode_info *pipe,
struct file *out, loff_t *ppos, size_t len,
unsigned int flags)
static ssize_t bad_file_splice_read(struct file *in, loff_t *ppos,
struct pipe_inode_info *pipe, size_t len,
unsigned int flags)
static const struct file_operations bad_file_ops =
;
static int bad_inode_create (struct inode *dir, struct dentry *dentry,
int mode, struct nameidata *nd)
static struct dentry *bad_inode_lookup(struct inode *dir,
struct dentry *dentry, struct nameidata *nd)
static int bad_inode_link (struct dentry *old_dentry, struct inode *dir,
struct dentry *dentry)
static int bad_inode_unlink(struct inode *dir, struct dentry *dentry)
static int bad_inode_symlink (struct inode *dir, struct dentry *dentry,
const char *symname)
static int bad_inode_mkdir(struct inode *dir, struct dentry *dentry,
int mode)
static int bad_inode_rmdir (struct inode *dir, struct dentry *dentry)
static int bad_inode_mknod (struct inode *dir, struct dentry *dentry,
int mode, dev_t rdev)
static int bad_inode_rename (struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
static int bad_inode_readlink(struct dentry *dentry, char __user *buffer,
int buflen)
static int bad_inode_permission(struct inode *inode, int mask, unsigned int flags)
static int bad_inode_getattr(struct vfsmount *mnt, struct dentry *dentry,
struct kstat *stat)
static int bad_inode_setattr(struct dentry *direntry, struct iattr *attrs)
static int bad_inode_setxattr(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags)
static ssize_t bad_inode_getxattr(struct dentry *dentry, const char *name,
void *buffer, size_t size)
static ssize_t bad_inode_listxattr(struct dentry *dentry, char *buffer,
size_t buffer_size)
static int bad_inode_removexattr(struct dentry *dentry, const char *name)
static const struct inode_operations bad_inode_ops =
;
void make_bad_inode(struct inode *inode)
EXPORT_SYMBOL(make_bad_inode);
int is_bad_inode(struct inode *inode)
EXPORT_SYMBOL(is_bad_inode);
void iget_failed(struct inode *inode)
EXPORT_SYMBOL(iget_failed);
