#define _JFFS2_FS_XATTR_H_
#define JFFS2_XFLAGS_HOT	(0x01)
#define JFFS2_XFLAGS_BIND	(0x02)
#define JFFS2_XFLAGS_DEAD	(0x40)
#define JFFS2_XFLAGS_INVALID	(0x80)
struct jffs2_xattr_datum
;
struct jffs2_inode_cache;
struct jffs2_xattr_ref
;
#define XREF_DELETE_MARKER	(0x00000001)
static inline int is_xattr_ref_dead(struct jffs2_xattr_ref *ref)
extern void jffs2_init_xattr_subsystem(struct jffs2_sb_info *c);
extern void jffs2_build_xattr_subsystem(struct jffs2_sb_info *c);
extern void jffs2_clear_xattr_subsystem(struct jffs2_sb_info *c);
extern struct jffs2_xattr_datum *jffs2_setup_xattr_datum(struct jffs2_sb_info *c,
uint32_t xid, uint32_t version);
extern void jffs2_xattr_delete_inode(struct jffs2_sb_info *c, struct jffs2_inode_cache *ic);
extern void jffs2_xattr_free_inode(struct jffs2_sb_info *c, struct jffs2_inode_cache *ic);
extern int jffs2_garbage_collect_xattr_datum(struct jffs2_sb_info *c, struct jffs2_xattr_datum *xd,
struct jffs2_raw_node_ref *raw);
extern int jffs2_garbage_collect_xattr_ref(struct jffs2_sb_info *c, struct jffs2_xattr_ref *ref,
struct jffs2_raw_node_ref *raw);
extern int jffs2_verify_xattr(struct jffs2_sb_info *c);
extern void jffs2_release_xattr_datum(struct jffs2_sb_info *c, struct jffs2_xattr_datum *xd);
extern void jffs2_release_xattr_ref(struct jffs2_sb_info *c, struct jffs2_xattr_ref *ref);
extern int do_jffs2_getxattr(struct inode *inode, int xprefix, const char *xname,
char *buffer, size_t size);
extern int do_jffs2_setxattr(struct inode *inode, int xprefix, const char *xname,
const char *buffer, size_t size, int flags);
extern const struct xattr_handler *jffs2_xattr_handlers[];
extern const struct xattr_handler jffs2_user_xattr_handler;
extern const struct xattr_handler jffs2_trusted_xattr_handler;
extern ssize_t jffs2_listxattr(struct dentry *, char *, size_t);
#define jffs2_getxattr		generic_getxattr
#define jffs2_setxattr		generic_setxattr
#define jffs2_removexattr	generic_removexattr
#define jffs2_init_xattr_subsystem(c)
#define jffs2_build_xattr_subsystem(c)
#define jffs2_clear_xattr_subsystem(c)
#define jffs2_xattr_delete_inode(c, ic)
#define jffs2_xattr_free_inode(c, ic)
#define jffs2_verify_xattr(c)			(1)
#define jffs2_xattr_handlers	NULL
#define jffs2_listxattr		NULL
#define jffs2_getxattr		NULL
#define jffs2_setxattr		NULL
#define jffs2_removexattr	NULL
extern int jffs2_init_security(struct inode *inode, struct inode *dir,
const struct qstr *qstr);
extern const struct xattr_handler jffs2_security_xattr_handler;
#define jffs2_init_security(inode,dir,qstr)	(0)
