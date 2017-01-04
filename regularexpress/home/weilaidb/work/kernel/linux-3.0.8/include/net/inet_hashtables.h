#define _INET_HASHTABLES_H
struct inet_ehash_bucket ;
struct inet_bind_bucket ;
static inline struct net *ib_net(struct inet_bind_bucket *ib)
#define inet_bind_bucket_for_each(tb, pos, head) \
hlist_for_each_entry(tb, pos, head, node)
struct inet_bind_hashbucket ;
#define LISTENING_NULLS_BASE (1U << 29)
struct inet_listen_hashbucket ;
#define INET_LHTABLE_SIZE	32
struct inet_hashinfo ;
static inline struct inet_ehash_bucket *inet_ehash_bucket(
struct inet_hashinfo *hashinfo,
unsigned int hash)
static inline spinlock_t *inet_ehash_lockp(
struct inet_hashinfo *hashinfo,
unsigned int hash)
static inline int inet_ehash_locks_alloc(struct inet_hashinfo *hashinfo)
static inline void inet_ehash_locks_free(struct inet_hashinfo *hashinfo)
extern struct inet_bind_bucket *
inet_bind_bucket_create(struct kmem_cache *cachep,
struct net *net,
struct inet_bind_hashbucket *head,
const unsigned short snum);
extern void inet_bind_bucket_destroy(struct kmem_cache *cachep,
struct inet_bind_bucket *tb);
static inline int inet_bhashfn(struct net *net,
const __u16 lport, const int bhash_size)
extern void inet_bind_hash(struct sock *sk, struct inet_bind_bucket *tb,
const unsigned short snum);
static inline int inet_lhashfn(struct net *net, const unsigned short num)
static inline int inet_sk_listen_hashfn(const struct sock *sk)
extern int __inet_inherit_port(struct sock *sk, struct sock *child);
extern void inet_put_port(struct sock *sk);
void inet_hashinfo_init(struct inet_hashinfo *h);
extern int __inet_hash_nolisten(struct sock *sk, struct inet_timewait_sock *tw);
extern void inet_hash(struct sock *sk);
extern void inet_unhash(struct sock *sk);
extern struct sock *__inet_lookup_listener(struct net *net,
struct inet_hashinfo *hashinfo,
const __be32 daddr,
const unsigned short hnum,
const int dif);
static inline struct sock *inet_lookup_listener(struct net *net,
struct inet_hashinfo *hashinfo,
__be32 daddr, __be16 dport, int dif)
typedef __u32 __bitwise __portpair;
#define INET_COMBINED_PORTS(__sport, __dport) \
((__force __portpair)(((__force __u32)(__be16)(__sport) << 16) | (__u32)(__dport)))
#define INET_COMBINED_PORTS(__sport, __dport) \
((__force __portpair)(((__u32)(__dport) << 16) | (__force __u32)(__be16)(__sport)))
#if (BITS_PER_LONG == 64)
typedef __u64 __bitwise __addrpair;
#define INET_ADDR_COOKIE(__name, __saddr, __daddr) \
const __addrpair __name = (__force __addrpair) ( \
(((__force __u64)(__be32)(__saddr)) << 32) | \
((__force __u64)(__be32)(__daddr)));
#define INET_ADDR_COOKIE(__name, __saddr, __daddr) \
const __addrpair __name = (__force __addrpair) ( \
(((__force __u64)(__be32)(__daddr)) << 32) | \
((__force __u64)(__be32)(__saddr)));
#define INET_MATCH(__sk, __net, __hash, __cookie, __saddr, __daddr, __ports, __dif)\
(((__sk)->sk_hash == (__hash)) && net_eq(sock_net(__sk), (__net)) &&	\
((*((__addrpair *)&(inet_sk(__sk)->inet_daddr))) == (__cookie))  &&	\
((*((__portpair *)&(inet_sk(__sk)->inet_dport))) == (__ports))   &&	\
(!((__sk)->sk_bound_dev_if) || ((__sk)->sk_bound_dev_if == (__dif))))
#define INET_TW_MATCH(__sk, __net, __hash, __cookie, __saddr, __daddr, __ports, __dif)\
(((__sk)->sk_hash == (__hash)) && net_eq(sock_net(__sk), (__net)) &&	\
((*((__addrpair *)&(inet_twsk(__sk)->tw_daddr))) == (__cookie)) &&	\
((*((__portpair *)&(inet_twsk(__sk)->tw_dport))) == (__ports)) &&	\
(!((__sk)->sk_bound_dev_if) || ((__sk)->sk_bound_dev_if == (__dif))))
#define INET_ADDR_COOKIE(__name, __saddr, __daddr)
#define INET_MATCH(__sk, __net, __hash, __cookie, __saddr, __daddr, __ports, __dif)	\
(((__sk)->sk_hash == (__hash)) && net_eq(sock_net(__sk), (__net))	&&	\
(inet_sk(__sk)->inet_daddr	== (__saddr))		&&	\
(inet_sk(__sk)->inet_rcv_saddr	== (__daddr))		&&	\
((*((__portpair *)&(inet_sk(__sk)->inet_dport))) == (__ports))	&&	\
(!((__sk)->sk_bound_dev_if) || ((__sk)->sk_bound_dev_if == (__dif))))
#define INET_TW_MATCH(__sk, __net, __hash,__cookie, __saddr, __daddr, __ports, __dif)	\
(((__sk)->sk_hash == (__hash)) && net_eq(sock_net(__sk), (__net))	&&	\
(inet_twsk(__sk)->tw_daddr	== (__saddr))		&&	\
(inet_twsk(__sk)->tw_rcv_saddr	== (__daddr))		&&	\
((*((__portpair *)&(inet_twsk(__sk)->tw_dport))) == (__ports)) &&	\
(!((__sk)->sk_bound_dev_if) || ((__sk)->sk_bound_dev_if == (__dif))))
extern struct sock * __inet_lookup_established(struct net *net,
struct inet_hashinfo *hashinfo,
const __be32 saddr, const __be16 sport,
const __be32 daddr, const u16 hnum, const int dif);
static inline struct sock *
inet_lookup_established(struct net *net, struct inet_hashinfo *hashinfo,
const __be32 saddr, const __be16 sport,
const __be32 daddr, const __be16 dport,
const int dif)
static inline struct sock *__inet_lookup(struct net *net,
struct inet_hashinfo *hashinfo,
const __be32 saddr, const __be16 sport,
const __be32 daddr, const __be16 dport,
const int dif)
static inline struct sock *inet_lookup(struct net *net,
struct inet_hashinfo *hashinfo,
const __be32 saddr, const __be16 sport,
const __be32 daddr, const __be16 dport,
const int dif)
static inline struct sock *__inet_lookup_skb(struct inet_hashinfo *hashinfo,
struct sk_buff *skb,
const __be16 sport,
const __be16 dport)
extern int __inet_hash_connect(struct inet_timewait_death_row *death_row,
struct sock *sk,
u32 port_offset,
int (*check_established)(struct inet_timewait_death_row *,
struct sock *, __u16, struct inet_timewait_sock **),
int (*hash)(struct sock *sk, struct inet_timewait_sock *twp));
extern int inet_hash_connect(struct inet_timewait_death_row *death_row,
struct sock *sk);
