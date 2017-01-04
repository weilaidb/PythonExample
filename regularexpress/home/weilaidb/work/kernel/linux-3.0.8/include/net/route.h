#define _ROUTE_H
#define RTO_ONLINK	0x01
#define RT_CONN_FLAGS(sk)   (RT_TOS(inet_sk(sk)->tos) | sock_flag(sk, SOCK_LOCALROUTE))
struct fib_nh;
struct inet_peer;
struct fib_info;
struct rtable ;
static inline bool rt_is_input_route(struct rtable *rt)
static inline bool rt_is_output_route(struct rtable *rt)
struct ip_rt_acct ;
struct rt_cache_stat ;
extern struct ip_rt_acct __percpu *ip_rt_acct;
struct in_device;
extern int		ip_rt_init(void);
extern void		ip_rt_redirect(__be32 old_gw, __be32 dst, __be32 new_gw,
__be32 src, struct net_device *dev);
extern void		rt_cache_flush(struct net *net, int how);
extern void		rt_cache_flush_batch(struct net *net);
extern struct rtable *__ip_route_output_key(struct net *, struct flowi4 *flp);
extern struct rtable *ip_route_output_flow(struct net *, struct flowi4 *flp,
struct sock *sk);
extern struct dst_entry *ipv4_blackhole_route(struct net *net, struct dst_entry *dst_orig);
static inline struct rtable *ip_route_output_key(struct net *net, struct flowi4 *flp)
static inline struct rtable *ip_route_output(struct net *net, __be32 daddr,
__be32 saddr, u8 tos, int oif)
static inline struct rtable *ip_route_output_ports(struct net *net, struct flowi4 *fl4,
struct sock *sk,
__be32 daddr, __be32 saddr,
__be16 dport, __be16 sport,
__u8 proto, __u8 tos, int oif)
static inline struct rtable *ip_route_output_gre(struct net *net, struct flowi4 *fl4,
__be32 daddr, __be32 saddr,
__be32 gre_key, __u8 tos, int oif)
extern int ip_route_input_common(struct sk_buff *skb, __be32 dst, __be32 src,
u8 tos, struct net_device *devin, bool noref);
static inline int ip_route_input(struct sk_buff *skb, __be32 dst, __be32 src,
u8 tos, struct net_device *devin)
static inline int ip_route_input_noref(struct sk_buff *skb, __be32 dst, __be32 src,
u8 tos, struct net_device *devin)
extern unsigned short	ip_rt_frag_needed(struct net *net, const struct iphdr *iph,
unsigned short new_mtu, struct net_device *dev);
extern void		ip_rt_send_redirect(struct sk_buff *skb);
extern unsigned		inet_addr_type(struct net *net, __be32 addr);
extern unsigned		inet_dev_addr_type(struct net *net, const struct net_device *dev, __be32 addr);
extern void		ip_rt_multicast_event(struct in_device *);
extern int		ip_rt_ioctl(struct net *, unsigned int cmd, void __user *arg);
extern void		ip_rt_get_source(u8 *src, struct sk_buff *skb, struct rtable *rt);
extern int		ip_rt_dump(struct sk_buff *skb,  struct netlink_callback *cb);
struct in_ifaddr;
extern void fib_add_ifaddr(struct in_ifaddr *);
extern void fib_del_ifaddr(struct in_ifaddr *, struct in_ifaddr *);
static inline void ip_rt_put(struct rtable * rt)
#define IPTOS_RT_MASK	(IPTOS_TOS_MASK & ~3)
extern const __u8 ip_tos2prio[16];
static inline char rt_tos2priority(u8 tos)
static inline void ip_route_connect_init(struct flowi4 *fl4, __be32 dst, __be32 src,
u32 tos, int oif, u8 protocol,
__be16 sport, __be16 dport,
struct sock *sk, bool can_sleep)
static inline struct rtable *ip_route_connect(struct flowi4 *fl4,
__be32 dst, __be32 src, u32 tos,
int oif, u8 protocol,
__be16 sport, __be16 dport,
struct sock *sk, bool can_sleep)
static inline struct rtable *ip_route_newports(struct flowi4 *fl4, struct rtable *rt,
__be16 orig_sport, __be16 orig_dport,
__be16 sport, __be16 dport,
struct sock *sk)
extern void rt_bind_peer(struct rtable *rt, __be32 daddr, int create);
static inline struct inet_peer *rt_get_peer(struct rtable *rt, __be32 daddr)
static inline int inet_iif(const struct sk_buff *skb)
extern int sysctl_ip_default_ttl;
static inline int ip4_dst_hoplimit(const struct dst_entry *dst)
