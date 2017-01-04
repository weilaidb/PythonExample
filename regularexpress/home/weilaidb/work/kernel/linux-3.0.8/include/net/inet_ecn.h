#define _INET_ECN_H_
enum ;
static inline int INET_ECN_is_ce(__u8 dsfield)
static inline int INET_ECN_is_not_ect(__u8 dsfield)
static inline int INET_ECN_is_capable(__u8 dsfield)
static inline __u8 INET_ECN_encapsulate(__u8 outer, __u8 inner)
static inline void INET_ECN_xmit(struct sock *sk)
static inline void INET_ECN_dontxmit(struct sock *sk)
#define IP6_ECN_flow_init(label) do  while (0)
#define	IP6_ECN_flow_xmit(sk, label) do  while (0)
static inline int IP_ECN_set_ce(struct iphdr *iph)
static inline void IP_ECN_clear(struct iphdr *iph)
static inline void ipv4_copy_dscp(unsigned int dscp, struct iphdr *inner)
struct ipv6hdr;
static inline int IP6_ECN_set_ce(struct ipv6hdr *iph)
static inline void IP6_ECN_clear(struct ipv6hdr *iph)
static inline void ipv6_copy_dscp(unsigned int dscp, struct ipv6hdr *inner)
static inline int INET_ECN_set_ce(struct sk_buff *skb)
