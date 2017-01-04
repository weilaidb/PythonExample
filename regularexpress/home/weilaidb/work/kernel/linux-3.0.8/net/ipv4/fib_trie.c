#define VERSION "0.409"
#define MAX_STAT_DEPTH 32
#define KEYLENGTH (8*sizeof(t_key))
typedef unsigned int t_key;
#define T_TNODE 0
#define T_LEAF  1
#define NODE_TYPE_MASK	0x1UL
#define NODE_TYPE(node) ((node)->parent & NODE_TYPE_MASK)
#define IS_TNODE(n) (!(n->parent & T_LEAF))
#define IS_LEAF(n) (n->parent & T_LEAF)
struct rt_trie_node ;
struct leaf ;
struct leaf_info ;
struct tnode ;
struct trie_use_stats ;
struct trie_stat ;
struct trie ;
static void put_child(struct trie *t, struct tnode *tn, int i, struct rt_trie_node *n);
static void tnode_put_child_reorg(struct tnode *tn, int i, struct rt_trie_node *n,
int wasfull);
static struct rt_trie_node *resize(struct trie *t, struct tnode *tn);
static struct tnode *inflate(struct trie *t, struct tnode *tn);
static struct tnode *halve(struct trie *t, struct tnode *tn);
static struct tnode *tnode_free_head;
static size_t tnode_free_size;
static const int sync_pages = 128;
static struct kmem_cache *fn_alias_kmem __read_mostly;
static struct kmem_cache *trie_leaf_kmem __read_mostly;
static inline struct tnode *node_parent(const struct rt_trie_node *node)
static inline struct tnode *node_parent_rcu(const struct rt_trie_node *node)
static inline void node_set_parent(struct rt_trie_node *node, struct tnode *ptr)
static inline struct rt_trie_node *tnode_get_child(const struct tnode *tn, unsigned int i)
static inline struct rt_trie_node *tnode_get_child_rcu(const struct tnode *tn, unsigned int i)
static inline int tnode_child_length(const struct tnode *tn)
static inline t_key mask_pfx(t_key k, unsigned int l)
static inline t_key tkey_extract_bits(t_key a, unsigned int offset, unsigned int bits)
static inline int tkey_equals(t_key a, t_key b)
static inline int tkey_sub_equals(t_key a, int offset, int bits, t_key b)
static inline int tkey_mismatch(t_key a, int offset, t_key b)
static inline void check_tnode(const struct tnode *tn)
static const int halve_threshold = 25;
static const int inflate_threshold = 50;
static const int halve_threshold_root = 15;
static const int inflate_threshold_root = 30;
static void __alias_free_mem(struct rcu_head *head)
static inline void alias_free_mem_rcu(struct fib_alias *fa)
static void __leaf_free_rcu(struct rcu_head *head)
static inline void free_leaf(struct leaf *l)
static inline void free_leaf_info(struct leaf_info *leaf)
static struct tnode *tnode_alloc(size_t size)
static void __tnode_vfree(struct work_struct *arg)
static void __tnode_free_rcu(struct rcu_head *head)
static inline void tnode_free(struct tnode *tn)
static void tnode_free_safe(struct tnode *tn)
static void tnode_free_flush(void)
static struct leaf *leaf_new(void)
static struct leaf_info *leaf_info_new(int plen)
static struct tnode *tnode_new(t_key key, int pos, int bits)
static inline int tnode_full(const struct tnode *tn, const struct rt_trie_node *n)
static inline void put_child(struct trie *t, struct tnode *tn, int i,
struct rt_trie_node *n)
static void tnode_put_child_reorg(struct tnode *tn, int i, struct rt_trie_node *n,
int wasfull)
#define MAX_WORK 10
static struct rt_trie_node *resize(struct trie *t, struct tnode *tn)
static void tnode_clean_free(struct tnode *tn)
static struct tnode *inflate(struct trie *t, struct tnode *tn)
static struct tnode *halve(struct trie *t, struct tnode *tn)
static struct leaf_info *find_leaf_info(struct leaf *l, int plen)
static inline struct list_head *get_fa_head(struct leaf *l, int plen)
static void insert_leaf_info(struct hlist_head *head, struct leaf_info *new)
static struct leaf *
fib_find_node(struct trie *t, u32 key)
static void trie_rebalance(struct trie *t, struct tnode *tn)
static struct list_head *fib_insert_node(struct trie *t, u32 key, int plen)
int fib_table_insert(struct fib_table *tb, struct fib_config *cfg)
static int check_leaf(struct fib_table *tb, struct trie *t, struct leaf *l,
t_key key,  const struct flowi4 *flp,
struct fib_result *res, int fib_flags)
int fib_table_lookup(struct fib_table *tb, const struct flowi4 *flp,
struct fib_result *res, int fib_flags)
static void trie_leaf_remove(struct trie *t, struct leaf *l)
int fib_table_delete(struct fib_table *tb, struct fib_config *cfg)
static int trie_flush_list(struct list_head *head)
static int trie_flush_leaf(struct leaf *l)
static struct leaf *leaf_walk_rcu(struct tnode *p, struct rt_trie_node *c)
static struct leaf *trie_firstleaf(struct trie *t)
static struct leaf *trie_nextleaf(struct leaf *l)
static struct leaf *trie_leafindex(struct trie *t, int index)
int fib_table_flush(struct fib_table *tb)
void fib_free_table(struct fib_table *tb)
static int fn_trie_dump_fa(t_key key, int plen, struct list_head *fah,
struct fib_table *tb,
struct sk_buff *skb, struct netlink_callback *cb)
static int fn_trie_dump_leaf(struct leaf *l, struct fib_table *tb,
struct sk_buff *skb, struct netlink_callback *cb)
int fib_table_dump(struct fib_table *tb, struct sk_buff *skb,
struct netlink_callback *cb)
void __init fib_trie_init(void)
struct fib_table *fib_trie_table(u32 id)
struct fib_trie_iter ;
static struct rt_trie_node *fib_trie_get_next(struct fib_trie_iter *iter)
static struct rt_trie_node *fib_trie_get_first(struct fib_trie_iter *iter,
struct trie *t)
static void trie_collect_stats(struct trie *t, struct trie_stat *s)
static void trie_show_stats(struct seq_file *seq, struct trie_stat *stat)
static void trie_show_usage(struct seq_file *seq,
const struct trie_use_stats *stats)
static void fib_table_print(struct seq_file *seq, struct fib_table *tb)
static int fib_triestat_seq_show(struct seq_file *seq, void *v)
static int fib_triestat_seq_open(struct inode *inode, struct file *file)
static const struct file_operations fib_triestat_fops = ;
static struct rt_trie_node *fib_trie_get_idx(struct seq_file *seq, loff_t pos)
static void *fib_trie_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(RCU)
static void *fib_trie_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void fib_trie_seq_stop(struct seq_file *seq, void *v)
__releases(RCU)
static void seq_indent(struct seq_file *seq, int n)
static inline const char *rtn_scope(char *buf, size_t len, enum rt_scope_t s)
static const char *const rtn_type_names[__RTN_MAX] = ;
static inline const char *rtn_type(char *buf, size_t len, unsigned int t)
static int fib_trie_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations fib_trie_seq_ops = ;
static int fib_trie_seq_open(struct inode *inode, struct file *file)
static const struct file_operations fib_trie_fops = ;
struct fib_route_iter ;
static struct leaf *fib_route_get_idx(struct fib_route_iter *iter, loff_t pos)
static void *fib_route_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(RCU)
static void *fib_route_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void fib_route_seq_stop(struct seq_file *seq, void *v)
__releases(RCU)
static unsigned int fib_flag_trans(int type, __be32 mask, const struct fib_info *fi)
static int fib_route_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations fib_route_seq_ops = ;
static int fib_route_seq_open(struct inode *inode, struct file *file)
static const struct file_operations fib_route_fops = ;
int __net_init fib_proc_init(struct net *net)
void __net_exit fib_proc_exit(struct net *net)
