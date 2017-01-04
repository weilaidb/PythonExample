int ip6_route_me_harder(struct sk_buff *skb)
EXPORT_SYMBOL(ip6_route_me_harder);
struct ip6_rt_info ;
static void nf_ip6_saveroute(const struct sk_buff *skb,
struct nf_queue_entry *entry)
static int nf_ip6_reroute(struct sk_buff *skb,
const struct nf_queue_entry *entry)
static int nf_ip6_route(struct net *net, struct dst_entry **dst,
struct flowi *fl, bool strict)
__sum16 nf_ip6_checksum(struct sk_buff *skb, unsigned int hook,
unsigned int dataoff, u_int8_t protocol)
EXPORT_SYMBOL(nf_ip6_checksum);
static __sum16 nf_ip6_checksum_partial(struct sk_buff *skb, unsigned int hook,
unsigned int dataoff, unsigned int len,
u_int8_t protocol)
;
static const struct nf_afinfo nf_ip6_afinfo = ;
int __init ipv6_netfilter_init(void)
void ipv6_netfilter_fini(void)
