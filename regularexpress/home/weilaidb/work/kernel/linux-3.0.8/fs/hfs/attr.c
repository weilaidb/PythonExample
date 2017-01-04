int hfs_setxattr(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags)
ssize_t hfs_getxattr(struct dentry *dentry, const char *name,
void *value, size_t size)
#define HFS_ATTRLIST_SIZE (sizeof("hfs.creator")+sizeof("hfs.type"))
ssize_t hfs_listxattr(struct dentry *dentry, char *buffer, size_t size)
