static unsigned int nf_ct_udp_timeout __read_mostly = 30*HZ;
static unsigned int nf_ct_udp_timeout_stream __read_mostly = 180*HZ;
static bool udp_pkt_to_tuple(const struct sk_buff *skb,
unsigned int dataoff,
struct nf_conntrack_tuple *tuple)
static bool udp_invert_tuple(struct nf_conntrack_tuple *tuple,
const struct nf_conntrack_tuple *orig)
static int udp_print_tuple(struct seq_file *s,
const struct nf_conntrack_tuple *tuple)
static int udp_packet(struct nf_conn *ct,
const struct sk_buff *skb,
unsigned int dataoff,
enum ip_conntrack_info ctinfo,
u_int8_t pf,
unsigned int hooknum)
static bool udp_new(struct nf_conn *ct, const struct sk_buff *skb,
unsigned int dataoff)
static int udp_error(struct net *net, struct nf_conn *tmpl, struct sk_buff *skb,
unsigned int dataoff, enum ip_conntrack_info *ctinfo,
u_int8_t pf,
unsigned int hooknum)
static unsigned int udp_sysctl_table_users;
static struct ctl_table_header *udp_sysctl_header;
static struct ctl_table udp_sysctl_table[] = ;
static struct ctl_table udp_compat_sysctl_table[] = ;
struct nf_conntrack_l4proto nf_conntrack_l4proto_udp4 __read_mostly =
;
EXPORT_SYMBOL_GPL(nf_conntrack_l4proto_udp4);
struct nf_conntrack_l4proto nf_conntrack_l4proto_udp6 __read_mostly =
;
EXPORT_SYMBOL_GPL(nf_conntrack_l4proto_udp6);
