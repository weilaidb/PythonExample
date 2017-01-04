#define __LINUX_DCACHE_H
struct nameidata;
struct path;
struct vfsmount;
#define IS_ROOT(x) ((x) == (x)->d_parent)
struct qstr ;
struct dentry_stat_t ;
extern struct dentry_stat_t dentry_stat;
static inline int dentry_cmp(const unsigned char *cs, size_t scount,
const unsigned char *ct, size_t tcount)
#define init_name_hash()		0
static inline unsigned long
partial_name_hash(unsigned long c, unsigned long prevhash)
static inline unsigned long end_name_hash(unsigned long hash)
static inline unsigned int
full_name_hash(const unsigned char *name, unsigned int len)
# define DNAME_INLINE_LEN 32
# ifdef CONFIG_SMP
#  define DNAME_INLINE_LEN 36
# else
#  define DNAME_INLINE_LEN 40
# endif
struct dentry ;
enum dentry_d_lock_class
;
struct dentry_operations  ____cacheline_aligned;
#define DCACHE_AUTOFS_PENDING 0x0001
#define DCACHE_NFSFS_RENAMED  0x0002
#define	DCACHE_DISCONNECTED	0x0004
#define DCACHE_REFERENCED	0x0008
#define DCACHE_RCUACCESS	0x0010
#define DCACHE_INOTIFY_PARENT_WATCHED 0x0020
#define DCACHE_COOKIE		0x0040
#define DCACHE_FSNOTIFY_PARENT_WATCHED 0x0080
#define DCACHE_CANT_MOUNT	0x0100
#define DCACHE_GENOCIDE		0x0200
#define DCACHE_OP_HASH		0x1000
#define DCACHE_OP_COMPARE	0x2000
#define DCACHE_OP_REVALIDATE	0x4000
#define DCACHE_OP_DELETE	0x8000
#define DCACHE_MOUNTED		0x10000
#define DCACHE_NEED_AUTOMOUNT	0x20000
#define DCACHE_MANAGE_TRANSIT	0x40000
#define DCACHE_MANAGED_DENTRY \
(DCACHE_MOUNTED|DCACHE_NEED_AUTOMOUNT|DCACHE_MANAGE_TRANSIT)
extern seqlock_t rename_lock;
static inline int dname_external(struct dentry *dentry)
extern void d_instantiate(struct dentry *, struct inode *);
extern struct dentry * d_instantiate_unique(struct dentry *, struct inode *);
extern struct dentry * d_materialise_unique(struct dentry *, struct inode *);
extern void __d_drop(struct dentry *dentry);
extern void d_drop(struct dentry *dentry);
extern void d_delete(struct dentry *);
extern void d_set_d_op(struct dentry *dentry, const struct dentry_operations *op);
extern struct dentry * d_alloc(struct dentry *, const struct qstr *);
extern struct dentry * d_alloc_pseudo(struct super_block *, const struct qstr *);
extern struct dentry * d_splice_alias(struct inode *, struct dentry *);
extern struct dentry * d_add_ci(struct dentry *, struct inode *, struct qstr *);
extern struct dentry * d_obtain_alias(struct inode *);
extern void shrink_dcache_sb(struct super_block *);
extern void shrink_dcache_parent(struct dentry *);
extern void shrink_dcache_for_umount(struct super_block *);
extern int d_invalidate(struct dentry *);
extern struct dentry * d_alloc_root(struct inode *);
extern void d_genocide(struct dentry *);
extern struct dentry *d_find_alias(struct inode *);
extern void d_prune_aliases(struct inode *);
extern int have_submounts(struct dentry *);
extern void d_rehash(struct dentry *);
static inline void d_add(struct dentry *entry, struct inode *inode)
static inline struct dentry *d_add_unique(struct dentry *entry, struct inode *inode)
extern void dentry_update_name_case(struct dentry *, struct qstr *);
extern void d_move(struct dentry *, struct dentry *);
extern struct dentry *d_ancestor(struct dentry *, struct dentry *);
extern struct dentry *d_lookup(struct dentry *, struct qstr *);
extern struct dentry *d_hash_and_lookup(struct dentry *, struct qstr *);
extern struct dentry *__d_lookup(struct dentry *, struct qstr *);
extern struct dentry *__d_lookup_rcu(struct dentry *parent, struct qstr *name,
unsigned *seq, struct inode **inode);
static inline int __d_rcu_to_refcount(struct dentry *dentry, unsigned seq)
extern int d_validate(struct dentry *, struct dentry *);
extern char *dynamic_dname(struct dentry *, char *, int, const char *, ...);
extern char *__d_path(const struct path *path, struct path *root, char *, int);
extern char *d_path(const struct path *, char *, int);
extern char *d_path_with_unreachable(const struct path *, char *, int);
extern char *dentry_path_raw(struct dentry *, char *, int);
extern char *dentry_path(struct dentry *, char *, int);
static inline struct dentry *dget_dlock(struct dentry *dentry)
static inline struct dentry *dget(struct dentry *dentry)
extern struct dentry *dget_parent(struct dentry *dentry);
static inline int d_unhashed(struct dentry *dentry)
static inline int d_unlinked(struct dentry *dentry)
static inline int cant_mount(struct dentry *dentry)
static inline void dont_mount(struct dentry *dentry)
extern void dput(struct dentry *);
static inline bool d_managed(struct dentry *dentry)
static inline bool d_mountpoint(struct dentry *dentry)
extern struct dentry *lookup_create(struct nameidata *nd, int is_dir);
extern int sysctl_vfs_cache_pressure;
