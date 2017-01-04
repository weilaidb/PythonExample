static int blackhole_enqueue(struct sk_buff *skb, struct Qdisc *sch)
static struct sk_buff *blackhole_dequeue(struct Qdisc *sch)
static struct Qdisc_ops blackhole_qdisc_ops __read_mostly = ;
static int __init blackhole_module_init(void)
static void __exit blackhole_module_exit(void)
module_init(blackhole_module_init)
module_exit(blackhole_module_exit)
MODULE_LICENSE("GPL");
