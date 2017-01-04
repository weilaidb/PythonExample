#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static inline int sctp_v6_addr_match_len(union sctp_addr *s1,
union sctp_addr *s2);
static void sctp_v6_to_addr(union sctp_addr *addr, struct in6_addr *saddr,
__be16 port);
static int sctp_v6_cmp_addr(const union sctp_addr *addr1,
const union sctp_addr *addr2);
static int sctp_inet6addr_event(struct notifier_block *this, unsigned long ev,
void *ptr)
static struct notifier_block sctp_inet6addr_notifier = ;
SCTP_STATIC void sctp_v6_err(struct sk_buff *skb, struct inet6_skb_parm *opt,
u8 type, u8 code, int offset, __be32 info)
static int sctp_v6_xmit(struct sk_buff *skb, struct sctp_transport *transport)
static void sctp_v6_get_dst(struct sctp_transport *t, union sctp_addr *saddr,
struct flowi *fl, struct sock *sk)
static inline int sctp_v6_addr_match_len(union sctp_addr *s1,
union sctp_addr *s2)
static void sctp_v6_get_saddr(struct sctp_sock *sk,
struct sctp_transport *t,
struct flowi *fl)
static void sctp_v6_copy_addrlist(struct list_head *addrlist,
struct net_device *dev)
static void sctp_v6_from_skb(union sctp_addr *addr,struct sk_buff *skb,
int is_saddr)
static void sctp_v6_from_sk(union sctp_addr *addr, struct sock *sk)
static void sctp_v6_to_sk_saddr(union sctp_addr *addr, struct sock *sk)
static void sctp_v6_to_sk_daddr(union sctp_addr *addr, struct sock *sk)
static void sctp_v6_from_addr_param(union sctp_addr *addr,
union sctp_addr_param *param,
__be16 port, int iif)
static int sctp_v6_to_addr_param(const union sctp_addr *addr,
union sctp_addr_param *param)
static void sctp_v6_to_addr(union sctp_addr *addr, struct in6_addr *saddr,
__be16 port)
static int sctp_v6_cmp_addr(const union sctp_addr *addr1,
const union sctp_addr *addr2)
static void sctp_v6_inaddr_any(union sctp_addr *addr, __be16 port)
static int sctp_v6_is_any(const union sctp_addr *addr)
static int sctp_v6_available(union sctp_addr *addr, struct sctp_sock *sp)
static int sctp_v6_addr_valid(union sctp_addr *addr,
struct sctp_sock *sp,
const struct sk_buff *skb)
static sctp_scope_t sctp_v6_scope(union sctp_addr *addr)
static struct sock *sctp_v6_create_accept_sk(struct sock *sk,
struct sctp_association *asoc)
static void sctp_v6_addr_v4map(struct sctp_sock *sp, union sctp_addr *addr)
static int sctp_v6_skb_iif(const struct sk_buff *skb)
static int sctp_v6_is_ce(const struct sk_buff *skb)
static void sctp_v6_seq_dump_addr(struct seq_file *seq, union sctp_addr *addr)
static void sctp_v6_ecn_capable(struct sock *sk)
static void sctp_inet6_msgname(char *msgname, int *addr_len)
static void sctp_inet6_event_msgname(struct sctp_ulpevent *event,
char *msgname, int *addrlen)
static void sctp_inet6_skb_msgname(struct sk_buff *skb, char *msgname,
int *addr_len)
static int sctp_inet6_af_supported(sa_family_t family, struct sctp_sock *sp)
static int sctp_inet6_cmp_addr(const union sctp_addr *addr1,
const union sctp_addr *addr2,
struct sctp_sock *opt)
static int sctp_inet6_bind_verify(struct sctp_sock *opt, union sctp_addr *addr)
static int sctp_inet6_send_verify(struct sctp_sock *opt, union sctp_addr *addr)
static int sctp_inet6_supported_addrs(const struct sctp_sock *opt,
__be16 *types)
static const struct proto_ops inet6_seqpacket_ops = ;
static struct inet_protosw sctpv6_seqpacket_protosw = ;
static struct inet_protosw sctpv6_stream_protosw = ;
static int sctp6_rcv(struct sk_buff *skb)
static const struct inet6_protocol sctpv6_protocol = ;
static struct sctp_af sctp_af_inet6 = ;
static struct sctp_pf sctp_pf_inet6 = ;
void sctp_v6_pf_init(void)
void sctp_v6_pf_exit(void)
int sctp_v6_protosw_init(void)
void sctp_v6_protosw_exit(void)
int sctp_v6_add_protocol(void)
void sctp_v6_del_protocol(void)
