static int nf_ct_tcp_be_liberal __read_mostly = 0;
static int nf_ct_tcp_loose __read_mostly = 1;
static int nf_ct_tcp_max_retrans __read_mostly = 3;
static const char *const tcp_conntrack_names[] = ;
#define SECS * HZ
#define MINS * 60 SECS
#define HOURS * 60 MINS
#define DAYS * 24 HOURS
static unsigned int nf_ct_tcp_timeout_max_retrans __read_mostly    =   5 MINS;
static unsigned int nf_ct_tcp_timeout_unacknowledged __read_mostly =   5 MINS;
static unsigned int tcp_timeouts[TCP_CONNTRACK_MAX] __read_mostly = ;
#define sNO TCP_CONNTRACK_NONE
#define sSS TCP_CONNTRACK_SYN_SENT
#define sSR TCP_CONNTRACK_SYN_RECV
#define sES TCP_CONNTRACK_ESTABLISHED
#define sFW TCP_CONNTRACK_FIN_WAIT
#define sCW TCP_CONNTRACK_CLOSE_WAIT
#define sLA TCP_CONNTRACK_LAST_ACK
#define sTW TCP_CONNTRACK_TIME_WAIT
#define sCL TCP_CONNTRACK_CLOSE
#define sS2 TCP_CONNTRACK_SYN_SENT2
#define sIV TCP_CONNTRACK_MAX
#define sIG TCP_CONNTRACK_IGNORE
enum tcp_bit_set ;
static const u8 tcp_conntracks[2][6][TCP_CONNTRACK_MAX] = ;
static bool tcp_pkt_to_tuple(const struct sk_buff *skb, unsigned int dataoff,
struct nf_conntrack_tuple *tuple)
static bool tcp_invert_tuple(struct nf_conntrack_tuple *tuple,
const struct nf_conntrack_tuple *orig)
static int tcp_print_tuple(struct seq_file *s,
const struct nf_conntrack_tuple *tuple)
static int tcp_print_conntrack(struct seq_file *s, struct nf_conn *ct)
static unsigned int get_conntrack_index(const struct tcphdr *tcph)
static inline __u32 segment_seq_plus_len(__u32 seq,
size_t len,
unsigned int dataoff,
const struct tcphdr *tcph)
#define MAXACKWINCONST			66000
#define MAXACKWINDOW(sender)						\
((sender)->td_maxwin > MAXACKWINCONST ? (sender)->td_maxwin	\
: MAXACKWINCONST)
static void tcp_options(const struct sk_buff *skb,
unsigned int dataoff,
const struct tcphdr *tcph,
struct ip_ct_tcp_state *state)
static void tcp_sack(const struct sk_buff *skb, unsigned int dataoff,
const struct tcphdr *tcph, __u32 *sack)
static inline s16 nat_offset(const struct nf_conn *ct,
enum ip_conntrack_dir dir,
u32 seq)
#define NAT_OFFSET(pf, ct, dir, seq) \
(pf == NFPROTO_IPV4 ? nat_offset(ct, dir, seq) : 0)
#define NAT_OFFSET(pf, ct, dir, seq)	0
static bool tcp_in_window(const struct nf_conn *ct,
struct ip_ct_tcp *state,
enum ip_conntrack_dir dir,
unsigned int index,
const struct sk_buff *skb,
unsigned int dataoff,
const struct tcphdr *tcph,
u_int8_t pf)
static const u8 tcp_valid_flags[(TCPHDR_FIN|TCPHDR_SYN|TCPHDR_RST|TCPHDR_ACK|
TCPHDR_URG) + 1] =
;
static int tcp_error(struct net *net, struct nf_conn *tmpl,
struct sk_buff *skb,
unsigned int dataoff,
enum ip_conntrack_info *ctinfo,
u_int8_t pf,
unsigned int hooknum)
static int tcp_packet(struct nf_conn *ct,
const struct sk_buff *skb,
unsigned int dataoff,
enum ip_conntrack_info ctinfo,
u_int8_t pf,
unsigned int hooknum)
static bool tcp_new(struct nf_conn *ct, const struct sk_buff *skb,
unsigned int dataoff)
#if defined(CONFIG_NF_CT_NETLINK) || defined(CONFIG_NF_CT_NETLINK_MODULE)
static int tcp_to_nlattr(struct sk_buff *skb, struct nlattr *nla,
struct nf_conn *ct)
static const struct nla_policy tcp_nla_policy[CTA_PROTOINFO_TCP_MAX+1] = ;
static int nlattr_to_tcp(struct nlattr *cda[], struct nf_conn *ct)
static int tcp_nlattr_size(void)
static int tcp_nlattr_tuple_size(void)
static unsigned int tcp_sysctl_table_users;
static struct ctl_table_header *tcp_sysctl_header;
static struct ctl_table tcp_sysctl_table[] = ;
static struct ctl_table tcp_compat_sysctl_table[] = ;
struct nf_conntrack_l4proto nf_conntrack_l4proto_tcp4 __read_mostly =
;
EXPORT_SYMBOL_GPL(nf_conntrack_l4proto_tcp4);
struct nf_conntrack_l4proto nf_conntrack_l4proto_tcp6 __read_mostly =
;
EXPORT_SYMBOL_GPL(nf_conntrack_l4proto_tcp6);
