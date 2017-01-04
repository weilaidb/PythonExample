#define CHOKE_MAX_QUEUE	(128*1024 - 1)
struct choke_sched_data ;
static u32 random_N(unsigned int N)
static unsigned int choke_len(const struct choke_sched_data *q)
static int use_ecn(const struct choke_sched_data *q)
static int use_harddrop(const struct choke_sched_data *q)
static void choke_zap_head_holes(struct choke_sched_data *q)
static void choke_zap_tail_holes(struct choke_sched_data *q)
static void choke_drop_by_idx(struct Qdisc *sch, unsigned int idx)
static bool choke_match_flow(struct sk_buff *skb1,
struct sk_buff *skb2)
struct choke_skb_cb ;
static inline struct choke_skb_cb *choke_skb_cb(const struct sk_buff *skb)
static inline void choke_set_classid(struct sk_buff *skb, u16 classid)
static u16 choke_get_classid(const struct sk_buff *skb)
static bool choke_classify(struct sk_buff *skb,
struct Qdisc *sch, int *qerr)
static struct sk_buff *choke_peek_random(const struct choke_sched_data *q,
unsigned int *pidx)
static bool choke_match_random(const struct choke_sched_data *q,
struct sk_buff *nskb,
unsigned int *pidx)
static int choke_enqueue(struct sk_buff *skb, struct Qdisc *sch)
static struct sk_buff *choke_dequeue(struct Qdisc *sch)
static unsigned int choke_drop(struct Qdisc *sch)
static void choke_reset(struct Qdisc *sch)
static const struct nla_policy choke_policy[TCA_CHOKE_MAX + 1] = ;
static void choke_free(void *addr)
static int choke_change(struct Qdisc *sch, struct nlattr *opt)
static int choke_init(struct Qdisc *sch, struct nlattr *opt)
static int choke_dump(struct Qdisc *sch, struct sk_buff *skb)
static int choke_dump_stats(struct Qdisc *sch, struct gnet_dump *d)
static void choke_destroy(struct Qdisc *sch)
static struct Qdisc *choke_leaf(struct Qdisc *sch, unsigned long arg)
static unsigned long choke_get(struct Qdisc *sch, u32 classid)
static void choke_put(struct Qdisc *q, unsigned long cl)
static unsigned long choke_bind(struct Qdisc *sch, unsigned long parent,
u32 classid)
static struct tcf_proto **choke_find_tcf(struct Qdisc *sch, unsigned long cl)
static int choke_dump_class(struct Qdisc *sch, unsigned long cl,
struct sk_buff *skb, struct tcmsg *tcm)
static void choke_walk(struct Qdisc *sch, struct qdisc_walker *arg)
static const struct Qdisc_class_ops choke_class_ops = ;
static struct sk_buff *choke_peek_head(struct Qdisc *sch)
static struct Qdisc_ops choke_qdisc_ops __read_mostly = ;
static int __init choke_module_init(void)
static void __exit choke_module_exit(void)
module_init(choke_module_init)
module_exit(choke_module_exit)
MODULE_LICENSE("GPL");
