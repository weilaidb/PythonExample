#define TCA_ACT_SIMP 22
#define SIMP_TAB_MASK     7
static struct tcf_common *tcf_simp_ht[SIMP_TAB_MASK + 1];
static u32 simp_idx_gen;
static DEFINE_RWLOCK(simp_lock);
static struct tcf_hashinfo simp_hash_info = ;
#define SIMP_MAX_DATA	32
static int tcf_simp(struct sk_buff *skb, struct tc_action *a, struct tcf_result *res)
static int tcf_simp_release(struct tcf_defact *d, int bind)
static int alloc_defdata(struct tcf_defact *d, char *defdata)
static void reset_policy(struct tcf_defact *d, char *defdata,
struct tc_defact *p)
static const struct nla_policy simple_policy[TCA_DEF_MAX + 1] = ;
static int tcf_simp_init(struct nlattr *nla, struct nlattr *est,
struct tc_action *a, int ovr, int bind)
static int tcf_simp_cleanup(struct tc_action *a, int bind)
static int tcf_simp_dump(struct sk_buff *skb, struct tc_action *a,
int bind, int ref)
static struct tc_action_ops act_simp_ops = ;
MODULE_AUTHOR("Jamal Hadi Salim(2005)");
MODULE_DESCRIPTION("Simple example action");
MODULE_LICENSE("GPL");
static int __init simp_init_module(void)
static void __exit simp_cleanup_module(void)
module_init(simp_init_module);
module_exit(simp_cleanup_module);
