#define REISERFS_ACL_VERSION	0x0001
typedef struct  reiserfs_acl_entry;
typedef struct  reiserfs_acl_entry_short;
typedef struct  reiserfs_acl_header;
static inline size_t reiserfs_acl_size(int count)
static inline int reiserfs_acl_count(size_t size)
struct posix_acl *reiserfs_get_acl(struct inode *inode, int type);
int reiserfs_acl_chmod(struct inode *inode);
int reiserfs_inherit_default_acl(struct reiserfs_transaction_handle *th,
struct inode *dir, struct dentry *dentry,
struct inode *inode);
int reiserfs_cache_default_acl(struct inode *dir);
extern const struct xattr_handler reiserfs_posix_acl_default_handler;
extern const struct xattr_handler reiserfs_posix_acl_access_handler;
#define reiserfs_cache_default_acl(inode) 0
static inline struct posix_acl *reiserfs_get_acl(struct inode *inode, int type)
static inline int reiserfs_acl_chmod(struct inode *inode)
static inline int
reiserfs_inherit_default_acl(struct reiserfs_transaction_handle *th,
const struct inode *dir, struct dentry *dentry,
struct inode *inode)
