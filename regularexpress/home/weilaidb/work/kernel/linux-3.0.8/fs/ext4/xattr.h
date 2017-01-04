#define EXT4_XATTR_MAGIC		0xEA020000
#define EXT4_XATTR_REFCOUNT_MAX		1024
#define EXT4_XATTR_INDEX_USER			1
#define EXT4_XATTR_INDEX_POSIX_ACL_ACCESS	2
#define EXT4_XATTR_INDEX_POSIX_ACL_DEFAULT	3
#define EXT4_XATTR_INDEX_TRUSTED		4
#define	EXT4_XATTR_INDEX_LUSTRE			5
#define EXT4_XATTR_INDEX_SECURITY	        6
struct ext4_xattr_header ;
struct ext4_xattr_ibody_header ;
struct ext4_xattr_entry ;
#define EXT4_XATTR_PAD_BITS		2
#define EXT4_XATTR_PAD		(1<<EXT4_XATTR_PAD_BITS)
#define EXT4_XATTR_ROUND		(EXT4_XATTR_PAD-1)
#define EXT4_XATTR_LEN(name_len) \
(((name_len) + EXT4_XATTR_ROUND + \
sizeof(struct ext4_xattr_entry)) & ~EXT4_XATTR_ROUND)
#define EXT4_XATTR_NEXT(entry) \
((struct ext4_xattr_entry *)( \
(char *)(entry) + EXT4_XATTR_LEN((entry)->e_name_len)))
#define EXT4_XATTR_SIZE(size) \
(((size) + EXT4_XATTR_ROUND) & ~EXT4_XATTR_ROUND)
#define IHDR(inode, raw_inode) \
((struct ext4_xattr_ibody_header *) \
((void *)raw_inode + \
EXT4_GOOD_OLD_INODE_SIZE + \
EXT4_I(inode)->i_extra_isize))
#define IFIRST(hdr) ((struct ext4_xattr_entry *)((hdr)+1))
# ifdef CONFIG_EXT4_FS_XATTR
extern const struct xattr_handler ext4_xattr_user_handler;
extern const struct xattr_handler ext4_xattr_trusted_handler;
extern const struct xattr_handler ext4_xattr_acl_access_handler;
extern const struct xattr_handler ext4_xattr_acl_default_handler;
extern const struct xattr_handler ext4_xattr_security_handler;
extern ssize_t ext4_listxattr(struct dentry *, char *, size_t);
extern int ext4_xattr_get(struct inode *, int, const char *, void *, size_t);
extern int ext4_xattr_set(struct inode *, int, const char *, const void *, size_t, int);
extern int ext4_xattr_set_handle(handle_t *, struct inode *, int, const char *, const void *, size_t, int);
extern void ext4_xattr_delete_inode(handle_t *, struct inode *);
extern void ext4_xattr_put_super(struct super_block *);
extern int ext4_expand_extra_isize_ea(struct inode *inode, int new_extra_isize,
struct ext4_inode *raw_inode, handle_t *handle);
extern int __init ext4_init_xattr(void);
extern void ext4_exit_xattr(void);
extern const struct xattr_handler *ext4_xattr_handlers[];
# else
static inline int
ext4_xattr_get(struct inode *inode, int name_index, const char *name,
void *buffer, size_t size, int flags)
static inline int
ext4_xattr_set(struct inode *inode, int name_index, const char *name,
const void *value, size_t size, int flags)
static inline int
ext4_xattr_set_handle(handle_t *handle, struct inode *inode, int name_index,
const char *name, const void *value, size_t size, int flags)
static inline void
ext4_xattr_delete_inode(handle_t *handle, struct inode *inode)
static inline void
ext4_xattr_put_super(struct super_block *sb)
static __init inline int
ext4_init_xattr(void)
static inline void
ext4_exit_xattr(void)
static inline int
ext4_expand_extra_isize_ea(struct inode *inode, int new_extra_isize,
struct ext4_inode *raw_inode, handle_t *handle)
#define ext4_xattr_handlers	NULL
# endif
extern int ext4_init_security(handle_t *handle, struct inode *inode,
struct inode *dir, const struct qstr *qstr);
static inline int ext4_init_security(handle_t *handle, struct inode *inode,
struct inode *dir, const struct qstr *qstr)
