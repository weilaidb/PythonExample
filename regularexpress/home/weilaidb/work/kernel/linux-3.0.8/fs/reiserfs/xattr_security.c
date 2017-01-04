static int
security_get(struct dentry *dentry, const char *name, void *buffer, size_t size,
int handler_flags)
static int
security_set(struct dentry *dentry, const char *name, const void *buffer,
size_t size, int flags, int handler_flags)
static size_t security_list(struct dentry *dentry, char *list, size_t list_len,
const char *name, size_t namelen, int handler_flags)
int reiserfs_security_init(struct inode *dir, struct inode *inode,
const struct qstr *qstr,
struct reiserfs_security_handle *sec)
int reiserfs_security_write(struct reiserfs_transaction_handle *th,
struct inode *inode,
struct reiserfs_security_handle *sec)
void reiserfs_security_free(struct reiserfs_security_handle *sec)
const struct xattr_handler reiserfs_xattr_security_handler = ;
