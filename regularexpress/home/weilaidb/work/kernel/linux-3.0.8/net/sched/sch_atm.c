extern struct socket *sockfd_lookup(int fd, int *err);
#define VCC2FLOW(vcc) ((struct atm_flow_data *) ((vcc)->user_back))
struct atm_flow_data ;
struct atm_qdisc_data ;
static inline struct atm_flow_data *lookup_flow(struct Qdisc *sch, u32 classid)
static int atm_tc_graft(struct Qdisc *sch, unsigned long arg,
struct Qdisc *new, struct Qdisc **old)
static struct Qdisc *atm_tc_leaf(struct Qdisc *sch, unsigned long cl)
static unsigned long atm_tc_get(struct Qdisc *sch, u32 classid)
static unsigned long atm_tc_bind_filter(struct Qdisc *sch,
unsigned long parent, u32 classid)
static void atm_tc_put(struct Qdisc *sch, unsigned long cl)
static void sch_atm_pop(struct atm_vcc *vcc, struct sk_buff *skb)
static const u8 llc_oui_ip[] = ;
static const struct nla_policy atm_policy[TCA_ATM_MAX + 1] = ;
static int atm_tc_change(struct Qdisc *sch, u32 classid, u32 parent,
struct nlattr **tca, unsigned long *arg)
static int atm_tc_delete(struct Qdisc *sch, unsigned long arg)
static void atm_tc_walk(struct Qdisc *sch, struct qdisc_walker *walker)
static struct tcf_proto **atm_tc_find_tcf(struct Qdisc *sch, unsigned long cl)
static int atm_tc_enqueue(struct sk_buff *skb, struct Qdisc *sch)
static void sch_atm_dequeue(unsigned long data)
static struct sk_buff *atm_tc_dequeue(struct Qdisc *sch)
static struct sk_buff *atm_tc_peek(struct Qdisc *sch)
static unsigned int atm_tc_drop(struct Qdisc *sch)
static int atm_tc_init(struct Qdisc *sch, struct nlattr *opt)
static void atm_tc_reset(struct Qdisc *sch)
static void atm_tc_destroy(struct Qdisc *sch)
static int atm_tc_dump_class(struct Qdisc *sch, unsigned long cl,
struct sk_buff *skb, struct tcmsg *tcm)
static int
atm_tc_dump_class_stats(struct Qdisc *sch, unsigned long arg,
struct gnet_dump *d)
static int atm_tc_dump(struct Qdisc *sch, struct sk_buff *skb)
static const struct Qdisc_class_ops atm_class_ops = ;
static struct Qdisc_ops atm_qdisc_ops __read_mostly = ;
static int __init atm_init(void)
static void __exit atm_exit(void)
module_init(atm_init)
module_exit(atm_exit)
MODULE_LICENSE("GPL");
