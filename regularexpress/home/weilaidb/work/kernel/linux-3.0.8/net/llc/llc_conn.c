static int llc_find_offset(int state, int ev_type);
static void llc_conn_send_pdus(struct sock *sk);
static int llc_conn_service(struct sock *sk, struct sk_buff *skb);
static int llc_exec_conn_trans_actions(struct sock *sk,
struct llc_conn_state_trans *trans,
struct sk_buff *ev);
static struct llc_conn_state_trans *llc_qualify_conn_ev(struct sock *sk,
struct sk_buff *skb);
static int llc_offset_table[NBR_CONN_STATES][NBR_CONN_EV];
int sysctl_llc2_ack_timeout = LLC2_ACK_TIME * HZ;
int sysctl_llc2_p_timeout = LLC2_P_TIME * HZ;
int sysctl_llc2_rej_timeout = LLC2_REJ_TIME * HZ;
int sysctl_llc2_busy_timeout = LLC2_BUSY_TIME * HZ;
int llc_conn_state_process(struct sock *sk, struct sk_buff *skb)
void llc_conn_send_pdu(struct sock *sk, struct sk_buff *skb)
void llc_conn_rtn_pdu(struct sock *sk, struct sk_buff *skb)
void llc_conn_resend_i_pdu_as_cmd(struct sock *sk, u8 nr, u8 first_p_bit)
void llc_conn_resend_i_pdu_as_rsp(struct sock *sk, u8 nr, u8 first_f_bit)
int llc_conn_remove_acked_pdus(struct sock *sk, u8 nr, u16 *how_many_unacked)
static void llc_conn_send_pdus(struct sock *sk)
static int llc_conn_service(struct sock *sk, struct sk_buff *skb)
static struct llc_conn_state_trans *llc_qualify_conn_ev(struct sock *sk,
struct sk_buff *skb)
static int llc_exec_conn_trans_actions(struct sock *sk,
struct llc_conn_state_trans *trans,
struct sk_buff *skb)
static inline bool llc_estab_match(const struct llc_sap *sap,
const struct llc_addr *daddr,
const struct llc_addr *laddr,
const struct sock *sk)
static struct sock *__llc_lookup_established(struct llc_sap *sap,
struct llc_addr *daddr,
struct llc_addr *laddr)
struct sock *llc_lookup_established(struct llc_sap *sap,
struct llc_addr *daddr,
struct llc_addr *laddr)
static inline bool llc_listener_match(const struct llc_sap *sap,
const struct llc_addr *laddr,
const struct sock *sk)
static struct sock *__llc_lookup_listener(struct llc_sap *sap,
struct llc_addr *laddr)
static struct sock *llc_lookup_listener(struct llc_sap *sap,
struct llc_addr *laddr)
static struct sock *__llc_lookup(struct llc_sap *sap,
struct llc_addr *daddr,
struct llc_addr *laddr)
u8 llc_data_accept_state(u8 state)
static u16 __init llc_find_next_offset(struct llc_conn_state *state, u16 offset)
void __init llc_build_offset_table(void)
static int llc_find_offset(int state, int ev_type)
void llc_sap_add_socket(struct llc_sap *sap, struct sock *sk)
void llc_sap_remove_socket(struct llc_sap *sap, struct sock *sk)
static int llc_conn_rcv(struct sock* sk, struct sk_buff *skb)
static struct sock *llc_create_incoming_sock(struct sock *sk,
struct net_device *dev,
struct llc_addr *saddr,
struct llc_addr *daddr)
void llc_conn_handler(struct llc_sap *sap, struct sk_buff *skb)
#undef LLC_REFCNT_DEBUG
static atomic_t llc_sock_nr;
static int llc_backlog_rcv(struct sock *sk, struct sk_buff *skb)
static void llc_sk_init(struct sock* sk)
struct sock *llc_sk_alloc(struct net *net, int family, gfp_t priority, struct proto *prot)
void llc_sk_free(struct sock *sk)
void llc_sk_reset(struct sock *sk)
