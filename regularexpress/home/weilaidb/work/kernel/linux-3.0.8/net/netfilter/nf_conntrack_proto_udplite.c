static unsigned int nf_ct_udplite_timeout __read_mostly = 30*HZ;
static unsigned int nf_ct_udplite_timeout_stream __read_mostly = 180*HZ;
static bool udplite_pkt_to_tuple(const struct sk_buff *skb,
unsigned int dataoff,
struct nf_conntrack_tuple *tuple)
static bool udplite_invert_tuple(struct nf_conntrack_tuple *tuple,
const struct nf_conntrack_tuple *orig)
static int udplite_print_tuple(struct seq_file *s,
const struct nf_conntrack_tuple *tuple)
static int udplite_packet(struct nf_conn *ct,
const struct sk_buff *skb,
unsigned int dataoff,
enum ip_conntrack_info ctinfo,
u_int8_t pf,
unsigned int hooknum)
static bool udplite_new(struct nf_conn *ct, const struct sk_buff *skb,
unsigned int dataoff)
static int udplite_error(struct net *net, struct nf_conn *tmpl,
struct sk_buff *skb,
unsigned int dataoff,
enum ip_conntrack_info *ctinfo,
u_int8_t pf,
unsigned int hooknum)
static unsigned int udplite_sysctl_table_users;
static struct ctl_table_header *udplite_sysctl_header;
static struct ctl_table udplite_sysctl_table[] = ;
static struct nf_conntrack_l4proto nf_conntrack_l4proto_udplite4 __read_mostly =
;
static struct nf_conntrack_l4proto nf_conntrack_l4proto_udplite6 __read_mostly =
;
static int __init nf_conntrack_proto_udplite_init(void)
static void __exit nf_conntrack_proto_udplite_exit(void)
module_init(nf_conntrack_proto_udplite_init);
module_exit(nf_conntrack_proto_udplite_exit);
MODULE_LICENSE("GPL");
