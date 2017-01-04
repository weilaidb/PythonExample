#define _NF_TPROXY_CORE_H
#define NFT_LOOKUP_ANY         0
#define NFT_LOOKUP_LISTENER    1
#define NFT_LOOKUP_ESTABLISHED 2
static inline struct sock *
nf_tproxy_get_sock_v4(struct net *net, const u8 protocol,
const __be32 saddr, const __be32 daddr,
const __be16 sport, const __be16 dport,
const struct net_device *in, int lookup_type)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static inline struct sock *
nf_tproxy_get_sock_v6(struct net *net, const u8 protocol,
const struct in6_addr *saddr, const struct in6_addr *daddr,
const __be16 sport, const __be16 dport,
const struct net_device *in, int lookup_type)
void
nf_tproxy_assign_sock(struct sk_buff *skb, struct sock *sk);
