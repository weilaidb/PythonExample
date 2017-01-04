struct llc_station ;
#define LLC_STATION_ACK_TIME (3 * HZ)
int sysctl_llc_station_ack_timeout = LLC_STATION_ACK_TIME;
#define LLC_STATION_EV_TYPE_SIMPLE	1
#define LLC_STATION_EV_TYPE_CONDITION	2
#define LLC_STATION_EV_TYPE_PRIM	3
#define LLC_STATION_EV_TYPE_PDU		4
#define LLC_STATION_EV_TYPE_ACK_TMR	5
#define LLC_STATION_EV_TYPE_RPT_STATUS	6
#define LLC_STATION_EV_ENABLE_WITH_DUP_ADDR_CHECK		1
#define LLC_STATION_EV_ENABLE_WITHOUT_DUP_ADDR_CHECK		2
#define LLC_STATION_EV_ACK_TMR_EXP_LT_RETRY_CNT_MAX_RETRY	3
#define LLC_STATION_EV_ACK_TMR_EXP_EQ_RETRY_CNT_MAX_RETRY	4
#define LLC_STATION_EV_RX_NULL_DSAP_XID_C			5
#define LLC_STATION_EV_RX_NULL_DSAP_0_XID_R_XID_R_CNT_EQ	6
#define LLC_STATION_EV_RX_NULL_DSAP_1_XID_R_XID_R_CNT_EQ	7
#define LLC_STATION_EV_RX_NULL_DSAP_TEST_C			8
#define LLC_STATION_EV_DISABLE_REQ				9
struct llc_station_state_ev ;
static __inline__ struct llc_station_state_ev *
llc_station_ev(struct sk_buff *skb)
typedef int (*llc_station_ev_t)(struct sk_buff *skb);
#define LLC_STATION_STATE_DOWN		1
#define LLC_STATION_STATE_DUP_ADDR_CHK	2
#define LLC_STATION_STATE_UP		3
#define LLC_NBR_STATION_STATES		3
typedef int (*llc_station_action_t)(struct sk_buff *skb);
struct llc_station_state_trans ;
struct llc_station_state ;
static struct llc_station llc_main_station;
static int llc_stat_ev_enable_with_dup_addr_check(struct sk_buff *skb)
static int llc_stat_ev_enable_without_dup_addr_check(struct sk_buff *skb)
static int llc_stat_ev_ack_tmr_exp_lt_retry_cnt_max_retry(struct sk_buff *skb)
static int llc_stat_ev_ack_tmr_exp_eq_retry_cnt_max_retry(struct sk_buff *skb)
static int llc_stat_ev_rx_null_dsap_xid_c(struct sk_buff *skb)
static int llc_stat_ev_rx_null_dsap_0_xid_r_xid_r_cnt_eq(struct sk_buff *skb)
static int llc_stat_ev_rx_null_dsap_1_xid_r_xid_r_cnt_eq(struct sk_buff *skb)
static int llc_stat_ev_rx_null_dsap_test_c(struct sk_buff *skb)
static int llc_stat_ev_disable_req(struct sk_buff *skb)
static void llc_station_send_pdu(struct sk_buff *skb)
static int llc_station_ac_start_ack_timer(struct sk_buff *skb)
static int llc_station_ac_set_retry_cnt_0(struct sk_buff *skb)
static int llc_station_ac_inc_retry_cnt_by_1(struct sk_buff *skb)
static int llc_station_ac_set_xid_r_cnt_0(struct sk_buff *skb)
static int llc_station_ac_inc_xid_r_cnt_by_1(struct sk_buff *skb)
static int llc_station_ac_send_null_dsap_xid_c(struct sk_buff *skb)
static int llc_station_ac_send_xid_r(struct sk_buff *skb)
static int llc_station_ac_send_test_r(struct sk_buff *skb)
static int llc_station_ac_report_status(struct sk_buff *skb)
static struct llc_station_state_trans llc_stat_state_trans_end;
static llc_station_action_t llc_stat_down_state_actions_1[] = ;
static struct llc_station_state_trans llc_stat_down_state_trans_1 = ;
static llc_station_action_t llc_stat_down_state_actions_2[] = ;
static struct llc_station_state_trans llc_stat_down_state_trans_2 = ;
static struct llc_station_state_trans *llc_stat_dwn_state_trans[] = ;
static llc_station_action_t llc_stat_up_state_actions_1[] = ;
static struct llc_station_state_trans llc_stat_up_state_trans_1 = ;
static llc_station_action_t llc_stat_up_state_actions_2[] = ;
static struct llc_station_state_trans llc_stat_up_state_trans_2 = ;
static llc_station_action_t llc_stat_up_state_actions_3[] = ;
static struct llc_station_state_trans llc_stat_up_state_trans_3 = ;
static struct llc_station_state_trans *llc_stat_up_state_trans [] = ;
static llc_station_action_t llc_stat_dupaddr_state_actions_1[] = ;
static struct llc_station_state_trans llc_stat_dupaddr_state_trans_1 = ;
static llc_station_action_t llc_stat_dupaddr_state_actions_2[] = ;
static struct llc_station_state_trans llc_stat_dupaddr_state_trans_2 = ;
static llc_station_action_t llc_stat_dupaddr_state_actions_3[] = ;
static struct llc_station_state_trans llc_stat_dupaddr_state_trans_3 = ;
static llc_station_action_t llc_stat_dupaddr_state_actions_4[] = ;
static struct llc_station_state_trans llc_stat_dupaddr_state_trans_4 = ;
static llc_station_action_t llc_stat_dupaddr_state_actions_5[] = ;
static struct llc_station_state_trans llc_stat_dupaddr_state_trans_5 = ;
static llc_station_action_t llc_stat_dupaddr_state_actions_6[] = ;
static struct llc_station_state_trans llc_stat_dupaddr_state_trans_6 = ;
static struct llc_station_state_trans *llc_stat_dupaddr_state_trans[] = ;
static struct llc_station_state
llc_station_state_table[LLC_NBR_STATION_STATES] = ;
static u16 llc_exec_station_trans_actions(struct llc_station_state_trans *trans,
struct sk_buff *skb)
static struct llc_station_state_trans *
llc_find_station_trans(struct sk_buff *skb)
static void llc_station_free_ev(struct sk_buff *skb)
static u16 llc_station_next_state(struct sk_buff *skb)
static void llc_station_service_events(void)
static void llc_station_state_process(struct sk_buff *skb)
static void llc_station_ack_tmr_cb(unsigned long timeout_data)
static void llc_station_rcv(struct sk_buff *skb)
int __init llc_station_init(void)
void __exit llc_station_exit(void)
