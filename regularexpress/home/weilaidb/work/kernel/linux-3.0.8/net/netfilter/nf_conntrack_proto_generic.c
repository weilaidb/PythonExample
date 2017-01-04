static unsigned int nf_ct_generic_timeout __read_mostly = 600*HZ;
static bool generic_pkt_to_tuple(const struct sk_buff *skb,
unsigned int dataoff,
struct nf_conntrack_tuple *tuple)
static bool generic_invert_tuple(struct nf_conntrack_tuple *tuple,
const struct nf_conntrack_tuple *orig)
static int generic_print_tuple(struct seq_file *s,
const struct nf_conntrack_tuple *tuple)
static int packet(struct nf_conn *ct,
const struct sk_buff *skb,
unsigned int dataoff,
enum ip_conntrack_info ctinfo,
u_int8_t pf,
unsigned int hooknum)
static bool new(struct nf_conn *ct, const struct sk_buff *skb,
unsigned int dataoff)
static struct ctl_table_header *generic_sysctl_header;
static struct ctl_table generic_sysctl_table[] = ;
static struct ctl_table generic_compat_sysctl_table[] = ;
struct nf_conntrack_l4proto nf_conntrack_l4proto_generic __read_mostly =
;
