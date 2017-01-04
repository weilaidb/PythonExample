#define RT6_DEBUG 2
#if RT6_DEBUG >= 3
#define RT6_TRACE(x...) printk(KERN_DEBUG x)
#define RT6_TRACE(x...) do  while (0)
static struct kmem_cache * fib6_node_kmem __read_mostly;
enum fib_walk_state_t
;
struct fib6_cleaner_t
;
static DEFINE_RWLOCK(fib6_walker_lock);
#define FWS_INIT FWS_S
#define FWS_INIT FWS_L
static void fib6_prune_clones(struct net *net, struct fib6_node *fn,
struct rt6_info *rt);
static struct rt6_info *fib6_find_prefix(struct net *net, struct fib6_node *fn);
static struct fib6_node *fib6_repair_tree(struct net *net, struct fib6_node *fn);
static int fib6_walk(struct fib6_walker_t *w);
static int fib6_walk_continue(struct fib6_walker_t *w);
static __u32 rt_sernum;
static void fib6_gc_timer_cb(unsigned long arg);
static LIST_HEAD(fib6_walkers);
#define FOR_WALKERS(w) list_for_each_entry(w, &fib6_walkers, lh)
static inline void fib6_walker_link(struct fib6_walker_t *w)
static inline void fib6_walker_unlink(struct fib6_walker_t *w)
static __inline__ u32 fib6_new_sernum(void)
#if defined(__LITTLE_ENDIAN)
# define BITOP_BE32_SWIZZLE	(0x1F & ~7)
# define BITOP_BE32_SWIZZLE	0
static __inline__ __be32 addr_bit_set(const void *token, int fn_bit)
static __inline__ struct fib6_node * node_alloc(void)
static __inline__ void node_free(struct fib6_node * fn)
static __inline__ void rt6_release(struct rt6_info *rt)
static void fib6_link_table(struct net *net, struct fib6_table *tb)
static struct fib6_table *fib6_alloc_table(struct net *net, u32 id)
struct fib6_table *fib6_new_table(struct net *net, u32 id)
struct fib6_table *fib6_get_table(struct net *net, u32 id)
static void __net_init fib6_tables_init(struct net *net)
struct fib6_table *fib6_new_table(struct net *net, u32 id)
struct fib6_table *fib6_get_table(struct net *net, u32 id)
struct dst_entry *fib6_rule_lookup(struct net *net, struct flowi6 *fl6,
int flags, pol_lookup_t lookup)
static void __net_init fib6_tables_init(struct net *net)
static int fib6_dump_node(struct fib6_walker_t *w)
static void fib6_dump_end(struct netlink_callback *cb)
static int fib6_dump_done(struct netlink_callback *cb)
static int fib6_dump_table(struct fib6_table *table, struct sk_buff *skb,
struct netlink_callback *cb)
static int inet6_dump_fib(struct sk_buff *skb, struct netlink_callback *cb)
static struct fib6_node * fib6_add_1(struct fib6_node *root, void *addr,
int addrlen, int plen,
int offset)
static int fib6_add_rt2node(struct fib6_node *fn, struct rt6_info *rt,
struct nl_info *info)
static __inline__ void fib6_start_gc(struct net *net, struct rt6_info *rt)
void fib6_force_start_gc(struct net *net)
int fib6_add(struct fib6_node *root, struct rt6_info *rt, struct nl_info *info)
struct lookup_args ;
static struct fib6_node * fib6_lookup_1(struct fib6_node *root,
struct lookup_args *args)
struct fib6_node * fib6_lookup(struct fib6_node *root, const struct in6_addr *daddr,
const struct in6_addr *saddr)
static struct fib6_node * fib6_locate_1(struct fib6_node *root,
const struct in6_addr *addr,
int plen, int offset)
struct fib6_node * fib6_locate(struct fib6_node *root,
const struct in6_addr *daddr, int dst_len,
const struct in6_addr *saddr, int src_len)
static struct rt6_info *fib6_find_prefix(struct net *net, struct fib6_node *fn)
static struct fib6_node *fib6_repair_tree(struct net *net,
struct fib6_node *fn)
static void fib6_del_route(struct fib6_node *fn, struct rt6_info **rtp,
struct nl_info *info)
int fib6_del(struct rt6_info *rt, struct nl_info *info)
static int fib6_walk_continue(struct fib6_walker_t *w)
static int fib6_walk(struct fib6_walker_t *w)
static int fib6_clean_node(struct fib6_walker_t *w)
static void fib6_clean_tree(struct net *net, struct fib6_node *root,
int (*func)(struct rt6_info *, void *arg),
int prune, void *arg)
void fib6_clean_all(struct net *net, int (*func)(struct rt6_info *, void *arg),
int prune, void *arg)
static int fib6_prune_clone(struct rt6_info *rt, void *arg)
static void fib6_prune_clones(struct net *net, struct fib6_node *fn,
struct rt6_info *rt)
static struct fib6_gc_args
gc_args;
static int fib6_age(struct rt6_info *rt, void *arg)
static DEFINE_SPINLOCK(fib6_gc_lock);
void fib6_run_gc(unsigned long expires, struct net *net)
static void fib6_gc_timer_cb(unsigned long arg)
static int __net_init fib6_net_init(struct net *net)
static void fib6_net_exit(struct net *net)
static struct pernet_operations fib6_net_ops = ;
int __init fib6_init(void)
void fib6_gc_cleanup(void)
