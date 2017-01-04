#define SFQ_DEPTH		128
#define SFQ_SLOTS		128
#define SFQ_EMPTY_SLOT		255
#define SFQ_DEFAULT_HASH_DIVISOR 1024
#define SFQ_ALLOT_SHIFT		3
#define SFQ_ALLOT_SIZE(X)	DIV_ROUND_UP(X, 1 << SFQ_ALLOT_SHIFT)
typedef unsigned char sfq_index;
struct sfq_head ;
struct sfq_slot ;
struct sfq_sched_data ;
static inline struct sfq_head *sfq_dep_head(struct sfq_sched_data *q, sfq_index val)
static unsigned int sfq_fold_hash(struct sfq_sched_data *q, u32 h, u32 h1)
static unsigned int sfq_hash(struct sfq_sched_data *q, struct sk_buff *skb)
static unsigned int sfq_classify(struct sk_buff *skb, struct Qdisc *sch,
int *qerr)
static inline void sfq_link(struct sfq_sched_data *q, sfq_index x)
#define sfq_unlink(q, x, n, p)			\
n = q->slots[x].dep.next;		\
p = q->slots[x].dep.prev;		\
sfq_dep_head(q, p)->next = n;		\
sfq_dep_head(q, n)->prev = p
static inline void sfq_dec(struct sfq_sched_data *q, sfq_index x)
static inline void sfq_inc(struct sfq_sched_data *q, sfq_index x)
static inline struct sk_buff *slot_dequeue_tail(struct sfq_slot *slot)
static inline struct sk_buff *slot_dequeue_head(struct sfq_slot *slot)
static inline void slot_queue_init(struct sfq_slot *slot)
static inline void slot_queue_add(struct sfq_slot *slot, struct sk_buff *skb)
#define	slot_queue_walk(slot, skb)		\
for (skb = slot->skblist_next;		\
skb != (struct sk_buff *)slot;	\
skb = skb->next)
static unsigned int sfq_drop(struct Qdisc *sch)
static int
sfq_enqueue(struct sk_buff *skb, struct Qdisc *sch)
static struct sk_buff *
sfq_dequeue(struct Qdisc *sch)
static void
sfq_reset(struct Qdisc *sch)
static void sfq_perturbation(unsigned long arg)
static int sfq_change(struct Qdisc *sch, struct nlattr *opt)
static int sfq_init(struct Qdisc *sch, struct nlattr *opt)
static void sfq_destroy(struct Qdisc *sch)
static int sfq_dump(struct Qdisc *sch, struct sk_buff *skb)
static struct Qdisc *sfq_leaf(struct Qdisc *sch, unsigned long arg)
static unsigned long sfq_get(struct Qdisc *sch, u32 classid)
static unsigned long sfq_bind(struct Qdisc *sch, unsigned long parent,
u32 classid)
static void sfq_put(struct Qdisc *q, unsigned long cl)
static struct tcf_proto **sfq_find_tcf(struct Qdisc *sch, unsigned long cl)
static int sfq_dump_class(struct Qdisc *sch, unsigned long cl,
struct sk_buff *skb, struct tcmsg *tcm)
static int sfq_dump_class_stats(struct Qdisc *sch, unsigned long cl,
struct gnet_dump *d)
static void sfq_walk(struct Qdisc *sch, struct qdisc_walker *arg)
static const struct Qdisc_class_ops sfq_class_ops = ;
static struct Qdisc_ops sfq_qdisc_ops __read_mostly = ;
static int __init sfq_module_init(void)
static void __exit sfq_module_exit(void)
module_init(sfq_module_init)
module_exit(sfq_module_exit)
MODULE_LICENSE("GPL");
