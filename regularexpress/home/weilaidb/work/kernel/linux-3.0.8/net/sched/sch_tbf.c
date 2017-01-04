struct tbf_sched_data ;
#define L2T(q, L)   qdisc_l2t((q)->R_tab, L)
#define L2T_P(q, L) qdisc_l2t((q)->P_tab, L)
static int tbf_enqueue(struct sk_buff *skb, struct Qdisc *sch)
static unsigned int tbf_drop(struct Qdisc *sch)
static struct sk_buff *tbf_dequeue(struct Qdisc *sch)
static void tbf_reset(struct Qdisc *sch)
static const struct nla_policy tbf_policy[TCA_TBF_MAX + 1] = ;
static int tbf_change(struct Qdisc *sch, struct nlattr *opt)
static int tbf_init(struct Qdisc *sch, struct nlattr *opt)
static void tbf_destroy(struct Qdisc *sch)
static int tbf_dump(struct Qdisc *sch, struct sk_buff *skb)
static int tbf_dump_class(struct Qdisc *sch, unsigned long cl,
struct sk_buff *skb, struct tcmsg *tcm)
static int tbf_graft(struct Qdisc *sch, unsigned long arg, struct Qdisc *new,
struct Qdisc **old)
static struct Qdisc *tbf_leaf(struct Qdisc *sch, unsigned long arg)
static unsigned long tbf_get(struct Qdisc *sch, u32 classid)
static void tbf_put(struct Qdisc *sch, unsigned long arg)
static void tbf_walk(struct Qdisc *sch, struct qdisc_walker *walker)
static const struct Qdisc_class_ops tbf_class_ops = ;
static struct Qdisc_ops tbf_qdisc_ops __read_mostly = ;
static int __init tbf_module_init(void)
static void __exit tbf_module_exit(void)
module_init(tbf_module_init)
module_exit(tbf_module_exit)
MODULE_LICENSE("GPL");
