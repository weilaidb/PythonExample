#define _NF_CONNTRACK_L4PROTO_H
struct seq_file;
struct nf_conntrack_l4proto ;
extern struct nf_conntrack_l4proto nf_conntrack_l4proto_generic;
#define MAX_NF_CT_PROTO 256
extern struct nf_conntrack_l4proto *
__nf_ct_l4proto_find(u_int16_t l3proto, u_int8_t l4proto);
extern int nf_conntrack_l4proto_register(struct nf_conntrack_l4proto *proto);
extern void nf_conntrack_l4proto_unregister(struct nf_conntrack_l4proto *proto);
extern int nf_ct_port_tuple_to_nlattr(struct sk_buff *skb,
const struct nf_conntrack_tuple *tuple);
extern int nf_ct_port_nlattr_to_tuple(struct nlattr *tb[],
struct nf_conntrack_tuple *t);
extern int nf_ct_port_nlattr_tuple_size(void);
extern const struct nla_policy nf_ct_port_nla_policy[];
#define LOG_INVALID(net, proto)				\
((net)->ct.sysctl_log_invalid == (proto) ||	\
(net)->ct.sysctl_log_invalid == IPPROTO_RAW)
#define LOG_INVALID(net, proto)				\
(((net)->ct.sysctl_log_invalid == (proto) ||	\
(net)->ct.sysctl_log_invalid == IPPROTO_RAW)	\
&& net_ratelimit())
static inline int LOG_INVALID(struct net *net, int proto)
