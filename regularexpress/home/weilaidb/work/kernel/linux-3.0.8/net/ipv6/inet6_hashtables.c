int __inet6_hash(struct sock *sk, struct inet_timewait_sock *tw)
EXPORT_SYMBOL(__inet6_hash);
struct sock *__inet6_lookup_established(struct net *net,
struct inet_hashinfo *hashinfo,
const struct in6_addr *saddr,
const __be16 sport,
const struct in6_addr *daddr,
const u16 hnum,
const int dif)
EXPORT_SYMBOL(__inet6_lookup_established);
static inline int compute_score(struct sock *sk, struct net *net,
const unsigned short hnum,
const struct in6_addr *daddr,
const int dif)
struct sock *inet6_lookup_listener(struct net *net,
struct inet_hashinfo *hashinfo, const struct in6_addr *daddr,
const unsigned short hnum, const int dif)
EXPORT_SYMBOL_GPL(inet6_lookup_listener);
struct sock *inet6_lookup(struct net *net, struct inet_hashinfo *hashinfo,
const struct in6_addr *saddr, const __be16 sport,
const struct in6_addr *daddr, const __be16 dport,
const int dif)
EXPORT_SYMBOL_GPL(inet6_lookup);
static int __inet6_check_established(struct inet_timewait_death_row *death_row,
struct sock *sk, const __u16 lport,
struct inet_timewait_sock **twp)
static inline u32 inet6_sk_port_offset(const struct sock *sk)
int inet6_hash_connect(struct inet_timewait_death_row *death_row,
struct sock *sk)
EXPORT_SYMBOL_GPL(inet6_hash_connect);
