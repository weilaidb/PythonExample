#define VERSION "1.3"
struct netem_sched_data ;
struct netem_skb_cb ;
static inline struct netem_skb_cb *netem_skb_cb(struct sk_buff *skb)
static void init_crandom(struct crndstate *state, unsigned long rho)
static u32 get_crandom(struct crndstate *state)
static bool loss_4state(struct netem_sched_data *q)
static bool loss_gilb_ell(struct netem_sched_data *q)
static bool loss_event(struct netem_sched_data *q)
static psched_tdiff_t tabledist(psched_tdiff_t mu, psched_tdiff_t sigma,
struct crndstate *state,
const struct disttable *dist)
static int netem_enqueue(struct sk_buff *skb, struct Qdisc *sch)
static unsigned int netem_drop(struct Qdisc *sch)
static struct sk_buff *netem_dequeue(struct Qdisc *sch)
static void netem_reset(struct Qdisc *sch)
static void dist_free(struct disttable *d)
static int get_dist_table(struct Qdisc *sch, const struct nlattr *attr)
static void get_correlation(struct Qdisc *sch, const struct nlattr *attr)
static void get_reorder(struct Qdisc *sch, const struct nlattr *attr)
static void get_corrupt(struct Qdisc *sch, const struct nlattr *attr)
static int get_loss_clg(struct Qdisc *sch, const struct nlattr *attr)
static const struct nla_policy netem_policy[TCA_NETEM_MAX + 1] = ;
static int parse_attr(struct nlattr *tb[], int maxtype, struct nlattr *nla,
const struct nla_policy *policy, int len)
static int netem_change(struct Qdisc *sch, struct nlattr *opt)
struct fifo_sched_data ;
static int tfifo_enqueue(struct sk_buff *nskb, struct Qdisc *sch)
static int tfifo_init(struct Qdisc *sch, struct nlattr *opt)
static int tfifo_dump(struct Qdisc *sch, struct sk_buff *skb)
static struct Qdisc_ops tfifo_qdisc_ops __read_mostly = ;
static int netem_init(struct Qdisc *sch, struct nlattr *opt)
static void netem_destroy(struct Qdisc *sch)
static int dump_loss_model(const struct netem_sched_data *q,
struct sk_buff *skb)
static int netem_dump(struct Qdisc *sch, struct sk_buff *skb)
static int netem_dump_class(struct Qdisc *sch, unsigned long cl,
struct sk_buff *skb, struct tcmsg *tcm)
static int netem_graft(struct Qdisc *sch, unsigned long arg, struct Qdisc *new,
struct Qdisc **old)
static struct Qdisc *netem_leaf(struct Qdisc *sch, unsigned long arg)
static unsigned long netem_get(struct Qdisc *sch, u32 classid)
static void netem_put(struct Qdisc *sch, unsigned long arg)
static void netem_walk(struct Qdisc *sch, struct qdisc_walker *walker)
static const struct Qdisc_class_ops netem_class_ops = ;
static struct Qdisc_ops netem_qdisc_ops __read_mostly = ;
static int __init netem_module_init(void)
static void __exit netem_module_exit(void)
module_init(netem_module_init)
module_exit(netem_module_exit)
MODULE_LICENSE("GPL");
