struct red_sched_data ;
static inline int red_use_ecn(struct red_sched_data *q)
static inline int red_use_harddrop(struct red_sched_data *q)
static int red_enqueue(struct sk_buff *skb, struct Qdisc *sch)
static struct sk_buff *red_dequeue(struct Qdisc *sch)
static struct sk_buff *red_peek(struct Qdisc *sch)
static unsigned int red_drop(struct Qdisc *sch)
static void red_reset(struct Qdisc *sch)
static void red_destroy(struct Qdisc *sch)
static const struct nla_policy red_policy[TCA_RED_MAX + 1] = ;
static int red_change(struct Qdisc *sch, struct nlattr *opt)
static int red_init(struct Qdisc *sch, struct nlattr *opt)
static int red_dump(struct Qdisc *sch, struct sk_buff *skb)
static int red_dump_stats(struct Qdisc *sch, struct gnet_dump *d)
static int red_dump_class(struct Qdisc *sch, unsigned long cl,
struct sk_buff *skb, struct tcmsg *tcm)
static int red_graft(struct Qdisc *sch, unsigned long arg, struct Qdisc *new,
struct Qdisc **old)
static struct Qdisc *red_leaf(struct Qdisc *sch, unsigned long arg)
static unsigned long red_get(struct Qdisc *sch, u32 classid)
static void red_put(struct Qdisc *sch, unsigned long arg)
static void red_walk(struct Qdisc *sch, struct qdisc_walker *walker)
static const struct Qdisc_class_ops red_class_ops = ;
static struct Qdisc_ops red_qdisc_ops __read_mostly = ;
static int __init red_module_init(void)
static void __exit red_module_exit(void)
module_init(red_module_init)
module_exit(red_module_exit)
MODULE_LICENSE("GPL");
