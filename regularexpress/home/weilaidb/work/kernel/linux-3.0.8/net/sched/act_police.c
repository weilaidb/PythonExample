#define L2T(p, L)   qdisc_l2t((p)->tcfp_R_tab, L)
#define L2T_P(p, L) qdisc_l2t((p)->tcfp_P_tab, L)
#define POL_TAB_MASK     15
static struct tcf_common *tcf_police_ht[POL_TAB_MASK + 1];
static u32 police_idx_gen;
static DEFINE_RWLOCK(police_lock);
static struct tcf_hashinfo police_hash_info = ;
struct tc_police_compat ;
static int tcf_act_police_walker(struct sk_buff *skb, struct netlink_callback *cb,
int type, struct tc_action *a)
static void tcf_police_destroy(struct tcf_police *p)
static const struct nla_policy police_policy[TCA_POLICE_MAX + 1] = ;
static int tcf_act_police_locate(struct nlattr *nla, struct nlattr *est,
struct tc_action *a, int ovr, int bind)
static int tcf_act_police_cleanup(struct tc_action *a, int bind)
static int tcf_act_police(struct sk_buff *skb, struct tc_action *a,
struct tcf_result *res)
static int
tcf_act_police_dump(struct sk_buff *skb, struct tc_action *a, int bind, int ref)
MODULE_AUTHOR("Alexey Kuznetsov");
MODULE_DESCRIPTION("Policing actions");
MODULE_LICENSE("GPL");
static struct tc_action_ops act_police_ops = ;
static int __init
police_init_module(void)
static void __exit
police_cleanup_module(void)
module_init(police_init_module);
module_exit(police_cleanup_module);
