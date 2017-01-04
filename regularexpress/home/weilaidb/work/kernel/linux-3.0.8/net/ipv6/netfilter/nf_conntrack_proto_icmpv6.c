static unsigned int nf_ct_icmpv6_timeout __read_mostly = 30*HZ;
static bool icmpv6_pkt_to_tuple(const struct sk_buff *skb,
unsigned int dataoff,
struct nf_conntrack_tuple *tuple)
static const u_int8_t invmap[] = ;
static const u_int8_t noct_valid_new[] = ;
static bool icmpv6_invert_tuple(struct nf_conntrack_tuple *tuple,
const struct nf_conntrack_tuple *orig)
static int icmpv6_print_tuple(struct seq_file *s,
const struct nf_conntrack_tuple *tuple)
static int icmpv6_packet(struct nf_conn *ct,
const struct sk_buff *skb,
unsigned int dataoff,
enum ip_conntrack_info ctinfo,
u_int8_t pf,
unsigned int hooknum)
static bool icmpv6_new(struct nf_conn *ct, const struct sk_buff *skb,
unsigned int dataoff)
static int
icmpv6_error_message(struct net *net, struct nf_conn *tmpl,
struct sk_buff *skb,
unsigned int icmp6off,
enum ip_conntrack_info *ctinfo,
unsigned int hooknum)
static int
icmpv6_error(struct net *net, struct nf_conn *tmpl,
struct sk_buff *skb, unsigned int dataoff,
enum ip_conntrack_info *ctinfo, u_int8_t pf, unsigned int hooknum)
#if defined(CONFIG_NF_CT_NETLINK) || defined(CONFIG_NF_CT_NETLINK_MODULE)
static int icmpv6_tuple_to_nlattr(struct sk_buff *skb,
const struct nf_conntrack_tuple *t)
static const struct nla_policy icmpv6_nla_policy[CTA_PROTO_MAX+1] = ;
static int icmpv6_nlattr_to_tuple(struct nlattr *tb[],
struct nf_conntrack_tuple *tuple)
static int icmpv6_nlattr_tuple_size(void)
static struct ctl_table_header *icmpv6_sysctl_header;
static struct ctl_table icmpv6_sysctl_table[] = ;
struct nf_conntrack_l4proto nf_conntrack_l4proto_icmpv6 __read_mostly =
;
