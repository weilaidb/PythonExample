#define KMSG_COMPONENT "IPVS"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
static int
tcp_conn_schedule(int af, struct sk_buff *skb, struct ip_vs_proto_data *pd,
int *verdict, struct ip_vs_conn **cpp)
static inline void
tcp_fast_csum_update(int af, struct tcphdr *tcph,
const union nf_inet_addr *oldip,
const union nf_inet_addr *newip,
__be16 oldport, __be16 newport)
static inline void
tcp_partial_csum_update(int af, struct tcphdr *tcph,
const union nf_inet_addr *oldip,
const union nf_inet_addr *newip,
__be16 oldlen, __be16 newlen)
static int
tcp_snat_handler(struct sk_buff *skb,
struct ip_vs_protocol *pp, struct ip_vs_conn *cp)
static int
tcp_dnat_handler(struct sk_buff *skb,
struct ip_vs_protocol *pp, struct ip_vs_conn *cp)
static int
tcp_csum_check(int af, struct sk_buff *skb, struct ip_vs_protocol *pp)
#define TCP_DIR_INPUT		0
#define TCP_DIR_OUTPUT		4
#define TCP_DIR_INPUT_ONLY	8
static const int tcp_state_off[IP_VS_DIR_LAST] = ;
static const int tcp_timeouts[IP_VS_TCP_S_LAST+1] = ;
static const char *const tcp_state_name_table[IP_VS_TCP_S_LAST+1] = ;
#define sNO IP_VS_TCP_S_NONE
#define sES IP_VS_TCP_S_ESTABLISHED
#define sSS IP_VS_TCP_S_SYN_SENT
#define sSR IP_VS_TCP_S_SYN_RECV
#define sFW IP_VS_TCP_S_FIN_WAIT
#define sTW IP_VS_TCP_S_TIME_WAIT
#define sCL IP_VS_TCP_S_CLOSE
#define sCW IP_VS_TCP_S_CLOSE_WAIT
#define sLA IP_VS_TCP_S_LAST_ACK
#define sLI IP_VS_TCP_S_LISTEN
#define sSA IP_VS_TCP_S_SYNACK
struct tcp_states_t ;
static const char * tcp_state_name(int state)
static struct tcp_states_t tcp_states [] = ;
static struct tcp_states_t tcp_states_dos [] = ;
static void tcp_timeout_change(struct ip_vs_proto_data *pd, int flags)
static inline int tcp_state_idx(struct tcphdr *th)
static inline void
set_tcp_state(struct ip_vs_proto_data *pd, struct ip_vs_conn *cp,
int direction, struct tcphdr *th)
static int
tcp_state_transition(struct ip_vs_conn *cp, int direction,
const struct sk_buff *skb,
struct ip_vs_proto_data *pd)
static inline __u16 tcp_app_hashkey(__be16 port)
static int tcp_register_app(struct net *net, struct ip_vs_app *inc)
static void
tcp_unregister_app(struct net *net, struct ip_vs_app *inc)
static int
tcp_app_conn_bind(struct ip_vs_conn *cp)
void ip_vs_tcp_conn_listen(struct net *net, struct ip_vs_conn *cp)
static void __ip_vs_tcp_init(struct net *net, struct ip_vs_proto_data *pd)
static void __ip_vs_tcp_exit(struct net *net, struct ip_vs_proto_data *pd)
struct ip_vs_protocol ip_vs_protocol_tcp = ;
