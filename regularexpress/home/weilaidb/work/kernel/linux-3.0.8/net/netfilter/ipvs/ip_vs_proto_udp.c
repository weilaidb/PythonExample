#define KMSG_COMPONENT "IPVS"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
static int
udp_conn_schedule(int af, struct sk_buff *skb, struct ip_vs_proto_data *pd,
int *verdict, struct ip_vs_conn **cpp)
static inline void
udp_fast_csum_update(int af, struct udphdr *uhdr,
const union nf_inet_addr *oldip,
const union nf_inet_addr *newip,
__be16 oldport, __be16 newport)
static inline void
udp_partial_csum_update(int af, struct udphdr *uhdr,
const union nf_inet_addr *oldip,
const union nf_inet_addr *newip,
__be16 oldlen, __be16 newlen)
static int
udp_snat_handler(struct sk_buff *skb,
struct ip_vs_protocol *pp, struct ip_vs_conn *cp)
static int
udp_dnat_handler(struct sk_buff *skb,
struct ip_vs_protocol *pp, struct ip_vs_conn *cp)
static int
udp_csum_check(int af, struct sk_buff *skb, struct ip_vs_protocol *pp)
static inline __u16 udp_app_hashkey(__be16 port)
static int udp_register_app(struct net *net, struct ip_vs_app *inc)
static void
udp_unregister_app(struct net *net, struct ip_vs_app *inc)
static int udp_app_conn_bind(struct ip_vs_conn *cp)
static const int udp_timeouts[IP_VS_UDP_S_LAST+1] = ;
static const char *const udp_state_name_table[IP_VS_UDP_S_LAST+1] = ;
static const char * udp_state_name(int state)
static int
udp_state_transition(struct ip_vs_conn *cp, int direction,
const struct sk_buff *skb,
struct ip_vs_proto_data *pd)
static void __udp_init(struct net *net, struct ip_vs_proto_data *pd)
static void __udp_exit(struct net *net, struct ip_vs_proto_data *pd)
struct ip_vs_protocol ip_vs_protocol_udp = ;
