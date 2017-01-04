MODULE_LICENSE("GPL");
MODULE_AUTHOR("David S. Miller <davem@redhat.com>");
MODULE_DESCRIPTION("arptables filter table");
#define FILTER_VALID_HOOKS ((1 << NF_ARP_IN) | (1 << NF_ARP_OUT) | \
(1 << NF_ARP_FORWARD))
static const struct xt_table packet_filter = ;
static unsigned int
arptable_filter_hook(unsigned int hook, struct sk_buff *skb,
const struct net_device *in, const struct net_device *out,
int (*okfn)(struct sk_buff *))
static struct nf_hook_ops *arpfilter_ops __read_mostly;
static int __net_init arptable_filter_net_init(struct net *net)
static void __net_exit arptable_filter_net_exit(struct net *net)
static struct pernet_operations arptable_filter_net_ops = ;
static int __init arptable_filter_init(void)
static void __exit arptable_filter_fini(void)
module_init(arptable_filter_init);
module_exit(arptable_filter_fini);
