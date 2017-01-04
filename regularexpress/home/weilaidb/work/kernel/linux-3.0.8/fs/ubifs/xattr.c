#define MAX_XATTRS_PER_INODE 65535
enum ;
static const struct inode_operations empty_iops;
static const struct file_operations empty_fops;
static int create_xattr(struct ubifs_info *c, struct inode *host,
const struct qstr *nm, const void *value, int size)
static int change_xattr(struct ubifs_info *c, struct inode *host,
struct inode *inode, const void *value, int size)
static int check_namespace(const struct qstr *nm)
static struct inode *iget_xattr(struct ubifs_info *c, ino_t inum)
int ubifs_setxattr(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags)
ssize_t ubifs_getxattr(struct dentry *dentry, const char *name, void *buf,
size_t size)
ssize_t ubifs_listxattr(struct dentry *dentry, char *buffer, size_t size)
static int remove_xattr(struct ubifs_info *c, struct inode *host,
struct inode *inode, const struct qstr *nm)
int ubifs_removexattr(struct dentry *dentry, const char *name)
