#define NAT_TAB_MASK	15
static struct tcf_common *tcf_nat_ht[NAT_TAB_MASK + 1];
static u32 nat_idx_gen;
static DEFINE_RWLOCK(nat_lock);
static struct tcf_hashinfo nat_hash_info = ;
static const struct nla_policy nat_policy[TCA_NAT_MAX + 1] = ;
static int tcf_nat_init(struct nlattr *nla, struct nlattr *est,
struct tc_action *a, int ovr, int bind)
static int tcf_nat_cleanup(struct tc_action *a, int bind)
static int tcf_nat(struct sk_buff *skb, struct tc_action *a,
struct tcf_result *res)
static int tcf_nat_dump(struct sk_buff *skb, struct tc_action *a,
int bind, int ref)
static struct tc_action_ops act_nat_ops = ;
MODULE_DESCRIPTION("Stateless NAT actions");
MODULE_LICENSE("GPL");
static int __init nat_init_module(void)
static void __exit nat_cleanup_module(void)
module_init(nat_init_module);
module_exit(nat_cleanup_module);
