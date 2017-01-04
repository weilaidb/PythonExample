static int
sctp_conn_schedule(int af, struct sk_buff *skb, struct ip_vs_proto_data *pd,
int *verdict, struct ip_vs_conn **cpp)
static int
sctp_snat_handler(struct sk_buff *skb,
struct ip_vs_protocol *pp, struct ip_vs_conn *cp)
static int
sctp_dnat_handler(struct sk_buff *skb,
struct ip_vs_protocol *pp, struct ip_vs_conn *cp)
static int
sctp_csum_check(int af, struct sk_buff *skb, struct ip_vs_protocol *pp)
struct ipvs_sctp_nextstate ;
enum ipvs_sctp_event_t ;
static enum ipvs_sctp_event_t sctp_events[255] = ;
static struct ipvs_sctp_nextstate
sctp_states_table[IP_VS_SCTP_S_LAST][IP_VS_SCTP_EVE_LAST] = ,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
},
,
,
,
,
,
,
,
,
,
,
,
};
static const int sctp_timeouts[IP_VS_SCTP_S_LAST + 1] = ;
static const char *sctp_state_name_table[IP_VS_SCTP_S_LAST + 1] = ;
static const char *sctp_state_name(int state)
static inline int
set_sctp_state(struct ip_vs_proto_data *pd, struct ip_vs_conn *cp,
int direction, const struct sk_buff *skb)
static int
sctp_state_transition(struct ip_vs_conn *cp, int direction,
const struct sk_buff *skb, struct ip_vs_proto_data *pd)
static inline __u16 sctp_app_hashkey(__be16 port)
static int sctp_register_app(struct net *net, struct ip_vs_app *inc)
static void sctp_unregister_app(struct net *net, struct ip_vs_app *inc)
static int sctp_app_conn_bind(struct ip_vs_conn *cp)
static void __ip_vs_sctp_init(struct net *net, struct ip_vs_proto_data *pd)
static void __ip_vs_sctp_exit(struct net *net, struct ip_vs_proto_data *pd)
struct ip_vs_protocol ip_vs_protocol_sctp = ;
