static int ccid3_debug;
#define ccid3_pr_debug(format, a...)	DCCP_PR_DEBUG(ccid3_debug, format, ##a)
#define ccid3_pr_debug(format, a...)
static const char *ccid3_tx_state_name(enum ccid3_hc_tx_states state)
static void ccid3_hc_tx_set_state(struct sock *sk,
enum ccid3_hc_tx_states state)
static inline u64 rfc3390_initial_rate(struct sock *sk)
static void ccid3_update_send_interval(struct ccid3_hc_tx_sock *hc)
static u32 ccid3_hc_tx_idle_rtt(struct ccid3_hc_tx_sock *hc, ktime_t now)
static void ccid3_hc_tx_update_x(struct sock *sk, ktime_t *stamp)
static inline void ccid3_hc_tx_update_s(struct ccid3_hc_tx_sock *hc, int len)
static inline void ccid3_hc_tx_update_win_count(struct ccid3_hc_tx_sock *hc,
ktime_t now)
static void ccid3_hc_tx_no_feedback_timer(unsigned long data)
static int ccid3_hc_tx_send_packet(struct sock *sk, struct sk_buff *skb)
static void ccid3_hc_tx_packet_sent(struct sock *sk, unsigned int len)
static void ccid3_hc_tx_packet_recv(struct sock *sk, struct sk_buff *skb)
static int ccid3_hc_tx_parse_options(struct sock *sk, u8 packet_type,
u8 option, u8 *optval, u8 optlen)
static int ccid3_hc_tx_init(struct ccid *ccid, struct sock *sk)
static void ccid3_hc_tx_exit(struct sock *sk)
static void ccid3_hc_tx_get_info(struct sock *sk, struct tcp_info *info)
static int ccid3_hc_tx_getsockopt(struct sock *sk, const int optname, int len,
u32 __user *optval, int __user *optlen)
enum ccid3_fback_type ;
static const char *ccid3_rx_state_name(enum ccid3_hc_rx_states state)
static void ccid3_hc_rx_set_state(struct sock *sk,
enum ccid3_hc_rx_states state)
static void ccid3_hc_rx_send_feedback(struct sock *sk,
const struct sk_buff *skb,
enum ccid3_fback_type fbtype)
static int ccid3_hc_rx_insert_options(struct sock *sk, struct sk_buff *skb)
static u32 ccid3_first_li(struct sock *sk)
static void ccid3_hc_rx_packet_recv(struct sock *sk, struct sk_buff *skb)
static int ccid3_hc_rx_init(struct ccid *ccid, struct sock *sk)
static void ccid3_hc_rx_exit(struct sock *sk)
static void ccid3_hc_rx_get_info(struct sock *sk, struct tcp_info *info)
static int ccid3_hc_rx_getsockopt(struct sock *sk, const int optname, int len,
u32 __user *optval, int __user *optlen)
struct ccid_operations ccid3_ops = ;
module_param(ccid3_debug, bool, 0644);
MODULE_PARM_DESC(ccid3_debug, "Enable CCID-3 debug messages");
