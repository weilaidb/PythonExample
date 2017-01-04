#define LLC_CONN_H
#define LLC_EVENT                1
#define LLC_PACKET               2
#define LLC2_P_TIME               2
#define LLC2_ACK_TIME             1
#define LLC2_REJ_TIME             3
#define LLC2_BUSY_TIME            3
struct llc_timer ;
struct llc_sock ;
static inline struct llc_sock *llc_sk(const struct sock *sk)
static __inline__ void llc_set_backlog_type(struct sk_buff *skb, char type)
static __inline__ char llc_backlog_type(struct sk_buff *skb)
extern struct sock *llc_sk_alloc(struct net *net, int family, gfp_t priority,
struct proto *prot);
extern void llc_sk_free(struct sock *sk);
extern void llc_sk_reset(struct sock *sk);
extern int llc_conn_state_process(struct sock *sk, struct sk_buff *skb);
extern void llc_conn_send_pdu(struct sock *sk, struct sk_buff *skb);
extern void llc_conn_rtn_pdu(struct sock *sk, struct sk_buff *skb);
extern void llc_conn_resend_i_pdu_as_cmd(struct sock *sk, u8 nr,
u8 first_p_bit);
extern void llc_conn_resend_i_pdu_as_rsp(struct sock *sk, u8 nr,
u8 first_f_bit);
extern int llc_conn_remove_acked_pdus(struct sock *conn, u8 nr,
u16 *how_many_unacked);
extern struct sock *llc_lookup_established(struct llc_sap *sap,
struct llc_addr *daddr,
struct llc_addr *laddr);
extern void llc_sap_add_socket(struct llc_sap *sap, struct sock *sk);
extern void llc_sap_remove_socket(struct llc_sap *sap, struct sock *sk);
extern u8 llc_data_accept_state(u8 state);
extern void llc_build_offset_table(void);
