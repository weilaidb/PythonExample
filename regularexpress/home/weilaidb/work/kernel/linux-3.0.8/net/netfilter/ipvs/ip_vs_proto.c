#define KMSG_COMPONENT "IPVS"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define IP_VS_PROTO_TAB_SIZE		32
#define IP_VS_PROTO_HASH(proto)		((proto) & (IP_VS_PROTO_TAB_SIZE-1))
static struct ip_vs_protocol *ip_vs_proto_table[IP_VS_PROTO_TAB_SIZE];
static int __used __init register_ip_vs_protocol(struct ip_vs_protocol *pp)
#if defined(CONFIG_IP_VS_PROTO_TCP) || defined(CONFIG_IP_VS_PROTO_UDP) || \
defined(CONFIG_IP_VS_PROTO_SCTP) || defined(CONFIG_IP_VS_PROTO_AH) || \
defined(CONFIG_IP_VS_PROTO_ESP)
static int
register_ip_vs_proto_netns(struct net *net, struct ip_vs_protocol *pp)
static int unregister_ip_vs_protocol(struct ip_vs_protocol *pp)
static int
unregister_ip_vs_proto_netns(struct net *net, struct ip_vs_proto_data *pd)
struct ip_vs_protocol * ip_vs_proto_get(unsigned short proto)
EXPORT_SYMBOL(ip_vs_proto_get);
struct ip_vs_proto_data *
__ipvs_proto_data_get(struct netns_ipvs *ipvs, unsigned short proto)
struct ip_vs_proto_data *
ip_vs_proto_data_get(struct net *net, unsigned short proto)
EXPORT_SYMBOL(ip_vs_proto_data_get);
void ip_vs_protocol_timeout_change(struct netns_ipvs *ipvs, int flags)
int *
ip_vs_create_timeout_table(int *table, int size)
int
ip_vs_set_state_timeout(int *table, int num, const char *const *names,
const char *name, int to)
const char * ip_vs_state_name(__u16 proto, int state)
static void
ip_vs_tcpudp_debug_packet_v4(struct ip_vs_protocol *pp,
const struct sk_buff *skb,
int offset,
const char *msg)
static void
ip_vs_tcpudp_debug_packet_v6(struct ip_vs_protocol *pp,
const struct sk_buff *skb,
int offset,
const char *msg)
void
ip_vs_tcpudp_debug_packet(int af, struct ip_vs_protocol *pp,
const struct sk_buff *skb,
int offset,
const char *msg)
int __net_init __ip_vs_protocol_init(struct net *net)
void __net_exit __ip_vs_protocol_cleanup(struct net *net)
int __init ip_vs_protocol_init(void)
void ip_vs_protocol_cleanup(void)
