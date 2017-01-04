int do_truncate(struct dentry *dentry, loff_t length, unsigned int time_attrs,
struct file *filp)
static long do_sys_truncate(const char __user *pathname, loff_t length)
SYSCALL_DEFINE2(truncate, const char __user *, path, long, length)
static long do_sys_ftruncate(unsigned int fd, loff_t length, int small)
SYSCALL_DEFINE2(ftruncate, unsigned int, fd, unsigned long, length)
#if BITS_PER_LONG == 32
SYSCALL_DEFINE(truncate64)(const char __user * path, loff_t length)
asmlinkage long SyS_truncate64(long path, loff_t length)
SYSCALL_ALIAS(sys_truncate64, SyS_truncate64);
SYSCALL_DEFINE(ftruncate64)(unsigned int fd, loff_t length)
asmlinkage long SyS_ftruncate64(long fd, loff_t length)
SYSCALL_ALIAS(sys_ftruncate64, SyS_ftruncate64);
int do_fallocate(struct file *file, int mode, loff_t offset, loff_t len)
SYSCALL_DEFINE(fallocate)(int fd, int mode, loff_t offset, loff_t len)
asmlinkage long SyS_fallocate(long fd, long mode, loff_t offset, loff_t len)
SYSCALL_ALIAS(sys_fallocate, SyS_fallocate);
SYSCALL_DEFINE3(faccessat, int, dfd, const char __user *, filename, int, mode)
SYSCALL_DEFINE2(access, const char __user *, filename, int, mode)
SYSCALL_DEFINE1(chdir, const char __user *, filename)
SYSCALL_DEFINE1(fchdir, unsigned int, fd)
SYSCALL_DEFINE1(chroot, const char __user *, filename)
SYSCALL_DEFINE2(fchmod, unsigned int, fd, mode_t, mode)
SYSCALL_DEFINE3(fchmodat, int, dfd, const char __user *, filename, mode_t, mode)
SYSCALL_DEFINE2(chmod, const char __user *, filename, mode_t, mode)
static int chown_common(struct path *path, uid_t user, gid_t group)
SYSCALL_DEFINE3(chown, const char __user *, filename, uid_t, user, gid_t, group)
SYSCALL_DEFINE5(fchownat, int, dfd, const char __user *, filename, uid_t, user,
gid_t, group, int, flag)
SYSCALL_DEFINE3(lchown, const char __user *, filename, uid_t, user, gid_t, group)
SYSCALL_DEFINE3(fchown, unsigned int, fd, uid_t, user, gid_t, group)
static inline int __get_file_write_access(struct inode *inode,
struct vfsmount *mnt)
static struct file *__dentry_open(struct dentry *dentry, struct vfsmount *mnt,
struct file *f,
int (*open)(struct inode *, struct file *),
const struct cred *cred)
struct file *lookup_instantiate_filp(struct nameidata *nd, struct dentry *dentry,
int (*open)(struct inode *, struct file *))
EXPORT_SYMBOL_GPL(lookup_instantiate_filp);
struct file *nameidata_to_filp(struct nameidata *nd)
struct file *dentry_open(struct dentry *dentry, struct vfsmount *mnt, int flags,
const struct cred *cred)
EXPORT_SYMBOL(dentry_open);
static void __put_unused_fd(struct files_struct *files, unsigned int fd)
void put_unused_fd(unsigned int fd)
EXPORT_SYMBOL(put_unused_fd);
void fd_install(unsigned int fd, struct file *file)
EXPORT_SYMBOL(fd_install);
static inline int build_open_flags(int flags, int mode, struct open_flags *op)
struct file *filp_open(const char *filename, int flags, int mode)
EXPORT_SYMBOL(filp_open);
struct file *file_open_root(struct dentry *dentry, struct vfsmount *mnt,
const char *filename, int flags)
EXPORT_SYMBOL(file_open_root);
long do_sys_open(int dfd, const char __user *filename, int flags, int mode)
SYSCALL_DEFINE3(open, const char __user *, filename, int, flags, int, mode)
SYSCALL_DEFINE4(openat, int, dfd, const char __user *, filename, int, flags,
int, mode)
SYSCALL_DEFINE2(creat, const char __user *, pathname, int, mode)
int filp_close(struct file *filp, fl_owner_t id)
EXPORT_SYMBOL(filp_close);
SYSCALL_DEFINE1(close, unsigned int, fd)
EXPORT_SYMBOL(sys_close);
SYSCALL_DEFINE0(vhangup)
int generic_file_open(struct inode * inode, struct file * filp)
EXPORT_SYMBOL(generic_file_open);
int nonseekable_open(struct inode *inode, struct file *filp)
EXPORT_SYMBOL(nonseekable_open);
