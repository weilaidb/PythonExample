#define __NET_ACT_API_H
struct tcf_common ;
#define tcf_next	common.tcfc_next
#define tcf_index	common.tcfc_index
#define tcf_refcnt	common.tcfc_refcnt
#define tcf_bindcnt	common.tcfc_bindcnt
#define tcf_capab	common.tcfc_capab
#define tcf_action	common.tcfc_action
#define tcf_tm		common.tcfc_tm
#define tcf_bstats	common.tcfc_bstats
#define tcf_qstats	common.tcfc_qstats
#define tcf_rate_est	common.tcfc_rate_est
#define tcf_lock	common.tcfc_lock
#define tcf_rcu		common.tcfc_rcu
struct tcf_police ;
#define to_police(pc)	\
container_of(pc, struct tcf_police, common)
struct tcf_hashinfo ;
static inline unsigned int tcf_hash(u32 index, unsigned int hmask)
#define ACT_P_CREATED 1
#define ACT_P_DELETED 1
struct tcf_act_hdr ;
struct tc_action ;
#define TCA_CAP_NONE 0
struct tc_action_ops ;
extern struct tcf_common *tcf_hash_lookup(u32 index,
struct tcf_hashinfo *hinfo);
extern void tcf_hash_destroy(struct tcf_common *p, struct tcf_hashinfo *hinfo);
extern int tcf_hash_release(struct tcf_common *p, int bind,
struct tcf_hashinfo *hinfo);
extern int tcf_generic_walker(struct sk_buff *skb, struct netlink_callback *cb,
int type, struct tc_action *a);
extern u32 tcf_hash_new_index(u32 *idx_gen, struct tcf_hashinfo *hinfo);
extern int tcf_hash_search(struct tc_action *a, u32 index);
extern struct tcf_common *tcf_hash_check(u32 index, struct tc_action *a,
int bind, struct tcf_hashinfo *hinfo);
extern struct tcf_common *tcf_hash_create(u32 index, struct nlattr *est,
struct tc_action *a, int size,
int bind, u32 *idx_gen,
struct tcf_hashinfo *hinfo);
extern void tcf_hash_insert(struct tcf_common *p, struct tcf_hashinfo *hinfo);
extern int tcf_register_action(struct tc_action_ops *a);
extern int tcf_unregister_action(struct tc_action_ops *a);
extern void tcf_action_destroy(struct tc_action *a, int bind);
extern int tcf_action_exec(struct sk_buff *skb, struct tc_action *a, struct tcf_result *res);
extern struct tc_action *tcf_action_init(struct nlattr *nla, struct nlattr *est, char *n, int ovr, int bind);
extern struct tc_action *tcf_action_init_1(struct nlattr *nla, struct nlattr *est, char *n, int ovr, int bind);
extern int tcf_action_dump(struct sk_buff *skb, struct tc_action *a, int, int);
extern int tcf_action_dump_old(struct sk_buff *skb, struct tc_action *a, int, int);
extern int tcf_action_dump_1(struct sk_buff *skb, struct tc_action *a, int, int);
extern int tcf_action_copy_stats (struct sk_buff *,struct tc_action *, int);
