struct drr_class ;
struct drr_sched ;
static struct drr_class *drr_find_class(struct Qdisc *sch, u32 classid)
static void drr_purge_queue(struct drr_class *cl)
static const struct nla_policy drr_policy[TCA_DRR_MAX + 1] = ;
static int drr_change_class(struct Qdisc *sch, u32 classid, u32 parentid,
struct nlattr **tca, unsigned long *arg)
static void drr_destroy_class(struct Qdisc *sch, struct drr_class *cl)
static int drr_delete_class(struct Qdisc *sch, unsigned long arg)
static unsigned long drr_get_class(struct Qdisc *sch, u32 classid)
static void drr_put_class(struct Qdisc *sch, unsigned long arg)
static struct tcf_proto **drr_tcf_chain(struct Qdisc *sch, unsigned long cl)
static unsigned long drr_bind_tcf(struct Qdisc *sch, unsigned long parent,
u32 classid)
static void drr_unbind_tcf(struct Qdisc *sch, unsigned long arg)
static int drr_graft_class(struct Qdisc *sch, unsigned long arg,
struct Qdisc *new, struct Qdisc **old)
static struct Qdisc *drr_class_leaf(struct Qdisc *sch, unsigned long arg)
static void drr_qlen_notify(struct Qdisc *csh, unsigned long arg)
static int drr_dump_class(struct Qdisc *sch, unsigned long arg,
struct sk_buff *skb, struct tcmsg *tcm)
static int drr_dump_class_stats(struct Qdisc *sch, unsigned long arg,
struct gnet_dump *d)
static void drr_walk(struct Qdisc *sch, struct qdisc_walker *arg)
static struct drr_class *drr_classify(struct sk_buff *skb, struct Qdisc *sch,
int *qerr)
static int drr_enqueue(struct sk_buff *skb, struct Qdisc *sch)
static struct sk_buff *drr_dequeue(struct Qdisc *sch)
static unsigned int drr_drop(struct Qdisc *sch)
static int drr_init_qdisc(struct Qdisc *sch, struct nlattr *opt)
static void drr_reset_qdisc(struct Qdisc *sch)
static void drr_destroy_qdisc(struct Qdisc *sch)
static const struct Qdisc_class_ops drr_class_ops = ;
static struct Qdisc_ops drr_qdisc_ops __read_mostly = ;
static int __init drr_init(void)
static void __exit drr_exit(void)
module_init(drr_init);
module_exit(drr_exit);
MODULE_LICENSE("GPL");
