static bool ipv6_pkt_to_tuple(const struct sk_buff *skb, unsigned int nhoff,
struct nf_conntrack_tuple *tuple)
static bool ipv6_invert_tuple(struct nf_conntrack_tuple *tuple,
const struct nf_conntrack_tuple *orig)
static int ipv6_print_tuple(struct seq_file *s,
const struct nf_conntrack_tuple *tuple)
static int nf_ct_ipv6_skip_exthdr(const struct sk_buff *skb, int start,
u8 *nexthdrp, int len)
static int ipv6_get_l4proto(const struct sk_buff *skb, unsigned int nhoff,
unsigned int *dataoff, u_int8_t *protonum)
static unsigned int ipv6_confirm(unsigned int hooknum,
struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
static unsigned int __ipv6_conntrack_in(struct net *net,
unsigned int hooknum,
struct sk_buff *skb,
int (*okfn)(struct sk_buff *))
static unsigned int ipv6_conntrack_in(unsigned int hooknum,
struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
static unsigned int ipv6_conntrack_local(unsigned int hooknum,
struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
static struct nf_hook_ops ipv6_conntrack_ops[] __read_mostly = ;
#if defined(CONFIG_NF_CT_NETLINK) || defined(CONFIG_NF_CT_NETLINK_MODULE)
static int ipv6_tuple_to_nlattr(struct sk_buff *skb,
const struct nf_conntrack_tuple *tuple)
static const struct nla_policy ipv6_nla_policy[CTA_IP_MAX+1] = ;
static int ipv6_nlattr_to_tuple(struct nlattr *tb[],
struct nf_conntrack_tuple *t)
static int ipv6_nlattr_tuple_size(void)
struct nf_conntrack_l3proto nf_conntrack_l3proto_ipv6 __read_mostly = ;
MODULE_ALIAS("nf_conntrack-" __stringify(AF_INET6));
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Yasuyuki KOZAKAI @USAGI <yasuyuki.kozakai@toshiba.co.jp>");
static int __init nf_conntrack_l3proto_ipv6_init(void)
static void __exit nf_conntrack_l3proto_ipv6_fini(void)
module_init(nf_conntrack_l3proto_ipv6_init);
module_exit(nf_conntrack_l3proto_ipv6_fini);
