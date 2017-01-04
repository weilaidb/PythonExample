#define _NET_INETPEER_H
struct inetpeer_addr_base ;
struct inetpeer_addr ;
struct inet_peer ;
void			inet_initpeers(void) __init;
#define INETPEER_METRICS_NEW	(~(u32) 0)
static inline bool inet_metrics_new(const struct inet_peer *p)
struct inet_peer	*inet_getpeer(struct inetpeer_addr *daddr, int create);
static inline struct inet_peer *inet_getpeer_v4(__be32 v4daddr, int create)
static inline struct inet_peer *inet_getpeer_v6(const struct in6_addr *v6daddr, int create)
extern void inet_putpeer(struct inet_peer *p);
extern bool inet_peer_xrlim_allow(struct inet_peer *peer, int timeout);
static inline void inet_peer_refcheck(const struct inet_peer *p)
static inline __u16	inet_getid(struct inet_peer *p, int more)
