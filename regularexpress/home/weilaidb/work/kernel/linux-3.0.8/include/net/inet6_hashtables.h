#define _INET6_HASHTABLES_H
#if defined(CONFIG_IPV6) || defined (CONFIG_IPV6_MODULE)
struct inet_hashinfo;
static inline unsigned int inet6_ehashfn(struct net *net,
const struct in6_addr *laddr, const u16 lport,
const struct in6_addr *faddr, const __be16 fport)
static inline int inet6_sk_ehashfn(const struct sock *sk)
extern int __inet6_hash(struct sock *sk, struct inet_timewait_sock *twp);
extern struct sock *__inet6_lookup_established(struct net *net,
struct inet_hashinfo *hashinfo,
const struct in6_addr *saddr,
const __be16 sport,
const struct in6_addr *daddr,
const u16 hnum,
const int dif);
extern struct sock *inet6_lookup_listener(struct net *net,
struct inet_hashinfo *hashinfo,
const struct in6_addr *daddr,
const unsigned short hnum,
const int dif);
static inline struct sock *__inet6_lookup(struct net *net,
struct inet_hashinfo *hashinfo,
const struct in6_addr *saddr,
const __be16 sport,
const struct in6_addr *daddr,
const u16 hnum,
const int dif)
static inline struct sock *__inet6_lookup_skb(struct inet_hashinfo *hashinfo,
struct sk_buff *skb,
const __be16 sport,
const __be16 dport)
extern struct sock *inet6_lookup(struct net *net, struct inet_hashinfo *hashinfo,
const struct in6_addr *saddr, const __be16 sport,
const struct in6_addr *daddr, const __be16 dport,
const int dif);
