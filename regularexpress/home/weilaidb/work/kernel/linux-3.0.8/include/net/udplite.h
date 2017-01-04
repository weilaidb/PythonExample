#define _UDPLITE_H
#define UDPLITE_SEND_CSCOV   10
#define UDPLITE_RECV_CSCOV   11
extern struct proto 		udplite_prot;
extern struct udp_table		udplite_table;
static __inline__ int udplite_getfrag(void *from, char *to, int  offset,
int len, int odd, struct sk_buff *skb)
static inline int udplite_sk_init(struct sock *sk)
static inline int udplite_checksum_init(struct sk_buff *skb, struct udphdr *uh)
static inline int udplite_sender_cscov(struct udp_sock *up, struct udphdr *uh)
static inline __wsum udplite_csum_outgoing(struct sock *sk, struct sk_buff *skb)
static inline __wsum udplite_csum(struct sk_buff *skb)
extern void	udplite4_register(void);
extern int 	udplite_get_port(struct sock *sk, unsigned short snum,
int (*scmp)(const struct sock *, const struct sock *));
