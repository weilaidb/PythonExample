int (*nf_nat_seq_adjust_hook)(struct sk_buff *skb,
struct nf_conn *ct,
enum ip_conntrack_info ctinfo);
EXPORT_SYMBOL_GPL(nf_nat_seq_adjust_hook);
static bool ipv4_pkt_to_tuple(const struct sk_buff *skb, unsigned int nhoff,
struct nf_conntrack_tuple *tuple)
static bool ipv4_invert_tuple(struct nf_conntrack_tuple *tuple,
const struct nf_conntrack_tuple *orig)
static int ipv4_print_tuple(struct seq_file *s,
const struct nf_conntrack_tuple *tuple)
static int ipv4_get_l4proto(const struct sk_buff *skb, unsigned int nhoff,
unsigned int *dataoff, u_int8_t *protonum)
static unsigned int ipv4_confirm(unsigned int hooknum,
struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
static unsigned int ipv4_conntrack_in(unsigned int hooknum,
struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
static unsigned int ipv4_conntrack_local(unsigned int hooknum,
struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
static struct nf_hook_ops ipv4_conntrack_ops[] __read_mostly = ;
#if defined(CONFIG_SYSCTL) && defined(CONFIG_NF_CONNTRACK_PROC_COMPAT)
static int log_invalid_proto_min = 0;
static int log_invalid_proto_max = 255;
static ctl_table ip_ct_sysctl_table[] = ;
static int
getorigdst(struct sock *sk, int optval, void __user *user, int *len)
#if defined(CONFIG_NF_CT_NETLINK) || defined(CONFIG_NF_CT_NETLINK_MODULE)
static int ipv4_tuple_to_nlattr(struct sk_buff *skb,
const struct nf_conntrack_tuple *tuple)
static const struct nla_policy ipv4_nla_policy[CTA_IP_MAX+1] = ;
static int ipv4_nlattr_to_tuple(struct nlattr *tb[],
struct nf_conntrack_tuple *t)
static int ipv4_nlattr_tuple_size(void)
static struct nf_sockopt_ops so_getorigdst = ;
struct nf_conntrack_l3proto nf_conntrack_l3proto_ipv4 __read_mostly = ;
module_param_call(hashsize, nf_conntrack_set_hashsize, param_get_uint,
&nf_conntrack_htable_size, 0600);
MODULE_ALIAS("nf_conntrack-" __stringify(AF_INET));
MODULE_ALIAS("ip_conntrack");
MODULE_LICENSE("GPL");
static int __init nf_conntrack_l3proto_ipv4_init(void)
static void __exit nf_conntrack_l3proto_ipv4_fini(void)
module_init(nf_conntrack_l3proto_ipv4_init);
module_exit(nf_conntrack_l3proto_ipv4_fini);
void need_ipv4_conntrack(void)
EXPORT_SYMBOL_GPL(need_ipv4_conntrack);
