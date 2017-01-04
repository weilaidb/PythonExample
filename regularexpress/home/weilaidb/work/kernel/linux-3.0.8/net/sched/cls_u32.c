struct tc_u_knode ;
struct tc_u_hnode ;
struct tc_u_common ;
static const struct tcf_ext_map u32_ext_map = ;
static inline unsigned int u32_hash_fold(__be32 key,
const struct tc_u32_sel *sel,
u8 fshift)
static int u32_classify(struct sk_buff *skb, struct tcf_proto *tp, struct tcf_result *res)
static struct tc_u_hnode *
u32_lookup_ht(struct tc_u_common *tp_c, u32 handle)
static struct tc_u_knode *
u32_lookup_key(struct tc_u_hnode *ht, u32 handle)
static unsigned long u32_get(struct tcf_proto *tp, u32 handle)
static void u32_put(struct tcf_proto *tp, unsigned long f)
static u32 gen_new_htid(struct tc_u_common *tp_c)
static int u32_init(struct tcf_proto *tp)
static int u32_destroy_key(struct tcf_proto *tp, struct tc_u_knode *n)
static int u32_delete_key(struct tcf_proto *tp, struct tc_u_knode* key)
static void u32_clear_hnode(struct tcf_proto *tp, struct tc_u_hnode *ht)
static int u32_destroy_hnode(struct tcf_proto *tp, struct tc_u_hnode *ht)
static void u32_destroy(struct tcf_proto *tp)
static int u32_delete(struct tcf_proto *tp, unsigned long arg)
static u32 gen_new_kid(struct tc_u_hnode *ht, u32 handle)
static const struct nla_policy u32_policy[TCA_U32_MAX + 1] = ;
static int u32_set_parms(struct tcf_proto *tp, unsigned long base,
struct tc_u_hnode *ht,
struct tc_u_knode *n, struct nlattr **tb,
struct nlattr *est)
static int u32_change(struct tcf_proto *tp, unsigned long base, u32 handle,
struct nlattr **tca,
unsigned long *arg)
static void u32_walk(struct tcf_proto *tp, struct tcf_walker *arg)
static int u32_dump(struct tcf_proto *tp, unsigned long fh,
struct sk_buff *skb, struct tcmsg *t)
static struct tcf_proto_ops cls_u32_ops __read_mostly = ;
static int __init init_u32(void)
static void __exit exit_u32(void)
module_init(init_u32)
module_exit(exit_u32)
MODULE_LICENSE("GPL");
