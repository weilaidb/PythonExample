#define FILTER_VALID_HOOKS ((1 << NF_BR_LOCAL_IN) | (1 << NF_BR_FORWARD) | \
(1 << NF_BR_LOCAL_OUT))
static struct ebt_entries initial_chains[] =
;
static struct ebt_replace_kernel initial_table =
;
static int check(const struct ebt_table_info *info, unsigned int valid_hooks)
static const struct ebt_table frame_filter =
;
static unsigned int
ebt_in_hook(unsigned int hook, struct sk_buff *skb, const struct net_device *in,
const struct net_device *out, int (*okfn)(struct sk_buff *))
static unsigned int
ebt_out_hook(unsigned int hook, struct sk_buff *skb, const struct net_device *in,
const struct net_device *out, int (*okfn)(struct sk_buff *))
static struct nf_hook_ops ebt_ops_filter[] __read_mostly = ;
static int __net_init frame_filter_net_init(struct net *net)
static void __net_exit frame_filter_net_exit(struct net *net)
static struct pernet_operations frame_filter_net_ops = ;
static int __init ebtable_filter_init(void)
static void __exit ebtable_filter_fini(void)
module_init(ebtable_filter_init);
module_exit(ebtable_filter_fini);
MODULE_LICENSE("GPL");
