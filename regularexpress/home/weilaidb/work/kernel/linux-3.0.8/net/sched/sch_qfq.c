#define QFQ_MAX_SLOTS	32
#define QFQ_MAX_INDEX		19
#define QFQ_MAX_WSHIFT		16
#define	QFQ_MAX_WEIGHT		(1<<QFQ_MAX_WSHIFT)
#define QFQ_MAX_WSUM		(2*QFQ_MAX_WEIGHT)
#define FRAC_BITS		30
#define ONE_FP			(1UL << FRAC_BITS)
#define IWSUM			(ONE_FP/QFQ_MAX_WSUM)
#define QFQ_MTU_SHIFT		11
#define QFQ_MIN_SLOT_SHIFT	(FRAC_BITS + QFQ_MTU_SHIFT - QFQ_MAX_INDEX)
enum qfq_state ;
struct qfq_group;
struct qfq_class ;
struct qfq_group ;
struct qfq_sched ;
static struct qfq_class *qfq_find_class(struct Qdisc *sch, u32 classid)
static void qfq_purge_queue(struct qfq_class *cl)
static const struct nla_policy qfq_policy[TCA_QFQ_MAX + 1] = ;
static int qfq_calc_index(u32 inv_w, unsigned int maxlen)
static int qfq_change_class(struct Qdisc *sch, u32 classid, u32 parentid,
struct nlattr **tca, unsigned long *arg)
static void qfq_destroy_class(struct Qdisc *sch, struct qfq_class *cl)
static int qfq_delete_class(struct Qdisc *sch, unsigned long arg)
static unsigned long qfq_get_class(struct Qdisc *sch, u32 classid)
static void qfq_put_class(struct Qdisc *sch, unsigned long arg)
static struct tcf_proto **qfq_tcf_chain(struct Qdisc *sch, unsigned long cl)
static unsigned long qfq_bind_tcf(struct Qdisc *sch, unsigned long parent,
u32 classid)
static void qfq_unbind_tcf(struct Qdisc *sch, unsigned long arg)
static int qfq_graft_class(struct Qdisc *sch, unsigned long arg,
struct Qdisc *new, struct Qdisc **old)
static struct Qdisc *qfq_class_leaf(struct Qdisc *sch, unsigned long arg)
static int qfq_dump_class(struct Qdisc *sch, unsigned long arg,
struct sk_buff *skb, struct tcmsg *tcm)
static int qfq_dump_class_stats(struct Qdisc *sch, unsigned long arg,
struct gnet_dump *d)
static void qfq_walk(struct Qdisc *sch, struct qdisc_walker *arg)
static struct qfq_class *qfq_classify(struct sk_buff *skb, struct Qdisc *sch,
int *qerr)
static inline int qfq_gt(u64 a, u64 b)
static inline u64 qfq_round_down(u64 ts, unsigned int shift)
static inline struct qfq_group *qfq_ffs(struct qfq_sched *q,
unsigned long bitmap)
static inline unsigned long mask_from(unsigned long bitmap, int from)
static int qfq_calc_state(struct qfq_sched *q, const struct qfq_group *grp)
static inline void qfq_move_groups(struct qfq_sched *q, unsigned long mask,
int src, int dst)
static void qfq_unblock_groups(struct qfq_sched *q, int index, u64 old_F)
static void qfq_make_eligible(struct qfq_sched *q, u64 old_V)
static void qfq_slot_insert(struct qfq_group *grp, struct qfq_class *cl,
u64 roundedS)
static struct qfq_class *qfq_slot_head(struct qfq_group *grp)
static void qfq_front_slot_remove(struct qfq_group *grp)
static struct qfq_class *qfq_slot_scan(struct qfq_group *grp)
static void qfq_slot_rotate(struct qfq_group *grp, u64 roundedS)
static void qfq_update_eligible(struct qfq_sched *q, u64 old_V)
static unsigned int qdisc_peek_len(struct Qdisc *sch)
static bool qfq_update_class(struct qfq_group *grp, struct qfq_class *cl)
static struct sk_buff *qfq_dequeue(struct Qdisc *sch)
static void qfq_update_start(struct qfq_sched *q, struct qfq_class *cl)
static int qfq_enqueue(struct sk_buff *skb, struct Qdisc *sch)
static void qfq_slot_remove(struct qfq_sched *q, struct qfq_group *grp,
struct qfq_class *cl)
static void qfq_deactivate_class(struct qfq_sched *q, struct qfq_class *cl)
static void qfq_qlen_notify(struct Qdisc *sch, unsigned long arg)
static unsigned int qfq_drop(struct Qdisc *sch)
static int qfq_init_qdisc(struct Qdisc *sch, struct nlattr *opt)
static void qfq_reset_qdisc(struct Qdisc *sch)
static void qfq_destroy_qdisc(struct Qdisc *sch)
static const struct Qdisc_class_ops qfq_class_ops = ;
static struct Qdisc_ops qfq_qdisc_ops __read_mostly = ;
static int __init qfq_init(void)
static void __exit qfq_exit(void)
module_init(qfq_init);
module_exit(qfq_exit);
MODULE_LICENSE("GPL");
