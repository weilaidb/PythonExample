#define GRED_DEF_PRIO (MAX_DPs / 2)
#define GRED_VQ_MASK (MAX_DPs - 1)
struct gred_sched_data;
struct gred_sched;
struct gred_sched_data ;
enum ;
struct gred_sched ;
static inline int gred_wred_mode(struct gred_sched *table)
static inline void gred_enable_wred_mode(struct gred_sched *table)
static inline void gred_disable_wred_mode(struct gred_sched *table)
static inline int gred_rio_mode(struct gred_sched *table)
static inline void gred_enable_rio_mode(struct gred_sched *table)
static inline void gred_disable_rio_mode(struct gred_sched *table)
static inline int gred_wred_mode_check(struct Qdisc *sch)
static inline unsigned int gred_backlog(struct gred_sched *table,
struct gred_sched_data *q,
struct Qdisc *sch)
static inline u16 tc_index_to_dp(struct sk_buff *skb)
static inline void gred_load_wred_set(struct gred_sched *table,
struct gred_sched_data *q)
static inline void gred_store_wred_set(struct gred_sched *table,
struct gred_sched_data *q)
static inline int gred_use_ecn(struct gred_sched *t)
static inline int gred_use_harddrop(struct gred_sched *t)
static int gred_enqueue(struct sk_buff *skb, struct Qdisc *sch)
static struct sk_buff *gred_dequeue(struct Qdisc *sch)
static unsigned int gred_drop(struct Qdisc *sch)
static void gred_reset(struct Qdisc *sch)
static inline void gred_destroy_vq(struct gred_sched_data *q)
static inline int gred_change_table_def(struct Qdisc *sch, struct nlattr *dps)
static inline int gred_change_vq(struct Qdisc *sch, int dp,
struct tc_gred_qopt *ctl, int prio, u8 *stab)
static const struct nla_policy gred_policy[TCA_GRED_MAX + 1] = ;
static int gred_change(struct Qdisc *sch, struct nlattr *opt)
static int gred_init(struct Qdisc *sch, struct nlattr *opt)
static int gred_dump(struct Qdisc *sch, struct sk_buff *skb)
static void gred_destroy(struct Qdisc *sch)
static struct Qdisc_ops gred_qdisc_ops __read_mostly = ;
static int __init gred_module_init(void)
static void __exit gred_module_exit(void)
module_init(gred_module_init)
module_exit(gred_module_exit)
MODULE_LICENSE("GPL");
