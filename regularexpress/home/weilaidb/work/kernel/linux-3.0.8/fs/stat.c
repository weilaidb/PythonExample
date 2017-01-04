void generic_fillattr(struct inode *inode, struct kstat *stat)
EXPORT_SYMBOL(generic_fillattr);
int vfs_getattr(struct vfsmount *mnt, struct dentry *dentry, struct kstat *stat)
EXPORT_SYMBOL(vfs_getattr);
int vfs_fstat(unsigned int fd, struct kstat *stat)
EXPORT_SYMBOL(vfs_fstat);
int vfs_fstatat(int dfd, const char __user *filename, struct kstat *stat,
int flag)
EXPORT_SYMBOL(vfs_fstatat);
int vfs_stat(const char __user *name, struct kstat *stat)
EXPORT_SYMBOL(vfs_stat);
int vfs_lstat(const char __user *name, struct kstat *stat)
EXPORT_SYMBOL(vfs_lstat);
static int cp_old_stat(struct kstat *stat, struct __old_kernel_stat __user * statbuf)
SYSCALL_DEFINE2(stat, const char __user *, filename,
struct __old_kernel_stat __user *, statbuf)
SYSCALL_DEFINE2(lstat, const char __user *, filename,
struct __old_kernel_stat __user *, statbuf)
SYSCALL_DEFINE2(fstat, unsigned int, fd, struct __old_kernel_stat __user *, statbuf)
static int cp_new_stat(struct kstat *stat, struct stat __user *statbuf)
SYSCALL_DEFINE2(newstat, const char __user *, filename,
struct stat __user *, statbuf)
SYSCALL_DEFINE2(newlstat, const char __user *, filename,
struct stat __user *, statbuf)
#if !defined(__ARCH_WANT_STAT64) || defined(__ARCH_WANT_SYS_NEWFSTATAT)
SYSCALL_DEFINE4(newfstatat, int, dfd, const char __user *, filename,
struct stat __user *, statbuf, int, flag)
SYSCALL_DEFINE2(newfstat, unsigned int, fd, struct stat __user *, statbuf)
SYSCALL_DEFINE4(readlinkat, int, dfd, const char __user *, pathname,
char __user *, buf, int, bufsiz)
SYSCALL_DEFINE3(readlink, const char __user *, path, char __user *, buf,
int, bufsiz)
static long cp_new_stat64(struct kstat *stat, struct stat64 __user *statbuf)
SYSCALL_DEFINE2(stat64, const char __user *, filename,
struct stat64 __user *, statbuf)
SYSCALL_DEFINE2(lstat64, const char __user *, filename,
struct stat64 __user *, statbuf)
SYSCALL_DEFINE2(fstat64, unsigned long, fd, struct stat64 __user *, statbuf)
SYSCALL_DEFINE4(fstatat64, int, dfd, const char __user *, filename,
struct stat64 __user *, statbuf, int, flag)
void __inode_add_bytes(struct inode *inode, loff_t bytes)
void inode_add_bytes(struct inode *inode, loff_t bytes)
EXPORT_SYMBOL(inode_add_bytes);
void inode_sub_bytes(struct inode *inode, loff_t bytes)
EXPORT_SYMBOL(inode_sub_bytes);
loff_t inode_get_bytes(struct inode *inode)
EXPORT_SYMBOL(inode_get_bytes);
void inode_set_bytes(struct inode *inode, loff_t bytes)
EXPORT_SYMBOL(inode_set_bytes);
