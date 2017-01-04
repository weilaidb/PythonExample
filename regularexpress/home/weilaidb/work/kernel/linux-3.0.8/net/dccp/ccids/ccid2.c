static int ccid2_debug;
#define ccid2_pr_debug(format, a...)	DCCP_PR_DEBUG(ccid2_debug, format, ##a)
#define ccid2_pr_debug(format, a...)
static int ccid2_hc_tx_alloc_seq(struct ccid2_hc_tx_sock *hc)
static int ccid2_hc_tx_send_packet(struct sock *sk, struct sk_buff *skb)
static void ccid2_change_l_ack_ratio(struct sock *sk, u32 val)
static void ccid2_hc_tx_rto_expire(unsigned long data)
static void ccid2_hc_tx_packet_sent(struct sock *sk, unsigned int len)
static void ccid2_rtt_estimator(struct sock *sk, const long mrtt)
static void ccid2_new_ack(struct sock *sk, struct ccid2_seq *seqp,
unsigned int *maxincr)
static void ccid2_congestion_event(struct sock *sk, struct ccid2_seq *seqp)
static int ccid2_hc_tx_parse_options(struct sock *sk, u8 packet_type,
u8 option, u8 *optval, u8 optlen)
static void ccid2_hc_tx_packet_recv(struct sock *sk, struct sk_buff *skb)
static inline u32 rfc3390_bytes_to_packets(const u32 smss)
static int ccid2_hc_tx_init(struct ccid *ccid, struct sock *sk)
static void ccid2_hc_tx_exit(struct sock *sk)
static void ccid2_hc_rx_packet_recv(struct sock *sk, struct sk_buff *skb)
struct ccid_operations ccid2_ops = ;
module_param(ccid2_debug, bool, 0644);
MODULE_PARM_DESC(ccid2_debug, "Enable CCID-2 debug messages");
