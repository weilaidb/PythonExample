#define SFB_BUCKET_SHIFT 4
#define SFB_NUMBUCKETS	(1 << SFB_BUCKET_SHIFT)
#define SFB_BUCKET_MASK (SFB_NUMBUCKETS - 1)
#define SFB_LEVELS	(32 / SFB_BUCKET_SHIFT)
struct sfb_bucket ;
struct sfb_bins ;
struct sfb_sched_data ;
struct sfb_skb_cb ;
static inline struct sfb_skb_cb *sfb_skb_cb(const struct sk_buff *skb)
static u32 sfb_hash(const struct sk_buff *skb, u32 slot)
static u32 prob_plus(u32 p1, u32 p2)
static u32 prob_minus(u32 p1, u32 p2)
static void increment_one_qlen(u32 sfbhash, u32 slot, struct sfb_sched_data *q)
static void increment_qlen(const struct sk_buff *skb, struct sfb_sched_data *q)
static void decrement_one_qlen(u32 sfbhash, u32 slot,
struct sfb_sched_data *q)
static void decrement_qlen(const struct sk_buff *skb, struct sfb_sched_data *q)
static void decrement_prob(struct sfb_bucket *b, struct sfb_sched_data *q)
static void increment_prob(struct sfb_bucket *b, struct sfb_sched_data *q)
static void sfb_zero_all_buckets(struct sfb_sched_data *q)
static u32 sfb_compute_qlen(u32 *prob_r, u32 *avgpm_r, const struct sfb_sched_data *q)
static void sfb_init_perturbation(u32 slot, struct sfb_sched_data *q)
static void sfb_swap_slot(struct sfb_sched_data *q)
static bool sfb_rate_limit(struct sk_buff *skb, struct sfb_sched_data *q)
static bool sfb_classify(struct sk_buff *skb, struct sfb_sched_data *q,
int *qerr, u32 *salt)
static int sfb_enqueue(struct sk_buff *skb, struct Qdisc *sch)
static struct sk_buff *sfb_dequeue(struct Qdisc *sch)
static struct sk_buff *sfb_peek(struct Qdisc *sch)
static void sfb_reset(struct Qdisc *sch)
static void sfb_destroy(struct Qdisc *sch)
static const struct nla_policy sfb_policy[TCA_SFB_MAX + 1] = ;
static const struct tc_sfb_qopt sfb_default_ops = ;
static int sfb_change(struct Qdisc *sch, struct nlattr *opt)
static int sfb_init(struct Qdisc *sch, struct nlattr *opt)
static int sfb_dump(struct Qdisc *sch, struct sk_buff *skb)
static int sfb_dump_stats(struct Qdisc *sch, struct gnet_dump *d)
static int sfb_dump_class(struct Qdisc *sch, unsigned long cl,
struct sk_buff *skb, struct tcmsg *tcm)
static int sfb_graft(struct Qdisc *sch, unsigned long arg, struct Qdisc *new,
struct Qdisc **old)
static struct Qdisc *sfb_leaf(struct Qdisc *sch, unsigned long arg)
static unsigned long sfb_get(struct Qdisc *sch, u32 classid)
static void sfb_put(struct Qdisc *sch, unsigned long arg)
static int sfb_change_class(struct Qdisc *sch, u32 classid, u32 parentid,
struct nlattr **tca, unsigned long *arg)
static int sfb_delete(struct Qdisc *sch, unsigned long cl)
static void sfb_walk(struct Qdisc *sch, struct qdisc_walker *walker)
static struct tcf_proto **sfb_find_tcf(struct Qdisc *sch, unsigned long cl)
static unsigned long sfb_bind(struct Qdisc *sch, unsigned long parent,
u32 classid)
static const struct Qdisc_class_ops sfb_class_ops = ;
static struct Qdisc_ops sfb_qdisc_ops __read_mostly = ;
static int __init sfb_module_init(void)
static void __exit sfb_module_exit(void)
module_init(sfb_module_init)
module_exit(sfb_module_exit)
MODULE_DESCRIPTION("Stochastic Fair Blue queue discipline");
MODULE_AUTHOR("Juliusz Chroboczek");
MODULE_AUTHOR("Eric Dumazet");
MODULE_LICENSE("GPL");
