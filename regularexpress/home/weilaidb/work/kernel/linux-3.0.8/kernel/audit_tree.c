struct audit_tree;
struct audit_chunk;
struct audit_tree ;
struct audit_chunk ;
static LIST_HEAD(tree_list);
static LIST_HEAD(prune_list);
static struct fsnotify_group *audit_tree_group;
static struct audit_tree *alloc_tree(const char *s)
static inline void get_tree(struct audit_tree *tree)
static void __put_tree(struct rcu_head *rcu)
static inline void put_tree(struct audit_tree *tree)
const char *audit_tree_path(struct audit_tree *tree)
static void free_chunk(struct audit_chunk *chunk)
void audit_put_chunk(struct audit_chunk *chunk)
static void __put_chunk(struct rcu_head *rcu)
static void audit_tree_destroy_watch(struct fsnotify_mark *entry)
static struct audit_chunk *alloc_chunk(int count)
enum ;
static struct list_head chunk_hash_heads[HASH_SIZE];
static __cacheline_aligned_in_smp DEFINE_SPINLOCK(hash_lock);
static inline struct list_head *chunk_hash(const struct inode *inode)
static void insert_hash(struct audit_chunk *chunk)
struct audit_chunk *audit_tree_lookup(const struct inode *inode)
int audit_tree_match(struct audit_chunk *chunk, struct audit_tree *tree)
static struct audit_chunk *find_chunk(struct node *p)
static void untag_chunk(struct node *p)
static int create_chunk(struct inode *inode, struct audit_tree *tree)
static int tag_chunk(struct inode *inode, struct audit_tree *tree)
static void kill_rules(struct audit_tree *tree)
static void prune_one(struct audit_tree *victim)
static void trim_marked(struct audit_tree *tree)
static void audit_schedule_prune(void);
int audit_remove_tree_rule(struct audit_krule *rule)
static int compare_root(struct vfsmount *mnt, void *arg)
void audit_trim_trees(void)
int audit_make_tree(struct audit_krule *rule, char *pathname, u32 op)
void audit_put_tree(struct audit_tree *tree)
static int tag_mount(struct vfsmount *mnt, void *arg)
int audit_add_tree_rule(struct audit_krule *rule)
int audit_tag_tree(char *old, char *new)
static int prune_tree_thread(void *unused)
static void audit_schedule_prune(void)
void audit_kill_trees(struct list_head *list)
static void evict_chunk(struct audit_chunk *chunk)
static int audit_tree_handle_event(struct fsnotify_group *group,
struct fsnotify_mark *inode_mark,
struct fsnotify_mark *vfsmonut_mark,
struct fsnotify_event *event)
static void audit_tree_freeing_mark(struct fsnotify_mark *entry, struct fsnotify_group *group)
static bool audit_tree_send_event(struct fsnotify_group *group, struct inode *inode,
struct fsnotify_mark *inode_mark,
struct fsnotify_mark *vfsmount_mark,
__u32 mask, void *data, int data_type)
static const struct fsnotify_ops audit_tree_ops = ;
static int __init audit_tree_init(void)
__initcall(audit_tree_init);
