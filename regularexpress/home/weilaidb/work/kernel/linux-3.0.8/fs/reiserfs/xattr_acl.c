static int reiserfs_set_acl(struct reiserfs_transaction_handle *th,
struct inode *inode, int type,
struct posix_acl *acl);
static int
posix_acl_set(struct dentry *dentry, const char *name, const void *value,
size_t size, int flags, int type)
static int
posix_acl_get(struct dentry *dentry, const char *name, void *buffer,
size_t size, int type)
static struct posix_acl *posix_acl_from_disk(const void *value, size_t size)
static void *posix_acl_to_disk(const struct posix_acl *acl, size_t * size)
struct posix_acl *reiserfs_get_acl(struct inode *inode, int type)
static int
reiserfs_set_acl(struct reiserfs_transaction_handle *th, struct inode *inode,
int type, struct posix_acl *acl)
int
reiserfs_inherit_default_acl(struct reiserfs_transaction_handle *th,
struct inode *dir, struct dentry *dentry,
struct inode *inode)
int reiserfs_cache_default_acl(struct inode *inode)
int reiserfs_acl_chmod(struct inode *inode)
static size_t posix_acl_access_list(struct dentry *dentry, char *list,
size_t list_size, const char *name,
size_t name_len, int type)
const struct xattr_handler reiserfs_posix_acl_access_handler = ;
static size_t posix_acl_default_list(struct dentry *dentry, char *list,
size_t list_size, const char *name,
size_t name_len, int type)
const struct xattr_handler reiserfs_posix_acl_default_handler = ;
