#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
#define IP_CMSG_PKTINFO		1
#define IP_CMSG_TTL		2
#define IP_CMSG_TOS		4
#define IP_CMSG_RECVOPTS	8
#define IP_CMSG_RETOPTS		16
#define IP_CMSG_PASSSEC		32
#define IP_CMSG_ORIGDSTADDR     64
static void ip_cmsg_recv_pktinfo(struct msghdr *msg, struct sk_buff *skb)
static void ip_cmsg_recv_ttl(struct msghdr *msg, struct sk_buff *skb)
static void ip_cmsg_recv_tos(struct msghdr *msg, struct sk_buff *skb)
static void ip_cmsg_recv_opts(struct msghdr *msg, struct sk_buff *skb)
static void ip_cmsg_recv_retopts(struct msghdr *msg, struct sk_buff *skb)
static void ip_cmsg_recv_security(struct msghdr *msg, struct sk_buff *skb)
static void ip_cmsg_recv_dstaddr(struct msghdr *msg, struct sk_buff *skb)
void ip_cmsg_recv(struct msghdr *msg, struct sk_buff *skb)
EXPORT_SYMBOL(ip_cmsg_recv);
int ip_cmsg_send(struct net *net, struct msghdr *msg, struct ipcm_cookie *ipc)
struct ip_ra_chain __rcu *ip_ra_chain;
static DEFINE_SPINLOCK(ip_ra_lock);
static void ip_ra_destroy_rcu(struct rcu_head *head)
int ip_ra_control(struct sock *sk, unsigned char on,
void (*destructor)(struct sock *))
void ip_icmp_error(struct sock *sk, struct sk_buff *skb, int err,
__be16 port, u32 info, u8 *payload)
void ip_local_error(struct sock *sk, int err, __be32 daddr, __be16 port, u32 info)
int ip_recv_error(struct sock *sk, struct msghdr *msg, int len)
static void opt_kfree_rcu(struct rcu_head *head)
static int do_ip_setsockopt(struct sock *sk, int level,
int optname, char __user *optval, unsigned int optlen)
int ip_queue_rcv_skb(struct sock *sk, struct sk_buff *skb)
EXPORT_SYMBOL(ip_queue_rcv_skb);
int ip_setsockopt(struct sock *sk, int level,
int optname, char __user *optval, unsigned int optlen)
EXPORT_SYMBOL(ip_setsockopt);
int compat_ip_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen)
EXPORT_SYMBOL(compat_ip_setsockopt);
static int do_ip_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen)
int ip_getsockopt(struct sock *sk, int level,
int optname, char __user *optval, int __user *optlen)
EXPORT_SYMBOL(ip_getsockopt);
int compat_ip_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen)
EXPORT_SYMBOL(compat_ip_getsockopt);
