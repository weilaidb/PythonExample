#define KMSG_COMPONENT "IPVS"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define FMT_TUPLE	"%pI4:%u->%pI4:%u/%u"
#define ARG_TUPLE(T)	&(T)->src.u3.ip, ntohs((T)->src.u.all), \
&(T)->dst.u3.ip, ntohs((T)->dst.u.all), \
(T)->dst.protonum
#define FMT_CONN	"%pI4:%u->%pI4:%u->%pI4:%u/%u:%u"
#define ARG_CONN(C)	&((C)->caddr.ip), ntohs((C)->cport), \
&((C)->vaddr.ip), ntohs((C)->vport), \
&((C)->daddr.ip), ntohs((C)->dport), \
(C)->protocol, (C)->state
void
ip_vs_update_conntrack(struct sk_buff *skb, struct ip_vs_conn *cp, int outin)
int ip_vs_confirm_conntrack(struct sk_buff *skb, struct ip_vs_conn *cp)
static void ip_vs_nfct_expect_callback(struct nf_conn *ct,
struct nf_conntrack_expect *exp)
void ip_vs_nfct_expect_related(struct sk_buff *skb, struct nf_conn *ct,
struct ip_vs_conn *cp, u_int8_t proto,
const __be16 port, int from_rs)
EXPORT_SYMBOL(ip_vs_nfct_expect_related);
void ip_vs_conn_drop_conntrack(struct ip_vs_conn *cp)
