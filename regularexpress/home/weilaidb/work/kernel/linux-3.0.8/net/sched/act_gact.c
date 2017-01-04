#define GACT_TAB_MASK	15
static struct tcf_common *tcf_gact_ht[GACT_TAB_MASK + 1];
static u32 gact_idx_gen;
static DEFINE_RWLOCK(gact_lock);
static struct tcf_hashinfo gact_hash_info = ;
static int gact_net_rand(struct tcf_gact *gact)
static int gact_determ(struct tcf_gact *gact)
typedef int (*g_rand)(struct tcf_gact *gact);
static g_rand gact_rand[MAX_RAND] = ;
static const struct nla_policy gact_policy[TCA_GACT_MAX + 1] = ;
static int tcf_gact_init(struct nlattr *nla, struct nlattr *est,
struct tc_action *a, int ovr, int bind)
static int tcf_gact_cleanup(struct tc_action *a, int bind)
static int tcf_gact(struct sk_buff *skb, struct tc_action *a, struct tcf_result *res)
static int tcf_gact_dump(struct sk_buff *skb, struct tc_action *a, int bind, int ref)
static struct tc_action_ops act_gact_ops = ;
MODULE_AUTHOR("Jamal Hadi Salim(2002-4)");
MODULE_DESCRIPTION("Generic Classifier actions");
MODULE_LICENSE("GPL");
static int __init gact_init_module(void)
static void __exit gact_cleanup_module(void)
module_init(gact_init_module);
module_exit(gact_cleanup_module);
