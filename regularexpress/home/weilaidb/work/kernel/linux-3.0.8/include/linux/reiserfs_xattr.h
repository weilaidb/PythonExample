#define _LINUX_REISERFS_XATTR_H
#define REISERFS_XATTR_MAGIC 0x52465841
struct reiserfs_xattr_header ;
struct reiserfs_security_handle ;
struct inode;
struct dentry;
struct iattr;
struct super_block;
struct nameidata;
int reiserfs_xattr_register_handlers(void) __init;
void reiserfs_xattr_unregister_handlers(void);
int reiserfs_xattr_init(struct super_block *sb, int mount_flags);
int reiserfs_lookup_privroot(struct super_block *sb);
int reiserfs_delete_xattrs(struct inode *inode);
int reiserfs_chown_xattrs(struct inode *inode, struct iattr *attrs);
int reiserfs_permission(struct inode *inode, int mask, unsigned int flags);
#define has_xattr_dir(inode) (REISERFS_I(inode)->i_flags & i_has_xattr_dir)
ssize_t reiserfs_getxattr(struct dentry *dentry, const char *name,
void *buffer, size_t size);
int reiserfs_setxattr(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags);
ssize_t reiserfs_listxattr(struct dentry *dentry, char *buffer, size_t size);
int reiserfs_removexattr(struct dentry *dentry, const char *name);
int reiserfs_xattr_get(struct inode *, const char *, void *, size_t);
int reiserfs_xattr_set(struct inode *, const char *, const void *, size_t, int);
int reiserfs_xattr_set_handle(struct reiserfs_transaction_handle *,
struct inode *, const char *, const void *,
size_t, int);
extern const struct xattr_handler reiserfs_xattr_user_handler;
extern const struct xattr_handler reiserfs_xattr_trusted_handler;
extern const struct xattr_handler reiserfs_xattr_security_handler;
int reiserfs_security_init(struct inode *dir, struct inode *inode,
const struct qstr *qstr,
struct reiserfs_security_handle *sec);
int reiserfs_security_write(struct reiserfs_transaction_handle *th,
struct inode *inode,
struct reiserfs_security_handle *sec);
void reiserfs_security_free(struct reiserfs_security_handle *sec);
static inline int reiserfs_xattrs_initialized(struct super_block *sb)
#define xattr_size(size) ((size) + sizeof(struct reiserfs_xattr_header))
static inline loff_t reiserfs_xattr_nblocks(struct inode *inode, loff_t size)
static inline size_t reiserfs_xattr_jcreate_nblocks(struct inode *inode)
static inline void reiserfs_init_xattr_rwsem(struct inode *inode)
#define reiserfs_getxattr NULL
#define reiserfs_setxattr NULL
#define reiserfs_listxattr NULL
#define reiserfs_removexattr NULL
static inline void reiserfs_init_xattr_rwsem(struct inode *inode)
static inline int reiserfs_security_init(struct inode *dir,
struct inode *inode,
const struct qstr *qstr,
struct reiserfs_security_handle *sec)
static inline int
reiserfs_security_write(struct reiserfs_transaction_handle *th,
struct inode *inode,
struct reiserfs_security_handle *sec)
static inline void reiserfs_security_free(struct reiserfs_security_handle *sec)
