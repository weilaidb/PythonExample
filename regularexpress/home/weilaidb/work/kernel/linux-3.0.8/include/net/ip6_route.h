#define _NET_IP6_ROUTE_H
#define IP6_RT_PRIO_USER	1024
#define IP6_RT_PRIO_ADDRCONF	256
struct route_info ;
#define RT6_LOOKUP_F_IFACE		0x00000001
#define RT6_LOOKUP_F_REACHABLE		0x00000002
#define RT6_LOOKUP_F_HAS_SADDR		0x00000004
#define RT6_LOOKUP_F_SRCPREF_TMP	0x00000008
#define RT6_LOOKUP_F_SRCPREF_PUBLIC	0x00000010
#define RT6_LOOKUP_F_SRCPREF_COA	0x00000020
static inline int rt6_srcprefs2flags(unsigned int srcprefs)
static inline unsigned int rt6_flags2srcprefs(int flags)
extern void			rt6_bind_peer(struct rt6_info *rt,
int create);
static inline struct inet_peer *rt6_get_peer(struct rt6_info *rt)
extern void			ip6_route_input(struct sk_buff *skb);
extern struct dst_entry *	ip6_route_output(struct net *net,
const struct sock *sk,
struct flowi6 *fl6);
extern int			ip6_route_init(void);
extern void			ip6_route_cleanup(void);
extern int			ipv6_route_ioctl(struct net *net,
unsigned int cmd,
void __user *arg);
extern int			ip6_route_add(struct fib6_config *cfg);
extern int			ip6_ins_rt(struct rt6_info *);
extern int			ip6_del_rt(struct rt6_info *);
extern int			ip6_route_get_saddr(struct net *net,
struct rt6_info *rt,
const struct in6_addr *daddr,
unsigned int prefs,
struct in6_addr *saddr);
extern struct rt6_info		*rt6_lookup(struct net *net,
const struct in6_addr *daddr,
const struct in6_addr *saddr,
int oif, int flags);
extern struct dst_entry *icmp6_dst_alloc(struct net_device *dev,
struct neighbour *neigh,
const struct in6_addr *addr);
extern int icmp6_dst_gc(void);
extern void fib6_force_start_gc(struct net *net);
extern struct rt6_info *addrconf_dst_alloc(struct inet6_dev *idev,
const struct in6_addr *addr,
int anycast);
extern int			ip6_dst_hoplimit(struct dst_entry *dst);
extern struct rt6_info *	rt6_get_dflt_router(const struct in6_addr *addr,
struct net_device *dev);
extern struct rt6_info *	rt6_add_dflt_router(const struct in6_addr *gwaddr,
struct net_device *dev,
unsigned int pref);
extern void			rt6_purge_dflt_routers(struct net *net);
extern int			rt6_route_rcv(struct net_device *dev,
u8 *opt, int len,
const struct in6_addr *gwaddr);
extern void			rt6_redirect(const struct in6_addr *dest,
const struct in6_addr *src,
const struct in6_addr *saddr,
struct neighbour *neigh,
u8 *lladdr,
int on_link);
extern void			rt6_pmtu_discovery(const struct in6_addr *daddr,
const struct in6_addr *saddr,
struct net_device *dev,
u32 pmtu);
struct netlink_callback;
struct rt6_rtnl_dump_arg ;
extern int rt6_dump_route(struct rt6_info *rt, void *p_arg);
extern void rt6_ifdown(struct net *net, struct net_device *dev);
extern void rt6_mtu_change(struct net_device *dev, unsigned mtu);
extern void rt6_remove_prefsrc(struct inet6_ifaddr *ifp);
static inline void __ip6_dst_store(struct sock *sk, struct dst_entry *dst,
struct in6_addr *daddr, struct in6_addr *saddr)
static inline void ip6_dst_store(struct sock *sk, struct dst_entry *dst,
struct in6_addr *daddr, struct in6_addr *saddr)
static inline int ipv6_unicast_destination(struct sk_buff *skb)
int ip6_fragment(struct sk_buff *skb, int (*output)(struct sk_buff *));
static inline int ip6_skb_dst_mtu(struct sk_buff *skb)
