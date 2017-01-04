#define MIRRED_TAB_MASK     7
static struct tcf_common *tcf_mirred_ht[MIRRED_TAB_MASK + 1];
static u32 mirred_idx_gen;
static DEFINE_RWLOCK(mirred_lock);
static LIST_HEAD(mirred_list);
static struct tcf_hashinfo mirred_hash_info = ;
static int tcf_mirred_release(struct tcf_mirred *m, int bind)
static const struct nla_policy mirred_policy[TCA_MIRRED_MAX + 1] = ;
static int tcf_mirred_init(struct nlattr *nla, struct nlattr *est,
struct tc_action *a, int ovr, int bind)
static int tcf_mirred_cleanup(struct tc_action *a, int bind)
static int tcf_mirred(struct sk_buff *skb, struct tc_action *a,
struct tcf_result *res)
static int tcf_mirred_dump(struct sk_buff *skb, struct tc_action *a, int bind, int ref)
static int mirred_device_event(struct notifier_block *unused,
unsigned long event, void *ptr)
static struct notifier_block mirred_device_notifier = ;
static struct tc_action_ops act_mirred_ops = ;
MODULE_AUTHOR("Jamal Hadi Salim(2002)");
MODULE_DESCRIPTION("Device Mirror/redirect actions");
MODULE_LICENSE("GPL");
static int __init mirred_init_module(void)
static void __exit mirred_cleanup_module(void)
module_init(mirred_init_module);
module_exit(mirred_cleanup_module);
