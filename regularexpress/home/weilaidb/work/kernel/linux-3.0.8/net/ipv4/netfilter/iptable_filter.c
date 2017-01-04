MODULE_LICENSE("GPL");
MODULE_AUTHOR("Netfilter Core Team <coreteam@netfilter.org>");
MODULE_DESCRIPTION("iptables filter table");
#define FILTER_VALID_HOOKS ((1 << NF_INET_LOCAL_IN) | \
(1 << NF_INET_FORWARD) | \
(1 << NF_INET_LOCAL_OUT))
static const struct xt_table packet_filter = ;
static unsigned int
iptable_filter_hook(unsigned int hook, struct sk_buff *skb,
const struct net_device *in, const struct net_device *out,
int (*okfn)(struct sk_buff *))
static struct nf_hook_ops *filter_ops __read_mostly;
static int forward = NF_ACCEPT;
module_param(forward, bool, 0000);
static int __net_init iptable_filter_net_init(struct net *net)
static void __net_exit iptable_filter_net_exit(struct net *net)
static struct pernet_operations iptable_filter_net_ops = ;
static int __init iptable_filter_init(void)
static void __exit iptable_filter_fini(void)
module_init(iptable_filter_init);
module_exit(iptable_filter_fini);
