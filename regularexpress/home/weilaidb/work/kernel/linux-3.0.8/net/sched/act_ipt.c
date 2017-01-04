#define IPT_TAB_MASK     15
static struct tcf_common *tcf_ipt_ht[IPT_TAB_MASK + 1];
static u32 ipt_idx_gen;
static DEFINE_RWLOCK(ipt_lock);
static struct tcf_hashinfo ipt_hash_info = ;
static int ipt_init_target(struct xt_entry_target *t, char *table, unsigned int hook)
static void ipt_destroy_target(struct xt_entry_target *t)
static int tcf_ipt_release(struct tcf_ipt *ipt, int bind)
static const struct nla_policy ipt_policy[TCA_IPT_MAX + 1] = ;
static int tcf_ipt_init(struct nlattr *nla, struct nlattr *est,
struct tc_action *a, int ovr, int bind)
static int tcf_ipt_cleanup(struct tc_action *a, int bind)
static int tcf_ipt(struct sk_buff *skb, struct tc_action *a,
struct tcf_result *res)
static int tcf_ipt_dump(struct sk_buff *skb, struct tc_action *a, int bind, int ref)
static struct tc_action_ops act_ipt_ops = ;
MODULE_AUTHOR("Jamal Hadi Salim(2002-4)");
MODULE_DESCRIPTION("Iptables target actions");
MODULE_LICENSE("GPL");
static int __init ipt_init_module(void)
static void __exit ipt_cleanup_module(void)
module_init(ipt_init_module);
module_exit(ipt_cleanup_module);
