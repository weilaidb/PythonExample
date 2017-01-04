#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
struct sctp_globals sctp_globals __read_mostly;
DEFINE_SNMP_STAT(struct sctp_mib, sctp_statistics) __read_mostly;
struct proc_dir_entry	*proc_net_sctp;
struct idr sctp_assocs_id;
DEFINE_SPINLOCK(sctp_assocs_id_lock);
static struct sock *sctp_ctl_sock;
static struct sctp_pf *sctp_pf_inet6_specific;
static struct sctp_pf *sctp_pf_inet_specific;
static struct sctp_af *sctp_af_v4_specific;
static struct sctp_af *sctp_af_v6_specific;
struct kmem_cache *sctp_chunk_cachep __read_mostly;
struct kmem_cache *sctp_bucket_cachep __read_mostly;
long sysctl_sctp_mem[3];
int sysctl_sctp_rmem[3];
int sysctl_sctp_wmem[3];
struct sock *sctp_get_ctl_sock(void)
static __init int sctp_proc_init(void)
static void sctp_proc_exit(void)
static void sctp_v4_copy_addrlist(struct list_head *addrlist,
struct net_device *dev)
static void sctp_get_local_addr_list(void)
static void sctp_free_local_addr_list(void)
int sctp_copy_local_addr_list(struct sctp_bind_addr *bp, sctp_scope_t scope,
gfp_t gfp, int copy_flags)
static void sctp_v4_from_skb(union sctp_addr *addr, struct sk_buff *skb,
int is_saddr)
static void sctp_v4_from_sk(union sctp_addr *addr, struct sock *sk)
static void sctp_v4_to_sk_saddr(union sctp_addr *addr, struct sock *sk)
static void sctp_v4_to_sk_daddr(union sctp_addr *addr, struct sock *sk)
static void sctp_v4_from_addr_param(union sctp_addr *addr,
union sctp_addr_param *param,
__be16 port, int iif)
static int sctp_v4_to_addr_param(const union sctp_addr *addr,
union sctp_addr_param *param)
static void sctp_v4_dst_saddr(union sctp_addr *saddr, struct flowi4 *fl4,
__be16 port)
static int sctp_v4_cmp_addr(const union sctp_addr *addr1,
const union sctp_addr *addr2)
static void sctp_v4_inaddr_any(union sctp_addr *addr, __be16 port)
static int sctp_v4_is_any(const union sctp_addr *addr)
static int sctp_v4_addr_valid(union sctp_addr *addr,
struct sctp_sock *sp,
const struct sk_buff *skb)
static int sctp_v4_available(union sctp_addr *addr, struct sctp_sock *sp)
static sctp_scope_t sctp_v4_scope(union sctp_addr *addr)
static void sctp_v4_get_dst(struct sctp_transport *t, union sctp_addr *saddr,
struct flowi *fl, struct sock *sk)
static void sctp_v4_get_saddr(struct sctp_sock *sk,
struct sctp_transport *t,
struct flowi *fl)
static int sctp_v4_skb_iif(const struct sk_buff *skb)
static int sctp_v4_is_ce(const struct sk_buff *skb)
static struct sock *sctp_v4_create_accept_sk(struct sock *sk,
struct sctp_association *asoc)
static void sctp_v4_addr_v4map(struct sctp_sock *sp, union sctp_addr *addr)
static void sctp_v4_seq_dump_addr(struct seq_file *seq, union sctp_addr *addr)
static void sctp_v4_ecn_capable(struct sock *sk)
static int sctp_inetaddr_event(struct notifier_block *this, unsigned long ev,
void *ptr)
static int sctp_ctl_sock_init(void)
int sctp_register_af(struct sctp_af *af)
struct sctp_af *sctp_get_af_specific(sa_family_t family)
static void sctp_inet_msgname(char *msgname, int *addr_len)
static void sctp_inet_event_msgname(struct sctp_ulpevent *event, char *msgname,
int *addr_len)
static void sctp_inet_skb_msgname(struct sk_buff *skb, char *msgname, int *len)
static int sctp_inet_af_supported(sa_family_t family, struct sctp_sock *sp)
static int sctp_inet_cmp_addr(const union sctp_addr *addr1,
const union sctp_addr *addr2,
struct sctp_sock *opt)
static int sctp_inet_bind_verify(struct sctp_sock *opt, union sctp_addr *addr)
static int sctp_inet_send_verify(struct sctp_sock *opt, union sctp_addr *addr)
static int sctp_inet_supported_addrs(const struct sctp_sock *opt,
__be16 *types)
static inline int sctp_v4_xmit(struct sk_buff *skb,
struct sctp_transport *transport)
static struct sctp_af sctp_af_inet;
static struct sctp_pf sctp_pf_inet = ;
static struct notifier_block sctp_inetaddr_notifier = ;
static const struct proto_ops inet_seqpacket_ops = ;
static struct inet_protosw sctp_seqpacket_protosw = ;
static struct inet_protosw sctp_stream_protosw = ;
static const struct net_protocol sctp_protocol = ;
static struct sctp_af sctp_af_inet = ;
struct sctp_pf *sctp_get_pf_specific(sa_family_t family)
int sctp_register_pf(struct sctp_pf *pf, sa_family_t family)
static inline int init_sctp_mibs(void)
static inline void cleanup_sctp_mibs(void)
static void sctp_v4_pf_init(void)
static void sctp_v4_pf_exit(void)
static int sctp_v4_protosw_init(void)
static void sctp_v4_protosw_exit(void)
static int sctp_v4_add_protocol(void)
static void sctp_v4_del_protocol(void)
SCTP_STATIC __init int sctp_init(void)
SCTP_STATIC __exit void sctp_exit(void)
module_init(sctp_init);
module_exit(sctp_exit);
MODULE_ALIAS("net-pf-" __stringify(PF_INET) "-proto-132");
MODULE_ALIAS("net-pf-" __stringify(PF_INET6) "-proto-132");
MODULE_AUTHOR("Linux Kernel SCTP developers <lksctp-developers@lists.sourceforge.net>");
MODULE_DESCRIPTION("Support for the SCTP protocol (RFC2960)");
module_param_named(no_checksums, sctp_checksum_disable, bool, 0644);
MODULE_PARM_DESC(no_checksums, "Disable checksums computing and verification");
MODULE_LICENSE("GPL");
