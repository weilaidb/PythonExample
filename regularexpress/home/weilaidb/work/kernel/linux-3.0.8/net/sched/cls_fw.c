#define HTSIZE (PAGE_SIZE/sizeof(struct fw_filter *))
struct fw_head ;
struct fw_filter ;
static const struct tcf_ext_map fw_ext_map = ;
static inline int fw_hash(u32 handle)
static int fw_classify(struct sk_buff *skb, struct tcf_proto *tp,
struct tcf_result *res)
static unsigned long fw_get(struct tcf_proto *tp, u32 handle)
static void fw_put(struct tcf_proto *tp, unsigned long f)
static int fw_init(struct tcf_proto *tp)
static void fw_delete_filter(struct tcf_proto *tp, struct fw_filter *f)
static void fw_destroy(struct tcf_proto *tp)
static int fw_delete(struct tcf_proto *tp, unsigned long arg)
static const struct nla_policy fw_policy[TCA_FW_MAX + 1] = ;
static int
fw_change_attrs(struct tcf_proto *tp, struct fw_filter *f,
struct nlattr **tb, struct nlattr **tca, unsigned long base)
static int fw_change(struct tcf_proto *tp, unsigned long base,
u32 handle,
struct nlattr **tca,
unsigned long *arg)
static void fw_walk(struct tcf_proto *tp, struct tcf_walker *arg)
static int fw_dump(struct tcf_proto *tp, unsigned long fh,
struct sk_buff *skb, struct tcmsg *t)
static struct tcf_proto_ops cls_fw_ops __read_mostly = ;
static int __init init_fw(void)
static void __exit exit_fw(void)
module_init(init_fw)
module_exit(exit_fw)
MODULE_LICENSE("GPL");
