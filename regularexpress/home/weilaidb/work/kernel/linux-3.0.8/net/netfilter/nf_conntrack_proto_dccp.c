#define DCCP_MSL (2 * 60 * HZ)
static const char * const dccp_state_names[] = ;
#define sNO	CT_DCCP_NONE
#define sRQ	CT_DCCP_REQUEST
#define sRS	CT_DCCP_RESPOND
#define sPO	CT_DCCP_PARTOPEN
#define sOP	CT_DCCP_OPEN
#define sCR	CT_DCCP_CLOSEREQ
#define sCG	CT_DCCP_CLOSING
#define sTW	CT_DCCP_TIMEWAIT
#define sIG	CT_DCCP_IGNORE
#define sIV	CT_DCCP_INVALID
static const u_int8_t
dccp_state_table[CT_DCCP_ROLE_MAX + 1][DCCP_PKT_SYNCACK + 1][CT_DCCP_MAX + 1] = ;
static int dccp_net_id __read_mostly;
struct dccp_net ;
static inline struct dccp_net *dccp_pernet(struct net *net)
static bool dccp_pkt_to_tuple(const struct sk_buff *skb, unsigned int dataoff,
struct nf_conntrack_tuple *tuple)
static bool dccp_invert_tuple(struct nf_conntrack_tuple *inv,
const struct nf_conntrack_tuple *tuple)
static bool dccp_new(struct nf_conn *ct, const struct sk_buff *skb,
unsigned int dataoff)
static u64 dccp_ack_seq(const struct dccp_hdr *dh)
static int dccp_packet(struct nf_conn *ct, const struct sk_buff *skb,
unsigned int dataoff, enum ip_conntrack_info ctinfo,
u_int8_t pf, unsigned int hooknum)
static int dccp_error(struct net *net, struct nf_conn *tmpl,
struct sk_buff *skb, unsigned int dataoff,
enum ip_conntrack_info *ctinfo,
u_int8_t pf, unsigned int hooknum)
static int dccp_print_tuple(struct seq_file *s,
const struct nf_conntrack_tuple *tuple)
static int dccp_print_conntrack(struct seq_file *s, struct nf_conn *ct)
#if defined(CONFIG_NF_CT_NETLINK) || defined(CONFIG_NF_CT_NETLINK_MODULE)
static int dccp_to_nlattr(struct sk_buff *skb, struct nlattr *nla,
struct nf_conn *ct)
static const struct nla_policy dccp_nla_policy[CTA_PROTOINFO_DCCP_MAX + 1] = ;
static int nlattr_to_dccp(struct nlattr *cda[], struct nf_conn *ct)
static int dccp_nlattr_size(void)
static struct ctl_table dccp_sysctl_table[] = ;
static struct nf_conntrack_l4proto dccp_proto4 __read_mostly = ;
static struct nf_conntrack_l4proto dccp_proto6 __read_mostly = ;
static __net_init int dccp_net_init(struct net *net)
static __net_exit void dccp_net_exit(struct net *net)
static struct pernet_operations dccp_net_ops = ;
static int __init nf_conntrack_proto_dccp_init(void)
static void __exit nf_conntrack_proto_dccp_fini(void)
module_init(nf_conntrack_proto_dccp_init);
module_exit(nf_conntrack_proto_dccp_fini);
MODULE_AUTHOR("Patrick McHardy <kaber@trash.net>");
MODULE_DESCRIPTION("DCCP connection tracking protocol helper");
MODULE_LICENSE("GPL");
