struct basic_head ;
struct basic_filter ;
static const struct tcf_ext_map basic_ext_map = ;
static int basic_classify(struct sk_buff *skb, struct tcf_proto *tp,
struct tcf_result *res)
static unsigned long basic_get(struct tcf_proto *tp, u32 handle)
static void basic_put(struct tcf_proto *tp, unsigned long f)
static int basic_init(struct tcf_proto *tp)
static void basic_delete_filter(struct tcf_proto *tp, struct basic_filter *f)
static void basic_destroy(struct tcf_proto *tp)
static int basic_delete(struct tcf_proto *tp, unsigned long arg)
static const struct nla_policy basic_policy[TCA_BASIC_MAX + 1] = ;
static int basic_set_parms(struct tcf_proto *tp, struct basic_filter *f,
unsigned long base, struct nlattr **tb,
struct nlattr *est)
static int basic_change(struct tcf_proto *tp, unsigned long base, u32 handle,
struct nlattr **tca, unsigned long *arg)
static void basic_walk(struct tcf_proto *tp, struct tcf_walker *arg)
static int basic_dump(struct tcf_proto *tp, unsigned long fh,
struct sk_buff *skb, struct tcmsg *t)
static struct tcf_proto_ops cls_basic_ops __read_mostly = ;
static int __init init_basic(void)
static void __exit exit_basic(void)
module_init(init_basic)
module_exit(exit_basic)
MODULE_LICENSE("GPL");
