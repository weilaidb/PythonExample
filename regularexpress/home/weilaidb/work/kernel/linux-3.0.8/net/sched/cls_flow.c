#if defined(CONFIG_NF_CONNTRACK) || defined(CONFIG_NF_CONNTRACK_MODULE)
struct flow_head ;
struct flow_filter ;
static const struct tcf_ext_map flow_ext_map = ;
static inline u32 addr_fold(void *addr)
static u32 flow_get_src(struct sk_buff *skb)
static u32 flow_get_dst(struct sk_buff *skb)
static u32 flow_get_proto(struct sk_buff *skb)
static u32 flow_get_proto_src(struct sk_buff *skb)
static u32 flow_get_proto_dst(struct sk_buff *skb)
static u32 flow_get_iif(const struct sk_buff *skb)
static u32 flow_get_priority(const struct sk_buff *skb)
static u32 flow_get_mark(const struct sk_buff *skb)
static u32 flow_get_nfct(const struct sk_buff *skb)
#if defined(CONFIG_NF_CONNTRACK) || defined(CONFIG_NF_CONNTRACK_MODULE)
#define CTTUPLE(skb, member)						\
()
#define CTTUPLE(skb, member)						\
()
static u32 flow_get_nfct_src(struct sk_buff *skb)
static u32 flow_get_nfct_dst(struct sk_buff *skb)
static u32 flow_get_nfct_proto_src(struct sk_buff *skb)
static u32 flow_get_nfct_proto_dst(struct sk_buff *skb)
static u32 flow_get_rtclassid(const struct sk_buff *skb)
static u32 flow_get_skuid(const struct sk_buff *skb)
static u32 flow_get_skgid(const struct sk_buff *skb)
static u32 flow_get_vlan_tag(const struct sk_buff *skb)
static u32 flow_get_rxhash(struct sk_buff *skb)
static u32 flow_key_get(struct sk_buff *skb, int key)
static int flow_classify(struct sk_buff *skb, struct tcf_proto *tp,
struct tcf_result *res)
static void flow_perturbation(unsigned long arg)
static const struct nla_policy flow_policy[TCA_FLOW_MAX + 1] = ;
static int flow_change(struct tcf_proto *tp, unsigned long base,
u32 handle, struct nlattr **tca,
unsigned long *arg)
static void flow_destroy_filter(struct tcf_proto *tp, struct flow_filter *f)
static int flow_delete(struct tcf_proto *tp, unsigned long arg)
static int flow_init(struct tcf_proto *tp)
static void flow_destroy(struct tcf_proto *tp)
static unsigned long flow_get(struct tcf_proto *tp, u32 handle)
static void flow_put(struct tcf_proto *tp, unsigned long f)
static int flow_dump(struct tcf_proto *tp, unsigned long fh,
struct sk_buff *skb, struct tcmsg *t)
static void flow_walk(struct tcf_proto *tp, struct tcf_walker *arg)
static struct tcf_proto_ops cls_flow_ops __read_mostly = ;
static int __init cls_flow_init(void)
static void __exit cls_flow_exit(void)
module_init(cls_flow_init);
module_exit(cls_flow_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Patrick McHardy <kaber@trash.net>");
MODULE_DESCRIPTION("TC flow classifier");
