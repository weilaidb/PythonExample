#define __LINUX_NETLINK_H
#define NETLINK_ROUTE		0
#define NETLINK_UNUSED		1
#define NETLINK_USERSOCK	2
#define NETLINK_FIREWALL	3
#define NETLINK_INET_DIAG	4
#define NETLINK_NFLOG		5
#define NETLINK_XFRM		6
#define NETLINK_SELINUX		7
#define NETLINK_ISCSI		8
#define NETLINK_AUDIT		9
#define NETLINK_FIB_LOOKUP	10
#define NETLINK_CONNECTOR	11
#define NETLINK_NETFILTER	12
#define NETLINK_IP6_FW		13
#define NETLINK_DNRTMSG		14
#define NETLINK_KOBJECT_UEVENT	15
#define NETLINK_GENERIC		16
#define NETLINK_SCSITRANSPORT	18
#define NETLINK_ECRYPTFS	19
#define NETLINK_RDMA		20
#define MAX_LINKS 32
struct sockaddr_nl ;
struct nlmsghdr ;
#define NLM_F_REQUEST		1
#define NLM_F_MULTI		2
#define NLM_F_ACK		4
#define NLM_F_ECHO		8
#define NLM_F_ROOT	0x100
#define NLM_F_MATCH	0x200
#define NLM_F_ATOMIC	0x400
#define NLM_F_DUMP	(NLM_F_ROOT|NLM_F_MATCH)
#define NLM_F_REPLACE	0x100
#define NLM_F_EXCL	0x200
#define NLM_F_CREATE	0x400
#define NLM_F_APPEND	0x800
#define NLMSG_ALIGNTO	4U
#define NLMSG_ALIGN(len) ( ((len)+NLMSG_ALIGNTO-1) & ~(NLMSG_ALIGNTO-1) )
#define NLMSG_HDRLEN	 ((int) NLMSG_ALIGN(sizeof(struct nlmsghdr)))
#define NLMSG_LENGTH(len) ((len)+NLMSG_ALIGN(NLMSG_HDRLEN))
#define NLMSG_SPACE(len) NLMSG_ALIGN(NLMSG_LENGTH(len))
#define NLMSG_DATA(nlh)  ((void*)(((char*)nlh) + NLMSG_LENGTH(0)))
#define NLMSG_NEXT(nlh,len)	 ((len) -= NLMSG_ALIGN((nlh)->nlmsg_len), \
(struct nlmsghdr*)(((char*)(nlh)) + NLMSG_ALIGN((nlh)->nlmsg_len)))
#define NLMSG_OK(nlh,len) ((len) >= (int)sizeof(struct nlmsghdr) && \
(nlh)->nlmsg_len >= sizeof(struct nlmsghdr) && \
(nlh)->nlmsg_len <= (len))
#define NLMSG_PAYLOAD(nlh,len) ((nlh)->nlmsg_len - NLMSG_SPACE((len)))
#define NLMSG_NOOP		0x1
#define NLMSG_ERROR		0x2
#define NLMSG_DONE		0x3
#define NLMSG_OVERRUN		0x4
#define NLMSG_MIN_TYPE		0x10
struct nlmsgerr ;
#define NETLINK_ADD_MEMBERSHIP	1
#define NETLINK_DROP_MEMBERSHIP	2
#define NETLINK_PKTINFO		3
#define NETLINK_BROADCAST_ERROR	4
#define NETLINK_NO_ENOBUFS	5
struct nl_pktinfo ;
#define NET_MAJOR 36
enum ;
struct nlattr ;
#define NLA_F_NESTED		(1 << 15)
#define NLA_F_NET_BYTEORDER	(1 << 14)
#define NLA_TYPE_MASK		~(NLA_F_NESTED | NLA_F_NET_BYTEORDER)
#define NLA_ALIGNTO		4
#define NLA_ALIGN(len)		(((len) + NLA_ALIGNTO - 1) & ~(NLA_ALIGNTO - 1))
#define NLA_HDRLEN		((int) NLA_ALIGN(sizeof(struct nlattr)))
struct net;
static inline struct nlmsghdr *nlmsg_hdr(const struct sk_buff *skb)
struct netlink_skb_parms ;
#define NETLINK_CB(skb)		(*(struct netlink_skb_parms*)&((skb)->cb))
#define NETLINK_CREDS(skb)	(&NETLINK_CB((skb)).creds)
extern void netlink_table_grab(void);
extern void netlink_table_ungrab(void);
extern struct sock *netlink_kernel_create(struct net *net,
int unit,unsigned int groups,
void (*input)(struct sk_buff *skb),
struct mutex *cb_mutex,
struct module *module);
extern void netlink_kernel_release(struct sock *sk);
extern int __netlink_change_ngroups(struct sock *sk, unsigned int groups);
extern int netlink_change_ngroups(struct sock *sk, unsigned int groups);
extern void __netlink_clear_multicast_users(struct sock *sk, unsigned int group);
extern void netlink_clear_multicast_users(struct sock *sk, unsigned int group);
extern void netlink_ack(struct sk_buff *in_skb, struct nlmsghdr *nlh, int err);
extern int netlink_has_listeners(struct sock *sk, unsigned int group);
extern int netlink_unicast(struct sock *ssk, struct sk_buff *skb, __u32 pid, int nonblock);
extern int netlink_broadcast(struct sock *ssk, struct sk_buff *skb, __u32 pid,
__u32 group, gfp_t allocation);
extern int netlink_broadcast_filtered(struct sock *ssk, struct sk_buff *skb,
__u32 pid, __u32 group, gfp_t allocation,
int (*filter)(struct sock *dsk, struct sk_buff *skb, void *data),
void *filter_data);
extern int netlink_set_err(struct sock *ssk, __u32 pid, __u32 group, int code);
extern int netlink_register_notifier(struct notifier_block *nb);
extern int netlink_unregister_notifier(struct notifier_block *nb);
struct sock *netlink_getsockbyfilp(struct file *filp);
int netlink_attachskb(struct sock *sk, struct sk_buff *skb,
long *timeo, struct sock *ssk);
void netlink_detachskb(struct sock *sk, struct sk_buff *skb);
int netlink_sendskb(struct sock *sk, struct sk_buff *skb);
#if PAGE_SIZE < 8192UL
#define NLMSG_GOODSIZE	SKB_WITH_OVERHEAD(PAGE_SIZE)
#define NLMSG_GOODSIZE	SKB_WITH_OVERHEAD(8192UL)
#define NLMSG_DEFAULT_SIZE (NLMSG_GOODSIZE - NLMSG_HDRLEN)
struct netlink_callback ;
struct netlink_notify ;
static __inline__ struct nlmsghdr *
__nlmsg_put(struct sk_buff *skb, u32 pid, u32 seq, int type, int len, int flags)
#define NLMSG_NEW(skb, pid, seq, type, len, flags) \
()
#define NLMSG_PUT(skb, pid, seq, type, len) \
NLMSG_NEW(skb, pid, seq, type, len, 0)
extern int netlink_dump_start(struct sock *ssk, struct sk_buff *skb,
const struct nlmsghdr *nlh,
int (*dump)(struct sk_buff *skb, struct netlink_callback*),
int (*done)(struct netlink_callback*));
#define NL_NONROOT_RECV 0x1
#define NL_NONROOT_SEND 0x2
extern void netlink_set_nonroot(int protocol, unsigned flag);
