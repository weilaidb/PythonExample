static struct ebt_entries initial_chain = ;
static struct ebt_replace_kernel initial_table =
;
static int check(const struct ebt_table_info *info, unsigned int valid_hooks)
static const struct ebt_table broute_table =
;
static int ebt_broute(struct sk_buff *skb)
static int __net_init broute_net_init(struct net *net)
static void __net_exit broute_net_exit(struct net *net)
static struct pernet_operations broute_net_ops = ;
static int __init ebtable_broute_init(void)
static void __exit ebtable_broute_fini(void)
module_init(ebtable_broute_init);
module_exit(ebtable_broute_fini);
MODULE_LICENSE("GPL");
