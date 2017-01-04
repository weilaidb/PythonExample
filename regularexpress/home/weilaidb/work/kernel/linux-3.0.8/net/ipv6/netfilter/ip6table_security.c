MODULE_LICENSE("GPL");
MODULE_AUTHOR("James Morris <jmorris <at> redhat.com>");
MODULE_DESCRIPTION("ip6tables security table, for MAC rules");
#define SECURITY_VALID_HOOKS	(1 << NF_INET_LOCAL_IN) | \
(1 << NF_INET_FORWARD) | \
(1 << NF_INET_LOCAL_OUT)
static const struct xt_table security_table = ;
static unsigned int
ip6table_security_hook(unsigned int hook, struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
static struct nf_hook_ops *sectbl_ops __read_mostly;
static int __net_init ip6table_security_net_init(struct net *net)
static void __net_exit ip6table_security_net_exit(struct net *net)
static struct pernet_operations ip6table_security_net_ops = ;
static int __init ip6table_security_init(void)
static void __exit ip6table_security_fini(void)
module_init(ip6table_security_init);
module_exit(ip6table_security_fini);
