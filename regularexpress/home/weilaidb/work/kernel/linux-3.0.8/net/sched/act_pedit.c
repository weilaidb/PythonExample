#define PEDIT_TAB_MASK	15
static struct tcf_common *tcf_pedit_ht[PEDIT_TAB_MASK + 1];
static u32 pedit_idx_gen;
static DEFINE_RWLOCK(pedit_lock);
static struct tcf_hashinfo pedit_hash_info = ;
static const struct nla_policy pedit_policy[TCA_PEDIT_MAX + 1] = ;
static int tcf_pedit_init(struct nlattr *nla, struct nlattr *est,
struct tc_action *a, int ovr, int bind)
static int tcf_pedit_cleanup(struct tc_action *a, int bind)
static int tcf_pedit(struct sk_buff *skb, struct tc_action *a,
struct tcf_result *res)
static int tcf_pedit_dump(struct sk_buff *skb, struct tc_action *a,
int bind, int ref)
static struct tc_action_ops act_pedit_ops = ;
MODULE_AUTHOR("Jamal Hadi Salim(2002-4)");
MODULE_DESCRIPTION("Generic Packet Editor actions");
MODULE_LICENSE("GPL");
static int __init pedit_init_module(void)
static void __exit pedit_cleanup_module(void)
module_init(pedit_init_module);
module_exit(pedit_cleanup_module);
