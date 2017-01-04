#define __LINUX_POSIX_ACL_H
#define ACL_UNDEFINED_ID	(-1)
#define ACL_TYPE_ACCESS		(0x8000)
#define ACL_TYPE_DEFAULT	(0x4000)
#define ACL_USER_OBJ		(0x01)
#define ACL_USER		(0x02)
#define ACL_GROUP_OBJ		(0x04)
#define ACL_GROUP		(0x08)
#define ACL_MASK		(0x10)
#define ACL_OTHER		(0x20)
#define ACL_READ		(0x04)
#define ACL_WRITE		(0x02)
#define ACL_EXECUTE		(0x01)
struct posix_acl_entry ;
struct posix_acl ;
#define FOREACH_ACL_ENTRY(pa, acl, pe) \
for(pa=(acl)->a_entries, pe=pa+(acl)->a_count; pa<pe; pa++)
static inline struct posix_acl *
posix_acl_dup(struct posix_acl *acl)
static inline void
posix_acl_release(struct posix_acl *acl)
extern void posix_acl_init(struct posix_acl *, int);
extern struct posix_acl *posix_acl_alloc(int, gfp_t);
extern struct posix_acl *posix_acl_clone(const struct posix_acl *, gfp_t);
extern int posix_acl_valid(const struct posix_acl *);
extern int posix_acl_permission(struct inode *, const struct posix_acl *, int);
extern struct posix_acl *posix_acl_from_mode(mode_t, gfp_t);
extern int posix_acl_equiv_mode(const struct posix_acl *, mode_t *);
extern int posix_acl_create_masq(struct posix_acl *, mode_t *);
extern int posix_acl_chmod_masq(struct posix_acl *, mode_t);
extern struct posix_acl *get_posix_acl(struct inode *, int);
extern int set_posix_acl(struct inode *, int, struct posix_acl *);
static inline struct posix_acl *get_cached_acl(struct inode *inode, int type)
static inline int negative_cached_acl(struct inode *inode, int type)
static inline void set_cached_acl(struct inode *inode,
int type,
struct posix_acl *acl)
static inline void forget_cached_acl(struct inode *inode, int type)
static inline void forget_all_cached_acls(struct inode *inode)
static inline void cache_no_acl(struct inode *inode)
