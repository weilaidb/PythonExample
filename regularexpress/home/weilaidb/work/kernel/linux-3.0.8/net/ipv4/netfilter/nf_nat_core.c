static DEFINE_SPINLOCK(nf_nat_lock);
static struct nf_conntrack_l3proto *l3proto __read_mostly;
#define MAX_IP_NAT_PROTO 256
static const struct nf_nat_protocol __rcu *nf_nat_protos[MAX_IP_NAT_PROTO]
__read_mostly;
static inline const struct nf_nat_protocol *
__nf_nat_proto_find(u_int8_t protonum)
static inline unsigned int
hash_by_src(const struct net *net, u16 zone,
const struct nf_conntrack_tuple *tuple)
int
nf_nat_used_tuple(const struct nf_conntrack_tuple *tuple,
const struct nf_conn *ignored_conntrack)
EXPORT_SYMBOL(nf_nat_used_tuple);
static int
in_range(const struct nf_conntrack_tuple *tuple,
const struct nf_nat_range *range)
static inline int
same_src(const struct nf_conn *ct,
const struct nf_conntrack_tuple *tuple)
static int
find_appropriate_src(struct net *net, u16 zone,
const struct nf_conntrack_tuple *tuple,
struct nf_conntrack_tuple *result,
const struct nf_nat_range *range)
static void
find_best_ips_proto(u16 zone, struct nf_conntrack_tuple *tuple,
const struct nf_nat_range *range,
const struct nf_conn *ct,
enum nf_nat_manip_type maniptype)
static void
get_unique_tuple(struct nf_conntrack_tuple *tuple,
const struct nf_conntrack_tuple *orig_tuple,
const struct nf_nat_range *range,
struct nf_conn *ct,
enum nf_nat_manip_type maniptype)
unsigned int
nf_nat_setup_info(struct nf_conn *ct,
const struct nf_nat_range *range,
enum nf_nat_manip_type maniptype)
EXPORT_SYMBOL(nf_nat_setup_info);
static bool
manip_pkt(u_int16_t proto,
struct sk_buff *skb,
unsigned int iphdroff,
const struct nf_conntrack_tuple *target,
enum nf_nat_manip_type maniptype)
unsigned int nf_nat_packet(struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned int hooknum,
struct sk_buff *skb)
EXPORT_SYMBOL_GPL(nf_nat_packet);
int nf_nat_icmp_reply_translation(struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned int hooknum,
struct sk_buff *skb)
EXPORT_SYMBOL_GPL(nf_nat_icmp_reply_translation);
int nf_nat_protocol_register(const struct nf_nat_protocol *proto)
EXPORT_SYMBOL(nf_nat_protocol_register);
void nf_nat_protocol_unregister(const struct nf_nat_protocol *proto)
EXPORT_SYMBOL(nf_nat_protocol_unregister);
static void nf_nat_cleanup_conntrack(struct nf_conn *ct)
static void nf_nat_move_storage(void *new, void *old)
static struct nf_ct_ext_type nat_extend __read_mostly = ;
#if defined(CONFIG_NF_CT_NETLINK) || defined(CONFIG_NF_CT_NETLINK_MODULE)
static const struct nf_nat_protocol *
nf_nat_proto_find_get(u_int8_t protonum)
static void
nf_nat_proto_put(const struct nf_nat_protocol *p)
static const struct nla_policy protonat_nla_policy[CTA_PROTONAT_MAX+1] = ;
static int nfnetlink_parse_nat_proto(struct nlattr *attr,
const struct nf_conn *ct,
struct nf_nat_range *range)
static const struct nla_policy nat_nla_policy[CTA_NAT_MAX+1] = ;
static int
nfnetlink_parse_nat(const struct nlattr *nat,
const struct nf_conn *ct, struct nf_nat_range *range)
static int
nfnetlink_parse_nat_setup(struct nf_conn *ct,
enum nf_nat_manip_type manip,
const struct nlattr *attr)
static int
nfnetlink_parse_nat_setup(struct nf_conn *ct,
enum nf_nat_manip_type manip,
const struct nlattr *attr)
static int __net_init nf_nat_net_init(struct net *net)
static int clean_nat(struct nf_conn *i, void *data)
static void __net_exit nf_nat_net_exit(struct net *net)
static struct pernet_operations nf_nat_net_ops = ;
static int __init nf_nat_init(void)
static void __exit nf_nat_cleanup(void)
MODULE_LICENSE("GPL");
MODULE_ALIAS("nf-nat-ipv4");
module_init(nf_nat_init);
module_exit(nf_nat_cleanup);
