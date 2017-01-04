static unsigned int i_hash_mask __read_mostly;
static unsigned int i_hash_shift __read_mostly;
static struct hlist_head *inode_hashtable __read_mostly;
static __cacheline_aligned_in_smp DEFINE_SPINLOCK(inode_hash_lock);
static LIST_HEAD(inode_lru);
static DEFINE_SPINLOCK(inode_lru_lock);
__cacheline_aligned_in_smp DEFINE_SPINLOCK(inode_sb_list_lock);
__cacheline_aligned_in_smp DEFINE_SPINLOCK(inode_wb_list_lock);
static DECLARE_RWSEM(iprune_sem);
const struct address_space_operations empty_aops = ;
EXPORT_SYMBOL(empty_aops);
struct inodes_stat_t inodes_stat;
static DEFINE_PER_CPU(unsigned int, nr_inodes);
static struct kmem_cache *inode_cachep __read_mostly;
static int get_nr_inodes(void)
static inline int get_nr_inodes_unused(void)
int get_nr_dirty_inodes(void)
int proc_nr_inodes(ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
int inode_init_always(struct super_block *sb, struct inode *inode)
EXPORT_SYMBOL(inode_init_always);
static struct inode *alloc_inode(struct super_block *sb)
void free_inode_nonrcu(struct inode *inode)
EXPORT_SYMBOL(free_inode_nonrcu);
void __destroy_inode(struct inode *inode)
EXPORT_SYMBOL(__destroy_inode);
static void i_callback(struct rcu_head *head)
static void destroy_inode(struct inode *inode)
void address_space_init_once(struct address_space *mapping)
EXPORT_SYMBOL(address_space_init_once);
void inode_init_once(struct inode *inode)
EXPORT_SYMBOL(inode_init_once);
static void init_once(void *foo)
void __iget(struct inode *inode)
void ihold(struct inode *inode)
EXPORT_SYMBOL(ihold);
static void inode_lru_list_add(struct inode *inode)
static void inode_lru_list_del(struct inode *inode)
void inode_sb_list_add(struct inode *inode)
EXPORT_SYMBOL_GPL(inode_sb_list_add);
static inline void inode_sb_list_del(struct inode *inode)
static unsigned long hash(struct super_block *sb, unsigned long hashval)
void __insert_inode_hash(struct inode *inode, unsigned long hashval)
EXPORT_SYMBOL(__insert_inode_hash);
void remove_inode_hash(struct inode *inode)
EXPORT_SYMBOL(remove_inode_hash);
void end_writeback(struct inode *inode)
EXPORT_SYMBOL(end_writeback);
static void evict(struct inode *inode)
static void dispose_list(struct list_head *head)
void evict_inodes(struct super_block *sb)
int invalidate_inodes(struct super_block *sb, bool kill_dirty)
static int can_unuse(struct inode *inode)
static void prune_icache(int nr_to_scan)
static int shrink_icache_memory(struct shrinker *shrink,
struct shrink_control *sc)
static struct shrinker icache_shrinker = ;
static void __wait_on_freeing_inode(struct inode *inode);
static struct inode *find_inode(struct super_block *sb,
struct hlist_head *head,
int (*test)(struct inode *, void *),
void *data)
static struct inode *find_inode_fast(struct super_block *sb,
struct hlist_head *head, unsigned long ino)
#define LAST_INO_BATCH 1024
static DEFINE_PER_CPU(unsigned int, last_ino);
unsigned int get_next_ino(void)
EXPORT_SYMBOL(get_next_ino);
struct inode *new_inode(struct super_block *sb)
EXPORT_SYMBOL(new_inode);
void unlock_new_inode(struct inode *inode)
EXPORT_SYMBOL(unlock_new_inode);
struct inode *iget5_locked(struct super_block *sb, unsigned long hashval,
int (*test)(struct inode *, void *),
int (*set)(struct inode *, void *), void *data)
EXPORT_SYMBOL(iget5_locked);
struct inode *iget_locked(struct super_block *sb, unsigned long ino)
EXPORT_SYMBOL(iget_locked);
static int test_inode_iunique(struct super_block *sb, unsigned long ino)
ino_t iunique(struct super_block *sb, ino_t max_reserved)
EXPORT_SYMBOL(iunique);
struct inode *igrab(struct inode *inode)
EXPORT_SYMBOL(igrab);
struct inode *ilookup5_nowait(struct super_block *sb, unsigned long hashval,
int (*test)(struct inode *, void *), void *data)
EXPORT_SYMBOL(ilookup5_nowait);
struct inode *ilookup5(struct super_block *sb, unsigned long hashval,
int (*test)(struct inode *, void *), void *data)
EXPORT_SYMBOL(ilookup5);
struct inode *ilookup(struct super_block *sb, unsigned long ino)
EXPORT_SYMBOL(ilookup);
int insert_inode_locked(struct inode *inode)
EXPORT_SYMBOL(insert_inode_locked);
int insert_inode_locked4(struct inode *inode, unsigned long hashval,
int (*test)(struct inode *, void *), void *data)
EXPORT_SYMBOL(insert_inode_locked4);
int generic_delete_inode(struct inode *inode)
EXPORT_SYMBOL(generic_delete_inode);
int generic_drop_inode(struct inode *inode)
EXPORT_SYMBOL_GPL(generic_drop_inode);
static void iput_final(struct inode *inode)
void iput(struct inode *inode)
EXPORT_SYMBOL(iput);
sector_t bmap(struct inode *inode, sector_t block)
EXPORT_SYMBOL(bmap);
static int relatime_need_update(struct vfsmount *mnt, struct inode *inode,
struct timespec now)
void touch_atime(struct vfsmount *mnt, struct dentry *dentry)
EXPORT_SYMBOL(touch_atime);
void file_update_time(struct file *file)
EXPORT_SYMBOL(file_update_time);
int inode_needs_sync(struct inode *inode)
EXPORT_SYMBOL(inode_needs_sync);
int inode_wait(void *word)
EXPORT_SYMBOL(inode_wait);
static void __wait_on_freeing_inode(struct inode *inode)
static __initdata unsigned long ihash_entries;
static int __init set_ihash_entries(char *str)
__setup("ihash_entries=", set_ihash_entries);
void __init inode_init_early(void)
void __init inode_init(void)
void init_special_inode(struct inode *inode, umode_t mode, dev_t rdev)
EXPORT_SYMBOL(init_special_inode);
void inode_init_owner(struct inode *inode, const struct inode *dir,
mode_t mode)
EXPORT_SYMBOL(inode_init_owner);
bool inode_owner_or_capable(const struct inode *inode)
EXPORT_SYMBOL(inode_owner_or_capable);
