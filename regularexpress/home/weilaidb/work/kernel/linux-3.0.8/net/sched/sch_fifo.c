static int bfifo_enqueue(struct sk_buff *skb, struct Qdisc *sch)
static int pfifo_enqueue(struct sk_buff *skb, struct Qdisc *sch)
static int pfifo_tail_enqueue(struct sk_buff *skb, struct Qdisc *sch)
static int fifo_init(struct Qdisc *sch, struct nlattr *opt)
static int fifo_dump(struct Qdisc *sch, struct sk_buff *skb)
struct Qdisc_ops pfifo_qdisc_ops __read_mostly = ;
EXPORT_SYMBOL(pfifo_qdisc_ops);
struct Qdisc_ops bfifo_qdisc_ops __read_mostly = ;
EXPORT_SYMBOL(bfifo_qdisc_ops);
struct Qdisc_ops pfifo_head_drop_qdisc_ops __read_mostly = ;
int fifo_set_limit(struct Qdisc *q, unsigned int limit)
EXPORT_SYMBOL(fifo_set_limit);
struct Qdisc *fifo_create_dflt(struct Qdisc *sch, struct Qdisc_ops *ops,
unsigned int limit)
EXPORT_SYMBOL(fifo_create_dflt);
