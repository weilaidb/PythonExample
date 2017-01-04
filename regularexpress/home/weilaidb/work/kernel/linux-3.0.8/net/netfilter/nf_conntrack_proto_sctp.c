static const char *const sctp_conntrack_names[] = ;
#define SECS  * HZ
#define MINS  * 60 SECS
#define HOURS * 60 MINS
#define DAYS  * 24 HOURS
static unsigned int sctp_timeouts[SCTP_CONNTRACK_MAX] __read_mostly = ;
#define sNO SCTP_CONNTRACK_NONE
#define	sCL SCTP_CONNTRACK_CLOSED
#define	sCW SCTP_CONNTRACK_COOKIE_WAIT
#define	sCE SCTP_CONNTRACK_COOKIE_ECHOED
#define	sES SCTP_CONNTRACK_ESTABLISHED
#define	sSS SCTP_CONNTRACK_SHUTDOWN_SENT
#define	sSR SCTP_CONNTRACK_SHUTDOWN_RECD
#define	sSA SCTP_CONNTRACK_SHUTDOWN_ACK_SENT
#define	sIV SCTP_CONNTRACK_MAX
static const u8 sctp_conntracks[2][9][SCTP_CONNTRACK_MAX] = ;
static bool sctp_pkt_to_tuple(const struct sk_buff *skb, unsigned int dataoff,
struct nf_conntrack_tuple *tuple)
static bool sctp_invert_tuple(struct nf_conntrack_tuple *tuple,
const struct nf_conntrack_tuple *orig)
static int sctp_print_tuple(struct seq_file *s,
const struct nf_conntrack_tuple *tuple)
static int sctp_print_conntrack(struct seq_file *s, struct nf_conn *ct)
#define for_each_sctp_chunk(skb, sch, _sch, offset, dataoff, count)	\
for ((offset) = (dataoff) + sizeof(sctp_sctphdr_t), (count) = 0;	\
(offset) < (skb)->len &&					\
((sch) = skb_header_pointer((skb), (offset), sizeof(_sch), &(_sch)));	\
(offset) += (ntohs((sch)->length) + 3) & ~3, (count)++)
static int do_basic_checks(struct nf_conn *ct,
const struct sk_buff *skb,
unsigned int dataoff,
unsigned long *map)
static int sctp_new_state(enum ip_conntrack_dir dir,
enum sctp_conntrack cur_state,
int chunk_type)
static int sctp_packet(struct nf_conn *ct,
const struct sk_buff *skb,
unsigned int dataoff,
enum ip_conntrack_info ctinfo,
u_int8_t pf,
unsigned int hooknum)
static bool sctp_new(struct nf_conn *ct, const struct sk_buff *skb,
unsigned int dataoff)
#if defined(CONFIG_NF_CT_NETLINK) || defined(CONFIG_NF_CT_NETLINK_MODULE)
static int sctp_to_nlattr(struct sk_buff *skb, struct nlattr *nla,
struct nf_conn *ct)
static const struct nla_policy sctp_nla_policy[CTA_PROTOINFO_SCTP_MAX+1] = ;
static int nlattr_to_sctp(struct nlattr *cda[], struct nf_conn *ct)
static int sctp_nlattr_size(void)
static unsigned int sctp_sysctl_table_users;
static struct ctl_table_header *sctp_sysctl_header;
static struct ctl_table sctp_sysctl_table[] = ;
static struct ctl_table sctp_compat_sysctl_table[] = ;
static struct nf_conntrack_l4proto nf_conntrack_l4proto_sctp4 __read_mostly = ;
static struct nf_conntrack_l4proto nf_conntrack_l4proto_sctp6 __read_mostly = ;
static int __init nf_conntrack_proto_sctp_init(void)
static void __exit nf_conntrack_proto_sctp_fini(void)
module_init(nf_conntrack_proto_sctp_init);
module_exit(nf_conntrack_proto_sctp_fini);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Kiran Kumar Immidi");
MODULE_DESCRIPTION("Netfilter connection tracking protocol helper for SCTP");
MODULE_ALIAS("ip_conntrack_proto_sctp");
