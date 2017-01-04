#define _INET6_CONNECTION_SOCK_H
struct in6_addr;
struct inet_bind_bucket;
struct request_sock;
struct sk_buff;
struct sock;
struct sockaddr;
extern int inet6_csk_bind_conflict(const struct sock *sk,
const struct inet_bind_bucket *tb);
extern struct dst_entry* inet6_csk_route_req(struct sock *sk,
const struct request_sock *req);
extern struct request_sock *inet6_csk_search_req(const struct sock *sk,
struct request_sock ***prevp,
const __be16 rport,
const struct in6_addr *raddr,
const struct in6_addr *laddr,
const int iif);
extern void inet6_csk_reqsk_queue_hash_add(struct sock *sk,
struct request_sock *req,
const unsigned long timeout);
extern void inet6_csk_addr2sockaddr(struct sock *sk, struct sockaddr *uaddr);
extern int inet6_csk_xmit(struct sk_buff *skb, struct flowi *fl);
