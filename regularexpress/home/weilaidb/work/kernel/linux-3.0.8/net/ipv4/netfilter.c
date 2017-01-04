int ip_route_me_harder(struct sk_buff *skb, unsigned addr_type)
EXPORT_SYMBOL(ip_route_me_harder);
int ip_xfrm_me_harder(struct sk_buff *skb)
EXPORT_SYMBOL(ip_xfrm_me_harder);
void (*ip_nat_decode_session)(struct sk_buff *, struct flowi *);
EXPORT_SYMBOL(ip_nat_decode_session);
struct ip_rt_info ;
static void nf_ip_saveroute(const struct sk_buff *skb,
struct nf_queue_entry *entry)
static int nf_ip_reroute(struct sk_buff *skb,
const struct nf_queue_entry *entry)
__sum16 nf_ip_checksum(struct sk_buff *skb, unsigned int hook,
unsigned int dataoff, u_int8_t protocol)
EXPORT_SYMBOL(nf_ip_checksum);
static __sum16 nf_ip_checksum_partial(struct sk_buff *skb, unsigned int hook,
unsigned int dataoff, unsigned int len,
u_int8_t protocol)
static int nf_ip_route(struct net *net, struct dst_entry **dst,
struct flowi *fl, bool strict __always_unused)
static const struct nf_afinfo nf_ip_afinfo = ;
static int ipv4_netfilter_init(void)
static void ipv4_netfilter_fini(void)
module_init(ipv4_netfilter_init);
module_exit(ipv4_netfilter_fini);
struct ctl_path nf_net_ipv4_netfilter_sysctl_path[] = ;
EXPORT_SYMBOL_GPL(nf_net_ipv4_netfilter_sysctl_path);
