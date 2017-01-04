struct internal_sc ;
struct runtime_sc ;
enum hfsc_class_flags ;
struct hfsc_class ;
struct hfsc_sched ;
#define	HT_INFINITY	0xffffffffffffffffULL
static void
eltree_insert(struct hfsc_class *cl)
static inline void
eltree_remove(struct hfsc_class *cl)
static inline void
eltree_update(struct hfsc_class *cl)
static inline struct hfsc_class *
eltree_get_mindl(struct hfsc_sched *q, u64 cur_time)
static inline struct hfsc_class *
eltree_get_minel(struct hfsc_sched *q)
static void
vttree_insert(struct hfsc_class *cl)
static inline void
vttree_remove(struct hfsc_class *cl)
static inline void
vttree_update(struct hfsc_class *cl)
static inline struct hfsc_class *
vttree_firstfit(struct hfsc_class *cl, u64 cur_time)
static struct hfsc_class *
vttree_get_minvt(struct hfsc_class *cl, u64 cur_time)
static void
cftree_insert(struct hfsc_class *cl)
static inline void
cftree_remove(struct hfsc_class *cl)
static inline void
cftree_update(struct hfsc_class *cl)
#define	SM_SHIFT	(30 - PSCHED_SHIFT)
#define	ISM_SHIFT	(8 + PSCHED_SHIFT)
#define	SM_MASK		((1ULL << SM_SHIFT) - 1)
#define	ISM_MASK	((1ULL << ISM_SHIFT) - 1)
static inline u64
seg_x2y(u64 x, u64 sm)
static inline u64
seg_y2x(u64 y, u64 ism)
static u64
m2sm(u32 m)
static u64
m2ism(u32 m)
static u64
d2dx(u32 d)
static u32
sm2m(u64 sm)
static u32
dx2d(u64 dx)
static void
sc2isc(struct tc_service_curve *sc, struct internal_sc *isc)
static void
rtsc_init(struct runtime_sc *rtsc, struct internal_sc *isc, u64 x, u64 y)
static u64
rtsc_y2x(struct runtime_sc *rtsc, u64 y)
static u64
rtsc_x2y(struct runtime_sc *rtsc, u64 x)
static void
rtsc_min(struct runtime_sc *rtsc, struct internal_sc *isc, u64 x, u64 y)
static void
init_ed(struct hfsc_class *cl, unsigned int next_len)
static void
update_ed(struct hfsc_class *cl, unsigned int next_len)
static inline void
update_d(struct hfsc_class *cl, unsigned int next_len)
static inline void
update_cfmin(struct hfsc_class *cl)
static void
init_vf(struct hfsc_class *cl, unsigned int len)
static void
update_vf(struct hfsc_class *cl, unsigned int len, u64 cur_time)
static void
set_active(struct hfsc_class *cl, unsigned int len)
static void
set_passive(struct hfsc_class *cl)
static unsigned int
qdisc_peek_len(struct Qdisc *sch)
static void
hfsc_purge_queue(struct Qdisc *sch, struct hfsc_class *cl)
static void
hfsc_adjust_levels(struct hfsc_class *cl)
static inline struct hfsc_class *
hfsc_find_class(u32 classid, struct Qdisc *sch)
static void
hfsc_change_rsc(struct hfsc_class *cl, struct tc_service_curve *rsc,
u64 cur_time)
static void
hfsc_change_fsc(struct hfsc_class *cl, struct tc_service_curve *fsc)
static void
hfsc_change_usc(struct hfsc_class *cl, struct tc_service_curve *usc,
u64 cur_time)
static const struct nla_policy hfsc_policy[TCA_HFSC_MAX + 1] = ;
static int
hfsc_change_class(struct Qdisc *sch, u32 classid, u32 parentid,
struct nlattr **tca, unsigned long *arg)
static void
hfsc_destroy_class(struct Qdisc *sch, struct hfsc_class *cl)
static int
hfsc_delete_class(struct Qdisc *sch, unsigned long arg)
static struct hfsc_class *
hfsc_classify(struct sk_buff *skb, struct Qdisc *sch, int *qerr)
static int
hfsc_graft_class(struct Qdisc *sch, unsigned long arg, struct Qdisc *new,
struct Qdisc **old)
static struct Qdisc *
hfsc_class_leaf(struct Qdisc *sch, unsigned long arg)
static void
hfsc_qlen_notify(struct Qdisc *sch, unsigned long arg)
static unsigned long
hfsc_get_class(struct Qdisc *sch, u32 classid)
static void
hfsc_put_class(struct Qdisc *sch, unsigned long arg)
static unsigned long
hfsc_bind_tcf(struct Qdisc *sch, unsigned long parent, u32 classid)
static void
hfsc_unbind_tcf(struct Qdisc *sch, unsigned long arg)
static struct tcf_proto **
hfsc_tcf_chain(struct Qdisc *sch, unsigned long arg)
static int
hfsc_dump_sc(struct sk_buff *skb, int attr, struct internal_sc *sc)
static int
hfsc_dump_curves(struct sk_buff *skb, struct hfsc_class *cl)
static int
hfsc_dump_class(struct Qdisc *sch, unsigned long arg, struct sk_buff *skb,
struct tcmsg *tcm)
static int
hfsc_dump_class_stats(struct Qdisc *sch, unsigned long arg,
struct gnet_dump *d)
static void
hfsc_walk(struct Qdisc *sch, struct qdisc_walker *arg)
static void
hfsc_schedule_watchdog(struct Qdisc *sch)
static int
hfsc_init_qdisc(struct Qdisc *sch, struct nlattr *opt)
static int
hfsc_change_qdisc(struct Qdisc *sch, struct nlattr *opt)
static void
hfsc_reset_class(struct hfsc_class *cl)
static void
hfsc_reset_qdisc(struct Qdisc *sch)
static void
hfsc_destroy_qdisc(struct Qdisc *sch)
static int
hfsc_dump_qdisc(struct Qdisc *sch, struct sk_buff *skb)
static int
hfsc_enqueue(struct sk_buff *skb, struct Qdisc *sch)
static struct sk_buff *
hfsc_dequeue(struct Qdisc *sch)
static unsigned int
hfsc_drop(struct Qdisc *sch)
static const struct Qdisc_class_ops hfsc_class_ops = ;
static struct Qdisc_ops hfsc_qdisc_ops __read_mostly = ;
static int __init
hfsc_init(void)
static void __exit
hfsc_cleanup(void)
MODULE_LICENSE("GPL");
module_init(hfsc_init);
module_exit(hfsc_cleanup);
