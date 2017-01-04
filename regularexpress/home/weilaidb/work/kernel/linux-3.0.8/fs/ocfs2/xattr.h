#define OCFS2_XATTR_H
enum ocfs2_xattr_type ;
struct ocfs2_security_xattr_info ;
extern const struct xattr_handler ocfs2_xattr_user_handler;
extern const struct xattr_handler ocfs2_xattr_trusted_handler;
extern const struct xattr_handler ocfs2_xattr_security_handler;
extern const struct xattr_handler ocfs2_xattr_acl_access_handler;
extern const struct xattr_handler ocfs2_xattr_acl_default_handler;
extern const struct xattr_handler *ocfs2_xattr_handlers[];
ssize_t ocfs2_listxattr(struct dentry *, char *, size_t);
int ocfs2_xattr_get_nolock(struct inode *, struct buffer_head *, int,
const char *, void *, size_t);
int ocfs2_xattr_set(struct inode *, int, const char *, const void *,
size_t, int);
int ocfs2_xattr_set_handle(handle_t *, struct inode *, struct buffer_head *,
int, const char *, const void *, size_t, int,
struct ocfs2_alloc_context *,
struct ocfs2_alloc_context *);
int ocfs2_has_inline_xattr_value_outside(struct inode *inode,
struct ocfs2_dinode *di);
int ocfs2_xattr_remove(struct inode *, struct buffer_head *);
int ocfs2_init_security_get(struct inode *, struct inode *,
const struct qstr *,
struct ocfs2_security_xattr_info *);
int ocfs2_init_security_set(handle_t *, struct inode *,
struct buffer_head *,
struct ocfs2_security_xattr_info *,
struct ocfs2_alloc_context *,
struct ocfs2_alloc_context *);
int ocfs2_calc_security_init(struct inode *,
struct ocfs2_security_xattr_info *,
int *, int *, struct ocfs2_alloc_context **);
int ocfs2_calc_xattr_init(struct inode *, struct buffer_head *,
int, struct ocfs2_security_xattr_info *,
int *, int *, int *);
struct ocfs2_xattr_value_buf ;
int ocfs2_xattr_attach_refcount_tree(struct inode *inode,
struct buffer_head *fe_bh,
struct ocfs2_caching_info *ref_ci,
struct buffer_head *ref_root_bh,
struct ocfs2_cached_dealloc_ctxt *dealloc);
int ocfs2_reflink_xattrs(struct inode *old_inode,
struct buffer_head *old_bh,
struct inode *new_inode,
struct buffer_head *new_bh,
bool preserve_security);
int ocfs2_init_security_and_acl(struct inode *dir,
struct inode *inode,
const struct qstr *qstr);
