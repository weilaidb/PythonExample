static int hfsplus_ioctl_getflags(struct file *file, int __user *user_flags)
static int hfsplus_ioctl_setflags(struct file *file, int __user *user_flags)
long hfsplus_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
int hfsplus_setxattr(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags)
ssize_t hfsplus_getxattr(struct dentry *dentry, const char *name,
void *value, size_t size)
#define HFSPLUS_ATTRLIST_SIZE (sizeof("hfs.creator")+sizeof("hfs.type"))
ssize_t hfsplus_listxattr(struct dentry *dentry, char *buffer, size_t size)
