static int alpha = 2;
static int beta  = 4;
static int gamma = 1;
module_param(alpha, int, 0644);
MODULE_PARM_DESC(alpha, "lower bound of packets in network");
module_param(beta, int, 0644);
MODULE_PARM_DESC(beta, "upper bound of packets in network");
module_param(gamma, int, 0644);
MODULE_PARM_DESC(gamma, "limit on increase (scale by 2)");
static void vegas_enable(struct sock *sk)
static inline void vegas_disable(struct sock *sk)
void tcp_vegas_init(struct sock *sk)
EXPORT_SYMBOL_GPL(tcp_vegas_init);
void tcp_vegas_pkts_acked(struct sock *sk, u32 cnt, s32 rtt_us)
EXPORT_SYMBOL_GPL(tcp_vegas_pkts_acked);
void tcp_vegas_state(struct sock *sk, u8 ca_state)
EXPORT_SYMBOL_GPL(tcp_vegas_state);
void tcp_vegas_cwnd_event(struct sock *sk, enum tcp_ca_event event)
EXPORT_SYMBOL_GPL(tcp_vegas_cwnd_event);
static inline u32 tcp_vegas_ssthresh(struct tcp_sock *tp)
static void tcp_vegas_cong_avoid(struct sock *sk, u32 ack, u32 in_flight)
void tcp_vegas_get_info(struct sock *sk, u32 ext, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(tcp_vegas_get_info);
static struct tcp_congestion_ops tcp_vegas __read_mostly = ;
static int __init tcp_vegas_register(void)
static void __exit tcp_vegas_unregister(void)
module_init(tcp_vegas_register);
module_exit(tcp_vegas_unregister);
MODULE_AUTHOR("Stephen Hemminger");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("TCP Vegas");
