#define SKBEDIT_TAB_MASK     15
static struct tcf_common *tcf_skbedit_ht[SKBEDIT_TAB_MASK + 1];
static u32 skbedit_idx_gen;
static DEFINE_RWLOCK(skbedit_lock);
static struct tcf_hashinfo skbedit_hash_info = ;
static int tcf_skbedit(struct sk_buff *skb, struct tc_action *a,
struct tcf_result *res)
static const struct nla_policy skbedit_policy[TCA_SKBEDIT_MAX + 1] = ;
static int tcf_skbedit_init(struct nlattr *nla, struct nlattr *est,
struct tc_action *a, int ovr, int bind)
static int tcf_skbedit_cleanup(struct tc_action *a, int bind)
static int tcf_skbedit_dump(struct sk_buff *skb, struct tc_action *a,
int bind, int ref)
static struct tc_action_ops act_skbedit_ops = ;
MODULE_AUTHOR("Alexander Duyck, <alexander.h.duyck@intel.com>");
MODULE_DESCRIPTION("SKB Editing");
MODULE_LICENSE("GPL");
static int __init skbedit_init_module(void)
static void __exit skbedit_cleanup_module(void)
module_init(skbedit_init_module);
module_exit(skbedit_cleanup_module);
