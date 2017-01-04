int sysctl_vfs_cache_pressure __read_mostly = 100;
EXPORT_SYMBOL_GPL(sysctl_vfs_cache_pressure);
static __cacheline_aligned_in_smp DEFINE_SPINLOCK(dcache_lru_lock);
__cacheline_aligned_in_smp DEFINE_SEQLOCK(rename_lock);
EXPORT_SYMBOL(rename_lock);
static struct kmem_cache *dentry_cache __read_mostly;
#define D_HASHBITS     d_hash_shift
#define D_HASHMASK     d_hash_mask
static unsigned int d_hash_mask __read_mostly;
static unsigned int d_hash_shift __read_mostly;
static struct hlist_bl_head *dentry_hashtable __read_mostly;
static inline struct hlist_bl_head *d_hash(struct dentry *parent,
unsigned long hash)
struct dentry_stat_t dentry_stat = ;
static DEFINE_PER_CPU(unsigned int, nr_dentry);
#if defined(CONFIG_SYSCTL) && defined(CONFIG_PROC_FS)
static int get_nr_dentry(void)
int proc_nr_dentry(ctl_table *table, int write, void __user *buffer,
size_t *lenp, loff_t *ppos)
static void __d_free(struct rcu_head *head)
static void d_free(struct dentry *dentry)
static inline void dentry_rcuwalk_barrier(struct dentry *dentry)
static void dentry_iput(struct dentry * dentry)
__releases(dentry->d_lock)
__releases(dentry->d_inode->i_lock)
static void dentry_unlink_inode(struct dentry * dentry)
__releases(dentry->d_lock)
__releases(dentry->d_inode->i_lock)
static void dentry_lru_add(struct dentry *dentry)
static void __dentry_lru_del(struct dentry *dentry)
static void dentry_lru_del(struct dentry *dentry)
static void dentry_lru_move_tail(struct dentry *dentry)
static struct dentry *d_kill(struct dentry *dentry, struct dentry *parent)
__releases(dentry->d_lock)
__releases(parent->d_lock)
__releases(dentry->d_inode->i_lock)
void __d_drop(struct dentry *dentry)
EXPORT_SYMBOL(__d_drop);
void d_drop(struct dentry *dentry)
EXPORT_SYMBOL(d_drop);
static inline struct dentry *dentry_kill(struct dentry *dentry, int ref)
__releases(dentry->d_lock)
void dput(struct dentry *dentry)
EXPORT_SYMBOL(dput);
int d_invalidate(struct dentry * dentry)
EXPORT_SYMBOL(d_invalidate);
static inline void __dget_dlock(struct dentry *dentry)
static inline void __dget(struct dentry *dentry)
struct dentry *dget_parent(struct dentry *dentry)
EXPORT_SYMBOL(dget_parent);
static struct dentry *__d_find_alias(struct inode *inode, int want_discon)
struct dentry *d_find_alias(struct inode *inode)
EXPORT_SYMBOL(d_find_alias);
void d_prune_aliases(struct inode *inode)
EXPORT_SYMBOL(d_prune_aliases);
static void try_prune_one_dentry(struct dentry *dentry)
__releases(dentry->d_lock)
static void shrink_dentry_list(struct list_head *list)
static void __shrink_dcache_sb(struct super_block *sb, int *count, int flags)
static void prune_dcache(int count)
void shrink_dcache_sb(struct super_block *sb)
EXPORT_SYMBOL(shrink_dcache_sb);
static void shrink_dcache_for_umount_subtree(struct dentry *dentry)
void shrink_dcache_for_umount(struct super_block *sb)
static struct dentry *try_to_ascend(struct dentry *old, int locked, unsigned seq)
int have_submounts(struct dentry *parent)
EXPORT_SYMBOL(have_submounts);
static int select_parent(struct dentry * parent)
void shrink_dcache_parent(struct dentry * parent)
EXPORT_SYMBOL(shrink_dcache_parent);
static int shrink_dcache_memory(struct shrinker *shrink,
struct shrink_control *sc)
static struct shrinker dcache_shrinker = ;
struct dentry *d_alloc(struct dentry * parent, const struct qstr *name)
EXPORT_SYMBOL(d_alloc);
struct dentry *d_alloc_pseudo(struct super_block *sb, const struct qstr *name)
EXPORT_SYMBOL(d_alloc_pseudo);
struct dentry *d_alloc_name(struct dentry *parent, const char *name)
EXPORT_SYMBOL(d_alloc_name);
void d_set_d_op(struct dentry *dentry, const struct dentry_operations *op)
EXPORT_SYMBOL(d_set_d_op);
static void __d_instantiate(struct dentry *dentry, struct inode *inode)
void d_instantiate(struct dentry *entry, struct inode * inode)
EXPORT_SYMBOL(d_instantiate);
static struct dentry *__d_instantiate_unique(struct dentry *entry,
struct inode *inode)
struct dentry *d_instantiate_unique(struct dentry *entry, struct inode *inode)
EXPORT_SYMBOL(d_instantiate_unique);
struct dentry * d_alloc_root(struct inode * root_inode)
EXPORT_SYMBOL(d_alloc_root);
static struct dentry * __d_find_any_alias(struct inode *inode)
static struct dentry * d_find_any_alias(struct inode *inode)
struct dentry *d_obtain_alias(struct inode *inode)
EXPORT_SYMBOL(d_obtain_alias);
struct dentry *d_splice_alias(struct inode *inode, struct dentry *dentry)
EXPORT_SYMBOL(d_splice_alias);
struct dentry *d_add_ci(struct dentry *dentry, struct inode *inode,
struct qstr *name)
EXPORT_SYMBOL(d_add_ci);
struct dentry *__d_lookup_rcu(struct dentry *parent, struct qstr *name,
unsigned *seq, struct inode **inode)
struct dentry *d_lookup(struct dentry *parent, struct qstr *name)
EXPORT_SYMBOL(d_lookup);
struct dentry *__d_lookup(struct dentry *parent, struct qstr *name)
struct dentry *d_hash_and_lookup(struct dentry *dir, struct qstr *name)
int d_validate(struct dentry *dentry, struct dentry *dparent)
EXPORT_SYMBOL(d_validate);
void d_delete(struct dentry * dentry)
EXPORT_SYMBOL(d_delete);
static void __d_rehash(struct dentry * entry, struct hlist_bl_head *b)
static void _d_rehash(struct dentry * entry)
void d_rehash(struct dentry * entry)
EXPORT_SYMBOL(d_rehash);
void dentry_update_name_case(struct dentry *dentry, struct qstr *name)
EXPORT_SYMBOL(dentry_update_name_case);
static void switch_names(struct dentry *dentry, struct dentry *target)
static void dentry_lock_for_move(struct dentry *dentry, struct dentry *target)
static void dentry_unlock_parents_for_move(struct dentry *dentry,
struct dentry *target)
static void __d_move(struct dentry * dentry, struct dentry * target)
void d_move(struct dentry *dentry, struct dentry *target)
EXPORT_SYMBOL(d_move);
struct dentry *d_ancestor(struct dentry *p1, struct dentry *p2)
static struct dentry *__d_unalias(struct inode *inode,
struct dentry *dentry, struct dentry *alias)
static void __d_materialise_dentry(struct dentry *dentry, struct dentry *anon)
struct dentry *d_materialise_unique(struct dentry *dentry, struct inode *inode)
EXPORT_SYMBOL_GPL(d_materialise_unique);
static int prepend(char **buffer, int *buflen, const char *str, int namelen)
static int prepend_name(char **buffer, int *buflen, struct qstr *name)
static int prepend_path(const struct path *path, struct path *root,
char **buffer, int *buflen)
char *__d_path(const struct path *path, struct path *root,
char *buf, int buflen)
static int path_with_deleted(const struct path *path, struct path *root,
char **buf, int *buflen)
static int prepend_unreachable(char **buffer, int *buflen)
char *d_path(const struct path *path, char *buf, int buflen)
EXPORT_SYMBOL(d_path);
char *d_path_with_unreachable(const struct path *path, char *buf, int buflen)
char *dynamic_dname(struct dentry *dentry, char *buffer, int buflen,
const char *fmt, ...)
static char *__dentry_path(struct dentry *dentry, char *buf, int buflen)
char *dentry_path_raw(struct dentry *dentry, char *buf, int buflen)
EXPORT_SYMBOL(dentry_path_raw);
char *dentry_path(struct dentry *dentry, char *buf, int buflen)
SYSCALL_DEFINE2(getcwd, char __user *, buf, unsigned long, size)
int is_subdir(struct dentry *new_dentry, struct dentry *old_dentry)
int path_is_under(struct path *path1, struct path *path2)
EXPORT_SYMBOL(path_is_under);
void d_genocide(struct dentry *root)
ino_t find_inode_number(struct dentry *dir, struct qstr *name)
EXPORT_SYMBOL(find_inode_number);
static __initdata unsigned long dhash_entries;
static int __init set_dhash_entries(char *str)
__setup("dhash_entries=", set_dhash_entries);
static void __init dcache_init_early(void)
static void __init dcache_init(void)
struct kmem_cache *names_cachep __read_mostly;
EXPORT_SYMBOL(names_cachep);
EXPORT_SYMBOL(d_genocide);
void __init vfs_caches_init_early(void)
void __init vfs_caches_init(unsigned long mempages)
