#define _NET_IPV6_H
#define SIN6_LEN_RFC2133	24
#define IPV6_MAXPLEN		65535
#define NEXTHDR_HOP		0
#define NEXTHDR_TCP		6
#define NEXTHDR_UDP		17
#define NEXTHDR_IPV6		41
#define NEXTHDR_ROUTING		43
#define NEXTHDR_FRAGMENT	44
#define NEXTHDR_ESP		50
#define NEXTHDR_AUTH		51
#define NEXTHDR_ICMP		58
#define NEXTHDR_NONE		59
#define NEXTHDR_DEST		60
#define NEXTHDR_MOBILITY	135
#define NEXTHDR_MAX		255
#define IPV6_DEFAULT_HOPLIMIT   64
#define IPV6_DEFAULT_MCASTHOPS	1
#define IPV6_ADDR_ANY		0x0000U
#define IPV6_ADDR_UNICAST      	0x0001U
#define IPV6_ADDR_MULTICAST    	0x0002U
#define IPV6_ADDR_LOOPBACK	0x0010U
#define IPV6_ADDR_LINKLOCAL	0x0020U
#define IPV6_ADDR_SITELOCAL	0x0040U
#define IPV6_ADDR_COMPATv4	0x0080U
#define IPV6_ADDR_SCOPE_MASK	0x00f0U
#define IPV6_ADDR_MAPPED	0x1000U
#define IPV6_ADDR_MC_SCOPE(a)	\
((a)->s6_addr[1] & 0x0f)
#define __IPV6_ADDR_SCOPE_INVALID	-1
#define IPV6_ADDR_SCOPE_NODELOCAL	0x01
#define IPV6_ADDR_SCOPE_LINKLOCAL	0x02
#define IPV6_ADDR_SCOPE_SITELOCAL	0x05
#define IPV6_ADDR_SCOPE_ORGLOCAL	0x08
#define IPV6_ADDR_SCOPE_GLOBAL		0x0e
#define IPV6_ADDR_MC_FLAG_TRANSIENT(a)	\
((a)->s6_addr[1] & 0x10)
#define IPV6_ADDR_MC_FLAG_PREFIX(a)	\
((a)->s6_addr[1] & 0x20)
#define IPV6_ADDR_MC_FLAG_RENDEZVOUS(a)	\
((a)->s6_addr[1] & 0x40)
struct frag_hdr ;
#define	IP6_MF	0x0001
extern int sysctl_mld_max_msf;
extern struct ctl_path net_ipv6_ctl_path[];
#define _DEVINC(net, statname, modifier, idev, field)			\
()
#define _DEVINCATOMIC(net, statname, modifier, idev, field)		\
()
#define _DEVADD(net, statname, modifier, idev, field, val)		\
()
#define _DEVUPD(net, statname, modifier, idev, field, val)		\
()
#define IP6_INC_STATS(net, idev,field)		\
_DEVINC(net, ipv6, 64, idev, field)
#define IP6_INC_STATS_BH(net, idev,field)	\
_DEVINC(net, ipv6, 64_BH, idev, field)
#define IP6_ADD_STATS(net, idev,field,val)	\
_DEVADD(net, ipv6, 64, idev, field, val)
#define IP6_ADD_STATS_BH(net, idev,field,val)	\
_DEVADD(net, ipv6, 64_BH, idev, field, val)
#define IP6_UPD_PO_STATS(net, idev,field,val)   \
_DEVUPD(net, ipv6, 64, idev, field, val)
#define IP6_UPD_PO_STATS_BH(net, idev,field,val)   \
_DEVUPD(net, ipv6, 64_BH, idev, field, val)
#define ICMP6_INC_STATS(net, idev, field)	\
_DEVINCATOMIC(net, icmpv6, , idev, field)
#define ICMP6_INC_STATS_BH(net, idev, field)	\
_DEVINCATOMIC(net, icmpv6, _BH, idev, field)
#define ICMP6MSGOUT_INC_STATS(net, idev, field)		\
_DEVINCATOMIC(net, icmpv6msg, , idev, field +256)
#define ICMP6MSGOUT_INC_STATS_BH(net, idev, field)	\
_DEVINCATOMIC(net, icmpv6msg, _BH, idev, field +256)
#define ICMP6MSGIN_INC_STATS_BH(net, idev, field)	\
_DEVINCATOMIC(net, icmpv6msg, _BH, idev, field)
struct ip6_ra_chain ;
extern struct ip6_ra_chain	*ip6_ra_chain;
extern rwlock_t ip6_ra_lock;
struct ipv6_txoptions ;
struct ip6_flowlabel ;
#define IPV6_FLOWINFO_MASK	cpu_to_be32(0x0FFFFFFF)
#define IPV6_FLOWLABEL_MASK	cpu_to_be32(0x000FFFFF)
struct ipv6_fl_socklist ;
extern struct ip6_flowlabel	*fl6_sock_lookup(struct sock *sk, __be32 label);
extern struct ipv6_txoptions	*fl6_merge_options(struct ipv6_txoptions * opt_space,
struct ip6_flowlabel * fl,
struct ipv6_txoptions * fopt);
extern void			fl6_free_socklist(struct sock *sk);
extern int			ipv6_flowlabel_opt(struct sock *sk, char __user *optval, int optlen);
extern int			ip6_flowlabel_init(void);
extern void			ip6_flowlabel_cleanup(void);
static inline void fl6_sock_release(struct ip6_flowlabel *fl)
extern int 			ip6_ra_control(struct sock *sk, int sel);
extern int			ipv6_parse_hopopts(struct sk_buff *skb);
extern struct ipv6_txoptions *  ipv6_dup_options(struct sock *sk, struct ipv6_txoptions *opt);
extern struct ipv6_txoptions *	ipv6_renew_options(struct sock *sk, struct ipv6_txoptions *opt,
int newtype,
struct ipv6_opt_hdr __user *newopt,
int newoptlen);
struct ipv6_txoptions *ipv6_fixup_options(struct ipv6_txoptions *opt_space,
struct ipv6_txoptions *opt);
extern int ipv6_opt_accepted(struct sock *sk, struct sk_buff *skb);
int ip6_frag_nqueues(struct net *net);
int ip6_frag_mem(struct net *net);
#define IPV6_FRAG_HIGH_THRESH	(256 * 1024)
#define IPV6_FRAG_LOW_THRESH	(192 * 1024)
#define IPV6_FRAG_TIMEOUT	(60 * HZ)
extern int __ipv6_addr_type(const struct in6_addr *addr);
static inline int ipv6_addr_type(const struct in6_addr *addr)
static inline int ipv6_addr_scope(const struct in6_addr *addr)
static inline int __ipv6_addr_src_scope(int type)
static inline int ipv6_addr_src_scope(const struct in6_addr *addr)
static inline int ipv6_addr_cmp(const struct in6_addr *a1, const struct in6_addr *a2)
static inline int
ipv6_masked_addr_cmp(const struct in6_addr *a1, const struct in6_addr *m,
const struct in6_addr *a2)
static inline void ipv6_addr_copy(struct in6_addr *a1, const struct in6_addr *a2)
static inline void ipv6_addr_prefix(struct in6_addr *pfx,
const struct in6_addr *addr,
int plen)
static inline void ipv6_addr_set(struct in6_addr *addr,
__be32 w1, __be32 w2,
__be32 w3, __be32 w4)
static inline int ipv6_addr_equal(const struct in6_addr *a1,
const struct in6_addr *a2)
static inline int __ipv6_prefix_equal(const __be32 *a1, const __be32 *a2,
unsigned int prefixlen)
static inline int ipv6_prefix_equal(const struct in6_addr *a1,
const struct in6_addr *a2,
unsigned int prefixlen)
struct inet_frag_queue;
enum ip6_defrag_users ;
struct ip6_create_arg ;
void ip6_frag_init(struct inet_frag_queue *q, void *a);
int ip6_frag_match(struct inet_frag_queue *q, void *a);
static inline int ipv6_addr_any(const struct in6_addr *a)
static inline int ipv6_addr_loopback(const struct in6_addr *a)
static inline int ipv6_addr_v4mapped(const struct in6_addr *a)
static inline int ipv6_addr_orchid(const struct in6_addr *a)
static inline void ipv6_addr_set_v4mapped(const __be32 addr,
struct in6_addr *v4mapped)
static inline int __ipv6_addr_diff(const void *token1, const void *token2, int addrlen)
static inline int ipv6_addr_diff(const struct in6_addr *a1, const struct in6_addr *a2)
extern void ipv6_select_ident(struct frag_hdr *fhdr, struct in6_addr *addr);
extern int			ipv6_rcv(struct sk_buff *skb,
struct net_device *dev,
struct packet_type *pt,
struct net_device *orig_dev);
extern int			ip6_rcv_finish(struct sk_buff *skb);
extern int			ip6_xmit(struct sock *sk,
struct sk_buff *skb,
struct flowi6 *fl6,
struct ipv6_txoptions *opt);
extern int			ip6_nd_hdr(struct sock *sk,
struct sk_buff *skb,
struct net_device *dev,
const struct in6_addr *saddr,
const struct in6_addr *daddr,
int proto, int len);
extern int			ip6_find_1stfragopt(struct sk_buff *skb, u8 **nexthdr);
extern int			ip6_append_data(struct sock *sk,
int getfrag(void *from, char *to, int offset, int len, int odd, struct sk_buff *skb),
void *from,
int length,
int transhdrlen,
int hlimit,
int tclass,
struct ipv6_txoptions *opt,
struct flowi6 *fl6,
struct rt6_info *rt,
unsigned int flags,
int dontfrag);
extern int			ip6_push_pending_frames(struct sock *sk);
extern void			ip6_flush_pending_frames(struct sock *sk);
extern int			ip6_dst_lookup(struct sock *sk,
struct dst_entry **dst,
struct flowi6 *fl6);
extern struct dst_entry *	ip6_dst_lookup_flow(struct sock *sk,
struct flowi6 *fl6,
const struct in6_addr *final_dst,
bool can_sleep);
extern struct dst_entry *	ip6_sk_dst_lookup_flow(struct sock *sk,
struct flowi6 *fl6,
const struct in6_addr *final_dst,
bool can_sleep);
extern struct dst_entry *	ip6_blackhole_route(struct net *net,
struct dst_entry *orig_dst);
extern int			ip6_output(struct sk_buff *skb);
extern int			ip6_forward(struct sk_buff *skb);
extern int			ip6_input(struct sk_buff *skb);
extern int			ip6_mc_input(struct sk_buff *skb);
extern int			__ip6_local_out(struct sk_buff *skb);
extern int			ip6_local_out(struct sk_buff *skb);
extern void 			ipv6_push_nfrag_opts(struct sk_buff *skb,
struct ipv6_txoptions *opt,
u8 *proto,
struct in6_addr **daddr_p);
extern void			ipv6_push_frag_opts(struct sk_buff *skb,
struct ipv6_txoptions *opt,
u8 *proto);
extern int			ipv6_skip_exthdr(const struct sk_buff *, int start,
u8 *nexthdrp);
extern int 			ipv6_ext_hdr(u8 nexthdr);
extern int ipv6_find_tlv(struct sk_buff *skb, int offset, int type);
extern struct in6_addr *fl6_update_dst(struct flowi6 *fl6,
const struct ipv6_txoptions *opt,
struct in6_addr *orig);
extern int			ipv6_setsockopt(struct sock *sk, int level,
int optname,
char __user *optval,
unsigned int optlen);
extern int			ipv6_getsockopt(struct sock *sk, int level,
int optname,
char __user *optval,
int __user *optlen);
extern int			compat_ipv6_setsockopt(struct sock *sk,
int level,
int optname,
char __user *optval,
unsigned int optlen);
extern int			compat_ipv6_getsockopt(struct sock *sk,
int level,
int optname,
char __user *optval,
int __user *optlen);
extern int			ip6_datagram_connect(struct sock *sk,
struct sockaddr *addr, int addr_len);
extern int 			ipv6_recv_error(struct sock *sk, struct msghdr *msg, int len);
extern int 			ipv6_recv_rxpmtu(struct sock *sk, struct msghdr *msg, int len);
extern void			ipv6_icmp_error(struct sock *sk, struct sk_buff *skb, int err, __be16 port,
u32 info, u8 *payload);
extern void			ipv6_local_error(struct sock *sk, int err, struct flowi6 *fl6, u32 info);
extern void			ipv6_local_rxpmtu(struct sock *sk, struct flowi6 *fl6, u32 mtu);
extern int inet6_release(struct socket *sock);
extern int inet6_bind(struct socket *sock, struct sockaddr *uaddr,
int addr_len);
extern int inet6_getname(struct socket *sock, struct sockaddr *uaddr,
int *uaddr_len, int peer);
extern int inet6_ioctl(struct socket *sock, unsigned int cmd,
unsigned long arg);
extern int inet6_hash_connect(struct inet_timewait_death_row *death_row,
struct sock *sk);
extern const struct proto_ops inet6_stream_ops;
extern const struct proto_ops inet6_dgram_ops;
struct group_source_req;
struct group_filter;
extern int ip6_mc_source(int add, int omode, struct sock *sk,
struct group_source_req *pgsr);
extern int ip6_mc_msfilter(struct sock *sk, struct group_filter *gsf);
extern int ip6_mc_msfget(struct sock *sk, struct group_filter *gsf,
struct group_filter __user *optval,
int __user *optlen);
extern unsigned int inet6_hash_frag(__be32 id, const struct in6_addr *saddr,
const struct in6_addr *daddr, u32 rnd);
extern int  ac6_proc_init(struct net *net);
extern void ac6_proc_exit(struct net *net);
extern int  raw6_proc_init(void);
extern void raw6_proc_exit(void);
extern int  tcp6_proc_init(struct net *net);
extern void tcp6_proc_exit(struct net *net);
extern int  udp6_proc_init(struct net *net);
extern void udp6_proc_exit(struct net *net);
extern int  udplite6_proc_init(void);
extern void udplite6_proc_exit(void);
extern int  ipv6_misc_proc_init(void);
extern void ipv6_misc_proc_exit(void);
extern int snmp6_register_dev(struct inet6_dev *idev);
extern int snmp6_unregister_dev(struct inet6_dev *idev);
static inline int ac6_proc_init(struct net *net)
static inline void ac6_proc_exit(struct net *net)
static inline int snmp6_register_dev(struct inet6_dev *idev)
static inline int snmp6_unregister_dev(struct inet6_dev *idev)
extern ctl_table ipv6_route_table_template[];
extern ctl_table ipv6_icmp_table_template[];
extern struct ctl_table *ipv6_icmp_sysctl_init(struct net *net);
extern struct ctl_table *ipv6_route_sysctl_init(struct net *net);
extern int ipv6_sysctl_register(void);
extern void ipv6_sysctl_unregister(void);
extern int ipv6_static_sysctl_register(void);
extern void ipv6_static_sysctl_unregister(void);
