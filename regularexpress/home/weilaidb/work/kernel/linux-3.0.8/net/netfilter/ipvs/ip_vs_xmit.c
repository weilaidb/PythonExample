#define KMSG_COMPONENT "IPVS"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
enum ;
static inline void
__ip_vs_dst_set(struct ip_vs_dest *dest, u32 rtos, struct dst_entry *dst,
u32 dst_cookie)
static inline struct dst_entry *
__ip_vs_dst_check(struct ip_vs_dest *dest, u32 rtos)
static struct rtable *
__ip_vs_get_out_rt(struct sk_buff *skb, struct ip_vs_dest *dest,
__be32 daddr, u32 rtos, int rt_mode, __be32 *ret_saddr)
static int
__ip_vs_reroute_locally(struct sk_buff *skb)
static inline int __ip_vs_is_local_route6(struct rt6_info *rt)
static struct dst_entry *
__ip_vs_route_output_v6(struct net *net, struct in6_addr *daddr,
struct in6_addr *ret_saddr, int do_xfrm)
static struct rt6_info *
__ip_vs_get_out_rt_v6(struct sk_buff *skb, struct ip_vs_dest *dest,
struct in6_addr *daddr, struct in6_addr *ret_saddr,
int do_xfrm, int rt_mode)
void
ip_vs_dst_reset(struct ip_vs_dest *dest)
#define IP_VS_XMIT_TUNNEL(skb, cp)				\
()
#define IP_VS_XMIT_NAT(pf, skb, cp, local)		\
do  while (0)
#define IP_VS_XMIT(pf, skb, cp, local)			\
do  while (0)
int
ip_vs_null_xmit(struct sk_buff *skb, struct ip_vs_conn *cp,
struct ip_vs_protocol *pp)
int
ip_vs_bypass_xmit(struct sk_buff *skb, struct ip_vs_conn *cp,
struct ip_vs_protocol *pp)
int
ip_vs_bypass_xmit_v6(struct sk_buff *skb, struct ip_vs_conn *cp,
struct ip_vs_protocol *pp)
int
ip_vs_nat_xmit(struct sk_buff *skb, struct ip_vs_conn *cp,
struct ip_vs_protocol *pp)
int
ip_vs_nat_xmit_v6(struct sk_buff *skb, struct ip_vs_conn *cp,
struct ip_vs_protocol *pp)
int
ip_vs_tunnel_xmit(struct sk_buff *skb, struct ip_vs_conn *cp,
struct ip_vs_protocol *pp)
int
ip_vs_tunnel_xmit_v6(struct sk_buff *skb, struct ip_vs_conn *cp,
struct ip_vs_protocol *pp)
int
ip_vs_dr_xmit(struct sk_buff *skb, struct ip_vs_conn *cp,
struct ip_vs_protocol *pp)
int
ip_vs_dr_xmit_v6(struct sk_buff *skb, struct ip_vs_conn *cp,
struct ip_vs_protocol *pp)
int
ip_vs_icmp_xmit(struct sk_buff *skb, struct ip_vs_conn *cp,
struct ip_vs_protocol *pp, int offset, unsigned int hooknum)
int
ip_vs_icmp_xmit_v6(struct sk_buff *skb, struct ip_vs_conn *cp,
struct ip_vs_protocol *pp, int offset, unsigned int hooknum)
