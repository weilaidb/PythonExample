#define NO_DEFAULT_INDEX	(1 << 16)
struct dsmark_qdisc_data ;
static inline int dsmark_valid_index(struct dsmark_qdisc_data *p, u16 index)
static int dsmark_graft(struct Qdisc *sch, unsigned long arg,
struct Qdisc *new, struct Qdisc **old)
static struct Qdisc *dsmark_leaf(struct Qdisc *sch, unsigned long arg)
static unsigned long dsmark_get(struct Qdisc *sch, u32 classid)
static unsigned long dsmark_bind_filter(struct Qdisc *sch,
unsigned long parent, u32 classid)
static void dsmark_put(struct Qdisc *sch, unsigned long cl)
static const struct nla_policy dsmark_policy[TCA_DSMARK_MAX + 1] = ;
static int dsmark_change(struct Qdisc *sch, u32 classid, u32 parent,
struct nlattr **tca, unsigned long *arg)
static int dsmark_delete(struct Qdisc *sch, unsigned long arg)
static void dsmark_walk(struct Qdisc *sch, struct qdisc_walker *walker)
static inline struct tcf_proto **dsmark_find_tcf(struct Qdisc *sch,
unsigned long cl)
static int dsmark_enqueue(struct sk_buff *skb, struct Qdisc *sch)
static struct sk_buff *dsmark_dequeue(struct Qdisc *sch)
static struct sk_buff *dsmark_peek(struct Qdisc *sch)
static unsigned int dsmark_drop(struct Qdisc *sch)
static int dsmark_init(struct Qdisc *sch, struct nlattr *opt)
static void dsmark_reset(struct Qdisc *sch)
static void dsmark_destroy(struct Qdisc *sch)
static int dsmark_dump_class(struct Qdisc *sch, unsigned long cl,
struct sk_buff *skb, struct tcmsg *tcm)
static int dsmark_dump(struct Qdisc *sch, struct sk_buff *skb)
static const struct Qdisc_class_ops dsmark_class_ops = ;
static struct Qdisc_ops dsmark_qdisc_ops __read_mostly = ;
static int __init dsmark_module_init(void)
static void __exit dsmark_module_exit(void)
module_init(dsmark_module_init)
module_exit(dsmark_module_exit)
MODULE_LICENSE("GPL");
