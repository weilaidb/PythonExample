struct inet_bind_bucket *inet_bind_bucket_create(struct kmem_cache *cachep,
struct net *net,
struct inet_bind_hashbucket *head,
const unsigned short snum)
void inet_bind_bucket_destroy(struct kmem_cache *cachep, struct inet_bind_bucket *tb)
void inet_bind_hash(struct sock *sk, struct inet_bind_bucket *tb,
const unsigned short snum)
static void __inet_put_port(struct sock *sk)
void inet_put_port(struct sock *sk)
EXPORT_SYMBOL(inet_put_port);
int __inet_inherit_port(struct sock *sk, struct sock *child)
EXPORT_SYMBOL_GPL(__inet_inherit_port);
static inline int compute_score(struct sock *sk, struct net *net,
const unsigned short hnum, const __be32 daddr,
const int dif)
struct sock *__inet_lookup_listener(struct net *net,
struct inet_hashinfo *hashinfo,
const __be32 daddr, const unsigned short hnum,
const int dif)
EXPORT_SYMBOL_GPL(__inet_lookup_listener);
struct sock * __inet_lookup_established(struct net *net,
struct inet_hashinfo *hashinfo,
const __be32 saddr, const __be16 sport,
const __be32 daddr, const u16 hnum,
const int dif)
EXPORT_SYMBOL_GPL(__inet_lookup_established);
static int __inet_check_established(struct inet_timewait_death_row *death_row,
struct sock *sk, __u16 lport,
struct inet_timewait_sock **twp)
static inline u32 inet_sk_port_offset(const struct sock *sk)
int __inet_hash_nolisten(struct sock *sk, struct inet_timewait_sock *tw)
EXPORT_SYMBOL_GPL(__inet_hash_nolisten);
static void __inet_hash(struct sock *sk)
void inet_hash(struct sock *sk)
EXPORT_SYMBOL_GPL(inet_hash);
void inet_unhash(struct sock *sk)
EXPORT_SYMBOL_GPL(inet_unhash);
int __inet_hash_connect(struct inet_timewait_death_row *death_row,
struct sock *sk, u32 port_offset,
int (*check_established)(struct inet_timewait_death_row *,
struct sock *, __u16, struct inet_timewait_sock **),
int (*hash)(struct sock *sk, struct inet_timewait_sock *twp))
int inet_hash_connect(struct inet_timewait_death_row *death_row,
struct sock *sk)
EXPORT_SYMBOL_GPL(inet_hash_connect);
void inet_hashinfo_init(struct inet_hashinfo *h)
EXPORT_SYMBOL_GPL(inet_hashinfo_init);
