#define _NET_NEIGHBOUR_H
#define NUD_IN_TIMER	(NUD_INCOMPLETE|NUD_REACHABLE|NUD_DELAY|NUD_PROBE)
#define NUD_VALID	(NUD_PERMANENT|NUD_NOARP|NUD_REACHABLE|NUD_PROBE|NUD_STALE|NUD_DELAY)
#define NUD_CONNECTED	(NUD_PERMANENT|NUD_NOARP|NUD_REACHABLE)
struct neighbour;
struct neigh_parms ;
struct neigh_statistics ;
#define NEIGH_CACHE_STAT_INC(tbl, field) this_cpu_inc((tbl)->stats->field)
struct neighbour ;
struct neigh_ops ;
struct pneigh_entry ;
struct neigh_hash_table ;
struct neigh_table ;
#define NEIGH_UPDATE_F_OVERRIDE			0x00000001
#define NEIGH_UPDATE_F_WEAK_OVERRIDE		0x00000002
#define NEIGH_UPDATE_F_OVERRIDE_ISROUTER	0x00000004
#define NEIGH_UPDATE_F_ISROUTER			0x40000000
#define NEIGH_UPDATE_F_ADMIN			0x80000000
extern void			neigh_table_init(struct neigh_table *tbl);
extern void			neigh_table_init_no_netlink(struct neigh_table *tbl);
extern int			neigh_table_clear(struct neigh_table *tbl);
extern struct neighbour *	neigh_lookup(struct neigh_table *tbl,
const void *pkey,
struct net_device *dev);
extern struct neighbour *	neigh_lookup_nodev(struct neigh_table *tbl,
struct net *net,
const void *pkey);
extern struct neighbour *	neigh_create(struct neigh_table *tbl,
const void *pkey,
struct net_device *dev);
extern void			neigh_destroy(struct neighbour *neigh);
extern int			__neigh_event_send(struct neighbour *neigh, struct sk_buff *skb);
extern int			neigh_update(struct neighbour *neigh, const u8 *lladdr, u8 new,
u32 flags);
extern void			neigh_changeaddr(struct neigh_table *tbl, struct net_device *dev);
extern int			neigh_ifdown(struct neigh_table *tbl, struct net_device *dev);
extern int			neigh_resolve_output(struct sk_buff *skb);
extern int			neigh_connected_output(struct sk_buff *skb);
extern int			neigh_compat_output(struct sk_buff *skb);
extern struct neighbour 	*neigh_event_ns(struct neigh_table *tbl,
u8 *lladdr, void *saddr,
struct net_device *dev);
extern struct neigh_parms	*neigh_parms_alloc(struct net_device *dev, struct neigh_table *tbl);
extern void			neigh_parms_release(struct neigh_table *tbl, struct neigh_parms *parms);
static inline
struct net			*neigh_parms_net(const struct neigh_parms *parms)
extern unsigned long		neigh_rand_reach_time(unsigned long base);
extern void			pneigh_enqueue(struct neigh_table *tbl, struct neigh_parms *p,
struct sk_buff *skb);
extern struct pneigh_entry	*pneigh_lookup(struct neigh_table *tbl, struct net *net, const void *key, struct net_device *dev, int creat);
extern struct pneigh_entry	*__pneigh_lookup(struct neigh_table *tbl,
struct net *net,
const void *key,
struct net_device *dev);
extern int			pneigh_delete(struct neigh_table *tbl, struct net *net, const void *key, struct net_device *dev);
static inline
struct net			*pneigh_net(const struct pneigh_entry *pneigh)
extern void neigh_app_ns(struct neighbour *n);
extern void neigh_for_each(struct neigh_table *tbl, void (*cb)(struct neighbour *, void *), void *cookie);
extern void __neigh_for_each_release(struct neigh_table *tbl, int (*cb)(struct neighbour *));
extern void pneigh_for_each(struct neigh_table *tbl, void (*cb)(struct pneigh_entry *));
struct neigh_seq_state ;
extern void *neigh_seq_start(struct seq_file *, loff_t *, struct neigh_table *, unsigned int);
extern void *neigh_seq_next(struct seq_file *, void *, loff_t *);
extern void neigh_seq_stop(struct seq_file *, void *);
extern int			neigh_sysctl_register(struct net_device *dev,
struct neigh_parms *p,
char *p_name,
proc_handler *proc_handler);
extern void			neigh_sysctl_unregister(struct neigh_parms *p);
static inline void __neigh_parms_put(struct neigh_parms *parms)
static inline struct neigh_parms *neigh_parms_clone(struct neigh_parms *parms)
static inline void neigh_release(struct neighbour *neigh)
static inline struct neighbour * neigh_clone(struct neighbour *neigh)
#define neigh_hold(n)	atomic_inc(&(n)->refcnt)
static inline void neigh_confirm(struct neighbour *neigh)
static inline int neigh_event_send(struct neighbour *neigh, struct sk_buff *skb)
static inline int neigh_hh_bridge(struct hh_cache *hh, struct sk_buff *skb)
static inline int neigh_hh_output(struct hh_cache *hh, struct sk_buff *skb)
static inline struct neighbour *
__neigh_lookup(struct neigh_table *tbl, const void *pkey, struct net_device *dev, int creat)
static inline struct neighbour *
__neigh_lookup_errno(struct neigh_table *tbl, const void *pkey,
struct net_device *dev)
struct neighbour_cb ;
#define LOCALLY_ENQUEUED 0x1
#define NEIGH_CB(skb)	((struct neighbour_cb *)(skb)->cb)
static inline void neigh_ha_snapshot(char *dst, const struct neighbour *n,
const struct net_device *dev)
