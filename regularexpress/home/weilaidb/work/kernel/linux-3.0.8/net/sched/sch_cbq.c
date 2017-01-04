struct cbq_sched_data;
struct cbq_class ;
struct cbq_sched_data ;
#define L2T(cl, len)	qdisc_l2t((cl)->R_tab, len)
static inline struct cbq_class *
cbq_class_lookup(struct cbq_sched_data *q, u32 classid)
static struct cbq_class *
cbq_reclassify(struct sk_buff *skb, struct cbq_class *this)
static struct cbq_class *
cbq_classify(struct sk_buff *skb, struct Qdisc *sch, int *qerr)
static inline void cbq_activate_class(struct cbq_class *cl)
static void cbq_deactivate_class(struct cbq_class *this)
static void
cbq_mark_toplevel(struct cbq_sched_data *q, struct cbq_class *cl)
static int
cbq_enqueue(struct sk_buff *skb, struct Qdisc *sch)
static void cbq_ovl_classic(struct cbq_class *cl)
static void cbq_ovl_rclassic(struct cbq_class *cl)
static void cbq_ovl_delay(struct cbq_class *cl)
static void cbq_ovl_lowprio(struct cbq_class *cl)
static void cbq_ovl_drop(struct cbq_class *cl)
static psched_tdiff_t cbq_undelay_prio(struct cbq_sched_data *q, int prio,
psched_time_t now)
static enum hrtimer_restart cbq_undelay(struct hrtimer *timer)
static int cbq_reshape_fail(struct sk_buff *skb, struct Qdisc *child)
static inline void
cbq_update_toplevel(struct cbq_sched_data *q, struct cbq_class *cl,
struct cbq_class *borrowed)
static void
cbq_update(struct cbq_sched_data *q)
static inline struct cbq_class *
cbq_under_limit(struct cbq_class *cl)
static inline struct sk_buff *
cbq_dequeue_prio(struct Qdisc *sch, int prio)
static inline struct sk_buff *
cbq_dequeue_1(struct Qdisc *sch)
static struct sk_buff *
cbq_dequeue(struct Qdisc *sch)
static void cbq_adjust_levels(struct cbq_class *this)
static void cbq_normalize_quanta(struct cbq_sched_data *q, int prio)
static void cbq_sync_defmap(struct cbq_class *cl)
static void cbq_change_defmap(struct cbq_class *cl, u32 splitid, u32 def, u32 mask)
static void cbq_unlink_class(struct cbq_class *this)
static void cbq_link_class(struct cbq_class *this)
static unsigned int cbq_drop(struct Qdisc *sch)
static void
cbq_reset(struct Qdisc *sch)
static int cbq_set_lss(struct cbq_class *cl, struct tc_cbq_lssopt *lss)
static void cbq_rmprio(struct cbq_sched_data *q, struct cbq_class *cl)
static void cbq_addprio(struct cbq_sched_data *q, struct cbq_class *cl)
static int cbq_set_wrr(struct cbq_class *cl, struct tc_cbq_wrropt *wrr)
static int cbq_set_overlimit(struct cbq_class *cl, struct tc_cbq_ovl *ovl)
static int cbq_set_police(struct cbq_class *cl, struct tc_cbq_police *p)
static int cbq_set_fopt(struct cbq_class *cl, struct tc_cbq_fopt *fopt)
static const struct nla_policy cbq_policy[TCA_CBQ_MAX + 1] = ;
static int cbq_init(struct Qdisc *sch, struct nlattr *opt)
static int cbq_dump_rate(struct sk_buff *skb, struct cbq_class *cl)
static int cbq_dump_lss(struct sk_buff *skb, struct cbq_class *cl)
static int cbq_dump_wrr(struct sk_buff *skb, struct cbq_class *cl)
static int cbq_dump_ovl(struct sk_buff *skb, struct cbq_class *cl)
static int cbq_dump_fopt(struct sk_buff *skb, struct cbq_class *cl)
static int cbq_dump_police(struct sk_buff *skb, struct cbq_class *cl)
static int cbq_dump_attr(struct sk_buff *skb, struct cbq_class *cl)
static int cbq_dump(struct Qdisc *sch, struct sk_buff *skb)
static int
cbq_dump_stats(struct Qdisc *sch, struct gnet_dump *d)
static int
cbq_dump_class(struct Qdisc *sch, unsigned long arg,
struct sk_buff *skb, struct tcmsg *tcm)
static int
cbq_dump_class_stats(struct Qdisc *sch, unsigned long arg,
struct gnet_dump *d)
static int cbq_graft(struct Qdisc *sch, unsigned long arg, struct Qdisc *new,
struct Qdisc **old)
static struct Qdisc *cbq_leaf(struct Qdisc *sch, unsigned long arg)
static void cbq_qlen_notify(struct Qdisc *sch, unsigned long arg)
static unsigned long cbq_get(struct Qdisc *sch, u32 classid)
static void cbq_destroy_class(struct Qdisc *sch, struct cbq_class *cl)
static void cbq_destroy(struct Qdisc *sch)
static void cbq_put(struct Qdisc *sch, unsigned long arg)
static int
cbq_change_class(struct Qdisc *sch, u32 classid, u32 parentid, struct nlattr **tca,
unsigned long *arg)
static int cbq_delete(struct Qdisc *sch, unsigned long arg)
static struct tcf_proto **cbq_find_tcf(struct Qdisc *sch, unsigned long arg)
static unsigned long cbq_bind_filter(struct Qdisc *sch, unsigned long parent,
u32 classid)
static void cbq_unbind_filter(struct Qdisc *sch, unsigned long arg)
static void cbq_walk(struct Qdisc *sch, struct qdisc_walker *arg)
static const struct Qdisc_class_ops cbq_class_ops = ;
static struct Qdisc_ops cbq_qdisc_ops __read_mostly = ;
static int __init cbq_module_init(void)
static void __exit cbq_module_exit(void)
module_init(cbq_module_init)
module_exit(cbq_module_exit)
MODULE_LICENSE("GPL");
