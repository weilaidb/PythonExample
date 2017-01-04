int ipv6_rcv_saddr_equal(const struct sock *sk, const struct sock *sk2)
static unsigned int udp6_portaddr_hash(struct net *net,
const struct in6_addr *addr6,
unsigned int port)
int udp_v6_get_port(struct sock *sk, unsigned short snum)
static void udp_v6_rehash(struct sock *sk)
static inline int compute_score(struct sock *sk, struct net *net,
unsigned short hnum,
const struct in6_addr *saddr, __be16 sport,
const struct in6_addr *daddr, __be16 dport,
int dif)
#define SCORE2_MAX (1 + 1 + 1)
static inline int compute_score2(struct sock *sk, struct net *net,
const struct in6_addr *saddr, __be16 sport,
const struct in6_addr *daddr, unsigned short hnum,
int dif)
static struct sock *udp6_lib_lookup2(struct net *net,
const struct in6_addr *saddr, __be16 sport,
const struct in6_addr *daddr, unsigned int hnum, int dif,
struct udp_hslot *hslot2, unsigned int slot2)
static struct sock *__udp6_lib_lookup(struct net *net,
const struct in6_addr *saddr, __be16 sport,
const struct in6_addr *daddr, __be16 dport,
int dif, struct udp_table *udptable)
static struct sock *__udp6_lib_lookup_skb(struct sk_buff *skb,
__be16 sport, __be16 dport,
struct udp_table *udptable)
struct sock *udp6_lib_lookup(struct net *net, const struct in6_addr *saddr, __be16 sport,
const struct in6_addr *daddr, __be16 dport, int dif)
EXPORT_SYMBOL_GPL(udp6_lib_lookup);
int udpv6_recvmsg(struct kiocb *iocb, struct sock *sk,
struct msghdr *msg, size_t len,
int noblock, int flags, int *addr_len)
void __udp6_lib_err(struct sk_buff *skb, struct inet6_skb_parm *opt,
u8 type, u8 code, int offset, __be32 info,
struct udp_table *udptable)
static __inline__ void udpv6_err(struct sk_buff *skb,
struct inet6_skb_parm *opt, u8 type,
u8 code, int offset, __be32 info     )
int udpv6_queue_rcv_skb(struct sock * sk, struct sk_buff *skb)
static struct sock *udp_v6_mcast_next(struct net *net, struct sock *sk,
__be16 loc_port, const struct in6_addr *loc_addr,
__be16 rmt_port, const struct in6_addr *rmt_addr,
int dif)
static void flush_stack(struct sock **stack, unsigned int count,
struct sk_buff *skb, unsigned int final)
static int __udp6_lib_mcast_deliver(struct net *net, struct sk_buff *skb,
const struct in6_addr *saddr, const struct in6_addr *daddr,
struct udp_table *udptable)
static inline int udp6_csum_init(struct sk_buff *skb, struct udphdr *uh,
int proto)
int __udp6_lib_rcv(struct sk_buff *skb, struct udp_table *udptable,
int proto)
static __inline__ int udpv6_rcv(struct sk_buff *skb)
static void udp_v6_flush_pending_frames(struct sock *sk)
static void udp6_hwcsum_outgoing(struct sock *sk, struct sk_buff *skb,
const struct in6_addr *saddr,
const struct in6_addr *daddr, int len)
static int udp_v6_push_pending_frames(struct sock *sk)
int udpv6_sendmsg(struct kiocb *iocb, struct sock *sk,
struct msghdr *msg, size_t len)
void udpv6_destroy_sock(struct sock *sk)
int udpv6_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen)
int compat_udpv6_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen)
int udpv6_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen)
int compat_udpv6_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen)
static int udp6_ufo_send_check(struct sk_buff *skb)
static struct sk_buff *udp6_ufo_fragment(struct sk_buff *skb, u32 features)
static const struct inet6_protocol udpv6_protocol = ;
static void udp6_sock_seq_show(struct seq_file *seq, struct sock *sp, int bucket)
int udp6_seq_show(struct seq_file *seq, void *v)
static struct udp_seq_afinfo udp6_seq_afinfo = ;
int __net_init udp6_proc_init(struct net *net)
void udp6_proc_exit(struct net *net)
struct proto udpv6_prot = ;
static struct inet_protosw udpv6_protosw = ;
int __init udpv6_init(void)
void udpv6_exit(void)
