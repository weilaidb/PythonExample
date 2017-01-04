struct mq_sched ;
static void mq_destroy(struct Qdisc *sch)
static int mq_init(struct Qdisc *sch, struct nlattr *opt)
static void mq_attach(struct Qdisc *sch)
static int mq_dump(struct Qdisc *sch, struct sk_buff *skb)
static struct netdev_queue *mq_queue_get(struct Qdisc *sch, unsigned long cl)
static struct netdev_queue *mq_select_queue(struct Qdisc *sch,
struct tcmsg *tcm)
static int mq_graft(struct Qdisc *sch, unsigned long cl, struct Qdisc *new,
struct Qdisc **old)
static struct Qdisc *mq_leaf(struct Qdisc *sch, unsigned long cl)
static unsigned long mq_get(struct Qdisc *sch, u32 classid)
static void mq_put(struct Qdisc *sch, unsigned long cl)
static int mq_dump_class(struct Qdisc *sch, unsigned long cl,
struct sk_buff *skb, struct tcmsg *tcm)
static int mq_dump_class_stats(struct Qdisc *sch, unsigned long cl,
struct gnet_dump *d)
static void mq_walk(struct Qdisc *sch, struct qdisc_walker *arg)
static const struct Qdisc_class_ops mq_class_ops = ;
struct Qdisc_ops mq_qdisc_ops __read_mostly = ;
