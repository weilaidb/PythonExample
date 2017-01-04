static unsigned int nf_ct_icmp_timeout __read_mostly = 30*HZ;
static bool icmp_pkt_to_tuple(const struct sk_buff *skb, unsigned int dataoff,
struct nf_conntrack_tuple *tuple)
static const u_int8_t invmap[] = ;
static bool icmp_invert_tuple(struct nf_conntrack_tuple *tuple,
const struct nf_conntrack_tuple *orig)
static int icmp_print_tuple(struct seq_file *s,
const struct nf_conntrack_tuple *tuple)
static int icmp_packet(struct nf_conn *ct,
const struct sk_buff *skb,
unsigned int dataoff,
enum ip_conntrack_info ctinfo,
u_int8_t pf,
unsigned int hooknum)
static bool icmp_new(struct nf_conn *ct, const struct sk_buff *skb,
unsigned int dataoff)
static int
icmp_error_message(struct net *net, struct nf_conn *tmpl, struct sk_buff *skb,
enum ip_conntrack_info *ctinfo,
unsigned int hooknum)
static int
icmp_error(struct net *net, struct nf_conn *tmpl,
struct sk_buff *skb, unsigned int dataoff,
enum ip_conntrack_info *ctinfo, u_int8_t pf, unsigned int hooknum)
#if defined(CONFIG_NF_CT_NETLINK) || defined(CONFIG_NF_CT_NETLINK_MODULE)
static int icmp_tuple_to_nlattr(struct sk_buff *skb,
const struct nf_conntrack_tuple *t)
static const struct nla_policy icmp_nla_policy[CTA_PROTO_MAX+1] = ;
static int icmp_nlattr_to_tuple(struct nlattr *tb[],
struct nf_conntrack_tuple *tuple)
static int icmp_nlattr_tuple_size(void)
static struct ctl_table_header *icmp_sysctl_header;
static struct ctl_table icmp_sysctl_table[] = ;
static struct ctl_table icmp_compat_sysctl_table[] = ;
struct nf_conntrack_l4proto nf_conntrack_l4proto_icmp __read_mostly =
;
