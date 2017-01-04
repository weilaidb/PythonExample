struct multiq_sched_data ;
static struct Qdisc *
multiq_classify(struct sk_buff *skb, struct Qdisc *sch, int *qerr)
static int
multiq_enqueue(struct sk_buff *skb, struct Qdisc *sch)
static struct sk_buff *multiq_dequeue(struct Qdisc *sch)
static struct sk_buff *multiq_peek(struct Qdisc *sch)
static unsigned int multiq_drop(struct Qdisc *sch)
static void
multiq_reset(struct Qdisc *sch)
static void
multiq_destroy(struct Qdisc *sch)
static int multiq_tune(struct Qdisc *sch, struct nlattr *opt)
static int multiq_init(struct Qdisc *sch, struct nlattr *opt)
static int multiq_dump(struct Qdisc *sch, struct sk_buff *skb)
static int multiq_graft(struct Qdisc *sch, unsigned long arg, struct Qdisc *new,
struct Qdisc **old)
static struct Qdisc *
multiq_leaf(struct Qdisc *sch, unsigned long arg)
static unsigned long multiq_get(struct Qdisc *sch, u32 classid)
static unsigned long multiq_bind(struct Qdisc *sch, unsigned long parent,
u32 classid)
static void multiq_put(struct Qdisc *q, unsigned long cl)
static int multiq_dump_class(struct Qdisc *sch, unsigned long cl,
struct sk_buff *skb, struct tcmsg *tcm)
static int multiq_dump_class_stats(struct Qdisc *sch, unsigned long cl,
struct gnet_dump *d)
static void multiq_walk(struct Qdisc *sch, struct qdisc_walker *arg)
static struct tcf_proto **multiq_find_tcf(struct Qdisc *sch, unsigned long cl)
static const struct Qdisc_class_ops multiq_class_ops = ;
static struct Qdisc_ops multiq_qdisc_ops __read_mostly = ;
static int __init multiq_module_init(void)
static void __exit multiq_module_exit(void)
module_init(multiq_module_init)
module_exit(multiq_module_exit)
MODULE_LICENSE("GPL");
