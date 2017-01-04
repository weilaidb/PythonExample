static int
xattr_permission(struct inode *inode, const char *name, int mask)
int __vfs_setxattr_noperm(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags)
int
vfs_setxattr(struct dentry *dentry, const char *name, const void *value,
size_t size, int flags)
EXPORT_SYMBOL_GPL(vfs_setxattr);
ssize_t
xattr_getsecurity(struct inode *inode, const char *name, void *value,
size_t size)
EXPORT_SYMBOL_GPL(xattr_getsecurity);
ssize_t
vfs_getxattr(struct dentry *dentry, const char *name, void *value, size_t size)
EXPORT_SYMBOL_GPL(vfs_getxattr);
ssize_t
vfs_listxattr(struct dentry *d, char *list, size_t size)
EXPORT_SYMBOL_GPL(vfs_listxattr);
int
vfs_removexattr(struct dentry *dentry, const char *name)
EXPORT_SYMBOL_GPL(vfs_removexattr);
static long
setxattr(struct dentry *d, const char __user *name, const void __user *value,
size_t size, int flags)
SYSCALL_DEFINE5(setxattr, const char __user *, pathname,
const char __user *, name, const void __user *, value,
size_t, size, int, flags)
SYSCALL_DEFINE5(lsetxattr, const char __user *, pathname,
const char __user *, name, const void __user *, value,
size_t, size, int, flags)
SYSCALL_DEFINE5(fsetxattr, int, fd, const char __user *, name,
const void __user *,value, size_t, size, int, flags)
static ssize_t
getxattr(struct dentry *d, const char __user *name, void __user *value,
size_t size)
SYSCALL_DEFINE4(getxattr, const char __user *, pathname,
const char __user *, name, void __user *, value, size_t, size)
SYSCALL_DEFINE4(lgetxattr, const char __user *, pathname,
const char __user *, name, void __user *, value, size_t, size)
SYSCALL_DEFINE4(fgetxattr, int, fd, const char __user *, name,
void __user *, value, size_t, size)
static ssize_t
listxattr(struct dentry *d, char __user *list, size_t size)
SYSCALL_DEFINE3(listxattr, const char __user *, pathname, char __user *, list,
size_t, size)
SYSCALL_DEFINE3(llistxattr, const char __user *, pathname, char __user *, list,
size_t, size)
SYSCALL_DEFINE3(flistxattr, int, fd, char __user *, list, size_t, size)
static long
removexattr(struct dentry *d, const char __user *name)
SYSCALL_DEFINE2(removexattr, const char __user *, pathname,
const char __user *, name)
SYSCALL_DEFINE2(lremovexattr, const char __user *, pathname,
const char __user *, name)
SYSCALL_DEFINE2(fremovexattr, int, fd, const char __user *, name)
static const char *
strcmp_prefix(const char *a, const char *a_prefix)
#define for_each_xattr_handler(handlers, handler)		\
for ((handler) = *(handlers)++;			\
(handler) != NULL;			\
(handler) = *(handlers)++)
static const struct xattr_handler *
xattr_resolve_name(const struct xattr_handler **handlers, const char **name)
ssize_t
generic_getxattr(struct dentry *dentry, const char *name, void *buffer, size_t size)
ssize_t
generic_listxattr(struct dentry *dentry, char *buffer, size_t buffer_size)
int
generic_setxattr(struct dentry *dentry, const char *name, const void *value, size_t size, int flags)
int
generic_removexattr(struct dentry *dentry, const char *name)
EXPORT_SYMBOL(generic_getxattr);
EXPORT_SYMBOL(generic_listxattr);
EXPORT_SYMBOL(generic_setxattr);
EXPORT_SYMBOL(generic_removexattr);
