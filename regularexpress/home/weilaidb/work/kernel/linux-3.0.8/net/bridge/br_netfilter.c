#define skb_origaddr(skb)	 (((struct bridge_skb_cb *) \
(skb->nf_bridge->data))->daddr.ipv4)
#define store_orig_dstaddr(skb)	 (skb_origaddr(skb) = ip_hdr(skb)->daddr)
#define dnat_took_place(skb)	 (skb_origaddr(skb) != ip_hdr(skb)->daddr)
static struct ctl_table_header *brnf_sysctl_header;
static int brnf_call_iptables __read_mostly = 1;
static int brnf_call_ip6tables __read_mostly = 1;
static int brnf_call_arptables __read_mostly = 1;
static int brnf_filter_vlan_tagged __read_mostly = 0;
static int brnf_filter_pppoe_tagged __read_mostly = 0;
#define brnf_call_iptables 1
#define brnf_call_ip6tables 1
#define brnf_call_arptables 1
#define brnf_filter_vlan_tagged 0
#define brnf_filter_pppoe_tagged 0
static inline __be16 vlan_proto(const struct sk_buff *skb)
#define IS_VLAN_IP(skb) \
(vlan_proto(skb) == htons(ETH_P_IP) && \
brnf_filter_vlan_tagged)
#define IS_VLAN_IPV6(skb) \
(vlan_proto(skb) == htons(ETH_P_IPV6) && \
brnf_filter_vlan_tagged)
#define IS_VLAN_ARP(skb) \
(vlan_proto(skb) == htons(ETH_P_ARP) &&	\
brnf_filter_vlan_tagged)
static inline __be16 pppoe_proto(const struct sk_buff *skb)
#define IS_PPPOE_IP(skb) \
(skb->protocol == htons(ETH_P_PPP_SES) && \
pppoe_proto(skb) == htons(PPP_IP) && \
brnf_filter_pppoe_tagged)
#define IS_PPPOE_IPV6(skb) \
(skb->protocol == htons(ETH_P_PPP_SES) && \
pppoe_proto(skb) == htons(PPP_IPV6) && \
brnf_filter_pppoe_tagged)
static void fake_update_pmtu(struct dst_entry *dst, u32 mtu)
static u32 *fake_cow_metrics(struct dst_entry *dst, unsigned long old)
static struct dst_ops fake_dst_ops = ;
static const u32 br_dst_default_metrics[RTAX_MAX] = ;
void br_netfilter_rtable_init(struct net_bridge *br)
static inline struct rtable *bridge_parent_rtable(const struct net_device *dev)
static inline struct net_device *bridge_parent(const struct net_device *dev)
static inline struct nf_bridge_info *nf_bridge_alloc(struct sk_buff *skb)
static inline struct nf_bridge_info *nf_bridge_unshare(struct sk_buff *skb)
static inline void nf_bridge_push_encap_header(struct sk_buff *skb)
static inline void nf_bridge_pull_encap_header(struct sk_buff *skb)
static inline void nf_bridge_pull_encap_header_rcsum(struct sk_buff *skb)
static inline void nf_bridge_save_header(struct sk_buff *skb)
static inline void nf_bridge_update_protocol(struct sk_buff *skb)
static int br_parse_ip_options(struct sk_buff *skb)
int nf_bridge_copy_header(struct sk_buff *skb)
static int br_nf_pre_routing_finish_ipv6(struct sk_buff *skb)
static int br_nf_pre_routing_finish_bridge(struct sk_buff *skb)
static int br_nf_pre_routing_finish(struct sk_buff *skb)
static struct net_device *setup_pre_routing(struct sk_buff *skb)
static int check_hbh_len(struct sk_buff *skb)
static unsigned int br_nf_pre_routing_ipv6(unsigned int hook,
struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
static unsigned int br_nf_pre_routing(unsigned int hook, struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
static unsigned int br_nf_local_in(unsigned int hook, struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
static int br_nf_forward_finish(struct sk_buff *skb)
static unsigned int br_nf_forward_ip(unsigned int hook, struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
static unsigned int br_nf_forward_arp(unsigned int hook, struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
#if defined(CONFIG_NF_CONNTRACK_IPV4) || defined(CONFIG_NF_CONNTRACK_IPV4_MODULE)
static int br_nf_dev_queue_xmit(struct sk_buff *skb)
static int br_nf_dev_queue_xmit(struct sk_buff *skb)
static unsigned int br_nf_post_routing(unsigned int hook, struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
static unsigned int ip_sabotage_in(unsigned int hook, struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
static struct nf_hook_ops br_nf_ops[] __read_mostly = ;
static
int brnf_sysctl_call_tables(ctl_table * ctl, int write,
void __user * buffer, size_t * lenp, loff_t * ppos)
static ctl_table brnf_table[] = ;
static struct ctl_path brnf_path[] = ;
int __init br_netfilter_init(void)
void br_netfilter_fini(void)
