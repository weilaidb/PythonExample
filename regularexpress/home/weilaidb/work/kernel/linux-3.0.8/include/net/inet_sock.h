#define _INET_SOCK_H
struct ip_options ;
struct ip_options_rcu ;
struct ip_options_data ;
struct inet_request_sock ;
static inline struct inet_request_sock *inet_rsk(const struct request_sock *sk)
struct inet_cork ;
struct inet_cork_full ;
struct ip_mc_socklist;
struct ipv6_pinfo;
struct rtable;
struct inet_sock ;
#define IPCORK_OPT	1
#define IPCORK_ALLFRAG	2
static inline struct inet_sock *inet_sk(const struct sock *sk)
static inline void __inet_sk_copy_descendant(struct sock *sk_to,
const struct sock *sk_from,
const int ancestor_size)
#if !(defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE))
static inline void inet_sk_copy_descendant(struct sock *sk_to,
const struct sock *sk_from)
extern int inet_sk_rebuild_header(struct sock *sk);
extern u32 inet_ehash_secret;
extern void build_ehash_secret(void);
static inline unsigned int inet_ehashfn(struct net *net,
const __be32 laddr, const __u16 lport,
const __be32 faddr, const __be16 fport)
static inline int inet_sk_ehashfn(const struct sock *sk)
static inline struct request_sock *inet_reqsk_alloc(struct request_sock_ops *ops)
static inline __u8 inet_sk_flowi_flags(const struct sock *sk)
