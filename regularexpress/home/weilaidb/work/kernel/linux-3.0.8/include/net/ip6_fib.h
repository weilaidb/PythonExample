#define _IP6_FIB_H
#define FIB6_TABLE_HASHSZ 256
#define FIB6_TABLE_HASHSZ 1
struct rt6_info;
struct fib6_config ;
struct fib6_node ;
#define FIB6_SUBTREE(fn)	NULL
#define FIB6_SUBTREE(fn)	((fn)->subtree)
struct rt6key ;
struct fib6_table;
struct rt6_info ;
static inline struct inet6_dev *ip6_dst_idev(struct dst_entry *dst)
struct fib6_walker_t ;
struct rt6_statistics ;
#define RTN_TL_ROOT	0x0001
#define RTN_ROOT	0x0002
#define RTN_RTINFO	0x0004
struct fib6_table ;
#define RT6_TABLE_UNSPEC	RT_TABLE_UNSPEC
#define RT6_TABLE_MAIN		RT_TABLE_MAIN
#define RT6_TABLE_DFLT		RT6_TABLE_MAIN
#define RT6_TABLE_INFO		RT6_TABLE_MAIN
#define RT6_TABLE_PREFIX	RT6_TABLE_MAIN
#define FIB6_TABLE_MIN		1
#define FIB6_TABLE_MAX		RT_TABLE_MAX
#define RT6_TABLE_LOCAL		RT_TABLE_LOCAL
#define FIB6_TABLE_MIN		RT_TABLE_MAIN
#define FIB6_TABLE_MAX		FIB6_TABLE_MIN
#define RT6_TABLE_LOCAL		RT6_TABLE_MAIN
typedef struct rt6_info *(*pol_lookup_t)(struct net *,
struct fib6_table *,
struct flowi6 *, int);
extern struct fib6_table        *fib6_get_table(struct net *net, u32 id);
extern struct fib6_table        *fib6_new_table(struct net *net, u32 id);
extern struct dst_entry         *fib6_rule_lookup(struct net *net,
struct flowi6 *fl6, int flags,
pol_lookup_t lookup);
extern struct fib6_node		*fib6_lookup(struct fib6_node *root,
const struct in6_addr *daddr,
const struct in6_addr *saddr);
struct fib6_node		*fib6_locate(struct fib6_node *root,
const struct in6_addr *daddr, int dst_len,
const struct in6_addr *saddr, int src_len);
extern void			fib6_clean_all(struct net *net,
int (*func)(struct rt6_info *, void *arg),
int prune, void *arg);
extern int			fib6_add(struct fib6_node *root,
struct rt6_info *rt,
struct nl_info *info);
extern int			fib6_del(struct rt6_info *rt,
struct nl_info *info);
extern void			inet6_rt_notify(int event, struct rt6_info *rt,
struct nl_info *info);
extern void			fib6_run_gc(unsigned long expires,
struct net *net);
extern void			fib6_gc_cleanup(void);
extern int			fib6_init(void);
extern int			fib6_rules_init(void);
extern void			fib6_rules_cleanup(void);
static inline int               fib6_rules_init(void)
static inline void              fib6_rules_cleanup(void)
