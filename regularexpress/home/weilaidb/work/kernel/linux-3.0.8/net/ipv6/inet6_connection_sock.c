int inet6_csk_bind_conflict(const struct sock *sk,
const struct inet_bind_bucket *tb)
EXPORT_SYMBOL_GPL(inet6_csk_bind_conflict);
struct dst_entry *inet6_csk_route_req(struct sock *sk,
const struct request_sock *req)
static u32 inet6_synq_hash(const struct in6_addr *raddr, const __be16 rport,
const u32 rnd, const u16 synq_hsize)
struct request_sock *inet6_csk_search_req(const struct sock *sk,
struct request_sock ***prevp,
const __be16 rport,
const struct in6_addr *raddr,
const struct in6_addr *laddr,
const int iif)
EXPORT_SYMBOL_GPL(inet6_csk_search_req);
void inet6_csk_reqsk_queue_hash_add(struct sock *sk,
struct request_sock *req,
const unsigned long timeout)
EXPORT_SYMBOL_GPL(inet6_csk_reqsk_queue_hash_add);
void inet6_csk_addr2sockaddr(struct sock *sk, struct sockaddr * uaddr)
EXPORT_SYMBOL_GPL(inet6_csk_addr2sockaddr);
static inline
void __inet6_csk_dst_store(struct sock *sk, struct dst_entry *dst,
struct in6_addr *daddr, struct in6_addr *saddr)
static inline
struct dst_entry *__inet6_csk_dst_check(struct sock *sk, u32 cookie)
int inet6_csk_xmit(struct sk_buff *skb, struct flowi *fl_unused)
EXPORT_SYMBOL_GPL(inet6_csk_xmit);
