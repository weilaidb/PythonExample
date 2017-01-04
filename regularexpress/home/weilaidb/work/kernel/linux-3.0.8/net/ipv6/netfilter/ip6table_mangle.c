MODULE_LICENSE("GPL");
MODULE_AUTHOR("Netfilter Core Team <coreteam@netfilter.org>");
MODULE_DESCRIPTION("ip6tables mangle table");
#define MANGLE_VALID_HOOKS ((1 << NF_INET_PRE_ROUTING) | \
(1 << NF_INET_LOCAL_IN) | \
(1 << NF_INET_FORWARD) | \
(1 << NF_INET_LOCAL_OUT) | \
(1 << NF_INET_POST_ROUTING))
static const struct xt_table packet_mangler = ;
static unsigned int
ip6t_mangle_out(struct sk_buff *skb, const struct net_device *out)
static unsigned int
ip6table_mangle_hook(unsigned int hook, struct sk_buff *skb,
const struct net_device *in, const struct net_device *out,
int (*okfn)(struct sk_buff *))
static struct nf_hook_ops *mangle_ops __read_mostly;
static int __net_init ip6table_mangle_net_init(struct net *net)
static void __net_exit ip6table_mangle_net_exit(struct net *net)
static struct pernet_operations ip6table_mangle_net_ops = ;
static int __init ip6table_mangle_init(void)
static void __exit ip6table_mangle_fini(void)
module_init(ip6table_mangle_init);
module_exit(ip6table_mangle_fini);
