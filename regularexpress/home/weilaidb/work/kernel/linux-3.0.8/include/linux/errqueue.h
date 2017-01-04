#define _LINUX_ERRQUEUE_H 1
struct sock_extended_err ;
#define SO_EE_ORIGIN_NONE	0
#define SO_EE_ORIGIN_LOCAL	1
#define SO_EE_ORIGIN_ICMP	2
#define SO_EE_ORIGIN_ICMP6	3
#define SO_EE_ORIGIN_TIMESTAMPING 4
#define SO_EE_OFFENDER(ee)	((struct sockaddr*)((ee)+1))
#if defined(CONFIG_IPV6) || defined (CONFIG_IPV6_MODULE)
#define SKB_EXT_ERR(skb) ((struct sock_exterr_skb *) ((skb)->cb))
struct sock_exterr_skb ;
