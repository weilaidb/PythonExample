#define _NET_AH_H
#define MAX_AH_AUTH_LEN	64
struct crypto_ahash;
struct ah_data ;
struct ip_auth_hdr;
static inline struct ip_auth_hdr *ip_auth_hdr(const struct sk_buff *skb)
