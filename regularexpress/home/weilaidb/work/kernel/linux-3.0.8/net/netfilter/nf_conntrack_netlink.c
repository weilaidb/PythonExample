MODULE_LICENSE("GPL");
static char __initdata version[] = "0.93";
static inline int
ctnetlink_dump_tuples_proto(struct sk_buff *skb,
const struct nf_conntrack_tuple *tuple,
struct nf_conntrack_l4proto *l4proto)
static inline int
ctnetlink_dump_tuples_ip(struct sk_buff *skb,
const struct nf_conntrack_tuple *tuple,
struct nf_conntrack_l3proto *l3proto)
static int
ctnetlink_dump_tuples(struct sk_buff *skb,
const struct nf_conntrack_tuple *tuple)
static inline int
ctnetlink_dump_status(struct sk_buff *skb, const struct nf_conn *ct)
static inline int
ctnetlink_dump_timeout(struct sk_buff *skb, const struct nf_conn *ct)
static inline int
ctnetlink_dump_protoinfo(struct sk_buff *skb, struct nf_conn *ct)
static inline int
ctnetlink_dump_helpinfo(struct sk_buff *skb, const struct nf_conn *ct)
static int
ctnetlink_dump_counters(struct sk_buff *skb, const struct nf_conn *ct,
enum ip_conntrack_dir dir)
static int
ctnetlink_dump_timestamp(struct sk_buff *skb, const struct nf_conn *ct)
static inline int
ctnetlink_dump_mark(struct sk_buff *skb, const struct nf_conn *ct)
#define ctnetlink_dump_mark(a, b) (0)
static inline int
ctnetlink_dump_secctx(struct sk_buff *skb, const struct nf_conn *ct)
#define ctnetlink_dump_secctx(a, b) (0)
#define master_tuple(ct) &(ct->master->tuplehash[IP_CT_DIR_ORIGINAL].tuple)
static inline int
ctnetlink_dump_master(struct sk_buff *skb, const struct nf_conn *ct)
static int
dump_nat_seq_adj(struct sk_buff *skb, const struct nf_nat_seq *natseq, int type)
static inline int
ctnetlink_dump_nat_seq_adj(struct sk_buff *skb, const struct nf_conn *ct)
#define ctnetlink_dump_nat_seq_adj(a, b) (0)
static inline int
ctnetlink_dump_id(struct sk_buff *skb, const struct nf_conn *ct)
static inline int
ctnetlink_dump_use(struct sk_buff *skb, const struct nf_conn *ct)
static int
ctnetlink_fill_info(struct sk_buff *skb, u32 pid, u32 seq,
int event, struct nf_conn *ct)
static inline size_t
ctnetlink_proto_size(const struct nf_conn *ct)
static inline size_t
ctnetlink_counters_size(const struct nf_conn *ct)
static inline int
ctnetlink_secctx_size(const struct nf_conn *ct)
static inline size_t
ctnetlink_timestamp_size(const struct nf_conn *ct)
static inline size_t
ctnetlink_nlmsg_size(const struct nf_conn *ct)
static int
ctnetlink_conntrack_event(unsigned int events, struct nf_ct_event *item)
static int ctnetlink_done(struct netlink_callback *cb)
static int
ctnetlink_dump_table(struct sk_buff *skb, struct netlink_callback *cb)
static inline int
ctnetlink_parse_tuple_ip(struct nlattr *attr, struct nf_conntrack_tuple *tuple)
static const struct nla_policy proto_nla_policy[CTA_PROTO_MAX+1] = ;
static inline int
ctnetlink_parse_tuple_proto(struct nlattr *attr,
struct nf_conntrack_tuple *tuple)
static const struct nla_policy tuple_nla_policy[CTA_TUPLE_MAX+1] = ;
static int
ctnetlink_parse_tuple(const struct nlattr * const cda[],
struct nf_conntrack_tuple *tuple,
enum ctattr_type type, u_int8_t l3num)
static int
ctnetlink_parse_zone(const struct nlattr *attr, u16 *zone)
static const struct nla_policy help_nla_policy[CTA_HELP_MAX+1] = ;
static inline int
ctnetlink_parse_help(const struct nlattr *attr, char **helper_name)
static const struct nla_policy ct_nla_policy[CTA_MAX+1] = ;
static int
ctnetlink_del_conntrack(struct sock *ctnl, struct sk_buff *skb,
const struct nlmsghdr *nlh,
const struct nlattr * const cda[])
static int
ctnetlink_get_conntrack(struct sock *ctnl, struct sk_buff *skb,
const struct nlmsghdr *nlh,
const struct nlattr * const cda[])
static int
ctnetlink_parse_nat_setup(struct nf_conn *ct,
enum nf_nat_manip_type manip,
const struct nlattr *attr)
static int
ctnetlink_change_status(struct nf_conn *ct, const struct nlattr * const cda[])
static int
ctnetlink_change_nat(struct nf_conn *ct, const struct nlattr * const cda[])
static inline int
ctnetlink_change_helper(struct nf_conn *ct, const struct nlattr * const cda[])
static inline int
ctnetlink_change_timeout(struct nf_conn *ct, const struct nlattr * const cda[])
static const struct nla_policy protoinfo_policy[CTA_PROTOINFO_MAX+1] = ;
static inline int
ctnetlink_change_protoinfo(struct nf_conn *ct, const struct nlattr * const cda[])
static const struct nla_policy nat_seq_policy[CTA_NAT_SEQ_MAX+1] = ;
static inline int
change_nat_seq_adj(struct nf_nat_seq *natseq, const struct nlattr * const attr)
static int
ctnetlink_change_nat_seq_adj(struct nf_conn *ct,
const struct nlattr * const cda[])
static int
ctnetlink_change_conntrack(struct nf_conn *ct,
const struct nlattr * const cda[])
static struct nf_conn *
ctnetlink_create_conntrack(struct net *net, u16 zone,
const struct nlattr * const cda[],
struct nf_conntrack_tuple *otuple,
struct nf_conntrack_tuple *rtuple,
u8 u3)
static int
ctnetlink_new_conntrack(struct sock *ctnl, struct sk_buff *skb,
const struct nlmsghdr *nlh,
const struct nlattr * const cda[])
static inline int
ctnetlink_exp_dump_tuple(struct sk_buff *skb,
const struct nf_conntrack_tuple *tuple,
enum ctattr_expect type)
static inline int
ctnetlink_exp_dump_mask(struct sk_buff *skb,
const struct nf_conntrack_tuple *tuple,
const struct nf_conntrack_tuple_mask *mask)
static int
ctnetlink_exp_dump_expect(struct sk_buff *skb,
const struct nf_conntrack_expect *exp)
static int
ctnetlink_exp_fill_info(struct sk_buff *skb, u32 pid, u32 seq,
int event, const struct nf_conntrack_expect *exp)
static int
ctnetlink_expect_event(unsigned int events, struct nf_exp_event *item)
static int ctnetlink_exp_done(struct netlink_callback *cb)
static int
ctnetlink_exp_dump_table(struct sk_buff *skb, struct netlink_callback *cb)
static const struct nla_policy exp_nla_policy[CTA_EXPECT_MAX+1] = ;
static int
ctnetlink_get_expect(struct sock *ctnl, struct sk_buff *skb,
const struct nlmsghdr *nlh,
const struct nlattr * const cda[])
static int
ctnetlink_del_expect(struct sock *ctnl, struct sk_buff *skb,
const struct nlmsghdr *nlh,
const struct nlattr * const cda[])
static int
ctnetlink_change_expect(struct nf_conntrack_expect *x,
const struct nlattr * const cda[])
static int
ctnetlink_create_expect(struct net *net, u16 zone,
const struct nlattr * const cda[],
u_int8_t u3,
u32 pid, int report)
static int
ctnetlink_new_expect(struct sock *ctnl, struct sk_buff *skb,
const struct nlmsghdr *nlh,
const struct nlattr * const cda[])
static struct nf_ct_event_notifier ctnl_notifier = ;
static struct nf_exp_event_notifier ctnl_notifier_exp = ;
static const struct nfnl_callback ctnl_cb[IPCTNL_MSG_MAX] = ;
static const struct nfnl_callback ctnl_exp_cb[IPCTNL_MSG_EXP_MAX] = ;
static const struct nfnetlink_subsystem ctnl_subsys = ;
static const struct nfnetlink_subsystem ctnl_exp_subsys = ;
MODULE_ALIAS("ip_conntrack_netlink");
MODULE_ALIAS_NFNL_SUBSYS(NFNL_SUBSYS_CTNETLINK);
MODULE_ALIAS_NFNL_SUBSYS(NFNL_SUBSYS_CTNETLINK_EXP);
static int __init ctnetlink_init(void)
static void __exit ctnetlink_exit(void)
module_init(ctnetlink_init);
module_exit(ctnetlink_exit);
