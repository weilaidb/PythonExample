struct mqprio_sched ;
static void mqprio_destroy(struct Qdisc *sch)
static int mqprio_parse_opt(struct net_device *dev, struct tc_mqprio_qopt *qopt)
static int mqprio_init(struct Qdisc *sch, struct nlattr *opt)
static void mqprio_attach(struct Qdisc *sch)
static struct netdev_queue *mqprio_queue_get(struct Qdisc *sch,
unsigned long cl)
static int mqprio_graft(struct Qdisc *sch, unsigned long cl, struct Qdisc *new,
struct Qdisc **old)
static int mqprio_dump(struct Qdisc *sch, struct sk_buff *skb)
static struct Qdisc *mqprio_leaf(struct Qdisc *sch, unsigned long cl)
static unsigned long mqprio_get(struct Qdisc *sch, u32 classid)
static void mqprio_put(struct Qdisc *sch, unsigned long cl)
static int mqprio_dump_class(struct Qdisc *sch, unsigned long cl,
struct sk_buff *skb, struct tcmsg *tcm)
static int mqprio_dump_class_stats(struct Qdisc *sch, unsigned long cl,
struct gnet_dump *d)
__releases(d->lock)
__acquires(d->lock)
static void mqprio_walk(struct Qdisc *sch, struct qdisc_walker *arg)
static const struct Qdisc_class_ops mqprio_class_ops = ;
static struct Qdisc_ops mqprio_qdisc_ops __read_mostly = ;
static int __init mqprio_module_init(void)
static void __exit mqprio_module_exit(void)
module_init(mqprio_module_init);
module_exit(mqprio_module_exit);
MODULE_LICENSE("GPL");
