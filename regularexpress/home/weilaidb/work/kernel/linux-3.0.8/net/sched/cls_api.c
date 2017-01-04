static struct tcf_proto_ops *tcf_proto_base __read_mostly;
static DEFINE_RWLOCK(cls_mod_lock);
static struct tcf_proto_ops *tcf_proto_lookup_ops(struct nlattr *kind)
int register_tcf_proto_ops(struct tcf_proto_ops *ops)
EXPORT_SYMBOL(register_tcf_proto_ops);
int unregister_tcf_proto_ops(struct tcf_proto_ops *ops)
EXPORT_SYMBOL(unregister_tcf_proto_ops);
static int tfilter_notify(struct net *net, struct sk_buff *oskb,
struct nlmsghdr *n, struct tcf_proto *tp,
unsigned long fh, int event);
static inline u32 tcf_auto_prio(struct tcf_proto *tp)
static int tc_ctl_tfilter(struct sk_buff *skb, struct nlmsghdr *n, void *arg)
static int tcf_fill_node(struct sk_buff *skb, struct tcf_proto *tp,
unsigned long fh, u32 pid, u32 seq, u16 flags, int event)
static int tfilter_notify(struct net *net, struct sk_buff *oskb,
struct nlmsghdr *n, struct tcf_proto *tp,
unsigned long fh, int event)
struct tcf_dump_args ;
static int tcf_node_dump(struct tcf_proto *tp, unsigned long n,
struct tcf_walker *arg)
static int tc_dump_tfilter(struct sk_buff *skb, struct netlink_callback *cb)
void tcf_exts_destroy(struct tcf_proto *tp, struct tcf_exts *exts)
EXPORT_SYMBOL(tcf_exts_destroy);
int tcf_exts_validate(struct tcf_proto *tp, struct nlattr **tb,
struct nlattr *rate_tlv, struct tcf_exts *exts,
const struct tcf_ext_map *map)
EXPORT_SYMBOL(tcf_exts_validate);
void tcf_exts_change(struct tcf_proto *tp, struct tcf_exts *dst,
struct tcf_exts *src)
EXPORT_SYMBOL(tcf_exts_change);
int tcf_exts_dump(struct sk_buff *skb, struct tcf_exts *exts,
const struct tcf_ext_map *map)
EXPORT_SYMBOL(tcf_exts_dump);
int tcf_exts_dump_stats(struct sk_buff *skb, struct tcf_exts *exts,
const struct tcf_ext_map *map)
EXPORT_SYMBOL(tcf_exts_dump_stats);
static int __init tc_filter_init(void)
subsys_initcall(tc_filter_init);
