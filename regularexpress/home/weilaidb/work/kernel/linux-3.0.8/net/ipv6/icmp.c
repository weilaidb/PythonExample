static inline struct sock *icmpv6_sk(struct net *net)
static int icmpv6_rcv(struct sk_buff *skb);
static const struct inet6_protocol icmpv6_protocol = ;
static __inline__ struct sock *icmpv6_xmit_lock(struct net *net)
static __inline__ void icmpv6_xmit_unlock(struct sock *sk)
void icmpv6_param_prob(struct sk_buff *skb, u8 code, int pos)
static int is_ineligible(struct sk_buff *skb)
static inline bool icmpv6_xrlim_allow(struct sock *sk, u8 type,
struct flowi6 *fl6)
static __inline__ int opt_unrec(struct sk_buff *skb, __u32 offset)
static int icmpv6_push_pending_frames(struct sock *sk, struct flowi6 *fl6, struct icmp6hdr *thdr, int len)
struct icmpv6_msg ;
static int icmpv6_getfrag(void *from, char *to, int offset, int len, int odd, struct sk_buff *skb)
#if defined(CONFIG_IPV6_MIP6) || defined(CONFIG_IPV6_MIP6_MODULE)
static void mip6_addr_swap(struct sk_buff *skb)
static inline void mip6_addr_swap(struct sk_buff *skb)
static struct dst_entry *icmpv6_route_lookup(struct net *net, struct sk_buff *skb,
struct sock *sk, struct flowi6 *fl6)
void icmpv6_send(struct sk_buff *skb, u8 type, u8 code, __u32 info)
EXPORT_SYMBOL(icmpv6_send);
static void icmpv6_echo_reply(struct sk_buff *skb)
static void icmpv6_notify(struct sk_buff *skb, u8 type, u8 code, __be32 info)
static int icmpv6_rcv(struct sk_buff *skb)
void icmpv6_flow_init(struct sock *sk, struct flowi6 *fl6,
u8 type,
const struct in6_addr *saddr,
const struct in6_addr *daddr,
int oif)
static struct lock_class_key icmpv6_socket_sk_dst_lock_key;
static int __net_init icmpv6_sk_init(struct net *net)
static void __net_exit icmpv6_sk_exit(struct net *net)
static struct pernet_operations icmpv6_sk_ops = ;
int __init icmpv6_init(void)
void icmpv6_cleanup(void)
static const struct icmp6_err  tab_unreach[] = ;
int icmpv6_err_convert(u8 type, u8 code, int *err)
EXPORT_SYMBOL(icmpv6_err_convert);
ctl_table ipv6_icmp_table_template[] = ;
struct ctl_table * __net_init ipv6_icmp_sysctl_init(struct net *net)
