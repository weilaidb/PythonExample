struct ingress_qdisc_data ;
static struct Qdisc *ingress_leaf(struct Qdisc *sch, unsigned long arg)
static unsigned long ingress_get(struct Qdisc *sch, u32 classid)
static unsigned long ingress_bind_filter(struct Qdisc *sch,
unsigned long parent, u32 classid)
static void ingress_put(struct Qdisc *sch, unsigned long cl)
static void ingress_walk(struct Qdisc *sch, struct qdisc_walker *walker)
static struct tcf_proto **ingress_find_tcf(struct Qdisc *sch, unsigned long cl)
static int ingress_enqueue(struct sk_buff *skb, struct Qdisc *sch)
static void ingress_destroy(struct Qdisc *sch)
static int ingress_dump(struct Qdisc *sch, struct sk_buff *skb)
static const struct Qdisc_class_ops ingress_class_ops = ;
static struct Qdisc_ops ingress_qdisc_ops __read_mostly = ;
static int __init ingress_module_init(void)
static void __exit ingress_module_exit(void)
module_init(ingress_module_init)
module_exit(ingress_module_exit)
MODULE_LICENSE("GPL");
