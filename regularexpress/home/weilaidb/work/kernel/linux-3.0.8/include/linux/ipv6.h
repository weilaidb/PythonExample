#define _IPV6_H
#define IPV6_MIN_MTU	1280
struct in6_pktinfo ;
struct ip6_mtuinfo ;
struct in6_ifreq ;
#define IPV6_SRCRT_STRICT	0x01
#define IPV6_SRCRT_TYPE_0	0
#define IPV6_SRCRT_TYPE_2	2
struct ipv6_rt_hdr ;
struct ipv6_opt_hdr  __attribute__((packed));
#define ipv6_destopt_hdr ipv6_opt_hdr
#define ipv6_hopopt_hdr  ipv6_opt_hdr
#define ipv6_optlen(p)  (((p)->hdrlen+1) << 3)
struct rt0_hdr ;
struct rt2_hdr ;
struct ipv6_destopt_hao  __attribute__((packed));
struct ipv6hdr ;
struct ipv6_devconf ;
struct ipv6_params ;
extern struct ipv6_params ipv6_defaults;
enum ;
static inline struct ipv6hdr *ipv6_hdr(const struct sk_buff *skb)
static inline struct ipv6hdr *ipipv6_hdr(const struct sk_buff *skb)
struct inet6_skb_parm ;
#define IP6CB(skb)	((struct inet6_skb_parm*)((skb)->cb))
#define IP6CBMTU(skb)	((struct ip6_mtuinfo *)((skb)->cb))
static inline int inet6_iif(const struct sk_buff *skb)
struct inet6_request_sock ;
struct tcp6_request_sock ;
struct ipv6_mc_socklist;
struct ipv6_ac_socklist;
struct ipv6_fl_socklist;
struct ipv6_pinfo ;
struct raw6_sock ;
struct udp6_sock ;
struct tcp6_sock ;
extern int inet6_sk_rebuild_header(struct sock *sk);
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static inline struct ipv6_pinfo * inet6_sk(const struct sock *__sk)
static inline struct inet6_request_sock *
inet6_rsk(const struct request_sock *rsk)
static inline u32 inet6_rsk_offset(struct request_sock *rsk)
static inline struct request_sock *inet6_reqsk_alloc(struct request_sock_ops *ops)
static inline struct raw6_sock *raw6_sk(const struct sock *sk)
static inline void inet_sk_copy_descendant(struct sock *sk_to,
const struct sock *sk_from)
#define __ipv6_only_sock(sk)	(inet6_sk(sk)->ipv6only)
#define ipv6_only_sock(sk)	((sk)->sk_family == PF_INET6 && __ipv6_only_sock(sk))
struct inet6_timewait_sock ;
struct tcp6_timewait_sock ;
static inline u16 inet6_tw_offset(const struct proto *prot)
static inline struct inet6_timewait_sock *inet6_twsk(const struct sock *sk)
static inline struct in6_addr *__inet6_rcv_saddr(const struct sock *sk)
static inline struct in6_addr *inet6_rcv_saddr(const struct sock *sk)
static inline int inet_v6_ipv6only(const struct sock *sk)
#define __ipv6_only_sock(sk)	0
#define ipv6_only_sock(sk)	0
static inline struct ipv6_pinfo * inet6_sk(const struct sock *__sk)
static inline struct inet6_request_sock *
inet6_rsk(const struct request_sock *rsk)
static inline struct raw6_sock *raw6_sk(const struct sock *sk)
#define __inet6_rcv_saddr(__sk)	NULL
#define inet6_rcv_saddr(__sk)	NULL
#define tcp_twsk_ipv6only(__sk)		0
#define inet_v6_ipv6only(__sk)		0
#define INET6_MATCH(__sk, __net, __hash, __saddr, __daddr, __ports, __dif)\
(((__sk)->sk_hash == (__hash)) && sock_net((__sk)) == (__net)	&& \
((*((__portpair *)&(inet_sk(__sk)->inet_dport))) == (__ports)) && \
((__sk)->sk_family		== AF_INET6)		&& \
ipv6_addr_equal(&inet6_sk(__sk)->daddr, (__saddr))	&& \
ipv6_addr_equal(&inet6_sk(__sk)->rcv_saddr, (__daddr))	&& \
(!((__sk)->sk_bound_dev_if) || ((__sk)->sk_bound_dev_if == (__dif))))
#define INET6_TW_MATCH(__sk, __net, __hash, __saddr, __daddr, __ports, __dif) \
(((__sk)->sk_hash == (__hash)) && sock_net((__sk)) == (__net)	&& \
(*((__portpair *)&(inet_twsk(__sk)->tw_dport)) == (__ports))	&& \
((__sk)->sk_family	       == PF_INET6)			&& \
(ipv6_addr_equal(&inet6_twsk(__sk)->tw_v6_daddr, (__saddr)))	&& \
(ipv6_addr_equal(&inet6_twsk(__sk)->tw_v6_rcv_saddr, (__daddr))) && \
(!((__sk)->sk_bound_dev_if) || ((__sk)->sk_bound_dev_if == (__dif))))
