#define _NET_IP_FIB_H
struct fib_config ;
struct fib_info;
struct fib_nh ;
struct fib_info ;
struct fib_rule;
struct fib_table;
struct fib_result ;
struct fib_result_nl ;
#define FIB_RES_NH(res)		((res).fi->fib_nh[(res).nh_sel])
#define FIB_TABLE_HASHSZ 2
#define FIB_RES_NH(res)		((res).fi->fib_nh[0])
#define FIB_TABLE_HASHSZ 256
extern __be32 fib_info_update_nh_saddr(struct net *net, struct fib_nh *nh);
#define FIB_RES_SADDR(net, res)				\
((FIB_RES_NH(res).nh_saddr_genid ==		\
atomic_read(&(net)->ipv4.dev_addr_genid)) ?	\
FIB_RES_NH(res).nh_saddr :			\
fib_info_update_nh_saddr((net), &FIB_RES_NH(res)))
#define FIB_RES_GW(res)			(FIB_RES_NH(res).nh_gw)
#define FIB_RES_DEV(res)		(FIB_RES_NH(res).nh_dev)
#define FIB_RES_OIF(res)		(FIB_RES_NH(res).nh_oif)
#define FIB_RES_PREFSRC(net, res)	((res).fi->fib_prefsrc ? : \
FIB_RES_SADDR(net, res))
struct fib_table ;
extern int fib_table_lookup(struct fib_table *tb, const struct flowi4 *flp,
struct fib_result *res, int fib_flags);
extern int fib_table_insert(struct fib_table *, struct fib_config *);
extern int fib_table_delete(struct fib_table *, struct fib_config *);
extern int fib_table_dump(struct fib_table *table, struct sk_buff *skb,
struct netlink_callback *cb);
extern int fib_table_flush(struct fib_table *table);
extern void fib_free_table(struct fib_table *tb);
#define TABLE_LOCAL_INDEX	0
#define TABLE_MAIN_INDEX	1
static inline struct fib_table *fib_get_table(struct net *net, u32 id)
static inline struct fib_table *fib_new_table(struct net *net, u32 id)
static inline int fib_lookup(struct net *net, const struct flowi4 *flp,
struct fib_result *res)
extern int __net_init fib4_rules_init(struct net *net);
extern void __net_exit fib4_rules_exit(struct net *net);
extern u32 fib_rules_tclass(const struct fib_result *res);
extern int fib_lookup(struct net *n, struct flowi4 *flp, struct fib_result *res);
extern struct fib_table *fib_new_table(struct net *net, u32 id);
extern struct fib_table *fib_get_table(struct net *net, u32 id);
extern const struct nla_policy rtm_ipv4_policy[];
extern void		ip_fib_init(void);
extern int fib_validate_source(struct sk_buff *skb, __be32 src, __be32 dst,
u8 tos, int oif, struct net_device *dev,
__be32 *spec_dst, u32 *itag);
extern void fib_select_default(struct fib_result *res);
extern int ip_fib_check_default(__be32 gw, struct net_device *dev);
extern int fib_sync_down_dev(struct net_device *dev, int force);
extern int fib_sync_down_addr(struct net *net, __be32 local);
extern void fib_update_nh_saddrs(struct net_device *dev);
extern int fib_sync_up(struct net_device *dev);
extern void fib_select_multipath(struct fib_result *res);
extern void fib_trie_init(void);
extern struct fib_table *fib_trie_table(u32 id);
static inline void fib_combine_itag(u32 *itag, const struct fib_result *res)
extern void free_fib_info(struct fib_info *fi);
static inline void fib_info_put(struct fib_info *fi)
extern int __net_init  fib_proc_init(struct net *net);
extern void __net_exit fib_proc_exit(struct net *net);
static inline int fib_proc_init(struct net *net)
static inline void fib_proc_exit(struct net *net)
