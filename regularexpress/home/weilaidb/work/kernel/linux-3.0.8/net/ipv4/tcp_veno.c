#define V_PARAM_SHIFT 1
static const int beta = 3 << V_PARAM_SHIFT;
struct veno ;
static inline void veno_enable(struct sock *sk)
static inline void veno_disable(struct sock *sk)
static void tcp_veno_init(struct sock *sk)
static void tcp_veno_pkts_acked(struct sock *sk, u32 cnt, s32 rtt_us)
static void tcp_veno_state(struct sock *sk, u8 ca_state)
static void tcp_veno_cwnd_event(struct sock *sk, enum tcp_ca_event event)
static void tcp_veno_cong_avoid(struct sock *sk, u32 ack, u32 in_flight)
static u32 tcp_veno_ssthresh(struct sock *sk)
static struct tcp_congestion_ops tcp_veno __read_mostly = ;
static int __init tcp_veno_register(void)
static void __exit tcp_veno_unregister(void)
module_init(tcp_veno_register);
module_exit(tcp_veno_unregister);
MODULE_AUTHOR("Bin Zhou, Cheng Peng Fu");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("TCP Veno");
