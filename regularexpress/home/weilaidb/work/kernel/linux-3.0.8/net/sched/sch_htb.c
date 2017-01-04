static int htb_hysteresis __read_mostly = 0;
#define HTB_VER 0x30011
#if HTB_VER >> 16 != TC_HTB_PROTOVER
#error "Mismatched sch_htb.c and pkt_sch.h"
module_param    (htb_hysteresis, int, 0640);
MODULE_PARM_DESC(htb_hysteresis, "Hysteresis mode, less CPU load, less accurate");
enum htb_cmode ;
struct htb_class ;
struct htb_sched ;
static inline struct htb_class *htb_find(u32 handle, struct Qdisc *sch)
#define HTB_DIRECT ((struct htb_class *)-1L)
static struct htb_class *htb_classify(struct sk_buff *skb, struct Qdisc *sch,
int *qerr)
static void htb_add_to_id_tree(struct rb_root *root,
struct htb_class *cl, int prio)
static void htb_add_to_wait_tree(struct htb_sched *q,
struct htb_class *cl, long delay)
static inline void htb_next_rb_node(struct rb_node **n)
static inline void htb_add_class_to_row(struct htb_sched *q,
struct htb_class *cl, int mask)
static void htb_safe_rb_erase(struct rb_node *rb, struct rb_root *root)
static inline void htb_remove_class_from_row(struct htb_sched *q,
struct htb_class *cl, int mask)
static void htb_activate_prios(struct htb_sched *q, struct htb_class *cl)
static void htb_deactivate_prios(struct htb_sched *q, struct htb_class *cl)
static inline long htb_lowater(const struct htb_class *cl)
static inline long htb_hiwater(const struct htb_class *cl)
static inline enum htb_cmode
htb_class_mode(struct htb_class *cl, long *diff)
static void
htb_change_class_mode(struct htb_sched *q, struct htb_class *cl, long *diff)
static inline void htb_activate(struct htb_sched *q, struct htb_class *cl)
static inline void htb_deactivate(struct htb_sched *q, struct htb_class *cl)
static int htb_enqueue(struct sk_buff *skb, struct Qdisc *sch)
static inline void htb_accnt_tokens(struct htb_class *cl, int bytes, long diff)
static inline void htb_accnt_ctokens(struct htb_class *cl, int bytes, long diff)
static void htb_charge_class(struct htb_sched *q, struct htb_class *cl,
int level, struct sk_buff *skb)
static psched_time_t htb_do_events(struct htb_sched *q, int level,
unsigned long start)
static struct rb_node *htb_id_find_next_upper(int prio, struct rb_node *n,
u32 id)
static struct htb_class *htb_lookup_leaf(struct rb_root *tree, int prio,
struct rb_node **pptr, u32 * pid)
static struct sk_buff *htb_dequeue_tree(struct htb_sched *q, int prio,
int level)
static struct sk_buff *htb_dequeue(struct Qdisc *sch)
static unsigned int htb_drop(struct Qdisc *sch)
static void htb_reset(struct Qdisc *sch)
static const struct nla_policy htb_policy[TCA_HTB_MAX + 1] = ;
static void htb_work_func(struct work_struct *work)
static int htb_init(struct Qdisc *sch, struct nlattr *opt)
static int htb_dump(struct Qdisc *sch, struct sk_buff *skb)
static int htb_dump_class(struct Qdisc *sch, unsigned long arg,
struct sk_buff *skb, struct tcmsg *tcm)
static int
htb_dump_class_stats(struct Qdisc *sch, unsigned long arg, struct gnet_dump *d)
static int htb_graft(struct Qdisc *sch, unsigned long arg, struct Qdisc *new,
struct Qdisc **old)
static struct Qdisc *htb_leaf(struct Qdisc *sch, unsigned long arg)
static void htb_qlen_notify(struct Qdisc *sch, unsigned long arg)
static unsigned long htb_get(struct Qdisc *sch, u32 classid)
static inline int htb_parent_last_child(struct htb_class *cl)
static void htb_parent_to_leaf(struct htb_sched *q, struct htb_class *cl,
struct Qdisc *new_q)
static void htb_destroy_class(struct Qdisc *sch, struct htb_class *cl)
static void htb_destroy(struct Qdisc *sch)
static int htb_delete(struct Qdisc *sch, unsigned long arg)
static void htb_put(struct Qdisc *sch, unsigned long arg)
static int htb_change_class(struct Qdisc *sch, u32 classid,
u32 parentid, struct nlattr **tca,
unsigned long *arg)
static struct tcf_proto **htb_find_tcf(struct Qdisc *sch, unsigned long arg)
static unsigned long htb_bind_filter(struct Qdisc *sch, unsigned long parent,
u32 classid)
static void htb_unbind_filter(struct Qdisc *sch, unsigned long arg)
static void htb_walk(struct Qdisc *sch, struct qdisc_walker *arg)
static const struct Qdisc_class_ops htb_class_ops = ;
static struct Qdisc_ops htb_qdisc_ops __read_mostly = ;
static int __init htb_module_init(void)
static void __exit htb_module_exit(void)
module_init(htb_module_init)
module_exit(htb_module_exit)
MODULE_LICENSE("GPL");
