struct route4_fastmap ;
struct route4_head ;
struct route4_bucket ;
struct route4_filter ;
#define ROUTE4_FAILURE ((struct route4_filter *)(-1L))
static const struct tcf_ext_map route_ext_map = ;
static inline int route4_fastmap_hash(u32 id, int iif)
static void
route4_reset_fastmap(struct Qdisc *q, struct route4_head *head, u32 id)
static void
route4_set_fastmap(struct route4_head *head, u32 id, int iif,
struct route4_filter *f)
static inline int route4_hash_to(u32 id)
static inline int route4_hash_from(u32 id)
static inline int route4_hash_iif(int iif)
static inline int route4_hash_wild(void)
#define ROUTE4_APPLY_RESULT()					\
static int route4_classify(struct sk_buff *skb, struct tcf_proto *tp,
struct tcf_result *res)
static inline u32 to_hash(u32 id)
static inline u32 from_hash(u32 id)
static unsigned long route4_get(struct tcf_proto *tp, u32 handle)
static void route4_put(struct tcf_proto *tp, unsigned long f)
static int route4_init(struct tcf_proto *tp)
static void
route4_delete_filter(struct tcf_proto *tp, struct route4_filter *f)
static void route4_destroy(struct tcf_proto *tp)
static int route4_delete(struct tcf_proto *tp, unsigned long arg)
static const struct nla_policy route4_policy[TCA_ROUTE4_MAX + 1] = ;
static int route4_set_parms(struct tcf_proto *tp, unsigned long base,
struct route4_filter *f, u32 handle, struct route4_head *head,
struct nlattr **tb, struct nlattr *est, int new)
static int route4_change(struct tcf_proto *tp, unsigned long base,
u32 handle,
struct nlattr **tca,
unsigned long *arg)
static void route4_walk(struct tcf_proto *tp, struct tcf_walker *arg)
static int route4_dump(struct tcf_proto *tp, unsigned long fh,
struct sk_buff *skb, struct tcmsg *t)
static struct tcf_proto_ops cls_route4_ops __read_mostly = ;
static int __init init_route4(void)
static void __exit exit_route4(void)
module_init(init_route4)
module_exit(exit_route4)
MODULE_LICENSE("GPL");
