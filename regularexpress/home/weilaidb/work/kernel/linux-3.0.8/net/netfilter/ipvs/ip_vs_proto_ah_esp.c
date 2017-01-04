#define KMSG_COMPONENT "IPVS"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define PORT_ISAKMP	500
static void
ah_esp_conn_fill_param_proto(struct net *net, int af,
const struct ip_vs_iphdr *iph, int inverse,
struct ip_vs_conn_param *p)
static struct ip_vs_conn *
ah_esp_conn_in_get(int af, const struct sk_buff *skb,
const struct ip_vs_iphdr *iph, unsigned int proto_off,
int inverse)
static struct ip_vs_conn *
ah_esp_conn_out_get(int af, const struct sk_buff *skb,
const struct ip_vs_iphdr *iph,
unsigned int proto_off,
int inverse)
static int
ah_esp_conn_schedule(int af, struct sk_buff *skb, struct ip_vs_proto_data *pd,
int *verdict, struct ip_vs_conn **cpp)
struct ip_vs_protocol ip_vs_protocol_ah = ;
struct ip_vs_protocol ip_vs_protocol_esp = ;
