struct prio_sched_data ;
static struct Qdisc *
prio_classify(struct sk_buff *skb, struct Qdisc *sch, int *qerr)
static int
prio_enqueue(struct sk_buff *skb, struct Qdisc *sch)
static struct sk_buff *prio_peek(struct Qdisc *sch)
static struct sk_buff *prio_dequeue(struct Qdisc *sch)
static unsigned int prio_drop(struct Qdisc *sch)
static void
prio_reset(struct Qdisc *sch)
static void
prio_destroy(struct Qdisc *sch)
static int prio_tune(struct Qdisc *sch, struct nlattr *opt)
static int prio_init(struct Qdisc *sch, struct nlattr *opt)
static int prio_dump(struct Qdisc *sch, struct sk_buff *skb)
static int prio_graft(struct Qdisc *sch, unsigned long arg, struct Qdisc *new,
struct Qdisc **old)
static struct Qdisc *
prio_leaf(struct Qdisc *sch, unsigned long arg)
static unsigned long prio_get(struct Qdisc *sch, u32 classid)
static unsigned long prio_bind(struct Qdisc *sch, unsigned long parent, u32 classid)
static void prio_put(struct Qdisc *q, unsigned long cl)
static int prio_dump_class(struct Qdisc *sch, unsigned long cl, struct sk_buff *skb,
struct tcmsg *tcm)
static int prio_dump_class_stats(struct Qdisc *sch, unsigned long cl,
struct gnet_dump *d)
static void prio_walk(struct Qdisc *sch, struct qdisc_walker *arg)
static struct tcf_proto **prio_find_tcf(struct Qdisc *sch, unsigned long cl)
static const struct Qdisc_class_ops prio_class_ops = ;
static struct Qdisc_ops prio_qdisc_ops __read_mostly = ;
static int __init prio_module_init(void)
static void __exit prio_module_exit(void)
module_init(prio_module_init)
module_exit(prio_module_exit)
MODULE_LICENSE("GPL");
