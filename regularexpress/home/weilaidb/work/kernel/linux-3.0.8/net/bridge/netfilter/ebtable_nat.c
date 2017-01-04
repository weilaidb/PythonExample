#define NAT_VALID_HOOKS ((1 << NF_BR_PRE_ROUTING) | (1 << NF_BR_LOCAL_OUT) | \
(1 << NF_BR_POST_ROUTING))
static struct ebt_entries initial_chains[] =
;
static struct ebt_replace_kernel initial_table =
;
static int check(const struct ebt_table_info *info, unsigned int valid_hooks)
static struct ebt_table frame_nat =
;
static unsigned int
ebt_nat_in(unsigned int hook, struct sk_buff *skb, const struct net_device *in
, const struct net_device *out, int (*okfn)(struct sk_buff *))
static unsigned int
ebt_nat_out(unsigned int hook, struct sk_buff *skb, const struct net_device *in
, const struct net_device *out, int (*okfn)(struct sk_buff *))
static struct nf_hook_ops ebt_ops_nat[] __read_mostly = ;
static int __net_init frame_nat_net_init(struct net *net)
static void __net_exit frame_nat_net_exit(struct net *net)
static struct pernet_operations frame_nat_net_ops = ;
static int __init ebtable_nat_init(void)
static void __exit ebtable_nat_fini(void)
module_init(ebtable_nat_init);
module_exit(ebtable_nat_fini);
MODULE_LICENSE("GPL");
