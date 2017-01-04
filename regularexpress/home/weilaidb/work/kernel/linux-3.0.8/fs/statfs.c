static int flags_by_mnt(int mnt_flags)
static int flags_by_sb(int s_flags)
static int calculate_f_flags(struct vfsmount *mnt)
int statfs_by_dentry(struct dentry *dentry, struct kstatfs *buf)
int vfs_statfs(struct path *path, struct kstatfs *buf)
EXPORT_SYMBOL(vfs_statfs);
int user_statfs(const char __user *pathname, struct kstatfs *st)
int fd_statfs(int fd, struct kstatfs *st)
static int do_statfs_native(struct kstatfs *st, struct statfs __user *p)
static int do_statfs64(struct kstatfs *st, struct statfs64 __user *p)
SYSCALL_DEFINE2(statfs, const char __user *, pathname, struct statfs __user *, buf)
SYSCALL_DEFINE3(statfs64, const char __user *, pathname, size_t, sz, struct statfs64 __user *, buf)
SYSCALL_DEFINE2(fstatfs, unsigned int, fd, struct statfs __user *, buf)
SYSCALL_DEFINE3(fstatfs64, unsigned int, fd, size_t, sz, struct statfs64 __user *, buf)
SYSCALL_DEFINE2(ustat, unsigned, dev, struct ustat __user *, ubuf)