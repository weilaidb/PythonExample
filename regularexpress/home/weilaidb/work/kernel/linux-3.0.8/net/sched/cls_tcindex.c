#define PERFECT_HASH_THRESHOLD	64
#define DEFAULT_HASH_SIZE	64
#define	PRIV(tp)	((struct tcindex_data *) (tp)->root)
struct tcindex_filter_result ;
struct tcindex_filter ;
struct tcindex_data ;
static const struct tcf_ext_map tcindex_ext_map = ;
static inline int
tcindex_filter_is_set(struct tcindex_filter_result *r)
static struct tcindex_filter_result *
tcindex_lookup(struct tcindex_data *p, u16 key)
static int tcindex_classify(struct sk_buff *skb, struct tcf_proto *tp,
struct tcf_result *res)
static unsigned long tcindex_get(struct tcf_proto *tp, u32 handle)
static void tcindex_put(struct tcf_proto *tp, unsigned long f)
static int tcindex_init(struct tcf_proto *tp)
static int
__tcindex_delete(struct tcf_proto *tp, unsigned long arg, int lock)
static int tcindex_delete(struct tcf_proto *tp, unsigned long arg)
static inline int
valid_perfect_hash(struct tcindex_data *p)
static const struct nla_policy tcindex_policy[TCA_TCINDEX_MAX + 1] = ;
static int
tcindex_set_parms(struct tcf_proto *tp, unsigned long base, u32 handle,
struct tcindex_data *p, struct tcindex_filter_result *r,
struct nlattr **tb, struct nlattr *est)
static int
tcindex_change(struct tcf_proto *tp, unsigned long base, u32 handle,
struct nlattr **tca, unsigned long *arg)
static void tcindex_walk(struct tcf_proto *tp, struct tcf_walker *walker)
static int tcindex_destroy_element(struct tcf_proto *tp,
unsigned long arg, struct tcf_walker *walker)
static void tcindex_destroy(struct tcf_proto *tp)
static int tcindex_dump(struct tcf_proto *tp, unsigned long fh,
struct sk_buff *skb, struct tcmsg *t)
static struct tcf_proto_ops cls_tcindex_ops __read_mostly = ;
static int __init init_tcindex(void)
static void __exit exit_tcindex(void)
module_init(init_tcindex)
module_exit(exit_tcindex)
MODULE_LICENSE("GPL");
