#define _LINUX_UDP_H
struct udphdr ;
#define UDP_CORK	1
#define UDP_ENCAP	100
#define UDP_ENCAP_ESPINUDP_NON_IKE	1
#define UDP_ENCAP_ESPINUDP	2
#define UDP_ENCAP_L2TPINUDP	3
static inline struct udphdr *udp_hdr(const struct sk_buff *skb)
#define UDP_HTABLE_SIZE_MIN		(CONFIG_BASE_SMALL ? 128 : 256)
static inline int udp_hashfn(struct net *net, unsigned num, unsigned mask)
struct udp_sock ;
static inline struct udp_sock *udp_sk(const struct sock *sk)
#define udp_portaddr_for_each_entry(__sk, node, list) \
hlist_nulls_for_each_entry(__sk, node, list, __sk_common.skc_portaddr_node)
#define udp_portaddr_for_each_entry_rcu(__sk, node, list) \
hlist_nulls_for_each_entry_rcu(__sk, node, list, __sk_common.skc_portaddr_node)
#define IS_UDPLITE(__sk) (udp_sk(__sk)->pcflag)
